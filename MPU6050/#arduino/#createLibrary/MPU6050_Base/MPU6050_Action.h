#ifndef MPU6050_ACTION_H
#define MPU6050_ACTION_H
#include <Arduino.h>

//上面(1～6)
#define Z_P 1
#define Z_M 6
#define X_P 2
#define X_M 5
#define Y_P 3
#define Y_M 4

//アクション
#define ACT_KEEP 0    //変化なし
#define ACT_SHAKE_V 1 //垂直方向に振る
#define ACT_SHAKE_H 2 //水平方向に降る
#define ACT_KNOCK 3   //ノックする

#define MAX_IDX 100


class MPU6050_Action {
  public:
    int top;
    int action;

    void initJdgAct() {
      top = Z_P;
      action = ACT_KEEP;
      idx = 0;
      accel_max[0] = 0;
      accel_max[1] = 0;
      accel_max[2] = 0;
      for (int i = 0; i < MAX_IDX; i++) {
        accel_abs[0][i] = 0;
        accel_abs[1][i] = 0;
        accel_abs[2][i] = 0;
      }
    };

    void Jdg_Top(float _gravity[3]) {
      //絶対値が一番大きい座標を上の面とする。
      //その座標の２面のうちどちらが上になっているかは正負で判断する。
      int abs_x = _gravity[0] * (float)100;
      abs_x = abs(abs_x);
      int abs_y = _gravity[1] * (float)100;
      abs_y = abs(abs_y);
      int abs_z = _gravity[2] * (float)100;
      abs_z = abs(abs_z);

      if (abs_x > abs_y && abs_x > abs_z) {
        if (_gravity[0] >= 0) {
          top = X_P;
        } else {
          top = X_M;
        }
      }

      if (abs_y > abs_x && abs_y > abs_z) {
        if (_gravity[1] >= 0) {
          top = Y_P;
        } else {
          top = Y_M;
        }
      }

      if (abs_z >= abs_x && abs_z >= abs_y) {
        if (_gravity[2] >= 0) {
          top = Z_P;
        } else {
          top = Z_M;
        }
      }
    };

#define BORDER_LINE_SHAKE 2500  //一度でもこの値を超えたとき"振った"と判断する
#define BORDER_LINE_BOTTOM 200  //山の下限(下がったところ)
#define MOUNTAIN_CNT 4  //振ったと判断する山の数
#define BORDER_LINE_KEEP 100    //この値より小さいときは"維持かも"と判断する
#define KEEP_CNT 10 //BORDER_LINE_KEEPをKEEP_CNT回連続して下回ると"維持"と判断する
    void Jdg_Action(int _worldAccel[3]) {
      //加速度の変化量を基に振っているかどうか判断する。
      action = ACT_KEEP;

      //加速度の絶対値と最大値を保存
      for (int i = 0; i < 3; i++) {
        accel_max[i] = 0;
        accel_abs[i][MAX_IDX] = abs(_worldAccel[i]);  //配列の最後に入れる
        for (int j = 0; j < MAX_IDX; j++) {
          //前に詰める
          accel_abs[i][j] = accel_abs[i][j + 1];          
          if (accel_abs[i][j] > accel_max[i]) accel_max[i] = accel_abs[i][j];          
        }
      }

      //次のループに向けてインクリメント
      if (++idx >= MAX_IDX) {
        idx = MAX_IDX - 1;
      }

      //解析
      //連続した山の数が指定個以上
      //一度でもボーダーラインを超える
      //3軸の中で一番高い山
      //上記を満たす場合、その方向に振ったと判断する。
      bool isclear[3];//条件を満たした。
      int mountain[3]; //山の数
      int tmp_max[3];  //山の中で一番高い値
      int keep_cnt; //連続して下回った回数
      bool isJdgStart; //山かも

      for (int i = 0; i < 3; i++) {
        isclear[i] = false;
        mountain[i] = 0;
        tmp_max[i] = 0;
        //一度もボーダーラインを超えていない場合は何もしない。
        if (accel_max[i] < BORDER_LINE_SHAKE) {
          continue;
        }

        isJdgStart = false;
        keep_cnt = 0;
        //山を数える
        for (int j = 0; j < idx; j++) {
          if (isclear[i]) break;

          if (!isJdgStart) {
            if (accel_abs[i][j] > BORDER_LINE_KEEP) {
              isJdgStart = true;
              keep_cnt = 0;
            } else {
              keep_cnt++;
              //"維持"が一定以上続いた場合は全てリセット
              if (keep_cnt >= KEEP_CNT) {
                isJdgStart = false;
                keep_cnt = KEEP_CNT;
                mountain[i] = 0;
                tmp_max[i] = 0;
              }
            }
          }

          if (isJdgStart) {
            if (accel_abs[i][j] > tmp_max[i]) tmp_max[i] = accel_abs[i][j];
            //下限に達したとき、山であると判断する
            if (accel_abs[i][j] < BORDER_LINE_BOTTOM) {
              mountain[i]++;
              isJdgStart = false; //次の山を見つける

              if (mountain[i] >= MOUNTAIN_CNT) isclear[i] = true;
            }
          }

        }
      }

      //3軸を比較してアクションを判定する
      //x,y方向はどちらも"横振り"と判断するので、xまたはyとzを比較する
      bool isHorizon = false;
      if (isclear[0] || isclear[1]) {
        action = ACT_SHAKE_H;
        isHorizon = true;
      }
      if (isclear[2]) {
        if (isHorizon) {
          if (tmp_max[2] > tmp_max[0] && tmp_max[2] > tmp_max[1]) {
            action = ACT_SHAKE_V;
          }
        } else {
          action = ACT_SHAKE_V;
        }
      }
    };

  private:
    int idx;
    int accel_max[3]; //区間内での最大値
    int accel_abs[3][MAX_IDX + 1]; //加速度(絶対値)
};

#endif
