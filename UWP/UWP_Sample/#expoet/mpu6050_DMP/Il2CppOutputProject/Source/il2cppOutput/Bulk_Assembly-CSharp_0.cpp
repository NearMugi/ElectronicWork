#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// MPU6050.MPU6050
struct MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92;
// MPU6050.MPU6050/Quaternion
struct Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8;
// MPU6050.MPU6050/VectorFloat
struct VectorFloat_t258D595FC302A20980CBC2604F090D5641027816;
// MPU6050.MPU6050/VectorInt16
struct VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790;
// Rotate
struct Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C;
// Rotate1
struct Rotate1_t4E82840B03408F80219DFBD79573CE673E94ED4C;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<Windows.Devices.Enumeration.DeviceInformationCollection>
struct Task_1_t663F0DD1A0E90D28D3CEF0BC8BA9BE4CFB6E333A;
// System.Threading.Tasks.Task`1<Windows.Devices.I2c.I2cDevice>
struct Task_1_tD3B099F9273247ADC3D43275EE7A9830B000533B;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// Windows.Devices.Enumeration.DeviceInformation
struct DeviceInformation_t6188B770C92A6C990958DA0821869BF350ED39C9;
// Windows.Devices.Enumeration.DeviceInformationCollection
struct DeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7;
// Windows.Devices.Enumeration.IDeviceInformationStatics
struct IDeviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C;
// Windows.Devices.Enumeration.IDeviceInformationStatics2
struct IDeviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406;
// Windows.Devices.Gpio.GpioController
struct GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D;
// Windows.Devices.Gpio.IGpioControllerStatics
struct IGpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB;
// Windows.Devices.Gpio.IGpioControllerStatics2
struct IGpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4;
// Windows.Devices.I2c.I2cConnectionSettings
struct I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3;
// Windows.Devices.I2c.I2cDevice
struct I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128;
// Windows.Devices.I2c.II2cConnectionSettingsFactory
struct II2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8;
// Windows.Devices.I2c.II2cDeviceStatics
struct II2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_t6C79000B30E830F251BD3C445197FD2A2DCB0F62;
// Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DeviceInformationCollection>
struct IAsyncOperation_1_t2FBB03E2E53DBA43BA3A271607D81BA59969E8BD;
// Windows.Foundation.IAsyncOperation`1<Windows.Devices.I2c.I2cDevice>
struct IAsyncOperation_1_t24C3E670A13D3B72400E9DB9A860A439AC7F948B;
// fps
struct fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A;
// mpur6050_main
struct mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081;

extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
extern RuntimeClass* I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t24BEFFB31822663BC19FF6104A04EEA251272897_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
extern RuntimeClass* MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
extern RuntimeClass* VectorFloat_t258D595FC302A20980CBC2604F090D5641027816_il2cpp_TypeInfo_var;
extern RuntimeClass* VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____200E94B060457673F15561C06F7673BCDBCCDBED_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____2EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____924761D6550FD264C145DBBC4B199DDB7A38A1D2_3_FieldInfo_var;
extern String_t* _stringLiteral205DD3BD4E032AAB3C0BA9C3BA0EA60315C12078;
extern String_t* _stringLiteral22CF82B68B95049BFFB91128349CCC312A460B10;
extern String_t* _stringLiteral4AF067D827661BD35D10B8ADF4BE24D52F7620DC;
extern String_t* _stringLiteral5846B1416F9DBE3DDB54BD0982D3BB9144FCE47F;
extern String_t* _stringLiteral5E54F95F957B8454FBBFC768552CD412260064A8;
extern String_t* _stringLiteral615FDC45F29C28730FF147D6111742EB1360E6AD;
extern String_t* _stringLiteral70761B0C091B1F143096317CD537AD28F67BD80C;
extern String_t* _stringLiteral785BACABA0BC6E2222F5C977E1C1C874C5B19C42;
extern String_t* _stringLiteral83D0AC1490BD786E698BF690E18382EB9C860EF1;
extern String_t* _stringLiteral971D7DCFA4FD96BE64CB55225E02CDE4FE7D323B;
extern String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
extern String_t* _stringLiteralB26A3589677C2EC49CABA1A5F2A15E287C8126EB;
extern String_t* _stringLiteralBB426BA91C0A7513F60FAD5C024D1962D70BC9A1;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralE5692323CBF4AAD9442856B4CC7656812739DEE9;
extern String_t* _stringLiteralFD92461977EC24EA7B31532A11AE6CCDEE490182;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m0775FE1A8DB00C8406F7C68AFD1FB937369F1415_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mB140774984394014A347E05D9D90372617EA07E4_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mE05252DAEBD30F827BE112F78E6B4F0554B83FE7_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_mCA8B27C9D1B475811B15E19797E38268AE0CB2C2_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m34C1C0A73EAB71B2CF4D76413D7084C2D990CFAE_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_m1745F2D03F7DE629E5A02E75937C29441B1B229B_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m9885424E349D692D715FADED33BD0E2D0CEFB20F_RuntimeMethod_var;
extern const RuntimeMethod* MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m1D9FFDC78B08E211B8341CAE0C335B60BB43B069_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m7578B28CF8B63C064016453EBA95D58C4A058EF8_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m66DCCCFB07DFD0DA4B7340702E8039263B296AB4_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC7C51DD2698AA19A0C8BDD2DC423D43B5051A8A4_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisDeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7_m1CC6828562E01EA47C35CDEADF28FB9C413910FC_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisI2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128_m8CFCC8548C48C464850A53EB6DE3E6A7E3FD5AE6_RuntimeMethod_var;
extern const uint32_t MPU6050_Dispose_m9166FACDD4C309909704DF35D40F2BDC6477A661_MetadataUsageId;
extern const uint32_t MPU6050_InitHardware_mFF3B45D396442074236502D50705A19E80BA1D3D_MetadataUsageId;
extern const uint32_t MPU6050__ctor_m15C85DD41BDB44E19BE1B9E89E8C9A0828026D80_MetadataUsageId;
extern const uint32_t MPU6050__ctor_mCD790B4F8544683A3420BEB15433A5BD890AE91A_MetadataUsageId;
extern const uint32_t MPU6050_dmpGetQuaternion_mB03B50B5D988F3D116ECF07AF7ECF2FA2E80EDFD_MetadataUsageId;
extern const uint32_t MPU6050_dmpGetYawPitchRoll_mC9209D9FD29441FA8C342E819282191155CB88A0_MetadataUsageId;
extern const uint32_t MPU6050_dmpInitialize_mD0A20062D9B704B81FEB66529C1E276821B4874E_MetadataUsageId;
extern const uint32_t MPU6050_getFIFOBytes_m203A25E8D7E23B7021237E61FBE070D39C2E127D_MetadataUsageId;
extern const uint32_t MPU6050_initialize_m3AF0BFC03B7D1AEE295407662D73DEB8F6C1750A_MetadataUsageId;
extern const uint32_t MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E_MetadataUsageId;
extern const uint32_t MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656_MetadataUsageId;
extern const uint32_t MPU6050_readMemoryBlock_mBB78F94B8A30DBB829F377C652BDC45F8D95D039_MetadataUsageId;
extern const uint32_t MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE_MetadataUsageId;
extern const uint32_t MPU6050_writeDMPConfigurationSet_m7A3D2970B5419333D08E8F11867DB7815D0E8A08_MetadataUsageId;
extern const uint32_t MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97_MetadataUsageId;
extern const uint32_t Quaternion_getConjugate_m21D088D212AE02DC7169EB16AD285CEEBD50D787_MetadataUsageId;
extern const uint32_t Quaternion_getMagnitude_m18D3891A802D1F415D2F3168F26B5372A1A6F002_MetadataUsageId;
extern const uint32_t Quaternion_getNormalized_mB273DFC10A752E3DA4E2419DB50C8EB7FEAB4AE0_MetadataUsageId;
extern const uint32_t Quaternion_getProduct_m95A9DC4881F3247FD2F732B530FE2D74DADAF87E_MetadataUsageId;
extern const uint32_t Rotate1_Start_mA0717CC355E13476AE3B5003D416460E41822753_MetadataUsageId;
extern const uint32_t Rotate_Start_mFF56EB83C79B5DEC931AA33F269381DD6A526FEC_MetadataUsageId;
extern const uint32_t U3CInitHardwareU3Ed__21_MoveNext_m84FF28D7230075893F146E9F0CFE8F6309D174DA_MetadataUsageId;
extern const uint32_t U3CdmpInitializeU3Ed__81_MoveNext_m539F3E4721FF0F285E829963050FD71F03A659CE_MetadataUsageId;
extern const uint32_t VectorFloat_getMagnitude_m2EC5EFE5D06882D9EB0FCC0BDE61D160CBC81254_MetadataUsageId;
extern const uint32_t VectorFloat_getNormalized_mB9DB931110387C477C02761669B239E61507AC89_MetadataUsageId;
extern const uint32_t VectorFloat_getRotated_mC343E4FEB475B5D38099E9BDF071BCF7F4D94CD3_MetadataUsageId;
extern const uint32_t VectorFloat_rotate_mCAB376431DCD9BBFE9E57F5C6711D6F56C497036_MetadataUsageId;
extern const uint32_t VectorInt16_getMagnitude_m75A5BE089EB91D08E9A1E01859347FC540AD7AC4_MetadataUsageId;
extern const uint32_t VectorInt16_getNormalized_m5A764D5FAA593946A88EDE641E97D69932F49F54_MetadataUsageId;
extern const uint32_t VectorInt16_getRotated_m91097A4F589BD31AA0703AB46B9B67DCDF71B4D4_MetadataUsageId;
extern const uint32_t VectorInt16_rotate_mF503A8A718E6E28EEFC3138FEF084E6BAC662D99_MetadataUsageId;
extern const uint32_t fps_Update_m97F672CB0BFF6ABB4448A190238C1771F76EFFF9_MetadataUsageId;
extern const uint32_t mpur6050_main_Start_m4FBA485EDC4F328DA53637215138BBBE836B8AED_MetadataUsageId;
extern const uint32_t mpur6050_main_Update_m89E989B5671E696C56DFB02C3FC49C3BFC1E05C7_MetadataUsageId;
extern const uint32_t mpur6050_main__ctor_m96CCDA07BD709167C6B50EB278E9309524339D27_MetadataUsageId;
extern const uint32_t mpur6050_main_updateValue_mD67A8D0B1700B4FF3F0DDA85628E42D5F342627F_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t52BDB85D6F83E336BC167B9993305AE86090A426_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tA00E28925FCC9523D68DF14FB0DF9249B906E406_ComCallableWrapper;
struct IAsyncOperation_1_t24C3E670A13D3B72400E9DB9A860A439AC7F948B;
struct IAsyncOperation_1_t2FBB03E2E53DBA43BA3A271607D81BA59969E8BD;
struct IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602;
struct IGpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12;
struct II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F;
struct II2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6;
struct IIterator_1_t227869F704EB21BEFFC77A20C298E3C5FCFDE567;
struct IVectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Devices.Enumeration.IDeviceInformation
struct NOVTABLE IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_get_Id_m67997F3694AA95F935DC87DA3E05F2BD10EEF3FC(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped0_get_Name_mF41F9579FC01FEBADAB63E3D5337970115E338D3() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped1_get_IsEnabled_mDF8D783A25FE92AA34911ABABC1FE0B0B2693636() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped2_get_IsDefault_m8E5A40FCC43086CB7ADFCB1C88D6755BD3353FEC() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped3_get_EnclosureLocation_m2052A9EC53F81DFFCD89AE24257136257252267E() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped4_get_Properties_mDF721CF0701C87FE031B90E459B9808EED420A30() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped5_Update_m5D0A870671A2841A0FDC6723C9795D07F6E5CD0B() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped6_GetThumbnailAsync_m1DAEEE41980FBBA44EEA367E66FFC809B106F345() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped7_GetGlyphThumbnailAsync_mD3DF23CF6F0C86BCAAF9F4B0C280C28B80B1F2DB() = 0;
};
// Windows.Devices.Enumeration.IDeviceInformation2
struct NOVTABLE IDeviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation2_U24__Stripped0_get_Kind_m334930C85FD99C629A8D37B862CA3BFBC887DF05() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation2_U24__Stripped1_get_Pairing_mB6721A0021D78EDD88D3AC181083BEC2079C3A15() = 0;
};
// Windows.Devices.Enumeration.IDeviceInformationStatics
struct NOVTABLE IDeviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped0_CreateFromIdAsync_m3DA32D9F62F1FD6C375D0722E3599DE96B3691BC() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped1_CreateFromIdAsync_m5CD4197D4DD8F0ABFB9682B1945B77CB8E4643D0() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped2_FindAllAsync_m1CB58B1AB53AF671CD39842B0DD589BE5B4E586A() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped3_FindAllAsync_mEFA2B67CF772495FF483F807A1F8C007236C8308() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_FindAllAsync_mAE8D79F1CFC19E5ABB34B1289C16C88581955D65(Il2CppHString ___aqsFilter0, IAsyncOperation_1_t2FBB03E2E53DBA43BA3A271607D81BA59969E8BD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped4_FindAllAsync_mEA23C3FACB007EDE36D108CC9D47E2F579055434() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped5_CreateWatcher_m89BDBFFA7B0075B4684C76A8DFB75AF05D0AE611() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped6_CreateWatcher_mEE639265BBC9DB7CDD4854F93C94C9CB6B920ADF() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped7_CreateWatcher_m4015A09028A35D5A44D2E9F197BA7601AF1B65EF() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped8_CreateWatcher_m7353D1C70755629EB3CBBD18BCFA75C105A2DEDD() = 0;
};
// Windows.Devices.Enumeration.IDeviceInformationStatics2
struct NOVTABLE IDeviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics2_U24__Stripped0_GetAqsFilterFromDeviceClass_m6D0C25500E7F8BCF6123E0C911826D53C72ABDB7() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics2_U24__Stripped1_CreateFromIdAsync_m88CA4480A1FCA101493AFC1296991F7581E5CD7F() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics2_U24__Stripped2_FindAllAsync_m7E2A998573D72138722637A98F74E03F2015F961() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics2_U24__Stripped3_CreateWatcher_m3B5D422AC668901E7CF29E343CE68748F8A50CDA() = 0;
};
// Windows.Devices.Gpio.IGpioController
struct NOVTABLE IGpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IGpioController_U24__Stripped0_get_PinCount_mFB79BF5E3026CA086B685C07A485A721DA7BB5C7() = 0;
	virtual il2cpp_hresult_t STDCALL IGpioController_U24__Stripped1_OpenPin_mA05938B84EDDBF2E9D4A9D45C3F969DD24559C50() = 0;
	virtual il2cpp_hresult_t STDCALL IGpioController_U24__Stripped2_OpenPin_m63965EF8ED551A67825B8EA3AC0B787B12E3B919() = 0;
	virtual il2cpp_hresult_t STDCALL IGpioController_U24__Stripped3_TryOpenPin_mE3B913613DA0FD7F14B8076986672DA7FF1925BB() = 0;
};
// Windows.Devices.Gpio.IGpioControllerStatics
struct NOVTABLE IGpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IGpioControllerStatics_GetDefault_m9468A611A2F430CC849476BAE7652A432281C5B6(IGpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12** comReturnValue) = 0;
};
// Windows.Devices.Gpio.IGpioControllerStatics2
struct NOVTABLE IGpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IGpioControllerStatics2_U24__Stripped0_GetControllersAsync_m9FC8C41D3F5B1B8B53F91EA9CECCF853BE32A8C7() = 0;
	virtual il2cpp_hresult_t STDCALL IGpioControllerStatics2_U24__Stripped1_GetDefaultAsync_m1091805E39022EE376346C8E7FD42EB407E9604A() = 0;
};
// Windows.Devices.I2c.II2cConnectionSettingsFactory
struct NOVTABLE II2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL II2cConnectionSettingsFactory_Create_m28A09A71B68021747D08CE2CFC7792009436D061(int32_t ___slaveAddress0, II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F** comReturnValue) = 0;
};
// Windows.Devices.I2c.II2cDevice
struct NOVTABLE II2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL II2cDevice_U24__Stripped0_get_DeviceId_m64763CD257F69A3D18C288C4956EFD6AA135C4B8() = 0;
	virtual il2cpp_hresult_t STDCALL II2cDevice_U24__Stripped1_get_ConnectionSettings_mF7B505DB347F6629C76E6A786995304908B70BB8() = 0;
	virtual il2cpp_hresult_t STDCALL II2cDevice_Write_m811B99750E46F7166BD64628DE7E4505ED4ECB0C(uint32_t ___buffer0ArraySize, uint8_t* ___buffer0) = 0;
	virtual il2cpp_hresult_t STDCALL II2cDevice_U24__Stripped2_WritePartial_mDFB2C830868EC85BABBAE95EBD27C8C651413D02() = 0;
	virtual il2cpp_hresult_t STDCALL II2cDevice_U24__Stripped3_Read_m7BF8338C5A1951003B2E12551F8D76349668A326() = 0;
	virtual il2cpp_hresult_t STDCALL II2cDevice_U24__Stripped4_ReadPartial_m44BC1B7C30CB919740FC39098F198ED85DB81D94() = 0;
	virtual il2cpp_hresult_t STDCALL II2cDevice_WriteRead_m5FE6758453EF84F481015323F45C95ADA91A031F(uint32_t ___writeBuffer0ArraySize, uint8_t* ___writeBuffer0, uint32_t ___readBuffer1ArraySize, uint8_t* ___readBuffer1) = 0;
	virtual il2cpp_hresult_t STDCALL II2cDevice_U24__Stripped5_WriteReadPartial_mBE60EA03CBE7CA7FDCA766E834258FD87753E855() = 0;
};
// Windows.Devices.I2c.II2cDeviceStatics
struct NOVTABLE II2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL II2cDeviceStatics_GetDeviceSelector_m03646657FBB342C901304A690A1958A0B56F3B88(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL II2cDeviceStatics_U24__Stripped0_GetDeviceSelector_m4F3E2B176516D2ABB41FE02FCD6AB689CCD93CAC() = 0;
	virtual il2cpp_hresult_t STDCALL II2cDeviceStatics_FromIdAsync_m551BCEF045A5F724C23BEEF13CB708D381D0705D(Il2CppHString ___deviceId0, II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F* ___settings1, IAsyncOperation_1_t24C3E670A13D3B72400E9DB9A860A439AC7F948B** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.DeviceInformation>
struct NOVTABLE IIterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m538397591F4B36A95399ECBA0AFE2E631CD15EB6(IIterator_1_t227869F704EB21BEFFC77A20C298E3C5FCFDE567** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Enumeration.DeviceInformation>
struct NOVTABLE IVectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m5A685F47A7BAA4624FE2810D72D287F6E19A12D3(uint32_t ___index0, IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mBD5F23C2F45F64153C980E284629995650E4BFD4(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m53866B1E15E8307E00D732357EE27A98119A345F(IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m55068E180D68D66060ABAE4C77AD39B469163BF9(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DeviceInformationCollection>
struct NOVTABLE IAsyncOperation_1_t2FBB03E2E53DBA43BA3A271607D81BA59969E8BD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m37D32264D601BC00529CE4C2A59C94330C791823(IAsyncOperationCompletedHandler_1_tA00E28925FCC9523D68DF14FB0DF9249B906E406_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mC21734183A700B6CD06DB7509484CA92DCF4C5F2(IAsyncOperationCompletedHandler_1_tA00E28925FCC9523D68DF14FB0DF9249B906E406_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m283F9007F68106786C9249AEDDE710B34116268B(IVectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Devices.I2c.I2cDevice>
struct NOVTABLE IAsyncOperation_1_t24C3E670A13D3B72400E9DB9A860A439AC7F948B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m57FA1D5FA70131D2B9E4966434F13CA3C86060AD(IAsyncOperationCompletedHandler_1_t52BDB85D6F83E336BC167B9993305AE86090A426_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m013B99FEC041E148C143697844EDF84F27C1DE33(IAsyncOperationCompletedHandler_1_t52BDB85D6F83E336BC167B9993305AE86090A426_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mAA0F05C1F80DDE59FDF7B234F7B3242AECB3CF40(II2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t5808AF951019E4388C66F7A88AC569F52F581167 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() = 0;
};
#ifndef MPU6050_T0C410A8414574468B440DEB07CCAD8108B188A92_H
#define MPU6050_T0C410A8414574468B440DEB07CCAD8108B188A92_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MPU6050.MPU6050
struct  MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92  : public RuntimeObject
{
public:
	// System.Int32 MPU6050.MPU6050::timeout
	int32_t ___timeout_0;
	// System.String MPU6050.MPU6050::mpu6050Msg
	String_t* ___mpu6050Msg_1;
	// System.Boolean MPU6050.MPU6050::isInitErr
	bool ___isInitErr_2;
	// System.Boolean MPU6050.MPU6050::isInitHardware
	bool ___isInitHardware_3;
	// Windows.Devices.I2c.I2cDevice MPU6050.MPU6050::_mpu6050Device
	I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * ____mpu6050Device_4;
	// Windows.Devices.Gpio.GpioController MPU6050.MPU6050::IoController
	GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * ___IoController_5;
	// System.Boolean MPU6050.MPU6050::disposedValue
	bool ___disposedValue_6;
	// System.Boolean MPU6050.MPU6050::isdmpInitialize
	bool ___isdmpInitialize_7;
	// System.Byte MPU6050.MPU6050::devStatus
	uint8_t ___devStatus_8;
	// System.Byte[] MPU6050.MPU6050::dmpMemory
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dmpMemory_12;
	// System.Byte[] MPU6050.MPU6050::dmpConfig
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dmpConfig_13;
	// System.Byte[] MPU6050.MPU6050::dmpUpdates
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dmpUpdates_14;
	// System.Byte[] MPU6050.MPU6050::dmpPacketBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dmpPacketBuffer_351;
	// System.UInt32 MPU6050.MPU6050::dmpPacketSize
	uint32_t ___dmpPacketSize_352;
	// System.Byte MPU6050.MPU6050::devAddr
	uint8_t ___devAddr_353;
	// System.Byte[] MPU6050.MPU6050::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_354;

public:
	inline static int32_t get_offset_of_timeout_0() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___timeout_0)); }
	inline int32_t get_timeout_0() const { return ___timeout_0; }
	inline int32_t* get_address_of_timeout_0() { return &___timeout_0; }
	inline void set_timeout_0(int32_t value)
	{
		___timeout_0 = value;
	}

	inline static int32_t get_offset_of_mpu6050Msg_1() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___mpu6050Msg_1)); }
	inline String_t* get_mpu6050Msg_1() const { return ___mpu6050Msg_1; }
	inline String_t** get_address_of_mpu6050Msg_1() { return &___mpu6050Msg_1; }
	inline void set_mpu6050Msg_1(String_t* value)
	{
		___mpu6050Msg_1 = value;
		Il2CppCodeGenWriteBarrier((&___mpu6050Msg_1), value);
	}

	inline static int32_t get_offset_of_isInitErr_2() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___isInitErr_2)); }
	inline bool get_isInitErr_2() const { return ___isInitErr_2; }
	inline bool* get_address_of_isInitErr_2() { return &___isInitErr_2; }
	inline void set_isInitErr_2(bool value)
	{
		___isInitErr_2 = value;
	}

	inline static int32_t get_offset_of_isInitHardware_3() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___isInitHardware_3)); }
	inline bool get_isInitHardware_3() const { return ___isInitHardware_3; }
	inline bool* get_address_of_isInitHardware_3() { return &___isInitHardware_3; }
	inline void set_isInitHardware_3(bool value)
	{
		___isInitHardware_3 = value;
	}

	inline static int32_t get_offset_of__mpu6050Device_4() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ____mpu6050Device_4)); }
	inline I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * get__mpu6050Device_4() const { return ____mpu6050Device_4; }
	inline I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 ** get_address_of__mpu6050Device_4() { return &____mpu6050Device_4; }
	inline void set__mpu6050Device_4(I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * value)
	{
		____mpu6050Device_4 = value;
		Il2CppCodeGenWriteBarrier((&____mpu6050Device_4), value);
	}

	inline static int32_t get_offset_of_IoController_5() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___IoController_5)); }
	inline GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * get_IoController_5() const { return ___IoController_5; }
	inline GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D ** get_address_of_IoController_5() { return &___IoController_5; }
	inline void set_IoController_5(GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * value)
	{
		___IoController_5 = value;
		Il2CppCodeGenWriteBarrier((&___IoController_5), value);
	}

	inline static int32_t get_offset_of_disposedValue_6() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___disposedValue_6)); }
	inline bool get_disposedValue_6() const { return ___disposedValue_6; }
	inline bool* get_address_of_disposedValue_6() { return &___disposedValue_6; }
	inline void set_disposedValue_6(bool value)
	{
		___disposedValue_6 = value;
	}

	inline static int32_t get_offset_of_isdmpInitialize_7() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___isdmpInitialize_7)); }
	inline bool get_isdmpInitialize_7() const { return ___isdmpInitialize_7; }
	inline bool* get_address_of_isdmpInitialize_7() { return &___isdmpInitialize_7; }
	inline void set_isdmpInitialize_7(bool value)
	{
		___isdmpInitialize_7 = value;
	}

	inline static int32_t get_offset_of_devStatus_8() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___devStatus_8)); }
	inline uint8_t get_devStatus_8() const { return ___devStatus_8; }
	inline uint8_t* get_address_of_devStatus_8() { return &___devStatus_8; }
	inline void set_devStatus_8(uint8_t value)
	{
		___devStatus_8 = value;
	}

	inline static int32_t get_offset_of_dmpMemory_12() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___dmpMemory_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_dmpMemory_12() const { return ___dmpMemory_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_dmpMemory_12() { return &___dmpMemory_12; }
	inline void set_dmpMemory_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___dmpMemory_12 = value;
		Il2CppCodeGenWriteBarrier((&___dmpMemory_12), value);
	}

	inline static int32_t get_offset_of_dmpConfig_13() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___dmpConfig_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_dmpConfig_13() const { return ___dmpConfig_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_dmpConfig_13() { return &___dmpConfig_13; }
	inline void set_dmpConfig_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___dmpConfig_13 = value;
		Il2CppCodeGenWriteBarrier((&___dmpConfig_13), value);
	}

	inline static int32_t get_offset_of_dmpUpdates_14() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___dmpUpdates_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_dmpUpdates_14() const { return ___dmpUpdates_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_dmpUpdates_14() { return &___dmpUpdates_14; }
	inline void set_dmpUpdates_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___dmpUpdates_14 = value;
		Il2CppCodeGenWriteBarrier((&___dmpUpdates_14), value);
	}

	inline static int32_t get_offset_of_dmpPacketBuffer_351() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___dmpPacketBuffer_351)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_dmpPacketBuffer_351() const { return ___dmpPacketBuffer_351; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_dmpPacketBuffer_351() { return &___dmpPacketBuffer_351; }
	inline void set_dmpPacketBuffer_351(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___dmpPacketBuffer_351 = value;
		Il2CppCodeGenWriteBarrier((&___dmpPacketBuffer_351), value);
	}

	inline static int32_t get_offset_of_dmpPacketSize_352() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___dmpPacketSize_352)); }
	inline uint32_t get_dmpPacketSize_352() const { return ___dmpPacketSize_352; }
	inline uint32_t* get_address_of_dmpPacketSize_352() { return &___dmpPacketSize_352; }
	inline void set_dmpPacketSize_352(uint32_t value)
	{
		___dmpPacketSize_352 = value;
	}

	inline static int32_t get_offset_of_devAddr_353() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___devAddr_353)); }
	inline uint8_t get_devAddr_353() const { return ___devAddr_353; }
	inline uint8_t* get_address_of_devAddr_353() { return &___devAddr_353; }
	inline void set_devAddr_353(uint8_t value)
	{
		___devAddr_353 = value;
	}

	inline static int32_t get_offset_of_buffer_354() { return static_cast<int32_t>(offsetof(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92, ___buffer_354)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_354() const { return ___buffer_354; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_354() { return &___buffer_354; }
	inline void set_buffer_354(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_354 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_354), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MPU6050_T0C410A8414574468B440DEB07CCAD8108B188A92_H
#ifndef QUATERNION_TB9AF86E03ADE793DA4756844C45693CA66FCE6D8_H
#define QUATERNION_TB9AF86E03ADE793DA4756844C45693CA66FCE6D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MPU6050.MPU6050/Quaternion
struct  Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8  : public RuntimeObject
{
public:
	// System.Single MPU6050.MPU6050/Quaternion::w
	float ___w_0;
	// System.Single MPU6050.MPU6050/Quaternion::x
	float ___x_1;
	// System.Single MPU6050.MPU6050/Quaternion::y
	float ___y_2;
	// System.Single MPU6050.MPU6050/Quaternion::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8, ___w_0)); }
	inline float get_w_0() const { return ___w_0; }
	inline float* get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(float value)
	{
		___w_0 = value;
	}

	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_TB9AF86E03ADE793DA4756844C45693CA66FCE6D8_H
#ifndef VECTORFLOAT_T258D595FC302A20980CBC2604F090D5641027816_H
#define VECTORFLOAT_T258D595FC302A20980CBC2604F090D5641027816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MPU6050.MPU6050/VectorFloat
struct  VectorFloat_t258D595FC302A20980CBC2604F090D5641027816  : public RuntimeObject
{
public:
	// System.Single MPU6050.MPU6050/VectorFloat::x
	float ___x_0;
	// System.Single MPU6050.MPU6050/VectorFloat::y
	float ___y_1;
	// System.Single MPU6050.MPU6050/VectorFloat::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VectorFloat_t258D595FC302A20980CBC2604F090D5641027816, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VectorFloat_t258D595FC302A20980CBC2604F090D5641027816, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(VectorFloat_t258D595FC302A20980CBC2604F090D5641027816, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORFLOAT_T258D595FC302A20980CBC2604F090D5641027816_H
#ifndef VECTORINT16_T9D3BA195AC7CAA82971193AB9CBF363F4BBC7790_H
#define VECTORINT16_T9D3BA195AC7CAA82971193AB9CBF363F4BBC7790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MPU6050.MPU6050/VectorInt16
struct  VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790  : public RuntimeObject
{
public:
	// System.Int32 MPU6050.MPU6050/VectorInt16::x
	int32_t ___x_0;
	// System.Int32 MPU6050.MPU6050/VectorInt16::y
	int32_t ___y_1;
	// System.Int32 MPU6050.MPU6050/VectorInt16::z
	int32_t ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790, ___z_2)); }
	inline int32_t get_z_2() const { return ___z_2; }
	inline int32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(int32_t value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORINT16_T9D3BA195AC7CAA82971193AB9CBF363F4BBC7790_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef __STATICARRAYINITTYPESIZEU3D16_T6EB025C40E80FDD74132718092D59E92446BD13D_H
#define __STATICARRAYINITTYPESIZEU3D16_T6EB025C40E80FDD74132718092D59E92446BD13D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct  __StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D16_T6EB025C40E80FDD74132718092D59E92446BD13D_H
#ifndef __STATICARRAYINITTYPESIZEU3D192_TE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6_H
#define __STATICARRAYINITTYPESIZEU3D192_TE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct  __StaticArrayInitTypeSizeU3D192_tE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_tE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6__padding[192];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D192_TE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6_H
#ifndef __STATICARRAYINITTYPESIZEU3D1929_T4128D7D418718EF7E176036C4E6A01E54C528785_H
#define __STATICARRAYINITTYPESIZEU3D1929_T4128D7D418718EF7E176036C4E6A01E54C528785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1929
struct  __StaticArrayInitTypeSizeU3D1929_t4128D7D418718EF7E176036C4E6A01E54C528785 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1929_t4128D7D418718EF7E176036C4E6A01E54C528785__padding[1929];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1929_T4128D7D418718EF7E176036C4E6A01E54C528785_H
#ifndef __STATICARRAYINITTYPESIZEU3D47_TB501E4D4C2607EF967A504AA8F0D176156F4A912_H
#define __STATICARRAYINITTYPESIZEU3D47_TB501E4D4C2607EF967A504AA8F0D176156F4A912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=47
struct  __StaticArrayInitTypeSizeU3D47_tB501E4D4C2607EF967A504AA8F0D176156F4A912 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D47_tB501E4D4C2607EF967A504AA8F0D176156F4A912__padding[47];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D47_TB501E4D4C2607EF967A504AA8F0D176156F4A912_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#define ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifndef TASKAWAITER_T0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_H
#define TASKAWAITER_T0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
#endif // TASKAWAITER_T0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_H
#ifndef TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#define TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#ifndef TASKAWAITER_1_T325C97E6C136F306CC070DB48ECEBD92997F3E53_H
#define TASKAWAITER_1_T325C97E6C136F306CC070DB48ECEBD92997F3E53_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.Enumeration.DeviceInformationCollection>
struct  TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t663F0DD1A0E90D28D3CEF0BC8BA9BE4CFB6E333A * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53, ___m_task_0)); }
	inline Task_1_t663F0DD1A0E90D28D3CEF0BC8BA9BE4CFB6E333A * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t663F0DD1A0E90D28D3CEF0BC8BA9BE4CFB6E333A ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t663F0DD1A0E90D28D3CEF0BC8BA9BE4CFB6E333A * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T325C97E6C136F306CC070DB48ECEBD92997F3E53_H
#ifndef TASKAWAITER_1_T9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_H
#define TASKAWAITER_1_T9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.I2c.I2cDevice>
struct  TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tD3B099F9273247ADC3D43275EE7A9830B000533B * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2, ___m_task_0)); }
	inline Task_1_tD3B099F9273247ADC3D43275EE7A9830B000533B * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tD3B099F9273247ADC3D43275EE7A9830B000533B ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tD3B099F9273247ADC3D43275EE7A9830B000533B * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef DEVICEINFORMATION_T6188B770C92A6C990958DA0821869BF350ED39C9_H
#define DEVICEINFORMATION_T6188B770C92A6C990958DA0821869BF350ED39C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Enumeration.DeviceInformation
struct  DeviceInformation_t6188B770C92A6C990958DA0821869BF350ED39C9  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Enumeration.IDeviceInformation
	IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602* ____ideviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602;
	// Cached pointer to Windows.Devices.Enumeration.IDeviceInformation2
	IDeviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85* ____ideviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85;

public:
	inline IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602* get_____ideviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602()
	{
		IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602* returnValue = ____ideviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDeviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602>((&____ideviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ideviceInformation_t952FA6D173505A2EB6C7B8B87188CA994B9E7602;
			}
		}
		return returnValue;
	}

	inline IDeviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85* get_____ideviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85()
	{
		IDeviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85* returnValue = ____ideviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDeviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDeviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85>((&____ideviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ideviceInformation2_t2B236EFA5E3C0403B36E05620A1724A870CC1B85;
			}
		}
		return returnValue;
	}
};

struct DeviceInformation_t6188B770C92A6C990958DA0821869BF350ED39C9_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Devices.Enumeration.IDeviceInformationStatics
	IDeviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C* ____ideviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C;
	// Cached pointer to Windows.Devices.Enumeration.IDeviceInformationStatics2
	IDeviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406* ____ideviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Devices.Enumeration.DeviceInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDeviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C* get_____ideviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C()
	{
		IDeviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C* returnValue = ____ideviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDeviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDeviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C>((&____ideviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ideviceInformationStatics_t72A60758F8653A3D9861C4D4328DBD158FBF897C;
			}
		}
		return returnValue;
	}

	inline IDeviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406* get_____ideviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406()
	{
		IDeviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406* returnValue = ____ideviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDeviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDeviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406>((&____ideviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ideviceInformationStatics2_t82D229778697DAEC7702B1FC613336E264251406;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEINFORMATION_T6188B770C92A6C990958DA0821869BF350ED39C9_H
#ifndef DEVICEINFORMATIONCOLLECTION_TB110A173809E8054E7B70E4DD097BA13060F6FC7_H
#define DEVICEINFORMATIONCOLLECTION_TB110A173809E8054E7B70E4DD097BA13060F6FC7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Enumeration.DeviceInformationCollection
struct  DeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Enumeration.DeviceInformation>
	IVectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58* ____ivectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58;
	// Cached pointer to Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.DeviceInformation>
	IIterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23* ____iiterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23;

public:
	inline IVectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58* get_____ivectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58()
	{
		IVectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58* returnValue = ____ivectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58>((&____ivectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivectorView_1_t16EB58932EA468389C19C204DF879A8D5477BA58;
			}
		}
		return returnValue;
	}

	inline IIterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23* get_____iiterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23()
	{
		IIterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23* returnValue = ____iiterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IIterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IIterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23>((&____iiterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iiterable_1_t49A646F563762E1CFE7931AC52C581DAA14DCC23;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEINFORMATIONCOLLECTION_TB110A173809E8054E7B70E4DD097BA13060F6FC7_H
#ifndef GPIOCONTROLLER_T9EC04AE9960323D7AD5D38705D1A92E5DF62079D_H
#define GPIOCONTROLLER_T9EC04AE9960323D7AD5D38705D1A92E5DF62079D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Gpio.GpioController
struct  GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Gpio.IGpioController
	IGpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12* ____igpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12;

public:
	inline IGpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12* get_____igpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12()
	{
		IGpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12* returnValue = ____igpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IGpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IGpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12>((&____igpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____igpioController_t977213ADC5BCF15DBAF32ECB368A52ECEC034E12;
			}
		}
		return returnValue;
	}
};

struct GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Devices.Gpio.IGpioControllerStatics
	IGpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB* ____igpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB;
	// Cached pointer to Windows.Devices.Gpio.IGpioControllerStatics2
	IGpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4* ____igpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Devices.Gpio.GpioController"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IGpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB* get_____igpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB()
	{
		IGpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB* returnValue = ____igpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IGpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IGpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB>((&____igpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____igpioControllerStatics_t3CE1F2BBFF586BDE901C22ACC06E97B67051D5FB;
			}
		}
		return returnValue;
	}

	inline IGpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4* get_____igpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4()
	{
		IGpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4* returnValue = ____igpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IGpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IGpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4>((&____igpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____igpioControllerStatics2_tA4DD7B74F5D9E5EF972EC1C304DA7A4AAA26E2D4;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPIOCONTROLLER_T9EC04AE9960323D7AD5D38705D1A92E5DF62079D_H
#ifndef I2CDEVICE_T98FC86BEF8346B93999084F247BB5BDE4D946128_H
#define I2CDEVICE_T98FC86BEF8346B93999084F247BB5BDE4D946128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.I2c.I2cDevice
struct  I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.I2c.II2cDevice
	II2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6* ____ii2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t5808AF951019E4388C66F7A88AC569F52F581167* ____iclosable_t5808AF951019E4388C66F7A88AC569F52F581167;

public:
	inline II2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6* get_____ii2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6()
	{
		II2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6* returnValue = ____ii2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(II2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<II2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6>((&____ii2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ii2cDevice_t63596282F07741676EB1E852C905E0331BA7C6C6;
			}
		}
		return returnValue;
	}

	inline IClosable_t5808AF951019E4388C66F7A88AC569F52F581167* get_____iclosable_t5808AF951019E4388C66F7A88AC569F52F581167()
	{
		IClosable_t5808AF951019E4388C66F7A88AC569F52F581167* returnValue = ____iclosable_t5808AF951019E4388C66F7A88AC569F52F581167;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167>((&____iclosable_t5808AF951019E4388C66F7A88AC569F52F581167), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t5808AF951019E4388C66F7A88AC569F52F581167;
			}
		}
		return returnValue;
	}
};

struct I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Devices.I2c.II2cDeviceStatics
	II2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E* ____ii2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Devices.I2c.I2cDevice"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline II2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E* get_____ii2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E()
	{
		II2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E* returnValue = ____ii2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(II2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<II2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E>((&____ii2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ii2cDeviceStatics_tEC4768E881C266BA226371C4B7F2A864B068125E;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // I2CDEVICE_T98FC86BEF8346B93999084F247BB5BDE4D946128_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1929 <PrivateImplementationDetails>::025D0CBBC3FC2902D12A12EA0EFA0C451E76796E
	__StaticArrayInitTypeSizeU3D1929_t4128D7D418718EF7E176036C4E6A01E54C528785  ___025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::200E94B060457673F15561C06F7673BCDBCCDBED
	__StaticArrayInitTypeSizeU3D192_tE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6  ___200E94B060457673F15561C06F7673BCDBCCDBED_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1
	__StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D  ___2EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=47 <PrivateImplementationDetails>::924761D6550FD264C145DBBC4B199DDB7A38A1D2
	__StaticArrayInitTypeSizeU3D47_tB501E4D4C2607EF967A504AA8F0D176156F4A912  ___924761D6550FD264C145DBBC4B199DDB7A38A1D2_3;

public:
	inline static int32_t get_offset_of_U3025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields, ___025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0)); }
	inline __StaticArrayInitTypeSizeU3D1929_t4128D7D418718EF7E176036C4E6A01E54C528785  get_U3025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0() const { return ___025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0; }
	inline __StaticArrayInitTypeSizeU3D1929_t4128D7D418718EF7E176036C4E6A01E54C528785 * get_address_of_U3025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0() { return &___025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0; }
	inline void set_U3025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0(__StaticArrayInitTypeSizeU3D1929_t4128D7D418718EF7E176036C4E6A01E54C528785  value)
	{
		___025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0 = value;
	}

	inline static int32_t get_offset_of_U3200E94B060457673F15561C06F7673BCDBCCDBED_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields, ___200E94B060457673F15561C06F7673BCDBCCDBED_1)); }
	inline __StaticArrayInitTypeSizeU3D192_tE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6  get_U3200E94B060457673F15561C06F7673BCDBCCDBED_1() const { return ___200E94B060457673F15561C06F7673BCDBCCDBED_1; }
	inline __StaticArrayInitTypeSizeU3D192_tE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6 * get_address_of_U3200E94B060457673F15561C06F7673BCDBCCDBED_1() { return &___200E94B060457673F15561C06F7673BCDBCCDBED_1; }
	inline void set_U3200E94B060457673F15561C06F7673BCDBCCDBED_1(__StaticArrayInitTypeSizeU3D192_tE60F9456FA87ECFFD9E8C67E14F1F029CC62EFF6  value)
	{
		___200E94B060457673F15561C06F7673BCDBCCDBED_1 = value;
	}

	inline static int32_t get_offset_of_U32EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields, ___2EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2)); }
	inline __StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D  get_U32EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2() const { return ___2EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2; }
	inline __StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D * get_address_of_U32EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2() { return &___2EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2; }
	inline void set_U32EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2(__StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D  value)
	{
		___2EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2 = value;
	}

	inline static int32_t get_offset_of_U3924761D6550FD264C145DBBC4B199DDB7A38A1D2_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields, ___924761D6550FD264C145DBBC4B199DDB7A38A1D2_3)); }
	inline __StaticArrayInitTypeSizeU3D47_tB501E4D4C2607EF967A504AA8F0D176156F4A912  get_U3924761D6550FD264C145DBBC4B199DDB7A38A1D2_3() const { return ___924761D6550FD264C145DBBC4B199DDB7A38A1D2_3; }
	inline __StaticArrayInitTypeSizeU3D47_tB501E4D4C2607EF967A504AA8F0D176156F4A912 * get_address_of_U3924761D6550FD264C145DBBC4B199DDB7A38A1D2_3() { return &___924761D6550FD264C145DBBC4B199DDB7A38A1D2_3; }
	inline void set_U3924761D6550FD264C145DBBC4B199DDB7A38A1D2_3(__StaticArrayInitTypeSizeU3D47_tB501E4D4C2607EF967A504AA8F0D176156F4A912  value)
	{
		___924761D6550FD264C145DBBC4B199DDB7A38A1D2_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_H
#ifndef ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#define ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_synchronizationContext_0), value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
#endif // ASYNCVOIDMETHODBUILDER_T44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_H
#ifndef RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#define RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifndef TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#define TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef I2CBUSSPEED_T0B611061EFB1611EA07B926856255286F632D0A8_H
#define I2CBUSSPEED_T0B611061EFB1611EA07B926856255286F632D0A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.I2c.I2cBusSpeed
struct  I2cBusSpeed_t0B611061EFB1611EA07B926856255286F632D0A8 
{
public:
	// System.Int32 Windows.Devices.I2c.I2cBusSpeed::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(I2cBusSpeed_t0B611061EFB1611EA07B926856255286F632D0A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // I2CBUSSPEED_T0B611061EFB1611EA07B926856255286F632D0A8_H
#ifndef I2CSHARINGMODE_TD8BDF66912BECF82194544E4C53AC262041A59C9_H
#define I2CSHARINGMODE_TD8BDF66912BECF82194544E4C53AC262041A59C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.I2c.I2cSharingMode
struct  I2cSharingMode_tD8BDF66912BECF82194544E4C53AC262041A59C9 
{
public:
	// System.Int32 Windows.Devices.I2c.I2cSharingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(I2cSharingMode_tD8BDF66912BECF82194544E4C53AC262041A59C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // I2CSHARINGMODE_TD8BDF66912BECF82194544E4C53AC262041A59C9_H
#ifndef U3CINITHARDWAREU3ED__21_T0346A49D0C7D783B33AF5C2792D653565E4895AD_H
#define U3CINITHARDWAREU3ED__21_T0346A49D0C7D783B33AF5C2792D653565E4895AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MPU6050.MPU6050/<InitHardware>d__21
struct  U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD 
{
public:
	// System.Int32 MPU6050.MPU6050/<InitHardware>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder MPU6050.MPU6050/<InitHardware>d__21::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// MPU6050.MPU6050 MPU6050.MPU6050/<InitHardware>d__21::<>4__this
	MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.Enumeration.DeviceInformationCollection> MPU6050.MPU6050/<InitHardware>d__21::<>u__1
	TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.I2c.I2cDevice> MPU6050.MPU6050/<InitHardware>d__21::<>u__2
	TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  ___U3CU3Eu__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter MPU6050.MPU6050/<InitHardware>d__21::<>u__3
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD, ___U3CU3E4__this_2)); }
	inline MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  value)
	{
		___U3CU3Eu__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  value)
	{
		___U3CU3Eu__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_5() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD, ___U3CU3Eu__3_5)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__3_5() const { return ___U3CU3Eu__3_5; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__3_5() { return &___U3CU3Eu__3_5; }
	inline void set_U3CU3Eu__3_5(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__3_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINITHARDWAREU3ED__21_T0346A49D0C7D783B33AF5C2792D653565E4895AD_H
#ifndef U3CDMPINITIALIZEU3ED__81_T3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_H
#define U3CDMPINITIALIZEU3ED__81_T3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MPU6050.MPU6050/<dmpInitialize>d__81
struct  U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB 
{
public:
	// System.Int32 MPU6050.MPU6050/<dmpInitialize>d__81::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder MPU6050.MPU6050/<dmpInitialize>d__81::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// MPU6050.MPU6050 MPU6050.MPU6050/<dmpInitialize>d__81::<>4__this
	MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter MPU6050.MPU6050/<dmpInitialize>d__81::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB, ___U3CU3E4__this_2)); }
	inline MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDMPINITIALIZEU3ED__81_T3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
// Windows.Devices.I2c.II2cConnectionSettings
struct NOVTABLE II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL II2cConnectionSettings_U24__Stripped0_get_SlaveAddress_m85ED7569DF22007B3A0BF1417FDD22B074A377F3() = 0;
	virtual il2cpp_hresult_t STDCALL II2cConnectionSettings_U24__Stripped1_put_SlaveAddress_mF54588A1A9F10C0BA27FF3279CB1602DEEF3C58C() = 0;
	virtual il2cpp_hresult_t STDCALL II2cConnectionSettings_U24__Stripped2_get_BusSpeed_m192975271C02B010D139D102BCA013D0BD563500() = 0;
	virtual il2cpp_hresult_t STDCALL II2cConnectionSettings_put_BusSpeed_mE6F1DA5062BE4D425763CB9C978A3EBB1E685003(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL II2cConnectionSettings_U24__Stripped3_get_SharingMode_m12D96CDF2535438105D1FEBE035672009914B7A3() = 0;
	virtual il2cpp_hresult_t STDCALL II2cConnectionSettings_put_SharingMode_m24BD12C9E203B039A69A451C7EE87BE63B6420A4(int32_t ___value0) = 0;
};
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef I2CCONNECTIONSETTINGS_TDD980C2F6B9B5A626B91FCA02033271C84B6B1C3_H
#define I2CCONNECTIONSETTINGS_TDD980C2F6B9B5A626B91FCA02033271C84B6B1C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.I2c.I2cConnectionSettings
struct  I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.I2c.II2cConnectionSettings
	II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F* ____ii2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F;

public:
	inline II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F* get_____ii2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F()
	{
		II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F* returnValue = ____ii2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<II2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F>((&____ii2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ii2cConnectionSettings_tDCF6272D4B385002CA5D62469AF677125E1F085F;
			}
		}
		return returnValue;
	}
};

struct I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Devices.I2c.II2cConnectionSettingsFactory
	II2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8* ____ii2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Devices.I2c.I2cConnectionSettings"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline II2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8* get_____ii2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8()
	{
		II2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8* returnValue = ____ii2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(II2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<II2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8>((&____ii2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ii2cConnectionSettingsFactory_tE280C3177B60AF95199E437B29AD99D9502911D8;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // I2CCONNECTIONSETTINGS_TDD980C2F6B9B5A626B91FCA02033271C84B6B1C3_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef ROTATE_T763544D6383D5853BC2A73F921EB5C3A7A2F836C_H
#define ROTATE_T763544D6383D5853BC2A73F921EB5C3A7A2F836C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotate
struct  Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform Rotate::_target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____target_4;

public:
	inline static int32_t get_offset_of__target_4() { return static_cast<int32_t>(offsetof(Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C, ____target_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get__target_4() const { return ____target_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of__target_4() { return &____target_4; }
	inline void set__target_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		____target_4 = value;
		Il2CppCodeGenWriteBarrier((&____target_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATE_T763544D6383D5853BC2A73F921EB5C3A7A2F836C_H
#ifndef ROTATE1_T4E82840B03408F80219DFBD79573CE673E94ED4C_H
#define ROTATE1_T4E82840B03408F80219DFBD79573CE673E94ED4C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotate1
struct  Rotate1_t4E82840B03408F80219DFBD79573CE673E94ED4C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform Rotate1::_target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____target_4;

public:
	inline static int32_t get_offset_of__target_4() { return static_cast<int32_t>(offsetof(Rotate1_t4E82840B03408F80219DFBD79573CE673E94ED4C, ____target_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get__target_4() const { return ____target_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of__target_4() { return &____target_4; }
	inline void set__target_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		____target_4 = value;
		Il2CppCodeGenWriteBarrier((&____target_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATE1_T4E82840B03408F80219DFBD79573CE673E94ED4C_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef FPS_T1EBD7C643A92A614792189871C4754CE3AB0DE3A_H
#define FPS_T1EBD7C643A92A614792189871C4754CE3AB0DE3A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fps
struct  fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text fps::_txt
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ____txt_4;
	// System.Int32 fps::frameCount
	int32_t ___frameCount_5;
	// System.Single fps::prevTime
	float ___prevTime_6;
	// System.Int32 fps::_cnt
	int32_t ____cnt_7;
	// System.String fps::_d
	String_t* ____d_8;
	// System.String fps::_fps
	String_t* ____fps_9;

public:
	inline static int32_t get_offset_of__txt_4() { return static_cast<int32_t>(offsetof(fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A, ____txt_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get__txt_4() const { return ____txt_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of__txt_4() { return &____txt_4; }
	inline void set__txt_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		____txt_4 = value;
		Il2CppCodeGenWriteBarrier((&____txt_4), value);
	}

	inline static int32_t get_offset_of_frameCount_5() { return static_cast<int32_t>(offsetof(fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A, ___frameCount_5)); }
	inline int32_t get_frameCount_5() const { return ___frameCount_5; }
	inline int32_t* get_address_of_frameCount_5() { return &___frameCount_5; }
	inline void set_frameCount_5(int32_t value)
	{
		___frameCount_5 = value;
	}

	inline static int32_t get_offset_of_prevTime_6() { return static_cast<int32_t>(offsetof(fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A, ___prevTime_6)); }
	inline float get_prevTime_6() const { return ___prevTime_6; }
	inline float* get_address_of_prevTime_6() { return &___prevTime_6; }
	inline void set_prevTime_6(float value)
	{
		___prevTime_6 = value;
	}

	inline static int32_t get_offset_of__cnt_7() { return static_cast<int32_t>(offsetof(fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A, ____cnt_7)); }
	inline int32_t get__cnt_7() const { return ____cnt_7; }
	inline int32_t* get_address_of__cnt_7() { return &____cnt_7; }
	inline void set__cnt_7(int32_t value)
	{
		____cnt_7 = value;
	}

	inline static int32_t get_offset_of__d_8() { return static_cast<int32_t>(offsetof(fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A, ____d_8)); }
	inline String_t* get__d_8() const { return ____d_8; }
	inline String_t** get_address_of__d_8() { return &____d_8; }
	inline void set__d_8(String_t* value)
	{
		____d_8 = value;
		Il2CppCodeGenWriteBarrier((&____d_8), value);
	}

	inline static int32_t get_offset_of__fps_9() { return static_cast<int32_t>(offsetof(fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A, ____fps_9)); }
	inline String_t* get__fps_9() const { return ____fps_9; }
	inline String_t** get_address_of__fps_9() { return &____fps_9; }
	inline void set__fps_9(String_t* value)
	{
		____fps_9 = value;
		Il2CppCodeGenWriteBarrier((&____fps_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPS_T1EBD7C643A92A614792189871C4754CE3AB0DE3A_H
#ifndef MPUR6050_MAIN_TFB9DA94E43F73539B63CA8F86500AD8237582081_H
#define MPUR6050_MAIN_TFB9DA94E43F73539B63CA8F86500AD8237582081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mpur6050_main
struct  mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text mpur6050_main::txt_Debug
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___txt_Debug_4;
	// System.String mpur6050_main::Msg
	String_t* ___Msg_5;
	// System.Single[] mpur6050_main::eulerAngle
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___eulerAngle_6;
	// System.Byte mpur6050_main::initStatus
	uint8_t ___initStatus_7;
	// MPU6050.MPU6050 mpur6050_main::_mpu
	MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * ____mpu_8;
	// MPU6050.MPU6050/Quaternion mpur6050_main::q
	Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * ___q_9;
	// MPU6050.MPU6050/VectorInt16 mpur6050_main::aa
	VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * ___aa_10;
	// MPU6050.MPU6050/VectorInt16 mpur6050_main::aaReal
	VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * ___aaReal_11;
	// MPU6050.MPU6050/VectorInt16 mpur6050_main::aaWorld
	VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * ___aaWorld_12;
	// MPU6050.MPU6050/VectorFloat mpur6050_main::gravity
	VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * ___gravity_13;
	// System.Single[] mpur6050_main::euler
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___euler_14;
	// System.Single[] mpur6050_main::ypr
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___ypr_15;
	// System.Boolean mpur6050_main::dmpReady
	bool ___dmpReady_16;
	// System.Byte mpur6050_main::mpuIntStatus
	uint8_t ___mpuIntStatus_17;
	// System.UInt32 mpur6050_main::packetSize
	uint32_t ___packetSize_18;
	// System.Int32 mpur6050_main::fifoCount
	int32_t ___fifoCount_19;
	// System.Byte[] mpur6050_main::fifoBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___fifoBuffer_20;
	// System.Int32[] mpur6050_main::CalOfs
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___CalOfs_21;

public:
	inline static int32_t get_offset_of_txt_Debug_4() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___txt_Debug_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_txt_Debug_4() const { return ___txt_Debug_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_txt_Debug_4() { return &___txt_Debug_4; }
	inline void set_txt_Debug_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___txt_Debug_4 = value;
		Il2CppCodeGenWriteBarrier((&___txt_Debug_4), value);
	}

	inline static int32_t get_offset_of_Msg_5() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___Msg_5)); }
	inline String_t* get_Msg_5() const { return ___Msg_5; }
	inline String_t** get_address_of_Msg_5() { return &___Msg_5; }
	inline void set_Msg_5(String_t* value)
	{
		___Msg_5 = value;
		Il2CppCodeGenWriteBarrier((&___Msg_5), value);
	}

	inline static int32_t get_offset_of_eulerAngle_6() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___eulerAngle_6)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_eulerAngle_6() const { return ___eulerAngle_6; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_eulerAngle_6() { return &___eulerAngle_6; }
	inline void set_eulerAngle_6(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___eulerAngle_6 = value;
		Il2CppCodeGenWriteBarrier((&___eulerAngle_6), value);
	}

	inline static int32_t get_offset_of_initStatus_7() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___initStatus_7)); }
	inline uint8_t get_initStatus_7() const { return ___initStatus_7; }
	inline uint8_t* get_address_of_initStatus_7() { return &___initStatus_7; }
	inline void set_initStatus_7(uint8_t value)
	{
		___initStatus_7 = value;
	}

	inline static int32_t get_offset_of__mpu_8() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ____mpu_8)); }
	inline MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * get__mpu_8() const { return ____mpu_8; }
	inline MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 ** get_address_of__mpu_8() { return &____mpu_8; }
	inline void set__mpu_8(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * value)
	{
		____mpu_8 = value;
		Il2CppCodeGenWriteBarrier((&____mpu_8), value);
	}

	inline static int32_t get_offset_of_q_9() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___q_9)); }
	inline Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * get_q_9() const { return ___q_9; }
	inline Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** get_address_of_q_9() { return &___q_9; }
	inline void set_q_9(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * value)
	{
		___q_9 = value;
		Il2CppCodeGenWriteBarrier((&___q_9), value);
	}

	inline static int32_t get_offset_of_aa_10() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___aa_10)); }
	inline VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * get_aa_10() const { return ___aa_10; }
	inline VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** get_address_of_aa_10() { return &___aa_10; }
	inline void set_aa_10(VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * value)
	{
		___aa_10 = value;
		Il2CppCodeGenWriteBarrier((&___aa_10), value);
	}

	inline static int32_t get_offset_of_aaReal_11() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___aaReal_11)); }
	inline VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * get_aaReal_11() const { return ___aaReal_11; }
	inline VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** get_address_of_aaReal_11() { return &___aaReal_11; }
	inline void set_aaReal_11(VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * value)
	{
		___aaReal_11 = value;
		Il2CppCodeGenWriteBarrier((&___aaReal_11), value);
	}

	inline static int32_t get_offset_of_aaWorld_12() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___aaWorld_12)); }
	inline VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * get_aaWorld_12() const { return ___aaWorld_12; }
	inline VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** get_address_of_aaWorld_12() { return &___aaWorld_12; }
	inline void set_aaWorld_12(VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * value)
	{
		___aaWorld_12 = value;
		Il2CppCodeGenWriteBarrier((&___aaWorld_12), value);
	}

	inline static int32_t get_offset_of_gravity_13() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___gravity_13)); }
	inline VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * get_gravity_13() const { return ___gravity_13; }
	inline VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** get_address_of_gravity_13() { return &___gravity_13; }
	inline void set_gravity_13(VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * value)
	{
		___gravity_13 = value;
		Il2CppCodeGenWriteBarrier((&___gravity_13), value);
	}

	inline static int32_t get_offset_of_euler_14() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___euler_14)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_euler_14() const { return ___euler_14; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_euler_14() { return &___euler_14; }
	inline void set_euler_14(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___euler_14 = value;
		Il2CppCodeGenWriteBarrier((&___euler_14), value);
	}

	inline static int32_t get_offset_of_ypr_15() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___ypr_15)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_ypr_15() const { return ___ypr_15; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_ypr_15() { return &___ypr_15; }
	inline void set_ypr_15(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___ypr_15 = value;
		Il2CppCodeGenWriteBarrier((&___ypr_15), value);
	}

	inline static int32_t get_offset_of_dmpReady_16() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___dmpReady_16)); }
	inline bool get_dmpReady_16() const { return ___dmpReady_16; }
	inline bool* get_address_of_dmpReady_16() { return &___dmpReady_16; }
	inline void set_dmpReady_16(bool value)
	{
		___dmpReady_16 = value;
	}

	inline static int32_t get_offset_of_mpuIntStatus_17() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___mpuIntStatus_17)); }
	inline uint8_t get_mpuIntStatus_17() const { return ___mpuIntStatus_17; }
	inline uint8_t* get_address_of_mpuIntStatus_17() { return &___mpuIntStatus_17; }
	inline void set_mpuIntStatus_17(uint8_t value)
	{
		___mpuIntStatus_17 = value;
	}

	inline static int32_t get_offset_of_packetSize_18() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___packetSize_18)); }
	inline uint32_t get_packetSize_18() const { return ___packetSize_18; }
	inline uint32_t* get_address_of_packetSize_18() { return &___packetSize_18; }
	inline void set_packetSize_18(uint32_t value)
	{
		___packetSize_18 = value;
	}

	inline static int32_t get_offset_of_fifoCount_19() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___fifoCount_19)); }
	inline int32_t get_fifoCount_19() const { return ___fifoCount_19; }
	inline int32_t* get_address_of_fifoCount_19() { return &___fifoCount_19; }
	inline void set_fifoCount_19(int32_t value)
	{
		___fifoCount_19 = value;
	}

	inline static int32_t get_offset_of_fifoBuffer_20() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___fifoBuffer_20)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_fifoBuffer_20() const { return ___fifoBuffer_20; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_fifoBuffer_20() { return &___fifoBuffer_20; }
	inline void set_fifoBuffer_20(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___fifoBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((&___fifoBuffer_20), value);
	}

	inline static int32_t get_offset_of_CalOfs_21() { return static_cast<int32_t>(offsetof(mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081, ___CalOfs_21)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_CalOfs_21() const { return ___CalOfs_21; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_CalOfs_21() { return &___CalOfs_21; }
	inline void set_CalOfs_21(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___CalOfs_21 = value;
		Il2CppCodeGenWriteBarrier((&___CalOfs_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MPUR6050_MAIN_TFB9DA94E43F73539B63CA8F86500AD8237582081_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#define TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_30)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_32)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<MPU6050.MPU6050/<InitHardware>d__21>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m34C1C0A73EAB71B2CF4D76413D7084C2D990CFAE_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<MPU6050.MPU6050/<dmpInitialize>d__81>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_m1745F2D03F7DE629E5A02E75937C29441B1B229B_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m1E2175CF410B96A4F467043697DA9DC4D231294C_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,MPU6050.MPU6050/<InitHardware>d__21>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m3A394EBF2DA4430CB70B11B52E918676246E73DB_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MPU6050.MPU6050/<InitHardware>d__21>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mE05252DAEBD30F827BE112F78E6B4F0554B83FE7_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MPU6050.MPU6050/<dmpInitialize>d__81>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_mCA8B27C9D1B475811B15E19797E38268AE0CB2C2_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Int32 MPU6050.MPU6050::readByte(System.Byte,System.Byte,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t* ___data2, const RuntimeMethod* method);
// System.Int32 MPU6050.MPU6050::readBytes(System.Byte,System.Byte,System.Byte,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___length2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___data3, const RuntimeMethod* method);
// System.Void Windows.Devices.I2c.I2cDevice::WriteRead(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void I2cDevice_WriteRead_m5F827A985ED324242E9C97FD2BDECF73581D8706 (I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p1, const RuntimeMethod* method);
// System.Boolean MPU6050.MPU6050::writeByte(System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___data2, const RuntimeMethod* method);
// System.Void Windows.Devices.I2c.I2cDevice::Write(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void I2cDevice_Write_mB17B14EA9E0D5CF100FE5D428681CE9FE7BB7012 (I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * p0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<MPU6050.MPU6050/<InitHardware>d__21>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m34C1C0A73EAB71B2CF4D76413D7084C2D990CFAE (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m34C1C0A73EAB71B2CF4D76413D7084C2D990CFAE_gshared)(__this, p0, method);
}
// System.Void MPU6050.MPU6050::setClockSource(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setClockSource_m5ABF02110EFB06E22CBAD73F91A6C0B72EAFBBFA (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___source0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setFullScaleGyroRange(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setFullScaleGyroRange_m820A6263549E00AC13A2E7CEA60D3658B3669360 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___range0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setFullScaleAccelRange(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setFullScaleAccelRange_mD8C5E12B4E834DC0D2BEC2EE82B2053768F2D20E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___range0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setSleepEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setSleepEnabled_mB7A87184F5023C82EE92EF8429F3CBAC11B7577D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::getDeviceID()
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_getDeviceID_mC62ABAFE1CC8F76ADB80F0E3717C2A2325700ECF (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Boolean MPU6050.MPU6050::writeBits(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___bitStart2, uint8_t ___length3, uint8_t ___data4, const RuntimeMethod* method);
// System.Boolean MPU6050.MPU6050::writeBit(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___bitNum2, uint8_t ___data3, const RuntimeMethod* method);
// System.Int32 MPU6050.MPU6050::readBits(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_readBits_mFD2B23EAB6FECA0378872B2FFA1C29DEDFFBCF03 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___bitStart2, uint8_t ___length3, uint8_t* ___data4, const RuntimeMethod* method);
// System.Boolean MPU6050.MPU6050::writeWord(System.Byte,System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeWord_mF762D68534B1D5128312101CDEF723ECC400CE2B (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, int32_t ___data2, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setMemoryBank(System.Byte,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___bank0, bool ___prefetchEnabled1, bool ___userBank2, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setMemoryStartAddress(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setMemoryStartAddress_m09F6A97E0D8D681267A8442C3E12EE9BD9DEFAB6 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___address0, const RuntimeMethod* method);
// System.Boolean MPU6050.MPU6050::writeBytes(System.Byte,System.Byte,System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeBytes_m97D725D52BF91749BCB0F4871E37F5AFA9ED005C (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___length2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data3, const RuntimeMethod* method);
// System.Int32 MPU6050.MPU6050::memcmp(System.Byte[],System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_memcmp_m9A361B76DCC48E984AE7B188B3EA5DFEBD184603 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____a0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____b1, int32_t ___size2, const RuntimeMethod* method);
// System.Boolean MPU6050.MPU6050::writeMemoryBlock(System.Byte[],System.Int32,System.UInt32,System.Byte,System.Byte,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___ofs1, uint32_t ___dataSize2, uint8_t ___bank3, uint8_t ___address4, bool ___verify5, bool ___useProgMem6, const RuntimeMethod* method);
// System.Boolean MPU6050.MPU6050::writeDMPConfigurationSet(System.Byte[]&,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeDMPConfigurationSet_m7A3D2970B5419333D08E8F11867DB7815D0E8A08 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___data0, uint32_t ___dataSize1, bool ___useProgMem2, const RuntimeMethod* method);
// System.Void Windows.Devices.I2c.I2cDevice::Dispose()
extern "C" IL2CPP_METHOD_ATTR void I2cDevice_Dispose_m09D05003C9BF4BBBFD468576EFA37EF41A15B846 (I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<MPU6050.MPU6050/<dmpInitialize>d__81>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_m1745F2D03F7DE629E5A02E75937C29441B1B229B (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_m1745F2D03F7DE629E5A02E75937C29441B1B229B_gshared)(__this, p0, method);
}
// System.UInt32 MPU6050.MPU6050::getFIFOCount()
extern "C" IL2CPP_METHOD_ATTR uint32_t MPU6050_getFIFOCount_m0D83DD0E87748351BA436FF50ACE1320348C6012 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.UInt32 MPU6050.MPU6050::dmpGetFIFOPacketSize()
extern "C" IL2CPP_METHOD_ATTR uint32_t MPU6050_dmpGetFIFOPacketSize_m1100A2FB90438B7DC1A8EC44A64B8B56A4908EE8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::dmpGetQuaternion_int(System.Int32[]&,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetQuaternion_int_mF4D7D6EC21BCC26AF3CA005660427A3816877A1B (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** ___data0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___packet1, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/VectorInt16::rotate(MPU6050.MPU6050/Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void VectorInt16_rotate_mF503A8A718E6E28EEFC3138FEF084E6BAC662D99 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q0, const RuntimeMethod* method);
// Windows.Devices.Gpio.GpioController Windows.Devices.Gpio.GpioController::GetDefault()
extern "C" IL2CPP_METHOD_ATTR GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * GpioController_GetDefault_mB4A541F47D43F3062A9FBCC2F810ECA3A725DEEC (const RuntimeMethod* method);
// System.String Windows.Devices.I2c.I2cDevice::GetDeviceSelector()
extern "C" IL2CPP_METHOD_ATTR String_t* I2cDevice_GetDeviceSelector_mE5EBCAAEFAC3508FED1B6396BB628AAF882A18BC (const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.DeviceInformationCollection> Windows.Devices.Enumeration.DeviceInformation::FindAllAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DeviceInformation_FindAllAsync_m996740009B773388FBCC4B81D5BC9CF099B4F141 (String_t* p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Devices.Enumeration.DeviceInformationCollection>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  WindowsRuntimeSystemExtensions_GetAwaiter_TisDeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7_m1CC6828562E01EA47C35CDEADF28FB9C413910FC (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m1E2175CF410B96A4F467043697DA9DC4D231294C_gshared)(p0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.Enumeration.DeviceInformationCollection>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC7C51DD2698AA19A0C8BDD2DC423D43B5051A8A4 (TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.Enumeration.DeviceInformationCollection>,MPU6050.MPU6050/<InitHardware>d__21>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m0775FE1A8DB00C8406F7C68AFD1FB937369F1415 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 * p0, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m3A394EBF2DA4430CB70B11B52E918676246E73DB_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.Enumeration.DeviceInformationCollection>::GetResult()
inline DeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7 * TaskAwaiter_1_GetResult_m1D9FFDC78B08E211B8341CAE0C335B60BB43B069 (TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 * __this, const RuntimeMethod* method)
{
	return ((  DeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7 * (*) (TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void Windows.Devices.I2c.I2cConnectionSettings::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void I2cConnectionSettings__ctor_m9F3C9DC8564CBBB3B887A1B1A965D1DEE48EF971 (I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Windows.Devices.I2c.I2cConnectionSettings::put_BusSpeed(Windows.Devices.I2c.I2cBusSpeed)
extern "C" IL2CPP_METHOD_ATTR void I2cConnectionSettings_put_BusSpeed_mBC01F93AE08CB98CB6703B46E103EFD8B3A83BC0 (I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Windows.Devices.I2c.I2cConnectionSettings::put_SharingMode(Windows.Devices.I2c.I2cSharingMode)
extern "C" IL2CPP_METHOD_ATTR void I2cConnectionSettings_put_SharingMode_mC43D9E5B1AA80BEACE708088C8E18A35FF09676C (I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * __this, int32_t p0, const RuntimeMethod* method);
// System.String Windows.Devices.Enumeration.DeviceInformation::get_Id()
extern "C" IL2CPP_METHOD_ATTR String_t* DeviceInformation_get_Id_m8596792EF7C8149D474A3C4DBC85C5048D461F70 (DeviceInformation_t6188B770C92A6C990958DA0821869BF350ED39C9 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Devices.I2c.I2cDevice> Windows.Devices.I2c.I2cDevice::FromIdAsync(System.String,Windows.Devices.I2c.I2cConnectionSettings)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* I2cDevice_FromIdAsync_m5B9AD081A33D59F5C5CF8FC8A73C22AF0AFFB67B (String_t* p0, I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * p1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Devices.I2c.I2cDevice>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  WindowsRuntimeSystemExtensions_GetAwaiter_TisI2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128_m8CFCC8548C48C464850A53EB6DE3E6A7E3FD5AE6 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m1E2175CF410B96A4F467043697DA9DC4D231294C_gshared)(p0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.I2c.I2cDevice>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m66DCCCFB07DFD0DA4B7340702E8039263B296AB4 (TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.I2c.I2cDevice>,MPU6050.MPU6050/<InitHardware>d__21>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mB140774984394014A347E05D9D90372617EA07E4 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 * p0, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m3A394EBF2DA4430CB70B11B52E918676246E73DB_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.I2c.I2cDevice>::GetResult()
inline I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * TaskAwaiter_1_GetResult_m7578B28CF8B63C064016453EBA95D58C4A058EF8 (TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 * __this, const RuntimeMethod* method)
{
	return ((  I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * (*) (TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_Delay_m193E6692B81A2A6C45F5FAE08CF79FA06FC7DA60 (int32_t p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MPU6050.MPU6050/<InitHardware>d__21>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mE05252DAEBD30F827BE112F78E6B4F0554B83FE7 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mE05252DAEBD30F827BE112F78E6B4F0554B83FE7_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/<InitHardware>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CInitHardwareU3Ed__21_MoveNext_m84FF28D7230075893F146E9F0CFE8F6309D174DA (U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/<InitHardware>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CInitHardwareU3Ed__21_SetStateMachine_m82396156F5809D0871F47E3FE7CDE2A6693A29E0 (U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::reset()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_reset_m73DD6B177657F4E6B94F71561D8810B4A117695F (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,MPU6050.MPU6050/<dmpInitialize>d__81>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_mCA8B27C9D1B475811B15E19797E38268AE0CB2C2 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_mCA8B27C9D1B475811B15E19797E38268AE0CB2C2_gshared)(__this, p0, p1, method);
}
// System.Int32 MPU6050.MPU6050::getXGyroOffsetTC()
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_getXGyroOffsetTC_m3C75BCA57B9075F2606FFA805777A8F7A514FA8E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Int32 MPU6050.MPU6050::getYGyroOffsetTC()
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_getYGyroOffsetTC_m864F74257AF946A41BB925D08A4A3B8316141789 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Int32 MPU6050.MPU6050::getZGyroOffsetTC()
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_getZGyroOffsetTC_mB9A91B6E95ED65B67927F5F83553BF747FAE644A (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setSlaveAddress(System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setSlaveAddress_mAA14EE35A91CA5B2B8D5F515759A860CEFE96CB8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___num0, uint8_t ___address1, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setI2CMasterModeEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setI2CMasterModeEnabled_mA42BA638032D84429DE247E5364AD6569E8A70F7 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::resetI2CMaster()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_resetI2CMaster_mD04502DB9D7696B9D2CBED04B9716057356FD36D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Boolean MPU6050.MPU6050::writeProgMemoryBlock(System.Byte[],System.UInt32,System.Byte,System.Byte,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeProgMemoryBlock_m92873E7AC206ACD554FA3738AA0744D5752D114C (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, uint32_t ___dataSize1, uint8_t ___bank2, uint8_t ___address3, bool ___verify4, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/<dmpInitialize>d__81::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CdmpInitializeU3Ed__81_MoveNext_m539F3E4721FF0F285E829963050FD71F03A659CE (U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/<dmpInitialize>d__81::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CdmpInitializeU3Ed__81_SetStateMachine_mA20AA5D49820293EFFFA29EDF38A17AA160AAEA1 (U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Quaternion__ctor_m92DA345F6BE49020B629CDD9BF41894310469503 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, float ___nw0, float ___nx1, float ___ny2, float ___nz3, const RuntimeMethod* method);
// System.Single MPU6050.MPU6050/Quaternion::getMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Quaternion_getMagnitude_m18D3891A802D1F415D2F3168F26B5372A1A6F002 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/Quaternion::normalize()
extern "C" IL2CPP_METHOD_ATTR void Quaternion_normalize_m1C3F976126AAC515F1121479517B8D4773717D88 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, const RuntimeMethod* method);
// System.Single MPU6050.MPU6050/VectorFloat::getMagnitude()
extern "C" IL2CPP_METHOD_ATTR float VectorFloat_getMagnitude_m2EC5EFE5D06882D9EB0FCC0BDE61D160CBC81254 (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/VectorFloat::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void VectorFloat__ctor_m2BC9A2CE7268F800F13F4FED914927A8FCC900B7 (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, float ___nx0, float ___ny1, float ___nz2, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/VectorFloat::normalize()
extern "C" IL2CPP_METHOD_ATTR void VectorFloat_normalize_m3243D52D8ECD75A3268BD766C0B106DD3AF6AB2D (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, const RuntimeMethod* method);
// MPU6050.MPU6050/Quaternion MPU6050.MPU6050/Quaternion::getProduct(MPU6050.MPU6050/Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * Quaternion_getProduct_m95A9DC4881F3247FD2F732B530FE2D74DADAF87E (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * ___q0, const RuntimeMethod* method);
// MPU6050.MPU6050/Quaternion MPU6050.MPU6050/Quaternion::getConjugate()
extern "C" IL2CPP_METHOD_ATTR Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * Quaternion_getConjugate_m21D088D212AE02DC7169EB16AD285CEEBD50D787 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/VectorFloat::rotate(MPU6050.MPU6050/Quaternion)
extern "C" IL2CPP_METHOD_ATTR void VectorFloat_rotate_mCAB376431DCD9BBFE9E57F5C6711D6F56C497036 (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * ___q0, const RuntimeMethod* method);
// System.Single MPU6050.MPU6050/VectorInt16::getMagnitude()
extern "C" IL2CPP_METHOD_ATTR float VectorInt16_getMagnitude_m75A5BE089EB91D08E9A1E01859347FC540AD7AC4 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/VectorInt16::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void VectorInt16__ctor_m702C9F9D39A7382823B85B3A9E90FD0A72CF5270 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, int32_t ___nx0, int32_t ___ny1, int32_t ___nz2, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050/VectorInt16::normalize()
extern "C" IL2CPP_METHOD_ATTR void VectorInt16_normalize_mF94E043692AF9BF32B165020185B157959BEB8EC (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m9885424E349D692D715FADED33BD0E2D0CEFB20F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC (int32_t p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE (float* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::getIntStatus()
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_getIntStatus_m8E1420FD1F1E18D83842B1AE62478C28298B85E9 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::resetFIFO()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_resetFIFO_m4CED87826317333FCE50EF1F2D3196B54642562F (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::getFIFOBytes(System.Byte[]&,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_getFIFOBytes_m203A25E8D7E23B7021237E61FBE070D39C2E127D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___data0, uint32_t ___length1, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::dmpGetQuaternion(MPU6050.MPU6050/Quaternion&,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetQuaternion_mB03B50B5D988F3D116ECF07AF7ECF2FA2E80EDFD (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___packet1, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::dmpGetGravity(MPU6050.MPU6050/VectorFloat&,MPU6050.MPU6050/Quaternion&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetGravity_m946B74E1871B75DFF1EE5CC9AD2E73E9CE508C74 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** ___v0, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q1, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::dmpGetAccel(MPU6050.MPU6050/VectorInt16&,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetAccel_m9F97786440B173F6F45BD35D10CD17B98D30B373 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___v0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___packet1, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::dmpGetLinearAccel(MPU6050.MPU6050/VectorInt16&,MPU6050.MPU6050/VectorInt16&,MPU6050.MPU6050/VectorFloat&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetLinearAccel_m2668559AD852F206E0FD927806EE95DE24F01F81 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___v0, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___vRaw1, VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** ___gravity2, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::dmpGetLinearAccelInWorld(MPU6050.MPU6050/VectorInt16&,MPU6050.MPU6050/VectorInt16&,MPU6050.MPU6050/Quaternion&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetLinearAccelInWorld_m02EE0C0C902A4221C1CB3A81BF5165437910FD84 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___v0, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___vReal1, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q2, const RuntimeMethod* method);
// System.Byte MPU6050.MPU6050::dmpGetYawPitchRoll(System.Single[]&,MPU6050.MPU6050/Quaternion,MPU6050.MPU6050/VectorFloat)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetYawPitchRoll_mC9209D9FD29441FA8C342E819282191155CB88A0 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** ___data0, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * ___q1, VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * ___gravity2, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MPU6050__ctor_mCD790B4F8544683A3420BEB15433A5BD890AE91A (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::InitHardware()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_InitHardware_mFF3B45D396442074236502D50705A19E80BA1D3D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::dmpInitialize()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_dmpInitialize_mD0A20062D9B704B81FEB66529C1E276821B4874E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setXGyroOffset(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setXGyroOffset_m1E9F5DFEEA8ACA3B9F669C81A27EC9C9CA04BC09 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setYGyroOffset(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setYGyroOffset_mF8485D38879E05D7FDC2CEC8C2B5D09AEC9770E4 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setZGyroOffset(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setZGyroOffset_m866CB44F560D207CB18071D4467B3D230833BFF8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setZAccelOffset(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setZAccelOffset_m8E5D372EF50E8ED4C0C30AE09B50D83164DD87A6 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::setDMPEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setDMPEnabled_m143C14E7488C2F7A0C3F918B65B8E885AA85BF52 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___enabled0, const RuntimeMethod* method);
// System.Void MPU6050.MPU6050::ischkInitErr()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_ischkInitErr_m7219118B2FE8A98F6B99C711BB38184412FADFEC (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method);
// System.String System.Byte::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Byte_ToString_m461A53F95948CC32D6646704F994C1F38DD8B263 (uint8_t* __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 MPU6050.MPU6050::readBit(System.Byte,System.Byte,System.Byte,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_readBit_mBD7E240C72D74004E89EC6ACAC937071FCED6AE8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___bitNum2, uint8_t* ___data3, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// byte b = 0;
		V_0 = (uint8_t)0;
		// int count = readByte(devAddr, regAddr, ref b);
		uint8_t L_0 = ___devAddr0;
		uint8_t L_1 = ___regAddr1;
		int32_t L_2 = MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E(__this, L_0, L_1, (uint8_t*)(&V_0), /*hidden argument*/NULL);
		// data = (byte)((int)b & (1 << (int)bitNum));
		uint8_t* L_3 = ___data3;
		uint8_t L_4 = V_0;
		uint8_t L_5 = ___bitNum2;
		*((int8_t*)L_3) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)31))))))))));
		// return count;
		return L_2;
	}
}
// System.Int32 MPU6050.MPU6050::readBits(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_readBits_mFD2B23EAB6FECA0378872B2FFA1C29DEDFFBCF03 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___bitStart2, uint8_t ___length3, uint8_t* ___data4, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// byte b = 0;
		V_0 = (uint8_t)0;
		// if ((count = readByte(devAddr, regAddr, ref b)) != 0)
		uint8_t L_0 = ___devAddr0;
		uint8_t L_1 = ___regAddr1;
		int32_t L_2 = MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E(__this, L_0, L_1, (uint8_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_003a;
		}
	}
	{
		// byte mask = (byte)(((1 << length) - 1) << (bitStart - length + 1));
		uint8_t L_4 = ___length3;
		uint8_t L_5 = ___bitStart2;
		uint8_t L_6 = ___length3;
		V_1 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31))))), (int32_t)1))<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), (int32_t)1))&(int32_t)((int32_t)31))))))));
		// b &= mask;
		uint8_t L_7 = V_0;
		uint8_t L_8 = V_1;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_7&(int32_t)L_8)))));
		// b >>= (bitStart - length + 1);
		uint8_t L_9 = V_0;
		uint8_t L_10 = ___bitStart2;
		uint8_t L_11 = ___length3;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_9>>(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)), (int32_t)1))&(int32_t)((int32_t)31))))))));
		// data = b;
		uint8_t* L_12 = ___data4;
		uint8_t L_13 = V_0;
		*((int8_t*)L_12) = (int8_t)L_13;
		G_B2_0 = G_B1_0;
	}

IL_003a:
	{
		// return count;
		return G_B2_0;
	}
}
// System.Int32 MPU6050.MPU6050::readByte(System.Byte,System.Byte,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t* ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// byte[] _b = new byte[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		// int count = readBytes(devAddr, regAddr, 1, ref _b);
		uint8_t L_1 = ___devAddr0;
		uint8_t L_2 = ___regAddr1;
		int32_t L_3 = MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656(__this, L_1, L_2, (uint8_t)1, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_0), /*hidden argument*/NULL);
		// data = _b[0];
		uint8_t* L_4 = ___data2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*((int8_t*)L_4) = (int8_t)L_7;
		// return count;
		return L_3;
	}
}
// System.Int32 MPU6050.MPU6050::readBytes(System.Byte,System.Byte,System.Byte,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___length2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___data3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// byte[] values = new byte[length];
		uint8_t L_0 = ___length2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// byte[] buffer = new byte[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_2;
		// buffer[0] = regAddr;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_1;
		uint8_t L_4 = ___regAddr1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		// _mpu6050Device.WriteRead(buffer, values);
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_5 = __this->get__mpu6050Device_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		NullCheck(L_5);
		I2cDevice_WriteRead_m5F827A985ED324242E9C97FD2BDECF73581D8706(L_5, L_6, L_7, /*hidden argument*/NULL);
		// for(int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_002f;
	}

IL_0023:
	{
		// data[i] = values[i];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_8 = ___data3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_8);
		int32_t L_10 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)L_14);
		// for(int i = 0; i < length; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_002f:
	{
		// for(int i = 0; i < length; i++)
		int32_t L_16 = V_2;
		uint8_t L_17 = ___length2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0023;
		}
	}
	{
		// return length;
		uint8_t L_18 = ___length2;
		return L_18;
	}
}
// System.Boolean MPU6050.MPU6050::writeBit(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___bitNum2, uint8_t ___data3, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// byte b = 0;
		V_0 = (uint8_t)0;
		// readByte(devAddr, regAddr, ref b);
		uint8_t L_0 = ___devAddr0;
		uint8_t L_1 = ___regAddr1;
		MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E(__this, L_0, L_1, (uint8_t*)(&V_0), /*hidden argument*/NULL);
		// if (data != 0)
		uint8_t L_2 = ___data3;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// b = (byte)(b | (1 << bitNum));
		uint8_t L_3 = V_0;
		uint8_t L_4 = ___bitNum2;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31))))))))));
		// }
		goto IL_0028;
	}

IL_001d:
	{
		// b = (byte)(b & ~(1 << bitNum));
		uint8_t L_5 = V_0;
		uint8_t L_6 = ___bitNum2;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31))))))))))));
	}

IL_0028:
	{
		// return writeByte(devAddr, regAddr, b);
		uint8_t L_7 = ___devAddr0;
		uint8_t L_8 = ___regAddr1;
		uint8_t L_9 = V_0;
		bool L_10 = MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean MPU6050.MPU6050::writeBits(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___bitStart2, uint8_t ___length3, uint8_t ___data4, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		// byte b = 0;
		V_0 = (uint8_t)0;
		// if (readByte(devAddr, regAddr, ref b) != 0)
		uint8_t L_0 = ___devAddr0;
		uint8_t L_1 = ___regAddr1;
		int32_t L_2 = MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E(__this, L_0, L_1, (uint8_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// byte mask = (byte)(((1 << length) - 1) << (bitStart - length + 1));
		uint8_t L_3 = ___length3;
		uint8_t L_4 = ___bitStart2;
		uint8_t L_5 = ___length3;
		V_1 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))), (int32_t)1))<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)1))&(int32_t)((int32_t)31))))))));
		// data <<= (bitStart - length + 1); // shift data into correct position
		uint8_t L_6 = ___data4;
		uint8_t L_7 = ___bitStart2;
		uint8_t L_8 = ___length3;
		___data4 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_6<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)), (int32_t)1))&(int32_t)((int32_t)31))))))));
		// data &= mask; // zero all non-important bits in data
		uint8_t L_9 = ___data4;
		uint8_t L_10 = V_1;
		___data4 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_9&(int32_t)L_10)))));
		// b &= (byte)(~(mask)); // zero all important bits in existing byte
		uint8_t L_11 = V_0;
		uint8_t L_12 = V_1;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_11&(int32_t)(((int32_t)((uint8_t)((~L_12))))))))));
		// b |= data; // combine data with existing byte
		uint8_t L_13 = V_0;
		uint8_t L_14 = ___data4;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_13|(int32_t)L_14)))));
		// return writeByte(devAddr, regAddr, b);
		uint8_t L_15 = ___devAddr0;
		uint8_t L_16 = ___regAddr1;
		uint8_t L_17 = V_0;
		bool L_18 = MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0050:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean MPU6050.MPU6050::writeByte(System.Byte,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// byte[] buffer = new byte[2];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		// buffer[0] = regAddr;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		uint8_t L_2 = ___regAddr1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		// buffer[1] = data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		uint8_t L_4 = ___data2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_4);
		// _mpu6050Device.Write(buffer);
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_5 = __this->get__mpu6050Device_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		NullCheck(L_5);
		I2cDevice_Write_mB17B14EA9E0D5CF100FE5D428681CE9FE7BB7012(L_5, L_6, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean MPU6050.MPU6050::writeWord(System.Byte,System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeWord_mF762D68534B1D5128312101CDEF723ECC400CE2B (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, int32_t ___data2, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, regAddr, (byte)(data >> 8));
		uint8_t L_0 = ___devAddr0;
		uint8_t L_1 = ___regAddr1;
		int32_t L_2 = ___data2;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, L_1, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2>>(int32_t)8))))), /*hidden argument*/NULL);
		// writeByte(devAddr, regAddr, (byte)(data & 0x00FF));
		uint8_t L_3 = ___devAddr0;
		uint8_t L_4 = ___regAddr1;
		int32_t L_5 = ___data2;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_3, L_4, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean MPU6050.MPU6050::writeBytes(System.Byte,System.Byte,System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeBytes_m97D725D52BF91749BCB0F4871E37F5AFA9ED005C (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___devAddr0, uint8_t ___regAddr1, uint8_t ___length2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// writeByte(devAddr, regAddr, data[i]);
		uint8_t L_0 = ___devAddr0;
		uint8_t L_1 = ___regAddr1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data3;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, L_1, L_5, /*hidden argument*/NULL);
		// for(int i = 0; i < length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0015:
	{
		// for(int i = 0; i < length; i++)
		int32_t L_7 = V_0;
		uint8_t L_8 = ___length2;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void MPU6050.MPU6050::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MPU6050__ctor_mCD790B4F8544683A3420BEB15433A5BD890AE91A (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050__ctor_mCD790B4F8544683A3420BEB15433A5BD890AE91A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int timeout = 1000; //(ms) I2CDEV_DEFAULT_READ_TIMEOUT;
		__this->set_timeout_0(((int32_t)1000));
		// public String mpu6050Msg = "";
		__this->set_mpu6050Msg_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// byte[] dmpMemory = new byte[]{
		//     // bank 0, 256 bytes
		//     0xFB, 0x00, 0x00, 0x3E, 0x00, 0x0B, 0x00, 0x36, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00,
		//     0x00, 0x65, 0x00, 0x54, 0xFF, 0xEF, 0x00, 0x00, 0xFA, 0x80, 0x00, 0x0B, 0x12, 0x82, 0x00, 0x01,
		//     0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x28, 0x00, 0x00, 0xFF, 0xFF, 0x45, 0x81, 0xFF, 0xFF, 0xFA, 0x72, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x03, 0xE8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x7F, 0xFF, 0xFF, 0xFE, 0x80, 0x01,
		//     0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x3E, 0x03, 0x30, 0x40, 0x00, 0x00, 0x00, 0x02, 0xCA, 0xE3, 0x09, 0x3E, 0x80, 0x00, 0x00,
		//     0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
		//     0x41, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x2A, 0x00, 0x00, 0x16, 0x55, 0x00, 0x00, 0x21, 0x82,
		//     0xFD, 0x87, 0x26, 0x50, 0xFD, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x05, 0x80, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
		//     0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x6F, 0x00, 0x02, 0x65, 0x32, 0x00, 0x00, 0x5E, 0xC0,
		//     0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0xFB, 0x8C, 0x6F, 0x5D, 0xFD, 0x5D, 0x08, 0xD9, 0x00, 0x7C, 0x73, 0x3B, 0x00, 0x6C, 0x12, 0xCC,
		//     0x32, 0x00, 0x13, 0x9D, 0x32, 0x00, 0xD0, 0xD6, 0x32, 0x00, 0x08, 0x00, 0x40, 0x00, 0x01, 0xF4,
		//     0xFF, 0xE6, 0x80, 0x79, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0xD6, 0x00, 0x00, 0x27, 0x10,
		// 
		//     // bank 1, 256 bytes
		//     0xFB, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0xFA, 0x36, 0xFF, 0xBC, 0x30, 0x8E, 0x00, 0x05, 0xFB, 0xF0, 0xFF, 0xD9, 0x5B, 0xC8,
		//     0xFF, 0xD0, 0x9A, 0xBE, 0x00, 0x00, 0x10, 0xA9, 0xFF, 0xF4, 0x1E, 0xB2, 0x00, 0xCE, 0xBB, 0xF7,
		//     0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, 0x0C,
		//     0xFF, 0xC2, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0xCF, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x14,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x03, 0x3F, 0x68, 0xB6, 0x79, 0x35, 0x28, 0xBC, 0xC6, 0x7E, 0xD1, 0x6C,
		//     0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB2, 0x6A, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x30,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x25, 0x4D, 0x00, 0x2F, 0x70, 0x6D, 0x00, 0x00, 0x05, 0xAE, 0x00, 0x0C, 0x02, 0xD0,
		// 
		//     // bank 2, 256 bytes
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x00, 0x54, 0xFF, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x01, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0xFF, 0xEF, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
		//     0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		// 
		//     // bank 3, 256 bytes
		//     0xD8, 0xDC, 0xBA, 0xA2, 0xF1, 0xDE, 0xB2, 0xB8, 0xB4, 0xA8, 0x81, 0x91, 0xF7, 0x4A, 0x90, 0x7F,
		//     0x91, 0x6A, 0xF3, 0xF9, 0xDB, 0xA8, 0xF9, 0xB0, 0xBA, 0xA0, 0x80, 0xF2, 0xCE, 0x81, 0xF3, 0xC2,
		//     0xF1, 0xC1, 0xF2, 0xC3, 0xF3, 0xCC, 0xA2, 0xB2, 0x80, 0xF1, 0xC6, 0xD8, 0x80, 0xBA, 0xA7, 0xDF,
		//     0xDF, 0xDF, 0xF2, 0xA7, 0xC3, 0xCB, 0xC5, 0xB6, 0xF0, 0x87, 0xA2, 0x94, 0x24, 0x48, 0x70, 0x3C,
		//     0x95, 0x40, 0x68, 0x34, 0x58, 0x9B, 0x78, 0xA2, 0xF1, 0x83, 0x92, 0x2D, 0x55, 0x7D, 0xD8, 0xB1,
		//     0xB4, 0xB8, 0xA1, 0xD0, 0x91, 0x80, 0xF2, 0x70, 0xF3, 0x70, 0xF2, 0x7C, 0x80, 0xA8, 0xF1, 0x01,
		//     0xB0, 0x98, 0x87, 0xD9, 0x43, 0xD8, 0x86, 0xC9, 0x88, 0xBA, 0xA1, 0xF2, 0x0E, 0xB8, 0x97, 0x80,
		//     0xF1, 0xA9, 0xDF, 0xDF, 0xDF, 0xAA, 0xDF, 0xDF, 0xDF, 0xF2, 0xAA, 0xC5, 0xCD, 0xC7, 0xA9, 0x0C,
		//     0xC9, 0x2C, 0x97, 0x97, 0x97, 0x97, 0xF1, 0xA9, 0x89, 0x26, 0x46, 0x66, 0xB0, 0xB4, 0xBA, 0x80,
		//     0xAC, 0xDE, 0xF2, 0xCA, 0xF1, 0xB2, 0x8C, 0x02, 0xA9, 0xB6, 0x98, 0x00, 0x89, 0x0E, 0x16, 0x1E,
		//     0xB8, 0xA9, 0xB4, 0x99, 0x2C, 0x54, 0x7C, 0xB0, 0x8A, 0xA8, 0x96, 0x36, 0x56, 0x76, 0xF1, 0xB9,
		//     0xAF, 0xB4, 0xB0, 0x83, 0xC0, 0xB8, 0xA8, 0x97, 0x11, 0xB1, 0x8F, 0x98, 0xB9, 0xAF, 0xF0, 0x24,
		//     0x08, 0x44, 0x10, 0x64, 0x18, 0xF1, 0xA3, 0x29, 0x55, 0x7D, 0xAF, 0x83, 0xB5, 0x93, 0xAF, 0xF0,
		//     0x00, 0x28, 0x50, 0xF1, 0xA3, 0x86, 0x9F, 0x61, 0xA6, 0xDA, 0xDE, 0xDF, 0xD9, 0xFA, 0xA3, 0x86,
		//     0x96, 0xDB, 0x31, 0xA6, 0xD9, 0xF8, 0xDF, 0xBA, 0xA6, 0x8F, 0xC2, 0xC5, 0xC7, 0xB2, 0x8C, 0xC1,
		//     0xB8, 0xA2, 0xDF, 0xDF, 0xDF, 0xA3, 0xDF, 0xDF, 0xDF, 0xD8, 0xD8, 0xF1, 0xB8, 0xA8, 0xB2, 0x86,
		// 
		//     // bank 4, 256 bytes
		//     0xB4, 0x98, 0x0D, 0x35, 0x5D, 0xB8, 0xAA, 0x98, 0xB0, 0x87, 0x2D, 0x35, 0x3D, 0xB2, 0xB6, 0xBA,
		//     0xAF, 0x8C, 0x96, 0x19, 0x8F, 0x9F, 0xA7, 0x0E, 0x16, 0x1E, 0xB4, 0x9A, 0xB8, 0xAA, 0x87, 0x2C,
		//     0x54, 0x7C, 0xB9, 0xA3, 0xDE, 0xDF, 0xDF, 0xA3, 0xB1, 0x80, 0xF2, 0xC4, 0xCD, 0xC9, 0xF1, 0xB8,
		//     0xA9, 0xB4, 0x99, 0x83, 0x0D, 0x35, 0x5D, 0x89, 0xB9, 0xA3, 0x2D, 0x55, 0x7D, 0xB5, 0x93, 0xA3,
		//     0x0E, 0x16, 0x1E, 0xA9, 0x2C, 0x54, 0x7C, 0xB8, 0xB4, 0xB0, 0xF1, 0x97, 0x83, 0xA8, 0x11, 0x84,
		//     0xA5, 0x09, 0x98, 0xA3, 0x83, 0xF0, 0xDA, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0xD8, 0xF1, 0xA5,
		//     0x29, 0x55, 0x7D, 0xA5, 0x85, 0x95, 0x02, 0x1A, 0x2E, 0x3A, 0x56, 0x5A, 0x40, 0x48, 0xF9, 0xF3,
		//     0xA3, 0xD9, 0xF8, 0xF0, 0x98, 0x83, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0x97, 0x82, 0xA8, 0xF1,
		//     0x11, 0xF0, 0x98, 0xA2, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0xDA, 0xF3, 0xDE, 0xD8, 0x83, 0xA5,
		//     0x94, 0x01, 0xD9, 0xA3, 0x02, 0xF1, 0xA2, 0xC3, 0xC5, 0xC7, 0xD8, 0xF1, 0x84, 0x92, 0xA2, 0x4D,
		//     0xDA, 0x2A, 0xD8, 0x48, 0x69, 0xD9, 0x2A, 0xD8, 0x68, 0x55, 0xDA, 0x32, 0xD8, 0x50, 0x71, 0xD9,
		//     0x32, 0xD8, 0x70, 0x5D, 0xDA, 0x3A, 0xD8, 0x58, 0x79, 0xD9, 0x3A, 0xD8, 0x78, 0x93, 0xA3, 0x4D,
		//     0xDA, 0x2A, 0xD8, 0x48, 0x69, 0xD9, 0x2A, 0xD8, 0x68, 0x55, 0xDA, 0x32, 0xD8, 0x50, 0x71, 0xD9,
		//     0x32, 0xD8, 0x70, 0x5D, 0xDA, 0x3A, 0xD8, 0x58, 0x79, 0xD9, 0x3A, 0xD8, 0x78, 0xA8, 0x8A, 0x9A,
		//     0xF0, 0x28, 0x50, 0x78, 0x9E, 0xF3, 0x88, 0x18, 0xF1, 0x9F, 0x1D, 0x98, 0xA8, 0xD9, 0x08, 0xD8,
		//     0xC8, 0x9F, 0x12, 0x9E, 0xF3, 0x15, 0xA8, 0xDA, 0x12, 0x10, 0xD8, 0xF1, 0xAF, 0xC8, 0x97, 0x87,
		// 
		//     // bank 5, 256 bytes
		//     0x34, 0xB5, 0xB9, 0x94, 0xA4, 0x21, 0xF3, 0xD9, 0x22, 0xD8, 0xF2, 0x2D, 0xF3, 0xD9, 0x2A, 0xD8,
		//     0xF2, 0x35, 0xF3, 0xD9, 0x32, 0xD8, 0x81, 0xA4, 0x60, 0x60, 0x61, 0xD9, 0x61, 0xD8, 0x6C, 0x68,
		//     0x69, 0xD9, 0x69, 0xD8, 0x74, 0x70, 0x71, 0xD9, 0x71, 0xD8, 0xB1, 0xA3, 0x84, 0x19, 0x3D, 0x5D,
		//     0xA3, 0x83, 0x1A, 0x3E, 0x5E, 0x93, 0x10, 0x30, 0x81, 0x10, 0x11, 0xB8, 0xB0, 0xAF, 0x8F, 0x94,
		//     0xF2, 0xDA, 0x3E, 0xD8, 0xB4, 0x9A, 0xA8, 0x87, 0x29, 0xDA, 0xF8, 0xD8, 0x87, 0x9A, 0x35, 0xDA,
		//     0xF8, 0xD8, 0x87, 0x9A, 0x3D, 0xDA, 0xF8, 0xD8, 0xB1, 0xB9, 0xA4, 0x98, 0x85, 0x02, 0x2E, 0x56,
		//     0xA5, 0x81, 0x00, 0x0C, 0x14, 0xA3, 0x97, 0xB0, 0x8A, 0xF1, 0x2D, 0xD9, 0x28, 0xD8, 0x4D, 0xD9,
		//     0x48, 0xD8, 0x6D, 0xD9, 0x68, 0xD8, 0xB1, 0x84, 0x0D, 0xDA, 0x0E, 0xD8, 0xA3, 0x29, 0x83, 0xDA,
		//     0x2C, 0x0E, 0xD8, 0xA3, 0x84, 0x49, 0x83, 0xDA, 0x2C, 0x4C, 0x0E, 0xD8, 0xB8, 0xB0, 0xA8, 0x8A,
		//     0x9A, 0xF5, 0x20, 0xAA, 0xDA, 0xDF, 0xD8, 0xA8, 0x40, 0xAA, 0xD0, 0xDA, 0xDE, 0xD8, 0xA8, 0x60,
		//     0xAA, 0xDA, 0xD0, 0xDF, 0xD8, 0xF1, 0x97, 0x86, 0xA8, 0x31, 0x9B, 0x06, 0x99, 0x07, 0xAB, 0x97,
		//     0x28, 0x88, 0x9B, 0xF0, 0x0C, 0x20, 0x14, 0x40, 0xB8, 0xB0, 0xB4, 0xA8, 0x8C, 0x9C, 0xF0, 0x04,
		//     0x28, 0x51, 0x79, 0x1D, 0x30, 0x14, 0x38, 0xB2, 0x82, 0xAB, 0xD0, 0x98, 0x2C, 0x50, 0x50, 0x78,
		//     0x78, 0x9B, 0xF1, 0x1A, 0xB0, 0xF0, 0x8A, 0x9C, 0xA8, 0x29, 0x51, 0x79, 0x8B, 0x29, 0x51, 0x79,
		//     0x8A, 0x24, 0x70, 0x59, 0x8B, 0x20, 0x58, 0x71, 0x8A, 0x44, 0x69, 0x38, 0x8B, 0x39, 0x40, 0x68,
		//     0x8A, 0x64, 0x48, 0x31, 0x8B, 0x30, 0x49, 0x60, 0xA5, 0x88, 0x20, 0x09, 0x71, 0x58, 0x44, 0x68,
		// 
		//     // bank 6, 256 bytes
		//     0x11, 0x39, 0x64, 0x49, 0x30, 0x19, 0xF1, 0xAC, 0x00, 0x2C, 0x54, 0x7C, 0xF0, 0x8C, 0xA8, 0x04,
		//     0x28, 0x50, 0x78, 0xF1, 0x88, 0x97, 0x26, 0xA8, 0x59, 0x98, 0xAC, 0x8C, 0x02, 0x26, 0x46, 0x66,
		//     0xF0, 0x89, 0x9C, 0xA8, 0x29, 0x51, 0x79, 0x24, 0x70, 0x59, 0x44, 0x69, 0x38, 0x64, 0x48, 0x31,
		//     0xA9, 0x88, 0x09, 0x20, 0x59, 0x70, 0xAB, 0x11, 0x38, 0x40, 0x69, 0xA8, 0x19, 0x31, 0x48, 0x60,
		//     0x8C, 0xA8, 0x3C, 0x41, 0x5C, 0x20, 0x7C, 0x00, 0xF1, 0x87, 0x98, 0x19, 0x86, 0xA8, 0x6E, 0x76,
		//     0x7E, 0xA9, 0x99, 0x88, 0x2D, 0x55, 0x7D, 0x9E, 0xB9, 0xA3, 0x8A, 0x22, 0x8A, 0x6E, 0x8A, 0x56,
		//     0x8A, 0x5E, 0x9F, 0xB1, 0x83, 0x06, 0x26, 0x46, 0x66, 0x0E, 0x2E, 0x4E, 0x6E, 0x9D, 0xB8, 0xAD,
		//     0x00, 0x2C, 0x54, 0x7C, 0xF2, 0xB1, 0x8C, 0xB4, 0x99, 0xB9, 0xA3, 0x2D, 0x55, 0x7D, 0x81, 0x91,
		//     0xAC, 0x38, 0xAD, 0x3A, 0xB5, 0x83, 0x91, 0xAC, 0x2D, 0xD9, 0x28, 0xD8, 0x4D, 0xD9, 0x48, 0xD8,
		//     0x6D, 0xD9, 0x68, 0xD8, 0x8C, 0x9D, 0xAE, 0x29, 0xD9, 0x04, 0xAE, 0xD8, 0x51, 0xD9, 0x04, 0xAE,
		//     0xD8, 0x79, 0xD9, 0x04, 0xD8, 0x81, 0xF3, 0x9D, 0xAD, 0x00, 0x8D, 0xAE, 0x19, 0x81, 0xAD, 0xD9,
		//     0x01, 0xD8, 0xF2, 0xAE, 0xDA, 0x26, 0xD8, 0x8E, 0x91, 0x29, 0x83, 0xA7, 0xD9, 0xAD, 0xAD, 0xAD,
		//     0xAD, 0xF3, 0x2A, 0xD8, 0xD8, 0xF1, 0xB0, 0xAC, 0x89, 0x91, 0x3E, 0x5E, 0x76, 0xF3, 0xAC, 0x2E,
		//     0x2E, 0xF1, 0xB1, 0x8C, 0x5A, 0x9C, 0xAC, 0x2C, 0x28, 0x28, 0x28, 0x9C, 0xAC, 0x30, 0x18, 0xA8,
		//     0x98, 0x81, 0x28, 0x34, 0x3C, 0x97, 0x24, 0xA7, 0x28, 0x34, 0x3C, 0x9C, 0x24, 0xF2, 0xB0, 0x89,
		//     0xAC, 0x91, 0x2C, 0x4C, 0x6C, 0x8A, 0x9B, 0x2D, 0xD9, 0xD8, 0xD8, 0x51, 0xD9, 0xD8, 0xD8, 0x79,
		// 
		//     // bank 7, 138 bytes (remainder)
		//     0xD9, 0xD8, 0xD8, 0xF1, 0x9E, 0x88, 0xA3, 0x31, 0xDA, 0xD8, 0xD8, 0x91, 0x2D, 0xD9, 0x28, 0xD8,
		//     0x4D, 0xD9, 0x48, 0xD8, 0x6D, 0xD9, 0x68, 0xD8, 0xB1, 0x83, 0x93, 0x35, 0x3D, 0x80, 0x25, 0xDA,
		//     0xD8, 0xD8, 0x85, 0x69, 0xDA, 0xD8, 0xD8, 0xB4, 0x93, 0x81, 0xA3, 0x28, 0x34, 0x3C, 0xF3, 0xAB,
		//     0x8B, 0xF8, 0xA3, 0x91, 0xB6, 0x09, 0xB4, 0xD9, 0xAB, 0xDE, 0xFA, 0xB0, 0x87, 0x9C, 0xB9, 0xA3,
		//     0xDD, 0xF1, 0xA3, 0xA3, 0xA3, 0xA3, 0x95, 0xF1, 0xA3, 0xA3, 0xA3, 0x9D, 0xF1, 0xA3, 0xA3, 0xA3,
		//     0xA3, 0xF2, 0xA3, 0xB4, 0x90, 0x80, 0xF2, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3,
		//     0xA3, 0xB2, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xB0, 0x87, 0xB5, 0x99, 0xF1, 0xA3, 0xA3, 0xA3,
		//     0x98, 0xF1, 0xA3, 0xA3, 0xA3, 0xA3, 0x97, 0xA3, 0xA3, 0xA3, 0xA3, 0xF3, 0x9B, 0xA3, 0xA3, 0xDC,
		//     0xB9, 0xA7, 0xF1, 0x26, 0x26, 0x26, 0xD8, 0xD8, 0xFF
		// };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1929));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_dmpMemory_12(L_1);
		// byte[] dmpConfig = new byte[]{
		// //  BANK    OFFSET  LENGTH  [DATA]
		//     0x03,   0x7B,   0x03,   0x4C, 0xCD, 0x6C,         // FCFG_1 inv_set_gyro_calibration
		//     0x03,   0xAB,   0x03,   0x36, 0x56, 0x76,         // FCFG_3 inv_set_gyro_calibration
		//     0x00,   0x68,   0x04,   0x02, 0xCB, 0x47, 0xA2,   // D_0_104 inv_set_gyro_calibration
		//     0x02,   0x18,   0x04,   0x00, 0x05, 0x8B, 0xC1,   // D_0_24 inv_set_gyro_calibration
		//     0x01,   0x0C,   0x04,   0x00, 0x00, 0x00, 0x00,   // D_1_152 inv_set_accel_calibration
		//     0x03,   0x7F,   0x06,   0x0C, 0xC9, 0x2C, 0x97, 0x97, 0x97, // FCFG_2 inv_set_accel_calibration
		//     0x03,   0x89,   0x03,   0x26, 0x46, 0x66,         // FCFG_7 inv_set_accel_calibration
		//     0x00,   0x6C,   0x02,   0x20, 0x00,               // D_0_108 inv_set_accel_calibration
		//     0x02,   0x40,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_00 inv_set_compass_calibration
		//     0x02,   0x44,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_01
		//     0x02,   0x48,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_02
		//     0x02,   0x4C,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_10
		//     0x02,   0x50,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_11
		//     0x02,   0x54,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_12
		//     0x02,   0x58,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_20
		//     0x02,   0x5C,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_21
		//     0x02,   0xBC,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_22
		//     0x01,   0xEC,   0x04,   0x00, 0x00, 0x40, 0x00,   // D_1_236 inv_apply_endian_accel
		//     0x03,   0x7F,   0x06,   0x0C, 0xC9, 0x2C, 0x97, 0x97, 0x97, // FCFG_2 inv_set_mpu_sensors
		//     0x04,   0x02,   0x03,   0x0D, 0x35, 0x5D,         // CFG_MOTION_BIAS inv_turn_on_bias_from_no_motion
		//     0x04,   0x09,   0x04,   0x87, 0x2D, 0x35, 0x3D,   // FCFG_5 inv_set_bias_update
		//     0x00,   0xA3,   0x01,   0x00,                     // D_0_163 inv_set_dead_zone
		//                  // SPECIAL 0x01 = enable interrupts
		//     0x00,   0x00,   0x00,   0x01, // SET INT_ENABLE at i=22, SPECIAL INSTRUCTION
		//     0x07,   0x86,   0x01,   0xFE,                     // CFG_6 inv_set_fifo_interupt
		//     0x07,   0x41,   0x05,   0xF1, 0x20, 0x28, 0x30, 0x38, // CFG_8 inv_send_quaternion
		//     0x07,   0x7E,   0x01,   0x30,                     // CFG_16 inv_set_footer
		//     0x07,   0x46,   0x01,   0x9A,                     // CFG_GYRO_SOURCE inv_send_gyro
		//     0x07,   0x47,   0x04,   0xF1, 0x28, 0x30, 0x38,   // CFG_9 inv_send_gyro . inv_construct3_fifo
		//     0x07,   0x6C,   0x04,   0xF1, 0x28, 0x30, 0x38,   // CFG_12 inv_send_accel . inv_construct3_fifo
		//     0x02,   0x16,   0x02,   0x00, 0x01                // D_0_22 inv_set_fifo_rate
		// 
		//     // This very last 0x01 WAS a 0x09, which drops the FIFO rate down to 20 Hz. 0x07 is 25 Hz,
		//     // 0x01 is 100Hz. Going faster than 100Hz (0x00=200Hz) tends to result in very noisy data.
		//     // DMP output frequency is calculated easily using this equation: (200Hz / (1 + value))
		// 
		//     // It is important to make sure the host processor can keep up with reading and processing
		//     // the FIFO output at the desired rate. Handling FIFO overflow cleanly is also a good idea.
		// };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____200E94B060457673F15561C06F7673BCDBCCDBED_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		__this->set_dmpConfig_13(L_4);
		// byte[] dmpUpdates = new byte[]{
		//     0x01,   0xB2,   0x02,   0xFF, 0xFF,
		//     0x01,   0x90,   0x04,   0x09, 0x23, 0xA1, 0x35,
		//     0x01,   0x6A,   0x02,   0x06, 0x00,
		//     0x01,   0x60,   0x08,   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00,   0x60,   0x04,   0x40, 0x00, 0x00, 0x00,
		//     0x01,   0x62,   0x02,   0x00, 0x00,
		//     0x00,   0x60,   0x04,   0x00, 0x40, 0x00, 0x00
		// };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)47));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____924761D6550FD264C145DBBC4B199DDB7A38A1D2_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		__this->set_dmpUpdates_14(L_7);
		// byte[] dmpPacketBuffer = new byte[64];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->set_dmpPacketBuffer_351(L_9);
		// byte[] buffer = new byte[14];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		__this->set_buffer_354(L_10);
		// public MPU6050() {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// devAddr = MPU6050_DEFAULT_ADDRESS;
		__this->set_devAddr_353((uint8_t)((int32_t)104));
		// mpu6050Msg = "\n";
		__this->set_mpu6050Msg_1(_stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		// isInitErr = false;
		__this->set_isInitErr_2((bool)0);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::.ctor(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050__ctor_m15C85DD41BDB44E19BE1B9E89E8C9A0828026D80 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___address0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050__ctor_m15C85DD41BDB44E19BE1B9E89E8C9A0828026D80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int timeout = 1000; //(ms) I2CDEV_DEFAULT_READ_TIMEOUT;
		__this->set_timeout_0(((int32_t)1000));
		// public String mpu6050Msg = "";
		__this->set_mpu6050Msg_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// byte[] dmpMemory = new byte[]{
		//     // bank 0, 256 bytes
		//     0xFB, 0x00, 0x00, 0x3E, 0x00, 0x0B, 0x00, 0x36, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00,
		//     0x00, 0x65, 0x00, 0x54, 0xFF, 0xEF, 0x00, 0x00, 0xFA, 0x80, 0x00, 0x0B, 0x12, 0x82, 0x00, 0x01,
		//     0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x28, 0x00, 0x00, 0xFF, 0xFF, 0x45, 0x81, 0xFF, 0xFF, 0xFA, 0x72, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x03, 0xE8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x7F, 0xFF, 0xFF, 0xFE, 0x80, 0x01,
		//     0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x3E, 0x03, 0x30, 0x40, 0x00, 0x00, 0x00, 0x02, 0xCA, 0xE3, 0x09, 0x3E, 0x80, 0x00, 0x00,
		//     0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
		//     0x41, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x2A, 0x00, 0x00, 0x16, 0x55, 0x00, 0x00, 0x21, 0x82,
		//     0xFD, 0x87, 0x26, 0x50, 0xFD, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x05, 0x80, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
		//     0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x6F, 0x00, 0x02, 0x65, 0x32, 0x00, 0x00, 0x5E, 0xC0,
		//     0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0xFB, 0x8C, 0x6F, 0x5D, 0xFD, 0x5D, 0x08, 0xD9, 0x00, 0x7C, 0x73, 0x3B, 0x00, 0x6C, 0x12, 0xCC,
		//     0x32, 0x00, 0x13, 0x9D, 0x32, 0x00, 0xD0, 0xD6, 0x32, 0x00, 0x08, 0x00, 0x40, 0x00, 0x01, 0xF4,
		//     0xFF, 0xE6, 0x80, 0x79, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0xD6, 0x00, 0x00, 0x27, 0x10,
		// 
		//     // bank 1, 256 bytes
		//     0xFB, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0xFA, 0x36, 0xFF, 0xBC, 0x30, 0x8E, 0x00, 0x05, 0xFB, 0xF0, 0xFF, 0xD9, 0x5B, 0xC8,
		//     0xFF, 0xD0, 0x9A, 0xBE, 0x00, 0x00, 0x10, 0xA9, 0xFF, 0xF4, 0x1E, 0xB2, 0x00, 0xCE, 0xBB, 0xF7,
		//     0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, 0x0C,
		//     0xFF, 0xC2, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0xCF, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x14,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x03, 0x3F, 0x68, 0xB6, 0x79, 0x35, 0x28, 0xBC, 0xC6, 0x7E, 0xD1, 0x6C,
		//     0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB2, 0x6A, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x30,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x25, 0x4D, 0x00, 0x2F, 0x70, 0x6D, 0x00, 0x00, 0x05, 0xAE, 0x00, 0x0C, 0x02, 0xD0,
		// 
		//     // bank 2, 256 bytes
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x00, 0x54, 0xFF, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x01, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0xFF, 0xEF, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
		//     0x00, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		// 
		//     // bank 3, 256 bytes
		//     0xD8, 0xDC, 0xBA, 0xA2, 0xF1, 0xDE, 0xB2, 0xB8, 0xB4, 0xA8, 0x81, 0x91, 0xF7, 0x4A, 0x90, 0x7F,
		//     0x91, 0x6A, 0xF3, 0xF9, 0xDB, 0xA8, 0xF9, 0xB0, 0xBA, 0xA0, 0x80, 0xF2, 0xCE, 0x81, 0xF3, 0xC2,
		//     0xF1, 0xC1, 0xF2, 0xC3, 0xF3, 0xCC, 0xA2, 0xB2, 0x80, 0xF1, 0xC6, 0xD8, 0x80, 0xBA, 0xA7, 0xDF,
		//     0xDF, 0xDF, 0xF2, 0xA7, 0xC3, 0xCB, 0xC5, 0xB6, 0xF0, 0x87, 0xA2, 0x94, 0x24, 0x48, 0x70, 0x3C,
		//     0x95, 0x40, 0x68, 0x34, 0x58, 0x9B, 0x78, 0xA2, 0xF1, 0x83, 0x92, 0x2D, 0x55, 0x7D, 0xD8, 0xB1,
		//     0xB4, 0xB8, 0xA1, 0xD0, 0x91, 0x80, 0xF2, 0x70, 0xF3, 0x70, 0xF2, 0x7C, 0x80, 0xA8, 0xF1, 0x01,
		//     0xB0, 0x98, 0x87, 0xD9, 0x43, 0xD8, 0x86, 0xC9, 0x88, 0xBA, 0xA1, 0xF2, 0x0E, 0xB8, 0x97, 0x80,
		//     0xF1, 0xA9, 0xDF, 0xDF, 0xDF, 0xAA, 0xDF, 0xDF, 0xDF, 0xF2, 0xAA, 0xC5, 0xCD, 0xC7, 0xA9, 0x0C,
		//     0xC9, 0x2C, 0x97, 0x97, 0x97, 0x97, 0xF1, 0xA9, 0x89, 0x26, 0x46, 0x66, 0xB0, 0xB4, 0xBA, 0x80,
		//     0xAC, 0xDE, 0xF2, 0xCA, 0xF1, 0xB2, 0x8C, 0x02, 0xA9, 0xB6, 0x98, 0x00, 0x89, 0x0E, 0x16, 0x1E,
		//     0xB8, 0xA9, 0xB4, 0x99, 0x2C, 0x54, 0x7C, 0xB0, 0x8A, 0xA8, 0x96, 0x36, 0x56, 0x76, 0xF1, 0xB9,
		//     0xAF, 0xB4, 0xB0, 0x83, 0xC0, 0xB8, 0xA8, 0x97, 0x11, 0xB1, 0x8F, 0x98, 0xB9, 0xAF, 0xF0, 0x24,
		//     0x08, 0x44, 0x10, 0x64, 0x18, 0xF1, 0xA3, 0x29, 0x55, 0x7D, 0xAF, 0x83, 0xB5, 0x93, 0xAF, 0xF0,
		//     0x00, 0x28, 0x50, 0xF1, 0xA3, 0x86, 0x9F, 0x61, 0xA6, 0xDA, 0xDE, 0xDF, 0xD9, 0xFA, 0xA3, 0x86,
		//     0x96, 0xDB, 0x31, 0xA6, 0xD9, 0xF8, 0xDF, 0xBA, 0xA6, 0x8F, 0xC2, 0xC5, 0xC7, 0xB2, 0x8C, 0xC1,
		//     0xB8, 0xA2, 0xDF, 0xDF, 0xDF, 0xA3, 0xDF, 0xDF, 0xDF, 0xD8, 0xD8, 0xF1, 0xB8, 0xA8, 0xB2, 0x86,
		// 
		//     // bank 4, 256 bytes
		//     0xB4, 0x98, 0x0D, 0x35, 0x5D, 0xB8, 0xAA, 0x98, 0xB0, 0x87, 0x2D, 0x35, 0x3D, 0xB2, 0xB6, 0xBA,
		//     0xAF, 0x8C, 0x96, 0x19, 0x8F, 0x9F, 0xA7, 0x0E, 0x16, 0x1E, 0xB4, 0x9A, 0xB8, 0xAA, 0x87, 0x2C,
		//     0x54, 0x7C, 0xB9, 0xA3, 0xDE, 0xDF, 0xDF, 0xA3, 0xB1, 0x80, 0xF2, 0xC4, 0xCD, 0xC9, 0xF1, 0xB8,
		//     0xA9, 0xB4, 0x99, 0x83, 0x0D, 0x35, 0x5D, 0x89, 0xB9, 0xA3, 0x2D, 0x55, 0x7D, 0xB5, 0x93, 0xA3,
		//     0x0E, 0x16, 0x1E, 0xA9, 0x2C, 0x54, 0x7C, 0xB8, 0xB4, 0xB0, 0xF1, 0x97, 0x83, 0xA8, 0x11, 0x84,
		//     0xA5, 0x09, 0x98, 0xA3, 0x83, 0xF0, 0xDA, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0xD8, 0xF1, 0xA5,
		//     0x29, 0x55, 0x7D, 0xA5, 0x85, 0x95, 0x02, 0x1A, 0x2E, 0x3A, 0x56, 0x5A, 0x40, 0x48, 0xF9, 0xF3,
		//     0xA3, 0xD9, 0xF8, 0xF0, 0x98, 0x83, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0x97, 0x82, 0xA8, 0xF1,
		//     0x11, 0xF0, 0x98, 0xA2, 0x24, 0x08, 0x44, 0x10, 0x64, 0x18, 0xDA, 0xF3, 0xDE, 0xD8, 0x83, 0xA5,
		//     0x94, 0x01, 0xD9, 0xA3, 0x02, 0xF1, 0xA2, 0xC3, 0xC5, 0xC7, 0xD8, 0xF1, 0x84, 0x92, 0xA2, 0x4D,
		//     0xDA, 0x2A, 0xD8, 0x48, 0x69, 0xD9, 0x2A, 0xD8, 0x68, 0x55, 0xDA, 0x32, 0xD8, 0x50, 0x71, 0xD9,
		//     0x32, 0xD8, 0x70, 0x5D, 0xDA, 0x3A, 0xD8, 0x58, 0x79, 0xD9, 0x3A, 0xD8, 0x78, 0x93, 0xA3, 0x4D,
		//     0xDA, 0x2A, 0xD8, 0x48, 0x69, 0xD9, 0x2A, 0xD8, 0x68, 0x55, 0xDA, 0x32, 0xD8, 0x50, 0x71, 0xD9,
		//     0x32, 0xD8, 0x70, 0x5D, 0xDA, 0x3A, 0xD8, 0x58, 0x79, 0xD9, 0x3A, 0xD8, 0x78, 0xA8, 0x8A, 0x9A,
		//     0xF0, 0x28, 0x50, 0x78, 0x9E, 0xF3, 0x88, 0x18, 0xF1, 0x9F, 0x1D, 0x98, 0xA8, 0xD9, 0x08, 0xD8,
		//     0xC8, 0x9F, 0x12, 0x9E, 0xF3, 0x15, 0xA8, 0xDA, 0x12, 0x10, 0xD8, 0xF1, 0xAF, 0xC8, 0x97, 0x87,
		// 
		//     // bank 5, 256 bytes
		//     0x34, 0xB5, 0xB9, 0x94, 0xA4, 0x21, 0xF3, 0xD9, 0x22, 0xD8, 0xF2, 0x2D, 0xF3, 0xD9, 0x2A, 0xD8,
		//     0xF2, 0x35, 0xF3, 0xD9, 0x32, 0xD8, 0x81, 0xA4, 0x60, 0x60, 0x61, 0xD9, 0x61, 0xD8, 0x6C, 0x68,
		//     0x69, 0xD9, 0x69, 0xD8, 0x74, 0x70, 0x71, 0xD9, 0x71, 0xD8, 0xB1, 0xA3, 0x84, 0x19, 0x3D, 0x5D,
		//     0xA3, 0x83, 0x1A, 0x3E, 0x5E, 0x93, 0x10, 0x30, 0x81, 0x10, 0x11, 0xB8, 0xB0, 0xAF, 0x8F, 0x94,
		//     0xF2, 0xDA, 0x3E, 0xD8, 0xB4, 0x9A, 0xA8, 0x87, 0x29, 0xDA, 0xF8, 0xD8, 0x87, 0x9A, 0x35, 0xDA,
		//     0xF8, 0xD8, 0x87, 0x9A, 0x3D, 0xDA, 0xF8, 0xD8, 0xB1, 0xB9, 0xA4, 0x98, 0x85, 0x02, 0x2E, 0x56,
		//     0xA5, 0x81, 0x00, 0x0C, 0x14, 0xA3, 0x97, 0xB0, 0x8A, 0xF1, 0x2D, 0xD9, 0x28, 0xD8, 0x4D, 0xD9,
		//     0x48, 0xD8, 0x6D, 0xD9, 0x68, 0xD8, 0xB1, 0x84, 0x0D, 0xDA, 0x0E, 0xD8, 0xA3, 0x29, 0x83, 0xDA,
		//     0x2C, 0x0E, 0xD8, 0xA3, 0x84, 0x49, 0x83, 0xDA, 0x2C, 0x4C, 0x0E, 0xD8, 0xB8, 0xB0, 0xA8, 0x8A,
		//     0x9A, 0xF5, 0x20, 0xAA, 0xDA, 0xDF, 0xD8, 0xA8, 0x40, 0xAA, 0xD0, 0xDA, 0xDE, 0xD8, 0xA8, 0x60,
		//     0xAA, 0xDA, 0xD0, 0xDF, 0xD8, 0xF1, 0x97, 0x86, 0xA8, 0x31, 0x9B, 0x06, 0x99, 0x07, 0xAB, 0x97,
		//     0x28, 0x88, 0x9B, 0xF0, 0x0C, 0x20, 0x14, 0x40, 0xB8, 0xB0, 0xB4, 0xA8, 0x8C, 0x9C, 0xF0, 0x04,
		//     0x28, 0x51, 0x79, 0x1D, 0x30, 0x14, 0x38, 0xB2, 0x82, 0xAB, 0xD0, 0x98, 0x2C, 0x50, 0x50, 0x78,
		//     0x78, 0x9B, 0xF1, 0x1A, 0xB0, 0xF0, 0x8A, 0x9C, 0xA8, 0x29, 0x51, 0x79, 0x8B, 0x29, 0x51, 0x79,
		//     0x8A, 0x24, 0x70, 0x59, 0x8B, 0x20, 0x58, 0x71, 0x8A, 0x44, 0x69, 0x38, 0x8B, 0x39, 0x40, 0x68,
		//     0x8A, 0x64, 0x48, 0x31, 0x8B, 0x30, 0x49, 0x60, 0xA5, 0x88, 0x20, 0x09, 0x71, 0x58, 0x44, 0x68,
		// 
		//     // bank 6, 256 bytes
		//     0x11, 0x39, 0x64, 0x49, 0x30, 0x19, 0xF1, 0xAC, 0x00, 0x2C, 0x54, 0x7C, 0xF0, 0x8C, 0xA8, 0x04,
		//     0x28, 0x50, 0x78, 0xF1, 0x88, 0x97, 0x26, 0xA8, 0x59, 0x98, 0xAC, 0x8C, 0x02, 0x26, 0x46, 0x66,
		//     0xF0, 0x89, 0x9C, 0xA8, 0x29, 0x51, 0x79, 0x24, 0x70, 0x59, 0x44, 0x69, 0x38, 0x64, 0x48, 0x31,
		//     0xA9, 0x88, 0x09, 0x20, 0x59, 0x70, 0xAB, 0x11, 0x38, 0x40, 0x69, 0xA8, 0x19, 0x31, 0x48, 0x60,
		//     0x8C, 0xA8, 0x3C, 0x41, 0x5C, 0x20, 0x7C, 0x00, 0xF1, 0x87, 0x98, 0x19, 0x86, 0xA8, 0x6E, 0x76,
		//     0x7E, 0xA9, 0x99, 0x88, 0x2D, 0x55, 0x7D, 0x9E, 0xB9, 0xA3, 0x8A, 0x22, 0x8A, 0x6E, 0x8A, 0x56,
		//     0x8A, 0x5E, 0x9F, 0xB1, 0x83, 0x06, 0x26, 0x46, 0x66, 0x0E, 0x2E, 0x4E, 0x6E, 0x9D, 0xB8, 0xAD,
		//     0x00, 0x2C, 0x54, 0x7C, 0xF2, 0xB1, 0x8C, 0xB4, 0x99, 0xB9, 0xA3, 0x2D, 0x55, 0x7D, 0x81, 0x91,
		//     0xAC, 0x38, 0xAD, 0x3A, 0xB5, 0x83, 0x91, 0xAC, 0x2D, 0xD9, 0x28, 0xD8, 0x4D, 0xD9, 0x48, 0xD8,
		//     0x6D, 0xD9, 0x68, 0xD8, 0x8C, 0x9D, 0xAE, 0x29, 0xD9, 0x04, 0xAE, 0xD8, 0x51, 0xD9, 0x04, 0xAE,
		//     0xD8, 0x79, 0xD9, 0x04, 0xD8, 0x81, 0xF3, 0x9D, 0xAD, 0x00, 0x8D, 0xAE, 0x19, 0x81, 0xAD, 0xD9,
		//     0x01, 0xD8, 0xF2, 0xAE, 0xDA, 0x26, 0xD8, 0x8E, 0x91, 0x29, 0x83, 0xA7, 0xD9, 0xAD, 0xAD, 0xAD,
		//     0xAD, 0xF3, 0x2A, 0xD8, 0xD8, 0xF1, 0xB0, 0xAC, 0x89, 0x91, 0x3E, 0x5E, 0x76, 0xF3, 0xAC, 0x2E,
		//     0x2E, 0xF1, 0xB1, 0x8C, 0x5A, 0x9C, 0xAC, 0x2C, 0x28, 0x28, 0x28, 0x9C, 0xAC, 0x30, 0x18, 0xA8,
		//     0x98, 0x81, 0x28, 0x34, 0x3C, 0x97, 0x24, 0xA7, 0x28, 0x34, 0x3C, 0x9C, 0x24, 0xF2, 0xB0, 0x89,
		//     0xAC, 0x91, 0x2C, 0x4C, 0x6C, 0x8A, 0x9B, 0x2D, 0xD9, 0xD8, 0xD8, 0x51, 0xD9, 0xD8, 0xD8, 0x79,
		// 
		//     // bank 7, 138 bytes (remainder)
		//     0xD9, 0xD8, 0xD8, 0xF1, 0x9E, 0x88, 0xA3, 0x31, 0xDA, 0xD8, 0xD8, 0x91, 0x2D, 0xD9, 0x28, 0xD8,
		//     0x4D, 0xD9, 0x48, 0xD8, 0x6D, 0xD9, 0x68, 0xD8, 0xB1, 0x83, 0x93, 0x35, 0x3D, 0x80, 0x25, 0xDA,
		//     0xD8, 0xD8, 0x85, 0x69, 0xDA, 0xD8, 0xD8, 0xB4, 0x93, 0x81, 0xA3, 0x28, 0x34, 0x3C, 0xF3, 0xAB,
		//     0x8B, 0xF8, 0xA3, 0x91, 0xB6, 0x09, 0xB4, 0xD9, 0xAB, 0xDE, 0xFA, 0xB0, 0x87, 0x9C, 0xB9, 0xA3,
		//     0xDD, 0xF1, 0xA3, 0xA3, 0xA3, 0xA3, 0x95, 0xF1, 0xA3, 0xA3, 0xA3, 0x9D, 0xF1, 0xA3, 0xA3, 0xA3,
		//     0xA3, 0xF2, 0xA3, 0xB4, 0x90, 0x80, 0xF2, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3,
		//     0xA3, 0xB2, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xB0, 0x87, 0xB5, 0x99, 0xF1, 0xA3, 0xA3, 0xA3,
		//     0x98, 0xF1, 0xA3, 0xA3, 0xA3, 0xA3, 0x97, 0xA3, 0xA3, 0xA3, 0xA3, 0xF3, 0x9B, 0xA3, 0xA3, 0xDC,
		//     0xB9, 0xA7, 0xF1, 0x26, 0x26, 0x26, 0xD8, 0xD8, 0xFF
		// };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1929));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____025D0CBBC3FC2902D12A12EA0EFA0C451E76796E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_dmpMemory_12(L_1);
		// byte[] dmpConfig = new byte[]{
		// //  BANK    OFFSET  LENGTH  [DATA]
		//     0x03,   0x7B,   0x03,   0x4C, 0xCD, 0x6C,         // FCFG_1 inv_set_gyro_calibration
		//     0x03,   0xAB,   0x03,   0x36, 0x56, 0x76,         // FCFG_3 inv_set_gyro_calibration
		//     0x00,   0x68,   0x04,   0x02, 0xCB, 0x47, 0xA2,   // D_0_104 inv_set_gyro_calibration
		//     0x02,   0x18,   0x04,   0x00, 0x05, 0x8B, 0xC1,   // D_0_24 inv_set_gyro_calibration
		//     0x01,   0x0C,   0x04,   0x00, 0x00, 0x00, 0x00,   // D_1_152 inv_set_accel_calibration
		//     0x03,   0x7F,   0x06,   0x0C, 0xC9, 0x2C, 0x97, 0x97, 0x97, // FCFG_2 inv_set_accel_calibration
		//     0x03,   0x89,   0x03,   0x26, 0x46, 0x66,         // FCFG_7 inv_set_accel_calibration
		//     0x00,   0x6C,   0x02,   0x20, 0x00,               // D_0_108 inv_set_accel_calibration
		//     0x02,   0x40,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_00 inv_set_compass_calibration
		//     0x02,   0x44,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_01
		//     0x02,   0x48,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_02
		//     0x02,   0x4C,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_10
		//     0x02,   0x50,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_11
		//     0x02,   0x54,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_12
		//     0x02,   0x58,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_20
		//     0x02,   0x5C,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_21
		//     0x02,   0xBC,   0x04,   0x00, 0x00, 0x00, 0x00,   // CPASS_MTX_22
		//     0x01,   0xEC,   0x04,   0x00, 0x00, 0x40, 0x00,   // D_1_236 inv_apply_endian_accel
		//     0x03,   0x7F,   0x06,   0x0C, 0xC9, 0x2C, 0x97, 0x97, 0x97, // FCFG_2 inv_set_mpu_sensors
		//     0x04,   0x02,   0x03,   0x0D, 0x35, 0x5D,         // CFG_MOTION_BIAS inv_turn_on_bias_from_no_motion
		//     0x04,   0x09,   0x04,   0x87, 0x2D, 0x35, 0x3D,   // FCFG_5 inv_set_bias_update
		//     0x00,   0xA3,   0x01,   0x00,                     // D_0_163 inv_set_dead_zone
		//                  // SPECIAL 0x01 = enable interrupts
		//     0x00,   0x00,   0x00,   0x01, // SET INT_ENABLE at i=22, SPECIAL INSTRUCTION
		//     0x07,   0x86,   0x01,   0xFE,                     // CFG_6 inv_set_fifo_interupt
		//     0x07,   0x41,   0x05,   0xF1, 0x20, 0x28, 0x30, 0x38, // CFG_8 inv_send_quaternion
		//     0x07,   0x7E,   0x01,   0x30,                     // CFG_16 inv_set_footer
		//     0x07,   0x46,   0x01,   0x9A,                     // CFG_GYRO_SOURCE inv_send_gyro
		//     0x07,   0x47,   0x04,   0xF1, 0x28, 0x30, 0x38,   // CFG_9 inv_send_gyro . inv_construct3_fifo
		//     0x07,   0x6C,   0x04,   0xF1, 0x28, 0x30, 0x38,   // CFG_12 inv_send_accel . inv_construct3_fifo
		//     0x02,   0x16,   0x02,   0x00, 0x01                // D_0_22 inv_set_fifo_rate
		// 
		//     // This very last 0x01 WAS a 0x09, which drops the FIFO rate down to 20 Hz. 0x07 is 25 Hz,
		//     // 0x01 is 100Hz. Going faster than 100Hz (0x00=200Hz) tends to result in very noisy data.
		//     // DMP output frequency is calculated easily using this equation: (200Hz / (1 + value))
		// 
		//     // It is important to make sure the host processor can keep up with reading and processing
		//     // the FIFO output at the desired rate. Handling FIFO overflow cleanly is also a good idea.
		// };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____200E94B060457673F15561C06F7673BCDBCCDBED_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		__this->set_dmpConfig_13(L_4);
		// byte[] dmpUpdates = new byte[]{
		//     0x01,   0xB2,   0x02,   0xFF, 0xFF,
		//     0x01,   0x90,   0x04,   0x09, 0x23, 0xA1, 0x35,
		//     0x01,   0x6A,   0x02,   0x06, 0x00,
		//     0x01,   0x60,   0x08,   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		//     0x00,   0x60,   0x04,   0x40, 0x00, 0x00, 0x00,
		//     0x01,   0x62,   0x02,   0x00, 0x00,
		//     0x00,   0x60,   0x04,   0x00, 0x40, 0x00, 0x00
		// };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)47));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____924761D6550FD264C145DBBC4B199DDB7A38A1D2_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		__this->set_dmpUpdates_14(L_7);
		// byte[] dmpPacketBuffer = new byte[64];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->set_dmpPacketBuffer_351(L_9);
		// byte[] buffer = new byte[14];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		__this->set_buffer_354(L_10);
		// public MPU6050(byte address) {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// devAddr = address;
		uint8_t L_11 = ___address0;
		__this->set_devAddr_353(L_11);
		// mpu6050Msg = "\n";
		__this->set_mpu6050Msg_1(_stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		// isInitErr = false;
		__this->set_isInitErr_2((bool)0);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::ischkInitErr()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_ischkInitErr_m7219118B2FE8A98F6B99C711BB38184412FADFEC (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// if (isInitErr) devStatus = 5;
		bool L_0 = __this->get_isInitErr_2();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (isInitErr) devStatus = 5;
		__this->set_devStatus_8((uint8_t)5);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::InitHardware()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_InitHardware_mFF3B45D396442074236502D50705A19E80BA1D3D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_InitHardware_mFF3B45D396442074236502D50705A19E80BA1D3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m34C1C0A73EAB71B2CF4D76413D7084C2D990CFAE((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m34C1C0A73EAB71B2CF4D76413D7084C2D990CFAE_RuntimeMethod_var);
		return;
	}
}
// System.Void MPU6050.MPU6050::initialize()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_initialize_m3AF0BFC03B7D1AEE295407662D73DEB8F6C1750A (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_initialize_m3AF0BFC03B7D1AEE295407662D73DEB8F6C1750A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isInitErr) return;
		bool L_0 = __this->get_isInitErr_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isInitErr) return;
		return;
	}

IL_0009:
	{
		// setClockSource(MPU6050_CLOCK_PLL_XGYRO);
		MPU6050_setClockSource_m5ABF02110EFB06E22CBAD73F91A6C0B72EAFBBFA(__this, (uint8_t)1, /*hidden argument*/NULL);
		// setFullScaleGyroRange(MPU6050_GYRO_FS_250);
		MPU6050_setFullScaleGyroRange_m820A6263549E00AC13A2E7CEA60D3658B3669360(__this, (uint8_t)0, /*hidden argument*/NULL);
		// setFullScaleAccelRange(MPU6050_ACCEL_FS_2);
		MPU6050_setFullScaleAccelRange_mD8C5E12B4E834DC0D2BEC2EE82B2053768F2D20E(__this, (uint8_t)0, /*hidden argument*/NULL);
		// setSleepEnabled(false); // thanks to Jack Elston for pointing this one out!
		MPU6050_setSleepEnabled_mB7A87184F5023C82EE92EF8429F3CBAC11B7577D(__this, (bool)0, /*hidden argument*/NULL);
		// mpu6050Msg = "End Initialize\n";
		__this->set_mpu6050Msg_1(_stringLiteralBB426BA91C0A7513F60FAD5C024D1962D70BC9A1);
		// }
		return;
	}
}
// System.Boolean MPU6050.MPU6050::testConnection()
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_testConnection_mEE0C8B932106F9FFE6875ED4F8EC6715A757BFC8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// return getDeviceID() == 0x34;
		uint8_t L_0 = MPU6050_getDeviceID_mC62ABAFE1CC8F76ADB80F0E3717C2A2325700ECF(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)52)))? 1 : 0);
	}
}
// System.Void MPU6050.MPU6050::setRate(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setRate_mD6CD23CE31E8F14B9063F3867368055285D1683D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___rate0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_SMPLRT_DIV, rate);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___rate0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)25), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setExternalFrameSync(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setExternalFrameSync_m06F8B7108EDF53122544BD44CF70CD88147EA97E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___sync0, const RuntimeMethod* method)
{
	{
		// writeBits(devAddr, MPU6050_RA_CONFIG, MPU6050_CFG_EXT_SYNC_SET_BIT, MPU6050_CFG_EXT_SYNC_SET_LENGTH, sync);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___sync0;
		MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550(__this, L_0, (uint8_t)((int32_t)26), (uint8_t)5, (uint8_t)3, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setDLPFMode(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setDLPFMode_m3F181C0F2B3FDAD383BF17FCE07135BF98EC55A2 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___mode0, const RuntimeMethod* method)
{
	{
		// writeBits(devAddr, MPU6050_RA_CONFIG, MPU6050_CFG_DLPF_CFG_BIT, MPU6050_CFG_DLPF_CFG_LENGTH, mode);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___mode0;
		MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550(__this, L_0, (uint8_t)((int32_t)26), (uint8_t)2, (uint8_t)3, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setFullScaleGyroRange(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setFullScaleGyroRange_m820A6263549E00AC13A2E7CEA60D3658B3669360 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___range0, const RuntimeMethod* method)
{
	{
		// writeBits(devAddr, MPU6050_RA_GYRO_CONFIG, MPU6050_GCONFIG_FS_SEL_BIT, MPU6050_GCONFIG_FS_SEL_LENGTH, range);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___range0;
		MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550(__this, L_0, (uint8_t)((int32_t)27), (uint8_t)4, (uint8_t)2, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setFullScaleAccelRange(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setFullScaleAccelRange_mD8C5E12B4E834DC0D2BEC2EE82B2053768F2D20E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___range0, const RuntimeMethod* method)
{
	{
		// writeBits(devAddr, MPU6050_RA_ACCEL_CONFIG, MPU6050_ACONFIG_AFS_SEL_BIT, MPU6050_ACONFIG_AFS_SEL_LENGTH, range);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___range0;
		MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550(__this, L_0, (uint8_t)((int32_t)28), (uint8_t)4, (uint8_t)2, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setMotionDetectionThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setMotionDetectionThreshold_mE47DF8DDCD26DE2D3ECC86BD688655E3F37B1B2B (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___threshold0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_MOT_THR, threshold);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___threshold0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)31), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setMotionDetectionDuration(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setMotionDetectionDuration_m19D847BE363D27D32E08ACB435FDA0232D581287 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___duration0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_MOT_DUR, duration);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___duration0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)32), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setZeroMotionDetectionThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setZeroMotionDetectionThreshold_m397799C6509C0D0E15F440285061089ABBAF011B (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___threshold0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_ZRMOT_THR, threshold);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___threshold0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)33), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setZeroMotionDetectionDuration(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setZeroMotionDetectionDuration_m102689605EE70E5D0BB4ABBEF1F792FDF52ACF7D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___duration0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_ZRMOT_DUR, duration);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___duration0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)34), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setSlaveAddress(System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setSlaveAddress_mAA14EE35A91CA5B2B8D5F515759A860CEFE96CB8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___num0, uint8_t ___address1, const RuntimeMethod* method)
{
	{
		// if (num > 3) return;
		uint8_t L_0 = ___num0;
		if ((((int32_t)L_0) <= ((int32_t)3)))
		{
			goto IL_0005;
		}
	}
	{
		// if (num > 3) return;
		return;
	}

IL_0005:
	{
		// writeByte(devAddr, (byte)(MPU6050_RA_I2C_SLV0_ADDR + num * 3), address);
		uint8_t L_1 = __this->get_devAddr_353();
		uint8_t L_2 = ___num0;
		uint8_t L_3 = ___address1;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_1, (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)37), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)3))))))), L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setIntEnabled(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setIntEnabled_m9B68AEBFF8ADAC642E8675A31B4501110E201B89 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___enabled0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_INT_ENABLE, enabled);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___enabled0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)56), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Byte MPU6050.MPU6050::getIntStatus()
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_getIntStatus_m8E1420FD1F1E18D83842B1AE62478C28298B85E9 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// readByte(devAddr, MPU6050_RA_INT_STATUS, ref buffer[0]);
		uint8_t L_0 = __this->get_devAddr_353();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_buffer_354();
		NullCheck(L_1);
		MPU6050_readByte_m7E523611B4A0B869082EE6111EA307D3D33CBD1E(__this, L_0, (uint8_t)((int32_t)58), (uint8_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		// return buffer[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_354();
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void MPU6050.MPU6050::setFIFOEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setFIFOEnabled_mA1E23E38368DC6931015494969EA8BC30EDED0F2 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// byte _b = 0x00;
		V_0 = (uint8_t)0;
		// if(enabled) _b = 0x01;
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		// if(enabled) _b = 0x01;
		V_0 = (uint8_t)1;
	}

IL_0007:
	{
		// writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_FIFO_EN_BIT, _b);
		uint8_t L_1 = __this->get_devAddr_353();
		uint8_t L_2 = V_0;
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_1, (uint8_t)((int32_t)106), (uint8_t)6, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setI2CMasterModeEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setI2CMasterModeEnabled_mA42BA638032D84429DE247E5364AD6569E8A70F7 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// byte _b = 0x00;
		V_0 = (uint8_t)0;
		// if (enabled) _b = 0x01;
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		// if (enabled) _b = 0x01;
		V_0 = (uint8_t)1;
	}

IL_0007:
	{
		// writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_I2C_MST_EN_BIT, _b);
		uint8_t L_1 = __this->get_devAddr_353();
		uint8_t L_2 = V_0;
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_1, (uint8_t)((int32_t)106), (uint8_t)5, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::resetFIFO()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_resetFIFO_m4CED87826317333FCE50EF1F2D3196B54642562F (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_FIFO_RESET_BIT, 0x01);
		uint8_t L_0 = __this->get_devAddr_353();
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_0, (uint8_t)((int32_t)106), (uint8_t)2, (uint8_t)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::resetI2CMaster()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_resetI2CMaster_mD04502DB9D7696B9D2CBED04B9716057356FD36D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_I2C_MST_RESET_BIT, 0x01);
		uint8_t L_0 = __this->get_devAddr_353();
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_0, (uint8_t)((int32_t)106), (uint8_t)1, (uint8_t)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::reset()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_reset_m73DD6B177657F4E6B94F71561D8810B4A117695F (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// writeBit(devAddr, MPU6050_RA_PWR_MGMT_1, MPU6050_PWR1_DEVICE_RESET_BIT, 0x01);
		uint8_t L_0 = __this->get_devAddr_353();
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_0, (uint8_t)((int32_t)107), (uint8_t)7, (uint8_t)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setSleepEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setSleepEnabled_mB7A87184F5023C82EE92EF8429F3CBAC11B7577D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// byte _b = 0x00;
		V_0 = (uint8_t)0;
		// if (enabled) _b = 0x01;
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		// if (enabled) _b = 0x01;
		V_0 = (uint8_t)1;
	}

IL_0007:
	{
		// writeBit(devAddr, MPU6050_RA_PWR_MGMT_1, MPU6050_PWR1_SLEEP_BIT, _b);
		uint8_t L_1 = __this->get_devAddr_353();
		uint8_t L_2 = V_0;
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_1, (uint8_t)((int32_t)107), (uint8_t)6, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setClockSource(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setClockSource_m5ABF02110EFB06E22CBAD73F91A6C0B72EAFBBFA (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___source0, const RuntimeMethod* method)
{
	{
		// writeBits(devAddr, MPU6050_RA_PWR_MGMT_1, MPU6050_PWR1_CLKSEL_BIT, MPU6050_PWR1_CLKSEL_LENGTH, source);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___source0;
		MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550(__this, L_0, (uint8_t)((int32_t)107), (uint8_t)2, (uint8_t)3, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.UInt32 MPU6050.MPU6050::getFIFOCount()
extern "C" IL2CPP_METHOD_ATTR uint32_t MPU6050_getFIFOCount_m0D83DD0E87748351BA436FF50ACE1320348C6012 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// readBytes(devAddr, MPU6050_RA_FIFO_COUNTH, 2, ref buffer);
		uint8_t L_0 = __this->get_devAddr_353();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_1 = __this->get_address_of_buffer_354();
		MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656(__this, L_0, (uint8_t)((int32_t)114), (uint8_t)2, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_1, /*hidden argument*/NULL);
		// return (((uint)buffer[0]) << 8) | buffer[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_354();
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_buffer_354();
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)L_7));
	}
}
// System.Void MPU6050.MPU6050::getFIFOBytes(System.Byte[]&,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_getFIFOBytes_m203A25E8D7E23B7021237E61FBE070D39C2E127D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___data0, uint32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_getFIFOBytes_m203A25E8D7E23B7021237E61FBE070D39C2E127D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data = new byte[data.Length];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_1 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_1);
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_0, (RuntimeObject *)L_3);
		// if (length > 0)
		uint32_t L_4 = ___length1;
		if ((!(((uint32_t)L_4) > ((uint32_t)0))))
		{
			goto IL_0021;
		}
	}
	{
		// readBytes(devAddr, MPU6050_RA_FIFO_R_W, (byte)length, ref data);
		uint8_t L_5 = __this->get_devAddr_353();
		uint32_t L_6 = ___length1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_7 = ___data0;
		MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656(__this, L_5, (uint8_t)((int32_t)116), (uint8_t)(((int32_t)((uint8_t)L_6))), (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_7, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Byte MPU6050.MPU6050::getDeviceID()
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_getDeviceID_mC62ABAFE1CC8F76ADB80F0E3717C2A2325700ECF (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// readBits(devAddr, MPU6050_RA_WHO_AM_I, MPU6050_WHO_AM_I_BIT, MPU6050_WHO_AM_I_LENGTH, ref buffer[0]);
		uint8_t L_0 = __this->get_devAddr_353();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_buffer_354();
		NullCheck(L_1);
		MPU6050_readBits_mFD2B23EAB6FECA0378872B2FFA1C29DEDFFBCF03(__this, L_0, (uint8_t)((int32_t)117), (uint8_t)6, (uint8_t)6, (uint8_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		// return buffer[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_354();
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void MPU6050.MPU6050::setOTPBankValid(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setOTPBankValid_m7EC1F385D8C41B293D182AC3D58AB6FD14824B9C (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// byte _b = 0x00;
		V_0 = (uint8_t)0;
		// if (enabled) _b = 0x01;
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		// if (enabled) _b = 0x01;
		V_0 = (uint8_t)1;
	}

IL_0007:
	{
		// writeBit(devAddr, MPU6050_RA_XG_OFFS_TC, MPU6050_TC_OTP_BNK_VLD_BIT, _b);
		uint8_t L_1 = __this->get_devAddr_353();
		uint8_t L_2 = V_0;
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_1, (uint8_t)0, (uint8_t)0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setZAccelOffset(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setZAccelOffset_m8E5D372EF50E8ED4C0C30AE09B50D83164DD87A6 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// if (isInitErr) return;
		bool L_0 = __this->get_isInitErr_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isInitErr) return;
		return;
	}

IL_0009:
	{
		// writeWord(devAddr, MPU6050_RA_ZA_OFFS_H, offset);
		uint8_t L_1 = __this->get_devAddr_353();
		int32_t L_2 = ___offset0;
		MPU6050_writeWord_mF762D68534B1D5128312101CDEF723ECC400CE2B(__this, L_1, (uint8_t)((int32_t)10), L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 MPU6050.MPU6050::getXGyroOffsetTC()
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_getXGyroOffsetTC_m3C75BCA57B9075F2606FFA805777A8F7A514FA8E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// readBits(devAddr, MPU6050_RA_XG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, ref buffer[0]);
		uint8_t L_0 = __this->get_devAddr_353();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_buffer_354();
		NullCheck(L_1);
		MPU6050_readBits_mFD2B23EAB6FECA0378872B2FFA1C29DEDFFBCF03(__this, L_0, (uint8_t)0, (uint8_t)6, (uint8_t)6, (uint8_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		// return buffer[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_354();
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void MPU6050.MPU6050::setXGyroOffsetTC(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setXGyroOffsetTC_mDD323677FCA57FAAB63949412BFA42E30A68597F (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// writeBits(devAddr, MPU6050_RA_XG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, (byte)offset);
		uint8_t L_0 = __this->get_devAddr_353();
		int32_t L_1 = ___offset0;
		MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550(__this, L_0, (uint8_t)0, (uint8_t)6, (uint8_t)6, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 MPU6050.MPU6050::getYGyroOffsetTC()
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_getYGyroOffsetTC_m864F74257AF946A41BB925D08A4A3B8316141789 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// readBits(devAddr, MPU6050_RA_YG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, ref buffer[0]);
		uint8_t L_0 = __this->get_devAddr_353();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_buffer_354();
		NullCheck(L_1);
		MPU6050_readBits_mFD2B23EAB6FECA0378872B2FFA1C29DEDFFBCF03(__this, L_0, (uint8_t)1, (uint8_t)6, (uint8_t)6, (uint8_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		// return buffer[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_354();
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void MPU6050.MPU6050::setYGyroOffsetTC(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setYGyroOffsetTC_mBC134085E333A55192246E52081BAE520504E383 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// writeBits(devAddr, MPU6050_RA_YG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, (byte)offset);
		uint8_t L_0 = __this->get_devAddr_353();
		int32_t L_1 = ___offset0;
		MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550(__this, L_0, (uint8_t)1, (uint8_t)6, (uint8_t)6, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 MPU6050.MPU6050::getZGyroOffsetTC()
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_getZGyroOffsetTC_mB9A91B6E95ED65B67927F5F83553BF747FAE644A (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// readBits(devAddr, MPU6050_RA_ZG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, ref buffer[0]);
		uint8_t L_0 = __this->get_devAddr_353();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_buffer_354();
		NullCheck(L_1);
		MPU6050_readBits_mFD2B23EAB6FECA0378872B2FFA1C29DEDFFBCF03(__this, L_0, (uint8_t)2, (uint8_t)6, (uint8_t)6, (uint8_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		// return buffer[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_354();
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void MPU6050.MPU6050::setZGyroOffsetTC(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setZGyroOffsetTC_m927B94E481AA64B21CC475AFBCA6262A2EE579C9 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// writeBits(devAddr, MPU6050_RA_ZG_OFFS_TC, MPU6050_TC_OFFSET_BIT, MPU6050_TC_OFFSET_LENGTH, (byte)offset);
		uint8_t L_0 = __this->get_devAddr_353();
		int32_t L_1 = ___offset0;
		MPU6050_writeBits_m525A1E7A90F140BB22EE390BF0ED92F15B623550(__this, L_0, (uint8_t)2, (uint8_t)6, (uint8_t)6, (uint8_t)(((int32_t)((uint8_t)L_1))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setXGyroOffset(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setXGyroOffset_m1E9F5DFEEA8ACA3B9F669C81A27EC9C9CA04BC09 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// if (isInitErr) return;
		bool L_0 = __this->get_isInitErr_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isInitErr) return;
		return;
	}

IL_0009:
	{
		// writeWord(devAddr, MPU6050_RA_XG_OFFS_USRH, offset);
		uint8_t L_1 = __this->get_devAddr_353();
		int32_t L_2 = ___offset0;
		MPU6050_writeWord_mF762D68534B1D5128312101CDEF723ECC400CE2B(__this, L_1, (uint8_t)((int32_t)19), L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setYGyroOffset(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setYGyroOffset_mF8485D38879E05D7FDC2CEC8C2B5D09AEC9770E4 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// if (isInitErr) return;
		bool L_0 = __this->get_isInitErr_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isInitErr) return;
		return;
	}

IL_0009:
	{
		// writeWord(devAddr, MPU6050_RA_YG_OFFS_USRH, offset);
		uint8_t L_1 = __this->get_devAddr_353();
		int32_t L_2 = ___offset0;
		MPU6050_writeWord_mF762D68534B1D5128312101CDEF723ECC400CE2B(__this, L_1, (uint8_t)((int32_t)21), L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setZGyroOffset(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setZGyroOffset_m866CB44F560D207CB18071D4467B3D230833BFF8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, int32_t ___offset0, const RuntimeMethod* method)
{
	{
		// if (isInitErr) return;
		bool L_0 = __this->get_isInitErr_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isInitErr) return;
		return;
	}

IL_0009:
	{
		// writeWord(devAddr, MPU6050_RA_ZG_OFFS_USRH, offset);
		uint8_t L_1 = __this->get_devAddr_353();
		int32_t L_2 = ___offset0;
		MPU6050_writeWord_mF762D68534B1D5128312101CDEF723ECC400CE2B(__this, L_1, (uint8_t)((int32_t)23), L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setDMPEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setDMPEnabled_m143C14E7488C2F7A0C3F918B65B8E885AA85BF52 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// byte _b = 0x00;
		V_0 = (uint8_t)0;
		// if (enabled) _b = 0x01;
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		// if (enabled) _b = 0x01;
		V_0 = (uint8_t)1;
	}

IL_0007:
	{
		// writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_DMP_EN_BIT, _b);
		uint8_t L_1 = __this->get_devAddr_353();
		uint8_t L_2 = V_0;
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_1, (uint8_t)((int32_t)106), (uint8_t)7, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::resetDMP()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_resetDMP_mB9A9E39B6EBEEF5B68735A671DA5488921C3287A (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// writeBit(devAddr, MPU6050_RA_USER_CTRL, MPU6050_USERCTRL_DMP_RESET_BIT, 0x01);
		uint8_t L_0 = __this->get_devAddr_353();
		MPU6050_writeBit_mBBFB9DFA00802E997731F40F7C4D4AE2CF6422D8(__this, L_0, (uint8_t)((int32_t)106), (uint8_t)3, (uint8_t)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setMemoryBank(System.Byte,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___bank0, bool ___prefetchEnabled1, bool ___userBank2, const RuntimeMethod* method)
{
	{
		// bank &= 0x1F;
		uint8_t L_0 = ___bank0;
		___bank0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31))))));
		// if (userBank) bank |= 0x20;
		bool L_1 = ___userBank2;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (userBank) bank |= 0x20;
		uint8_t L_2 = ___bank0;
		___bank0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)((int32_t)32))))));
	}

IL_0011:
	{
		// if (prefetchEnabled) bank |= 0x40;
		bool L_3 = ___prefetchEnabled1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// if (prefetchEnabled) bank |= 0x40;
		uint8_t L_4 = ___bank0;
		___bank0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)64))))));
	}

IL_001b:
	{
		// writeByte(devAddr, MPU6050_RA_BANK_SEL, bank);
		uint8_t L_5 = __this->get_devAddr_353();
		uint8_t L_6 = ___bank0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_5, (uint8_t)((int32_t)109), L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setMemoryStartAddress(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setMemoryStartAddress_m09F6A97E0D8D681267A8442C3E12EE9BD9DEFAB6 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___address0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_MEM_START_ADDR, address);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___address0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)110), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::readMemoryBlock(System.Byte[],System.Int32,System.UInt32,System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_readMemoryBlock_mBB78F94B8A30DBB829F377C652BDC45F8D95D039 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___ofs1, uint32_t ___dataSize2, uint8_t ___bank3, uint8_t ___address4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_readMemoryBlock_mBB78F94B8A30DBB829F377C652BDC45F8D95D039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// setMemoryBank(bank,false,false);
		uint8_t L_0 = ___bank3;
		MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0(__this, L_0, (bool)0, (bool)0, /*hidden argument*/NULL);
		// setMemoryStartAddress(address);
		uint8_t L_1 = ___address4;
		MPU6050_setMemoryStartAddress_m09F6A97E0D8D681267A8442C3E12EE9BD9DEFAB6(__this, L_1, /*hidden argument*/NULL);
		// for (uint i = 0; i < dataSize;)
		V_1 = 0;
		goto IL_0092;
	}

IL_0016:
	{
		// chunkSize = MPU6050_DMP_MEMORY_CHUNK_SIZE;
		V_0 = (uint8_t)((int32_t)16);
		// if (i + chunkSize > dataSize) chunkSize = (byte)(dataSize - i);
		uint32_t L_2 = V_1;
		uint8_t L_3 = V_0;
		uint32_t L_4 = ___dataSize2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))) > ((uint32_t)L_4))))
		{
			goto IL_0024;
		}
	}
	{
		// if (i + chunkSize > dataSize) chunkSize = (byte)(dataSize - i);
		uint32_t L_5 = ___dataSize2;
		uint32_t L_6 = V_1;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)))));
	}

IL_0024:
	{
		// if (chunkSize > 256 - address) chunkSize = (byte)(256 - address);
		uint8_t L_7 = V_0;
		uint8_t L_8 = ___address4;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)256), (int32_t)L_8)))))
		{
			goto IL_0039;
		}
	}
	{
		// if (chunkSize > 256 - address) chunkSize = (byte)(256 - address);
		uint8_t L_9 = ___address4;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)256), (int32_t)L_9)))));
	}

IL_0039:
	{
		// byte[] _tmp = new byte[chunkSize];
		uint8_t L_10 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_2 = L_11;
		// readBytes(devAddr, MPU6050_RA_MEM_R_W, chunkSize, ref _tmp);
		uint8_t L_12 = __this->get_devAddr_353();
		uint8_t L_13 = V_0;
		MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656(__this, L_12, (uint8_t)((int32_t)111), L_13, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_2), /*hidden argument*/NULL);
		// for(int j = 0; j < chunkSize; j++)
		V_3 = 0;
		goto IL_0062;
	}

IL_0056:
	{
		// data[ofs + j] = _tmp[j];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___data0;
		int32_t L_15 = ___ofs1;
		int32_t L_16 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16))), (uint8_t)L_20);
		// for(int j = 0; j < chunkSize; j++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0062:
	{
		// for(int j = 0; j < chunkSize; j++)
		int32_t L_22 = V_3;
		uint8_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}
	{
		// i += chunkSize;
		uint32_t L_24 = V_1;
		uint8_t L_25 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		// address += chunkSize;
		uint8_t L_26 = ___address4;
		uint8_t L_27 = V_0;
		___address4 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)))));
		// if (i < dataSize)
		uint32_t L_28 = V_1;
		uint32_t L_29 = ___dataSize2;
		if ((!(((uint32_t)L_28) < ((uint32_t)L_29))))
		{
			goto IL_0092;
		}
	}
	{
		// if (address == 0) bank++;
		uint8_t L_30 = ___address4;
		if (L_30)
		{
			goto IL_0080;
		}
	}
	{
		// if (address == 0) bank++;
		uint8_t L_31 = ___bank3;
		___bank3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)))));
	}

IL_0080:
	{
		// setMemoryBank(bank, false, false);
		uint8_t L_32 = ___bank3;
		MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0(__this, L_32, (bool)0, (bool)0, /*hidden argument*/NULL);
		// setMemoryStartAddress(address);
		uint8_t L_33 = ___address4;
		MPU6050_setMemoryStartAddress_m09F6A97E0D8D681267A8442C3E12EE9BD9DEFAB6(__this, L_33, /*hidden argument*/NULL);
	}

IL_0092:
	{
		// for (uint i = 0; i < dataSize;)
		uint32_t L_34 = V_1;
		uint32_t L_35 = ___dataSize2;
		if ((!(((uint32_t)L_34) >= ((uint32_t)L_35))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 MPU6050.MPU6050::memcmp(System.Byte[],System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t MPU6050_memcmp_m9A361B76DCC48E984AE7B188B3EA5DFEBD184603 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____a0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____b1, int32_t ___size2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int ret = 0;
		V_0 = 0;
		// bool isSame = true;
		V_1 = (bool)1;
		// for(int i = 0; i< size; i++)
		V_2 = 0;
		goto IL_0016;
	}

IL_0008:
	{
		// if (_a[i] != _b[i]) isSame = false;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ____a0;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ____b1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_0012;
		}
	}
	{
		// if (_a[i] != _b[i]) isSame = false;
		V_1 = (bool)0;
	}

IL_0012:
	{
		// for(int i = 0; i< size; i++)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0016:
	{
		// for(int i = 0; i< size; i++)
		int32_t L_9 = V_2;
		int32_t L_10 = ___size2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		// if (!isSame) ret = -1;
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_001f;
		}
	}
	{
		// if (!isSame) ret = -1;
		V_0 = (-1);
	}

IL_001f:
	{
		// return ret;
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Boolean MPU6050.MPU6050::writeMemoryBlock(System.Byte[],System.Int32,System.UInt32,System.Byte,System.Byte,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___ofs1, uint32_t ___dataSize2, uint8_t ___bank3, uint8_t ___address4, bool ___verify5, bool ___useProgMem6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	uint32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		// setMemoryBank(bank, false, false);
		uint8_t L_0 = ___bank3;
		MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0(__this, L_0, (bool)0, (bool)0, /*hidden argument*/NULL);
		// setMemoryStartAddress(address);
		uint8_t L_1 = ___address4;
		MPU6050_setMemoryStartAddress_m09F6A97E0D8D681267A8442C3E12EE9BD9DEFAB6(__this, L_1, /*hidden argument*/NULL);
		// if (verify)
		bool L_2 = ___verify5;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// verifyBuffer = new byte[MPU6050_DMP_MEMORY_CHUNK_SIZE];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_3;
		// } else
		goto IL_0027;
	}

IL_0020:
	{
		// verifyBuffer = new byte[] { 0 };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_4;
	}

IL_0027:
	{
		// if (useProgMem)
		bool L_5 = ___useProgMem6;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// progBuffer = new byte[MPU6050_DMP_MEMORY_CHUNK_SIZE];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_6;
		// } else
		goto IL_003c;
	}

IL_0035:
	{
		// progBuffer = new byte[] { 0 };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_2 = L_7;
	}

IL_003c:
	{
		// for (i = 0; i < dataSize;)
		V_3 = 0;
		goto IL_010a;
	}

IL_0043:
	{
		// chunkSize = MPU6050_DMP_MEMORY_CHUNK_SIZE;
		V_0 = (uint8_t)((int32_t)16);
		// if (i + chunkSize > dataSize) chunkSize = (byte)(dataSize - i);
		uint32_t L_8 = V_3;
		uint8_t L_9 = V_0;
		uint32_t L_10 = ___dataSize2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
		{
			goto IL_0051;
		}
	}
	{
		// if (i + chunkSize > dataSize) chunkSize = (byte)(dataSize - i);
		uint32_t L_11 = ___dataSize2;
		uint32_t L_12 = V_3;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)))));
	}

IL_0051:
	{
		// if (chunkSize > 256 - address) chunkSize = (byte)(256 - address);
		uint8_t L_13 = V_0;
		uint8_t L_14 = ___address4;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)256), (int32_t)L_14)))))
		{
			goto IL_0066;
		}
	}
	{
		// if (chunkSize > 256 - address) chunkSize = (byte)(256 - address);
		uint8_t L_15 = ___address4;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)256), (int32_t)L_15)))));
	}

IL_0066:
	{
		// if (useProgMem)
		bool L_16 = ___useProgMem6;
		if (!L_16)
		{
			goto IL_008d;
		}
	}
	{
		// for (j = 0; j < chunkSize; j++) progBuffer[j] = data[ofs + i + j]; //pgm_read_byte(data + i + j)
		V_4 = (uint8_t)0;
		goto IL_0086;
	}

IL_006f:
	{
		// for (j = 0; j < chunkSize; j++) progBuffer[j] = data[ofs + i + j]; //pgm_read_byte(data + i + j)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_2;
		uint8_t L_18 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___data0;
		int32_t L_20 = ___ofs1;
		uint32_t L_21 = V_3;
		uint8_t L_22 = V_4;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_20))), (int64_t)(((int64_t)((uint64_t)L_21))))), (int64_t)(((int64_t)((uint64_t)L_22)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97_RuntimeMethod_var);
		NullCheck(L_19);
		intptr_t L_23 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_20))), (int64_t)(((int64_t)((uint64_t)L_21))))), (int64_t)(((int64_t)((uint64_t)L_22)))))));
		uint8_t L_24 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)L_24);
		// for (j = 0; j < chunkSize; j++) progBuffer[j] = data[ofs + i + j]; //pgm_read_byte(data + i + j)
		uint8_t L_25 = V_4;
		V_4 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)))));
	}

IL_0086:
	{
		// for (j = 0; j < chunkSize; j++) progBuffer[j] = data[ofs + i + j]; //pgm_read_byte(data + i + j)
		uint8_t L_26 = V_4;
		uint8_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_006f;
		}
	}
	{
		// }
		goto IL_0098;
	}

IL_008d:
	{
		// progBuffer[0] = data[ofs + i];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = ___data0;
		int32_t L_30 = ___ofs1;
		uint32_t L_31 = V_3;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_30))), (int64_t)(((int64_t)((uint64_t)L_31)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97_RuntimeMethod_var);
		NullCheck(L_29);
		intptr_t L_32 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_30))), (int64_t)(((int64_t)((uint64_t)L_31)))))));
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_33);
	}

IL_0098:
	{
		// writeBytes(devAddr, MPU6050_RA_MEM_R_W, chunkSize, progBuffer);
		uint8_t L_34 = __this->get_devAddr_353();
		uint8_t L_35 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = V_2;
		MPU6050_writeBytes_m97D725D52BF91749BCB0F4871E37F5AFA9ED005C(__this, L_34, (uint8_t)((int32_t)111), L_35, L_36, /*hidden argument*/NULL);
		// if (verify) //verify && verifyBuffer
		bool L_37 = ___verify5;
		if (!L_37)
		{
			goto IL_00de;
		}
	}
	{
		// setMemoryBank(bank, false, false);
		uint8_t L_38 = ___bank3;
		MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0(__this, L_38, (bool)0, (bool)0, /*hidden argument*/NULL);
		// setMemoryStartAddress(address);
		uint8_t L_39 = ___address4;
		MPU6050_setMemoryStartAddress_m09F6A97E0D8D681267A8442C3E12EE9BD9DEFAB6(__this, L_39, /*hidden argument*/NULL);
		// readBytes(devAddr, MPU6050_RA_MEM_R_W, chunkSize, ref verifyBuffer);
		uint8_t L_40 = __this->get_devAddr_353();
		uint8_t L_41 = V_0;
		MPU6050_readBytes_mC37381945A9FCFB5090142763173100D807EB656(__this, L_40, (uint8_t)((int32_t)111), L_41, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_1), /*hidden argument*/NULL);
		// if (memcmp(progBuffer, verifyBuffer, chunkSize) != 0)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = V_1;
		uint8_t L_44 = V_0;
		int32_t L_45 = MPU6050_memcmp_m9A361B76DCC48E984AE7B188B3EA5DFEBD184603(__this, L_42, L_43, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00de;
		}
	}
	{
		// return false; // uh oh.
		return (bool)0;
	}

IL_00de:
	{
		// i += chunkSize;
		uint32_t L_46 = V_3;
		uint8_t L_47 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47));
		// address += chunkSize;
		uint8_t L_48 = ___address4;
		uint8_t L_49 = V_0;
		___address4 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)L_49)))));
		// if (i < dataSize)
		uint32_t L_50 = V_3;
		uint32_t L_51 = ___dataSize2;
		if ((!(((uint32_t)L_50) < ((uint32_t)L_51))))
		{
			goto IL_010a;
		}
	}
	{
		// if (address == 0) bank++;
		uint8_t L_52 = ___address4;
		if (L_52)
		{
			goto IL_00f8;
		}
	}
	{
		// if (address == 0) bank++;
		uint8_t L_53 = ___bank3;
		___bank3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)))));
	}

IL_00f8:
	{
		// setMemoryBank(bank, false, false);
		uint8_t L_54 = ___bank3;
		MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0(__this, L_54, (bool)0, (bool)0, /*hidden argument*/NULL);
		// setMemoryStartAddress(address);
		uint8_t L_55 = ___address4;
		MPU6050_setMemoryStartAddress_m09F6A97E0D8D681267A8442C3E12EE9BD9DEFAB6(__this, L_55, /*hidden argument*/NULL);
	}

IL_010a:
	{
		// for (i = 0; i < dataSize;)
		uint32_t L_56 = V_3;
		uint32_t L_57 = ___dataSize2;
		if ((!(((uint32_t)L_56) >= ((uint32_t)L_57))))
		{
			goto IL_0043;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean MPU6050.MPU6050::writeProgMemoryBlock(System.Byte[],System.UInt32,System.Byte,System.Byte,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeProgMemoryBlock_m92873E7AC206ACD554FA3738AA0744D5752D114C (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, uint32_t ___dataSize1, uint8_t ___bank2, uint8_t ___address3, bool ___verify4, const RuntimeMethod* method)
{
	{
		// return writeMemoryBlock(data, 0, dataSize, bank, address, verify, true);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___data0;
		uint32_t L_1 = ___dataSize1;
		uint8_t L_2 = ___bank2;
		uint8_t L_3 = ___address3;
		bool L_4 = ___verify4;
		bool L_5 = MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97(__this, L_0, 0, L_1, L_2, L_3, L_4, (bool)1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean MPU6050.MPU6050::writeDMPConfigurationSet(System.Byte[]&,System.UInt32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeDMPConfigurationSet_m7A3D2970B5419333D08E8F11867DB7815D0E8A08 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___data0, uint32_t ___dataSize1, bool ___useProgMem2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_writeDMPConfigurationSet_m7A3D2970B5419333D08E8F11867DB7815D0E8A08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	int32_t V_8 = 0;
	{
		// if (useProgMem)
		bool L_0 = ___useProgMem2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// progBuffer = new byte[8]; // assume 8-byte blocks, realloc later if necessary
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_1;
		// } else
		goto IL_0013;
	}

IL_000c:
	{
		// progBuffer = new byte[] { 0 };
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_2;
	}

IL_0013:
	{
		// for (i = 0; i < dataSize;)
		V_3 = 0;
		goto IL_00f7;
	}

IL_001a:
	{
		// if (useProgMem)
		bool L_3 = ___useProgMem2;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// bank = data[i++]; //pgm_read_byte(data + i++);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_4 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_4);
		uint32_t L_6 = V_3;
		uint32_t L_7 = L_6;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		uint32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = L_9;
		// offset = data[i++]; //pgm_read_byte(data + i++);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_10 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_10);
		uint32_t L_12 = V_3;
		uint32_t L_13 = L_12;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		NullCheck(L_11);
		uint32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_6 = L_15;
		// length = data[i++]; //pgm_read_byte(data + i++);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_16 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_16);
		uint32_t L_18 = V_3;
		uint32_t L_19 = L_18;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		NullCheck(L_17);
		uint32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		// }
		goto IL_005b;
	}

IL_003d:
	{
		// bank = data[i++];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_22 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_22);
		uint32_t L_24 = V_3;
		uint32_t L_25 = L_24;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		NullCheck(L_23);
		uint32_t L_26 = L_25;
		uint8_t L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_5 = L_27;
		// offset = data[i++];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_28 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_28);
		uint32_t L_30 = V_3;
		uint32_t L_31 = L_30;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		NullCheck(L_29);
		uint32_t L_32 = L_31;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_6 = L_33;
		// length = data[i++];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_34 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_34);
		uint32_t L_36 = V_3;
		uint32_t L_37 = L_36;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		NullCheck(L_35);
		uint32_t L_38 = L_37;
		uint8_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_7 = L_39;
	}

IL_005b:
	{
		// if (length > 0)
		uint8_t L_40 = V_7;
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_00c0;
		}
	}
	{
		// if (useProgMem)
		bool L_41 = ___useProgMem2;
		if (!L_41)
		{
			goto IL_00a1;
		}
	}
	{
		// if (progBuffer.Length < length)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = V_0;
		NullCheck(L_42);
		uint8_t L_43 = V_7;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length))))) >= ((int32_t)L_43)))
		{
			goto IL_0083;
		}
	}
	{
		// for(int k = 0; k < length; k++)
		V_8 = 0;
		goto IL_007d;
	}

IL_006f:
	{
		// progBuffer[k] = progBuffer[k];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = V_0;
		int32_t L_45 = V_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = V_0;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint8_t)L_49);
		// for(int k = 0; k < length; k++)
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_007d:
	{
		// for(int k = 0; k < length; k++)
		int32_t L_51 = V_8;
		uint8_t L_52 = V_7;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_006f;
		}
	}

IL_0083:
	{
		// for (j = 0; j < length; j++) progBuffer[j] = data[i + j]; // pgm_read_byte(data + i + j);
		V_4 = 0;
		goto IL_0099;
	}

IL_0088:
	{
		// for (j = 0; j < length; j++) progBuffer[j] = data[i + j]; // pgm_read_byte(data + i + j);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_53 = V_0;
		uint32_t L_54 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_55 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_56 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_55);
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_4;
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_58));
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (uint8_t)L_60);
		// for (j = 0; j < length; j++) progBuffer[j] = data[i + j]; // pgm_read_byte(data + i + j);
		uint32_t L_61 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0099:
	{
		// for (j = 0; j < length; j++) progBuffer[j] = data[i + j]; // pgm_read_byte(data + i + j);
		uint32_t L_62 = V_4;
		uint8_t L_63 = V_7;
		if ((!(((uint32_t)L_62) >= ((uint32_t)L_63))))
		{
			goto IL_0088;
		}
	}
	{
		// }
		goto IL_00a8;
	}

IL_00a1:
	{
		// progBuffer[0] = data[i];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_64 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_65 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_66 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_65);
		uint32_t L_67 = V_3;
		NullCheck(L_66);
		uint32_t L_68 = L_67;
		uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_69);
	}

IL_00a8:
	{
		// success = writeMemoryBlock(progBuffer, 0, length, bank, offset, true, false);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_70 = V_0;
		uint8_t L_71 = V_7;
		uint8_t L_72 = V_5;
		uint8_t L_73 = V_6;
		bool L_74 = MPU6050_writeMemoryBlock_mD0195D8665202F42E6A5DB3901A19C6C43CB7C97(__this, L_70, 0, L_71, L_72, L_73, (bool)1, (bool)0, /*hidden argument*/NULL);
		V_1 = L_74;
		// i += length;
		uint32_t L_75 = V_3;
		uint8_t L_76 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)L_76));
		// }
		goto IL_00f2;
	}

IL_00c0:
	{
		// if (useProgMem)
		bool L_77 = ___useProgMem2;
		if (!L_77)
		{
			goto IL_00ce;
		}
	}
	{
		// special = data[i++];  //pgm_read_byte(data + i++);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_78 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_79 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_78);
		uint32_t L_80 = V_3;
		uint32_t L_81 = L_80;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		NullCheck(L_79);
		uint32_t L_82 = L_81;
		uint8_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_2 = L_83;
		// }
		goto IL_00d7;
	}

IL_00ce:
	{
		// special = data[i++];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_84 = ___data0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_85 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_84);
		uint32_t L_86 = V_3;
		uint32_t L_87 = L_86;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
		NullCheck(L_85);
		uint32_t L_88 = L_87;
		uint8_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_2 = L_89;
	}

IL_00d7:
	{
		// if (special == 0x01)
		uint8_t L_90 = V_2;
		if ((!(((uint32_t)L_90) == ((uint32_t)1))))
		{
			goto IL_00f0;
		}
	}
	{
		// writeByte(devAddr, MPU6050_RA_INT_ENABLE, 0x32);  // single operation
		uint8_t L_91 = __this->get_devAddr_353();
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_91, (uint8_t)((int32_t)56), (uint8_t)((int32_t)50), /*hidden argument*/NULL);
		// success = true;
		V_1 = (bool)1;
		// }
		goto IL_00f2;
	}

IL_00f0:
	{
		// success = false;
		V_1 = (bool)0;
	}

IL_00f2:
	{
		// if (!success)
		bool L_92 = V_1;
		if (L_92)
		{
			goto IL_00f7;
		}
	}
	{
		// return false; // uh oh
		return (bool)0;
	}

IL_00f7:
	{
		// for (i = 0; i < dataSize;)
		uint32_t L_93 = V_3;
		uint32_t L_94 = ___dataSize1;
		if ((!(((uint32_t)L_93) >= ((uint32_t)L_94))))
		{
			goto IL_001a;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean MPU6050.MPU6050::writeProgDMPConfigurationSet(System.Byte[]&,System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_writeProgDMPConfigurationSet_mC621683B2A457BC9A9C89CD2B684266A71FA9D59 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___data0, uint32_t ___dataSize1, const RuntimeMethod* method)
{
	{
		// return writeDMPConfigurationSet(ref data, dataSize, true);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___data0;
		uint32_t L_1 = ___dataSize1;
		bool L_2 = MPU6050_writeDMPConfigurationSet_m7A3D2970B5419333D08E8F11867DB7815D0E8A08(__this, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_0, L_1, (bool)1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void MPU6050.MPU6050::setDMPConfig1(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setDMPConfig1_m4D866A060FBF85A8A2815CCF74151F6B888482B2 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___config0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_DMP_CFG_1, config);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___config0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)112), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::setDMPConfig2(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_setDMPConfig2_m50295183271F9BC471F24F79455B44E6D70E83A4 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, uint8_t ___config0, const RuntimeMethod* method)
{
	{
		// writeByte(devAddr, MPU6050_RA_DMP_CFG_2, config);
		uint8_t L_0 = __this->get_devAddr_353();
		uint8_t L_1 = ___config0;
		MPU6050_writeByte_m38F2938BC7A22DA2D98866B83FFCB813A14812FE(__this, L_0, (uint8_t)((int32_t)113), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_Dispose_mA0E85524F2B426A53C397B66A2FEBBA328868857 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		// if (!disposedValue)
		bool L_0 = __this->get_disposedValue_6();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// if (_mpu6050Device != null)
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_1 = __this->get__mpu6050Device_4();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _mpu6050Device.Dispose();
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_2 = __this->get__mpu6050Device_4();
		NullCheck(L_2);
		I2cDevice_Dispose_m09D05003C9BF4BBBFD468576EFA37EF41A15B846(L_2, /*hidden argument*/NULL);
		// _mpu6050Device = null;
		__this->set__mpu6050Device_4((I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 *)NULL);
	}

IL_0022:
	{
		// disposedValue = true;
		__this->set_disposedValue_6((bool)1);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::Finalize()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_Finalize_mFA9EA7768EC7CBA60AC8B967229E7F7076E7828D (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose(false);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void MPU6050.MPU6050::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::Dispose()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_Dispose_m9166FACDD4C309909704DF35D40F2BDC6477A661 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_Dispose_m9166FACDD4C309909704DF35D40F2BDC6477A661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void MPU6050.MPU6050::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050::dmpInitialize()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_dmpInitialize_mD0A20062D9B704B81FEB66529C1E276821B4874E (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_dmpInitialize_mD0A20062D9B704B81FEB66529C1E276821B4874E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_m1745F2D03F7DE629E5A02E75937C29441B1B229B((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_m1745F2D03F7DE629E5A02E75937C29441B1B229B_RuntimeMethod_var);
		return;
	}
}
// System.Boolean MPU6050.MPU6050::dmpPacketAvailable()
extern "C" IL2CPP_METHOD_ATTR bool MPU6050_dmpPacketAvailable_mA25030509C863913D04DFBA9D1F4F4F50428FFA0 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// return getFIFOCount() >= dmpGetFIFOPacketSize();
		uint32_t L_0 = MPU6050_getFIFOCount_m0D83DD0E87748351BA436FF50ACE1320348C6012(__this, /*hidden argument*/NULL);
		uint32_t L_1 = MPU6050_dmpGetFIFOPacketSize_m1100A2FB90438B7DC1A8EC44A64B8B56A4908EE8(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((!(((uint32_t)L_0) >= ((uint32_t)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Byte MPU6050.MPU6050::dmpGetAccel(MPU6050.MPU6050/VectorInt16&,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetAccel_m9F97786440B173F6F45BD35D10CD17B98D30B373 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___v0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___packet1, const RuntimeMethod* method)
{
	{
		// if (packet.Length == 0) packet = dmpPacketBuffer;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_0);
		NullCheck(L_1);
		if ((((RuntimeArray *)L_1)->max_length))
		{
			goto IL_000d;
		}
	}
	{
		// if (packet.Length == 0) packet = dmpPacketBuffer;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_2 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_dmpPacketBuffer_351();
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_2, (RuntimeObject *)L_3);
	}

IL_000d:
	{
		// v.x = (packet[28] << 8) | packet[29];
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_4 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_5 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_6 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_6);
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)28);
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_10 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_10);
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)29);
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_5);
		L_5->set_x_0(((int32_t)((int32_t)((int32_t)((int32_t)L_9<<(int32_t)8))|(int32_t)L_13)));
		// v.y = (packet[32] << 8) | packet[33];
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_14 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_15 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_14);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_16 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_16);
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)32);
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_20 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_20);
		NullCheck(L_21);
		int32_t L_22 = ((int32_t)33);
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_15);
		L_15->set_y_1(((int32_t)((int32_t)((int32_t)((int32_t)L_19<<(int32_t)8))|(int32_t)L_23)));
		// v.z = (packet[36] << 8) | packet[37];
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_24 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_25 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_24);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_26 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_26);
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)36);
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_30 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_30);
		NullCheck(L_31);
		int32_t L_32 = ((int32_t)37);
		uint8_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_25);
		L_25->set_z_2(((int32_t)((int32_t)((int32_t)((int32_t)L_29<<(int32_t)8))|(int32_t)L_33)));
		// return 0;
		return (uint8_t)0;
	}
}
// System.Byte MPU6050.MPU6050::dmpGetQuaternion_int(System.Int32[]&,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetQuaternion_int_mF4D7D6EC21BCC26AF3CA005660427A3816877A1B (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** ___data0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___packet1, const RuntimeMethod* method)
{
	{
		// if (packet.Length == 0) packet = dmpPacketBuffer;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_0);
		NullCheck(L_1);
		if ((((RuntimeArray *)L_1)->max_length))
		{
			goto IL_000d;
		}
	}
	{
		// if (packet.Length == 0) packet = dmpPacketBuffer;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_2 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_dmpPacketBuffer_351();
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_2, (RuntimeObject *)L_3);
	}

IL_000d:
	{
		// data[0] = ((packet[0] << 8) | packet[1]);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_4 = ___data0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_6 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_6);
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_10 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_10);
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9<<(int32_t)8))|(int32_t)L_13)));
		// data[1] = ((packet[4] << 8) | packet[5]);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_14 = ___data0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_14);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_16 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_16);
		NullCheck(L_17);
		int32_t L_18 = 4;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_20 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_20);
		NullCheck(L_21);
		int32_t L_22 = 5;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19<<(int32_t)8))|(int32_t)L_23)));
		// data[2] = ((packet[8] << 8) | packet[9]);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_24 = ___data0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_24);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_26 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_26);
		NullCheck(L_27);
		int32_t L_28 = 8;
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_30 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_30);
		NullCheck(L_31);
		int32_t L_32 = ((int32_t)9);
		uint8_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29<<(int32_t)8))|(int32_t)L_33)));
		// data[3] = ((packet[12] << 8) | packet[13]);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_34 = ___data0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_35 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_34);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_36 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_36);
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)12);
		uint8_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_40 = ___packet1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_40);
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)13);
		uint8_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_39<<(int32_t)8))|(int32_t)L_43)));
		// return 0;
		return (uint8_t)0;
	}
}
// System.Byte MPU6050.MPU6050::dmpGetQuaternion(MPU6050.MPU6050/Quaternion&,System.Byte[]&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetQuaternion_mB03B50B5D988F3D116ECF07AF7ECF2FA2E80EDFD (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___packet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_dmpGetQuaternion_mB03B50B5D988F3D116ECF07AF7ECF2FA2E80EDFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		// int[] qI = new int[4];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// byte status = dmpGetQuaternion_int(ref qI, ref packet);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_1 = ___packet1;
		uint8_t L_2 = MPU6050_dmpGetQuaternion_int_mF4D7D6EC21BCC26AF3CA005660427A3816877A1B(__this, (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)(&V_0), (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// if (status == 0)
		uint8_t L_3 = V_1;
		if (L_3)
		{
			goto IL_005a;
		}
	}
	{
		// q.w = (float)qI[0] / 16384.0f;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_4 = ___q0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_5 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_5);
		L_5->set_w_0(((float)((float)(((float)((float)L_8)))/(float)(16384.0f))));
		// q.x = (float)qI[1] / 16384.0f;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_9 = ___q0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_10 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_9);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		L_10->set_x_1(((float)((float)(((float)((float)L_13)))/(float)(16384.0f))));
		// q.y = (float)qI[2] / 16384.0f;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_14 = ___q0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_15 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_14);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 2;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		L_15->set_y_2(((float)((float)(((float)((float)L_18)))/(float)(16384.0f))));
		// q.z = (float)qI[3] / 16384.0f;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_19 = ___q0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_20 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_19);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 3;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		L_20->set_z_3(((float)((float)(((float)((float)L_23)))/(float)(16384.0f))));
		// return 0;
		return (uint8_t)0;
	}

IL_005a:
	{
		// return status; // int16 return value, indicates error if this line is reached
		uint8_t L_24 = V_1;
		return L_24;
	}
}
// System.Byte MPU6050.MPU6050::dmpGetLinearAccel(MPU6050.MPU6050/VectorInt16&,MPU6050.MPU6050/VectorInt16&,MPU6050.MPU6050/VectorFloat&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetLinearAccel_m2668559AD852F206E0FD927806EE95DE24F01F81 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___v0, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___vRaw1, VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** ___gravity2, const RuntimeMethod* method)
{
	{
		// v.x = (int)(vRaw.x - gravity.x * 8192);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_0 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_1 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_0);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_2 = ___vRaw1;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_3 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_2);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_x_0();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** L_5 = ___gravity2;
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_6 = *((VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 **)L_5);
		NullCheck(L_6);
		float L_7 = L_6->get_x_0();
		NullCheck(L_1);
		L_1->set_x_0((((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)(((float)((float)L_4))), (float)((float)il2cpp_codegen_multiply((float)L_7, (float)(8192.0f)))))))));
		// v.y = (int)(vRaw.y - gravity.y * 8192);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_8 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_9 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_8);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_10 = ___vRaw1;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_11 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_10);
		NullCheck(L_11);
		int32_t L_12 = L_11->get_y_1();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** L_13 = ___gravity2;
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_14 = *((VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 **)L_13);
		NullCheck(L_14);
		float L_15 = L_14->get_y_1();
		NullCheck(L_9);
		L_9->set_y_1((((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)(((float)((float)L_12))), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)(8192.0f)))))))));
		// v.z = (int)(vRaw.z - gravity.z * 8192);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_16 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_17 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_16);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_18 = ___vRaw1;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_19 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_18);
		NullCheck(L_19);
		int32_t L_20 = L_19->get_z_2();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** L_21 = ___gravity2;
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_22 = *((VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 **)L_21);
		NullCheck(L_22);
		float L_23 = L_22->get_z_2();
		NullCheck(L_17);
		L_17->set_z_2((((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)(((float)((float)L_20))), (float)((float)il2cpp_codegen_multiply((float)L_23, (float)(8192.0f)))))))));
		// return 0;
		return (uint8_t)0;
	}
}
// System.Byte MPU6050.MPU6050::dmpGetLinearAccelInWorld(MPU6050.MPU6050/VectorInt16&,MPU6050.MPU6050/VectorInt16&,MPU6050.MPU6050/Quaternion&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetLinearAccelInWorld_m02EE0C0C902A4221C1CB3A81BF5165437910FD84 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___v0, VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** ___vReal1, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q2, const RuntimeMethod* method)
{
	{
		// v.x = vReal.x; //memcpy(v, vReal, sizeof(VectorInt16));
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_0 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_1 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_0);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_2 = ___vReal1;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_3 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_2);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_x_0();
		NullCheck(L_1);
		L_1->set_x_0(L_4);
		// v.y = vReal.y;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_5 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_6 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_5);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_7 = ___vReal1;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_8 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_7);
		NullCheck(L_8);
		int32_t L_9 = L_8->get_y_1();
		NullCheck(L_6);
		L_6->set_y_1(L_9);
		// v.z = vReal.z;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_10 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_11 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_10);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_12 = ___vReal1;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_13 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_12);
		NullCheck(L_13);
		int32_t L_14 = L_13->get_z_2();
		NullCheck(L_11);
		L_11->set_z_2(L_14);
		// v.rotate(ref q);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_15 = ___v0;
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_16 = *((VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_15);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_17 = ___q2;
		NullCheck(L_16);
		VectorInt16_rotate_mF503A8A718E6E28EEFC3138FEF084E6BAC662D99(L_16, (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_17, /*hidden argument*/NULL);
		// return 0;
		return (uint8_t)0;
	}
}
// System.Byte MPU6050.MPU6050::dmpGetGravity(MPU6050.MPU6050/VectorFloat&,MPU6050.MPU6050/Quaternion&)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetGravity_m946B74E1871B75DFF1EE5CC9AD2E73E9CE508C74 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** ___v0, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q1, const RuntimeMethod* method)
{
	{
		// v.x = 2 * (q.x * q.z - q.w * q.y);
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** L_0 = ___v0;
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_1 = *((VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 **)L_0);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_2 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_3 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_2);
		NullCheck(L_3);
		float L_4 = L_3->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_5 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_6 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_5);
		NullCheck(L_6);
		float L_7 = L_6->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_8 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_9 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_8);
		NullCheck(L_9);
		float L_10 = L_9->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_11 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_12 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_11);
		NullCheck(L_12);
		float L_13 = L_12->get_y_2();
		NullCheck(L_1);
		L_1->set_x_0(((float)il2cpp_codegen_multiply((float)(2.0f), (float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_7)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_13)))))));
		// v.y = 2 * (q.w * q.x + q.y * q.z);
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** L_14 = ___v0;
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_15 = *((VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 **)L_14);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_16 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_17 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_16);
		NullCheck(L_17);
		float L_18 = L_17->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_19 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_20 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_19);
		NullCheck(L_20);
		float L_21 = L_20->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_22 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_23 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_22);
		NullCheck(L_23);
		float L_24 = L_23->get_y_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_25 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_26 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_25);
		NullCheck(L_26);
		float L_27 = L_26->get_z_3();
		NullCheck(L_15);
		L_15->set_y_1(((float)il2cpp_codegen_multiply((float)(2.0f), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_21)), (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_27)))))));
		// v.z = q.w * q.w - q.x * q.x - q.y * q.y + q.z * q.z;
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** L_28 = ___v0;
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_29 = *((VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 **)L_28);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_30 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_31 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_30);
		NullCheck(L_31);
		float L_32 = L_31->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_33 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_34 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_33);
		NullCheck(L_34);
		float L_35 = L_34->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_36 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_37 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_36);
		NullCheck(L_37);
		float L_38 = L_37->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_39 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_40 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_39);
		NullCheck(L_40);
		float L_41 = L_40->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_42 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_43 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_42);
		NullCheck(L_43);
		float L_44 = L_43->get_y_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_45 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_46 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_45);
		NullCheck(L_46);
		float L_47 = L_46->get_y_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_48 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_49 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_48);
		NullCheck(L_49);
		float L_50 = L_49->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_51 = ___q1;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_52 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_51);
		NullCheck(L_52);
		float L_53 = L_52->get_z_3();
		NullCheck(L_29);
		L_29->set_z_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_35)), (float)((float)il2cpp_codegen_multiply((float)L_38, (float)L_41)))), (float)((float)il2cpp_codegen_multiply((float)L_44, (float)L_47)))), (float)((float)il2cpp_codegen_multiply((float)L_50, (float)L_53)))));
		// return 0;
		return (uint8_t)0;
	}
}
// System.Byte MPU6050.MPU6050::dmpGetYawPitchRoll(System.Single[]&,MPU6050.MPU6050/Quaternion,MPU6050.MPU6050/VectorFloat)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_dmpGetYawPitchRoll_mC9209D9FD29441FA8C342E819282191155CB88A0 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** ___data0, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * ___q1, VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * ___gravity2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_dmpGetYawPitchRoll_mC9209D9FD29441FA8C342E819282191155CB88A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data[0] = (float)Math.Atan2(2 * q.x * q.y - 2 * q.w * q.z, 2 * q.w * q.w + 2 * q.x * q.x - 1);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_0 = ___data0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_0);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_2 = ___q1;
		NullCheck(L_2);
		float L_3 = L_2->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_4 = ___q1;
		NullCheck(L_4);
		float L_5 = L_4->get_y_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_6 = ___q1;
		NullCheck(L_6);
		float L_7 = L_6->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_8 = ___q1;
		NullCheck(L_8);
		float L_9 = L_8->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_10 = ___q1;
		NullCheck(L_10);
		float L_11 = L_10->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_12 = ___q1;
		NullCheck(L_12);
		float L_13 = L_12->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_14 = ___q1;
		NullCheck(L_14);
		float L_15 = L_14->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_16 = ___q1;
		NullCheck(L_16);
		float L_17 = L_16->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_18 = atan2((((double)((double)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_3)), (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_7)), (float)L_9))))))), (((double)((double)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_11)), (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_15)), (float)L_17)))), (float)(1.0f)))))));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(((float)((float)L_18))));
		// data[1] = (float)Math.Atan(gravity.x / Math.Sqrt(gravity.y * gravity.y + gravity.z * gravity.z));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_19 = ___data0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_20 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_19);
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_21 = ___gravity2;
		NullCheck(L_21);
		float L_22 = L_21->get_x_0();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_23 = ___gravity2;
		NullCheck(L_23);
		float L_24 = L_23->get_y_1();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_25 = ___gravity2;
		NullCheck(L_25);
		float L_26 = L_25->get_y_1();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_27 = ___gravity2;
		NullCheck(L_27);
		float L_28 = L_27->get_z_2();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_29 = ___gravity2;
		NullCheck(L_29);
		float L_30 = L_29->get_z_2();
		double L_31 = sqrt((((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_26)), (float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_30))))))));
		double L_32 = atan(((double)((double)(((double)((double)L_22)))/(double)L_31)));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(((float)((float)L_32))));
		// data[2] = (float)Math.Atan(gravity.y / Math.Sqrt(gravity.x * gravity.x + gravity.z * gravity.z));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_33 = ___data0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_34 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_33);
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_35 = ___gravity2;
		NullCheck(L_35);
		float L_36 = L_35->get_y_1();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_37 = ___gravity2;
		NullCheck(L_37);
		float L_38 = L_37->get_x_0();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_39 = ___gravity2;
		NullCheck(L_39);
		float L_40 = L_39->get_x_0();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_41 = ___gravity2;
		NullCheck(L_41);
		float L_42 = L_41->get_z_2();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_43 = ___gravity2;
		NullCheck(L_43);
		float L_44 = L_43->get_z_2();
		double L_45 = sqrt((((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_38, (float)L_40)), (float)((float)il2cpp_codegen_multiply((float)L_42, (float)L_44))))))));
		double L_46 = atan(((double)((double)(((double)((double)L_36)))/(double)L_45)));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)(((float)((float)L_46))));
		// return 0;
		return (uint8_t)0;
	}
}
// System.UInt32 MPU6050.MPU6050::dmpGetFIFOPacketSize()
extern "C" IL2CPP_METHOD_ATTR uint32_t MPU6050_dmpGetFIFOPacketSize_m1100A2FB90438B7DC1A8EC44A64B8B56A4908EE8 (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * __this, const RuntimeMethod* method)
{
	{
		// return dmpPacketSize;
		uint32_t L_0 = __this->get_dmpPacketSize_352();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MPU6050.MPU6050/<InitHardware>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CInitHardwareU3Ed__21_MoveNext_m84FF28D7230075893F146E9F0CFE8F6309D174DA (U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitHardwareU3Ed__21_MoveNext_m84FF28D7230075893F146E9F0CFE8F6309D174DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * V_1 = NULL;
	I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * V_2 = NULL;
	TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  V_3;
	memset(&V_3, 0, sizeof(V_3));
	I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * V_4 = NULL;
	TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  V_5;
	memset(&V_5, 0, sizeof(V_5));
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_6;
	memset(&V_6, 0, sizeof(V_6));
	String_t* V_7 = NULL;
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)2))))
			{
				goto IL_0019;
			}
		}

IL_0012:
		{
			// isInitHardware = false;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_3 = V_1;
			NullCheck(L_3);
			L_3->set_isInitHardware_3((bool)0);
		}

IL_0019:
		{
		}

IL_001a:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_4 = V_0;
				switch (L_4)
				{
					case 0:
					{
						goto IL_007e;
					}
					case 1:
					{
						goto IL_0100;
					}
					case 2:
					{
						goto IL_0165;
					}
				}
			}

IL_002c:
			{
				// mpu6050Msg = "[Start InitHardware]\n";
				MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_5 = V_1;
				NullCheck(L_5);
				L_5->set_mpu6050Msg_1(_stringLiteralB26A3589677C2EC49CABA1A5F2A15E287C8126EB);
				// IoController = GpioController.GetDefault();
				MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_6 = V_1;
				GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * L_7 = GpioController_GetDefault_mB4A541F47D43F3062A9FBCC2F810ECA3A725DEEC(/*hidden argument*/NULL);
				NullCheck(L_6);
				L_6->set_IoController_5(L_7);
				// string aqs = I2cDevice.GetDeviceSelector();
				String_t* L_8 = I2cDevice_GetDeviceSelector_mE5EBCAAEFAC3508FED1B6396BB628AAF882A18BC(/*hidden argument*/NULL);
				// DeviceInformationCollection collection = await DeviceInformation.FindAllAsync(aqs);
				RuntimeObject* L_9 = DeviceInformation_FindAllAsync_m996740009B773388FBCC4B81D5BC9CF099B4F141(L_8, /*hidden argument*/NULL);
				TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  L_10 = WindowsRuntimeSystemExtensions_GetAwaiter_TisDeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7_m1CC6828562E01EA47C35CDEADF28FB9C413910FC(L_9, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisDeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7_m1CC6828562E01EA47C35CDEADF28FB9C413910FC_RuntimeMethod_var);
				V_3 = L_10;
				bool L_11 = TaskAwaiter_1_get_IsCompleted_mC7C51DD2698AA19A0C8BDD2DC423D43B5051A8A4((TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mC7C51DD2698AA19A0C8BDD2DC423D43B5051A8A4_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_009a;
				}
			}

IL_005b:
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				__this->set_U3CU3E1__state_0(L_12);
				TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  L_13 = V_3;
				__this->set_U3CU3Eu__1_3(L_13);
				AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_14 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m0775FE1A8DB00C8406F7C68AFD1FB937369F1415((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_14, (TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *)(&V_3), (U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_m0775FE1A8DB00C8406F7C68AFD1FB937369F1415_RuntimeMethod_var);
				goto IL_01d8;
			}

IL_007e:
			{
				TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  L_15 = __this->get_U3CU3Eu__1_3();
				V_3 = L_15;
				TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 * L_16 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 ));
				int32_t L_17 = (-1);
				V_0 = L_17;
				__this->set_U3CU3E1__state_0(L_17);
			}

IL_009a:
			{
				DeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7 * L_18 = TaskAwaiter_1_GetResult_m1D9FFDC78B08E211B8341CAE0C335B60BB43B069((TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m1D9FFDC78B08E211B8341CAE0C335B60BB43B069_RuntimeMethod_var);
				// I2cConnectionSettings settings = new I2cConnectionSettings(devAddr);
				MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_19 = V_1;
				NullCheck(L_19);
				uint8_t L_20 = L_19->get_devAddr_353();
				I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * L_21 = (I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 *)il2cpp_codegen_object_new(I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3_il2cpp_TypeInfo_var);
				I2cConnectionSettings__ctor_m9F3C9DC8564CBBB3B887A1B1A965D1DEE48EF971(L_21, L_20, /*hidden argument*/NULL);
				V_2 = L_21;
				// settings.BusSpeed = I2cBusSpeed.FastMode; // 400kHz clock
				I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * L_22 = V_2;
				NullCheck(L_22);
				I2cConnectionSettings_put_BusSpeed_mBC01F93AE08CB98CB6703B46E103EFD8B3A83BC0(L_22, 1, /*hidden argument*/NULL);
				// settings.SharingMode = I2cSharingMode.Exclusive;
				I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * L_23 = V_2;
				NullCheck(L_23);
				I2cConnectionSettings_put_SharingMode_mC43D9E5B1AA80BEACE708088C8E18A35FF09676C(L_23, 0, /*hidden argument*/NULL);
				// _mpu6050Device = await I2cDevice.FromIdAsync(collection[0].Id, settings);
				NullCheck(L_18);
				DeviceInformation_t6188B770C92A6C990958DA0821869BF350ED39C9 * L_24 = InterfaceFuncInvoker1< DeviceInformation_t6188B770C92A6C990958DA0821869BF350ED39C9 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Windows.Devices.Enumeration.DeviceInformation>::get_Item(System.Int32) */, IReadOnlyList_1_t24BEFFB31822663BC19FF6104A04EEA251272897_il2cpp_TypeInfo_var, L_18, 0);
				NullCheck(L_24);
				String_t* L_25 = DeviceInformation_get_Id_m8596792EF7C8149D474A3C4DBC85C5048D461F70(L_24, /*hidden argument*/NULL);
				I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * L_26 = V_2;
				RuntimeObject* L_27 = I2cDevice_FromIdAsync_m5B9AD081A33D59F5C5CF8FC8A73C22AF0AFFB67B(L_25, L_26, /*hidden argument*/NULL);
				TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  L_28 = WindowsRuntimeSystemExtensions_GetAwaiter_TisI2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128_m8CFCC8548C48C464850A53EB6DE3E6A7E3FD5AE6(L_27, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisI2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128_m8CFCC8548C48C464850A53EB6DE3E6A7E3FD5AE6_RuntimeMethod_var);
				V_5 = L_28;
				bool L_29 = TaskAwaiter_1_get_IsCompleted_m66DCCCFB07DFD0DA4B7340702E8039263B296AB4((TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m66DCCCFB07DFD0DA4B7340702E8039263B296AB4_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_011d;
				}
			}

IL_00dc:
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
				TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  L_31 = V_5;
				__this->set_U3CU3Eu__2_4(L_31);
				AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_32 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mB140774984394014A347E05D9D90372617EA07E4((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_32, (TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *)(&V_5), (U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mB140774984394014A347E05D9D90372617EA07E4_RuntimeMethod_var);
				goto IL_01d8;
			}

IL_0100:
			{
				TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  L_33 = __this->get_U3CU3Eu__2_4();
				V_5 = L_33;
				TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 * L_34 = __this->get_address_of_U3CU3Eu__2_4();
				il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 ));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->set_U3CU3E1__state_0(L_35);
			}

IL_011d:
			{
				I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_36 = TaskAwaiter_1_GetResult_m7578B28CF8B63C064016453EBA95D58C4A058EF8((TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m7578B28CF8B63C064016453EBA95D58C4A058EF8_RuntimeMethod_var);
				V_4 = L_36;
				MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_37 = V_1;
				I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_38 = V_4;
				NullCheck(L_37);
				L_37->set__mpu6050Device_4(L_38);
				// await Task.Delay(3); // wait power up sequence
				IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
				Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_39 = Task_Delay_m193E6692B81A2A6C45F5FAE08CF79FA06FC7DA60(3, /*hidden argument*/NULL);
				NullCheck(L_39);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_40 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_39, /*hidden argument*/NULL);
				V_6 = L_40;
				bool L_41 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), /*hidden argument*/NULL);
				if (L_41)
				{
					goto IL_0182;
				}
			}

IL_0144:
			{
				int32_t L_42 = 2;
				V_0 = L_42;
				__this->set_U3CU3E1__state_0(L_42);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_43 = V_6;
				__this->set_U3CU3Eu__3_5(L_43);
				AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_44 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mE05252DAEBD30F827BE112F78E6B4F0554B83FE7((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_44, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), (U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD_mE05252DAEBD30F827BE112F78E6B4F0554B83FE7_RuntimeMethod_var);
				goto IL_01d8;
			}

IL_0165:
			{
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_45 = __this->get_U3CU3Eu__3_5();
				V_6 = L_45;
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_46 = __this->get_address_of_U3CU3Eu__3_5();
				il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->set_U3CU3E1__state_0(L_47);
			}

IL_0182:
			{
				TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), /*hidden argument*/NULL);
				// isInitHardware = true;
				MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_48 = V_1;
				NullCheck(L_48);
				L_48->set_isInitHardware_3((bool)1);
				// }
				goto IL_01aa;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0192;
			throw e;
		}

CATCH_0192:
		{ // begin catch(System.Exception)
			// string error = ex.ToString();
			NullCheck(((Exception_t *)__exception_local));
			String_t* L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t *)__exception_local));
			V_7 = L_49;
			// mpu6050Msg = error;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_50 = V_1;
			String_t* L_51 = V_7;
			NullCheck(L_50);
			L_50->set_mpu6050Msg_1(L_51);
			// isInitErr = true;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_52 = V_1;
			NullCheck(L_52);
			L_52->set_isInitErr_2((bool)1);
			// }
			goto IL_01aa;
		} // end catch (depth: 2)

IL_01aa:
		{
			goto IL_01c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01ac;
		throw e;
	}

CATCH_01ac:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_53 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_54 = V_8;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_53, L_54, /*hidden argument*/NULL);
		goto IL_01d8;
	} // end catch (depth: 1)

IL_01c5:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_55, /*hidden argument*/NULL);
	}

IL_01d8:
	{
		return;
	}
}
extern "C"  void U3CInitHardwareU3Ed__21_MoveNext_m84FF28D7230075893F146E9F0CFE8F6309D174DA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * _thisAdjusted = reinterpret_cast<U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *>(__this + 1);
	U3CInitHardwareU3Ed__21_MoveNext_m84FF28D7230075893F146E9F0CFE8F6309D174DA(_thisAdjusted, method);
}
// System.Void MPU6050.MPU6050/<InitHardware>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CInitHardwareU3Ed__21_SetStateMachine_m82396156F5809D0871F47E3FE7CDE2A6693A29E0 (U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CInitHardwareU3Ed__21_SetStateMachine_m82396156F5809D0871F47E3FE7CDE2A6693A29E0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD * _thisAdjusted = reinterpret_cast<U3CInitHardwareU3Ed__21_t0346A49D0C7D783B33AF5C2792D653565E4895AD *>(__this + 1);
	U3CInitHardwareU3Ed__21_SetStateMachine_m82396156F5809D0871F47E3FE7CDE2A6693A29E0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MPU6050.MPU6050/<dmpInitialize>d__81::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CdmpInitializeU3Ed__81_MoveNext_m539F3E4721FF0F285E829963050FD71F03A659CE (U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdmpInitializeU3Ed__81_MoveNext_m539F3E4721FF0F285E829963050FD71F03A659CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006b;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_011c;
			}
		}

IL_0018:
		{
			// if (isInitErr) return;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->get_isInitErr_2();
			if (!L_5)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			// if (isInitErr) return;
			goto IL_019e;
		}

IL_0025:
		{
			// isdmpInitialize = false;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_6 = V_1;
			NullCheck(L_6);
			L_6->set_isdmpInitialize_7((bool)0);
			// reset();
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_7 = V_1;
			NullCheck(L_7);
			MPU6050_reset_m73DD6B177657F4E6B94F71561D8810B4A117695F(L_7, /*hidden argument*/NULL);
			// await Task.Delay(30);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_8 = Task_Delay_m193E6692B81A2A6C45F5FAE08CF79FA06FC7DA60(((int32_t)30), /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_9 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			bool L_10 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0087;
			}
		}

IL_0048:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_12 = V_2;
			__this->set_U3CU3Eu__1_3(L_12);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_mCA8B27C9D1B475811B15E19797E38268AE0CB2C2((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_13, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_mCA8B27C9D1B475811B15E19797E38268AE0CB2C2_RuntimeMethod_var);
			goto IL_01b1;
		}

IL_006b:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_14 = __this->get_U3CU3Eu__1_3();
			V_2 = L_14;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_15 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0087:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			// setSleepEnabled(false);
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_17 = V_1;
			NullCheck(L_17);
			MPU6050_setSleepEnabled_mB7A87184F5023C82EE92EF8429F3CBAC11B7577D(L_17, (bool)0, /*hidden argument*/NULL);
			// setMemoryBank(0x10, true, true);
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_18 = V_1;
			NullCheck(L_18);
			MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0(L_18, (uint8_t)((int32_t)16), (bool)1, (bool)1, /*hidden argument*/NULL);
			// setMemoryStartAddress(0x06);
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_19 = V_1;
			NullCheck(L_19);
			MPU6050_setMemoryStartAddress_m09F6A97E0D8D681267A8442C3E12EE9BD9DEFAB6(L_19, (uint8_t)6, /*hidden argument*/NULL);
			// setMemoryBank(0, false, false);
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_20 = V_1;
			NullCheck(L_20);
			MPU6050_setMemoryBank_m40DB15AFE2C8161466763480339B75D1BEAA55D0(L_20, (uint8_t)0, (bool)0, (bool)0, /*hidden argument*/NULL);
			// int xgOffsetTC = getXGyroOffsetTC();
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_21 = V_1;
			NullCheck(L_21);
			MPU6050_getXGyroOffsetTC_m3C75BCA57B9075F2606FFA805777A8F7A514FA8E(L_21, /*hidden argument*/NULL);
			// int ygOffsetTC = getYGyroOffsetTC();
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_22 = V_1;
			NullCheck(L_22);
			MPU6050_getYGyroOffsetTC_m864F74257AF946A41BB925D08A4A3B8316141789(L_22, /*hidden argument*/NULL);
			// int zgOffsetTC = getZGyroOffsetTC();
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_23 = V_1;
			NullCheck(L_23);
			MPU6050_getZGyroOffsetTC_mB9A91B6E95ED65B67927F5F83553BF747FAE644A(L_23, /*hidden argument*/NULL);
			// setSlaveAddress(0, 0x7F);
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_24 = V_1;
			NullCheck(L_24);
			MPU6050_setSlaveAddress_mAA14EE35A91CA5B2B8D5F515759A860CEFE96CB8(L_24, (uint8_t)0, (uint8_t)((int32_t)127), /*hidden argument*/NULL);
			// setI2CMasterModeEnabled(false);
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_25 = V_1;
			NullCheck(L_25);
			MPU6050_setI2CMasterModeEnabled_mA42BA638032D84429DE247E5364AD6569E8A70F7(L_25, (bool)0, /*hidden argument*/NULL);
			// setSlaveAddress(0, 0x68);
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_26 = V_1;
			NullCheck(L_26);
			MPU6050_setSlaveAddress_mAA14EE35A91CA5B2B8D5F515759A860CEFE96CB8(L_26, (uint8_t)0, (uint8_t)((int32_t)104), /*hidden argument*/NULL);
			// resetI2CMaster();
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_27 = V_1;
			NullCheck(L_27);
			MPU6050_resetI2CMaster_mD04502DB9D7696B9D2CBED04B9716057356FD36D(L_27, /*hidden argument*/NULL);
			// await Task.Delay(20);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_28 = Task_Delay_m193E6692B81A2A6C45F5FAE08CF79FA06FC7DA60(((int32_t)20), /*hidden argument*/NULL);
			NullCheck(L_28);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_29 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_28, /*hidden argument*/NULL);
			V_2 = L_29;
			bool L_30 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_0138;
			}
		}

IL_00f9:
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			__this->set_U3CU3E1__state_0(L_31);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_32 = V_2;
			__this->set_U3CU3Eu__1_3(L_32);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_33 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_mCA8B27C9D1B475811B15E19797E38268AE0CB2C2((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_33, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB_mCA8B27C9D1B475811B15E19797E38268AE0CB2C2_RuntimeMethod_var);
			goto IL_01b1;
		}

IL_011c:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_34 = __this->get_U3CU3Eu__1_3();
			V_2 = L_34;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_35 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_36 = (-1);
			V_0 = L_36;
			__this->set_U3CU3E1__state_0(L_36);
		}

IL_0138:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			// if (writeProgMemoryBlock(dmpMemory, MPU6050_DMP_CODE_SIZE, 0, 0, true))
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_37 = V_1;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_38 = V_1;
			NullCheck(L_38);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = L_38->get_dmpMemory_12();
			NullCheck(L_37);
			bool L_40 = MPU6050_writeProgMemoryBlock_m92873E7AC206ACD554FA3738AA0744D5752D114C(L_37, L_39, ((int32_t)1929), (uint8_t)0, (uint8_t)0, (bool)1, /*hidden argument*/NULL);
			if (L_40)
			{
				goto IL_016c;
			}
		}

IL_0155:
		{
			// devStatus = 1;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_41 = V_1;
			NullCheck(L_41);
			L_41->set_devStatus_8((uint8_t)1);
			// isdmpInitialize = true;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_42 = V_1;
			NullCheck(L_42);
			L_42->set_isdmpInitialize_7((bool)1);
			// isInitErr = true;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_43 = V_1;
			NullCheck(L_43);
			L_43->set_isInitErr_2((bool)1);
			// return; // main binary block loading failed
			goto IL_019e;
		}

IL_016c:
		{
			// mpu6050Msg = "Success dmpInitialize\n";
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_44 = V_1;
			NullCheck(L_44);
			L_44->set_mpu6050Msg_1(_stringLiteralE5692323CBF4AAD9442856B4CC7656812739DEE9);
			// isdmpInitialize = true;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_45 = V_1;
			NullCheck(L_45);
			L_45->set_isdmpInitialize_7((bool)1);
			// devStatus = 0;
			MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_46 = V_1;
			NullCheck(L_46);
			L_46->set_devStatus_8((uint8_t)0);
			// return; // success
			goto IL_019e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0187;
		throw e;
	}

CATCH_0187:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_48 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_47, L_48, /*hidden argument*/NULL);
		goto IL_01b1;
	} // end catch (depth: 1)

IL_019e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_49 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_49, /*hidden argument*/NULL);
	}

IL_01b1:
	{
		return;
	}
}
extern "C"  void U3CdmpInitializeU3Ed__81_MoveNext_m539F3E4721FF0F285E829963050FD71F03A659CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * _thisAdjusted = reinterpret_cast<U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB *>(__this + 1);
	U3CdmpInitializeU3Ed__81_MoveNext_m539F3E4721FF0F285E829963050FD71F03A659CE(_thisAdjusted, method);
}
// System.Void MPU6050.MPU6050/<dmpInitialize>d__81::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CdmpInitializeU3Ed__81_SetStateMachine_mA20AA5D49820293EFFFA29EDF38A17AA160AAEA1 (U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CdmpInitializeU3Ed__81_SetStateMachine_mA20AA5D49820293EFFFA29EDF38A17AA160AAEA1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB * _thisAdjusted = reinterpret_cast<U3CdmpInitializeU3Ed__81_t3ACD0B2B73A32CB800A14201BD5D8C31BF2D2ADB *>(__this + 1);
	U3CdmpInitializeU3Ed__81_SetStateMachine_mA20AA5D49820293EFFFA29EDF38A17AA160AAEA1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MPU6050.MPU6050/Quaternion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Quaternion__ctor_mF7C0D6D73E522FF35E94350F0066C93B67309D48 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// w = 1.0f;
		__this->set_w_0((1.0f));
		// x = 0.0f;
		__this->set_x_1((0.0f));
		// y = 0.0f;
		__this->set_y_2((0.0f));
		// z = 0.0f;
		__this->set_z_3((0.0f));
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050/Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Quaternion__ctor_m92DA345F6BE49020B629CDD9BF41894310469503 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, float ___nw0, float ___nx1, float ___ny2, float ___nz3, const RuntimeMethod* method)
{
	{
		// public Quaternion(float nw, float nx, float ny, float nz)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// w = nw;
		float L_0 = ___nw0;
		__this->set_w_0(L_0);
		// x = nx;
		float L_1 = ___nx1;
		__this->set_x_1(L_1);
		// y = ny;
		float L_2 = ___ny2;
		__this->set_y_2(L_2);
		// z = nz;
		float L_3 = ___nz3;
		__this->set_z_3(L_3);
		// }
		return;
	}
}
// MPU6050.MPU6050/Quaternion MPU6050.MPU6050/Quaternion::getProduct(MPU6050.MPU6050/Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * Quaternion_getProduct_m95A9DC4881F3247FD2F732B530FE2D74DADAF87E (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * ___q0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quaternion_getProduct_m95A9DC4881F3247FD2F732B530FE2D74DADAF87E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Quaternion _q = new Quaternion(
		//     w * q.w - x * q.x - y * q.y - z * q.z,  // new w
		//     w * q.x + x * q.w + y * q.z - z * q.y,  // new x
		//     w * q.y - x * q.z + y * q.w + z * q.x,  // new y
		//     w * q.z + x * q.y - y * q.x + z * q.w); // new z
		float L_0 = __this->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_1 = ___q0;
		NullCheck(L_1);
		float L_2 = L_1->get_w_0();
		float L_3 = __this->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_4 = ___q0;
		NullCheck(L_4);
		float L_5 = L_4->get_x_1();
		float L_6 = __this->get_y_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_7 = ___q0;
		NullCheck(L_7);
		float L_8 = L_7->get_y_2();
		float L_9 = __this->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_10 = ___q0;
		NullCheck(L_10);
		float L_11 = L_10->get_z_3();
		float L_12 = __this->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_13 = ___q0;
		NullCheck(L_13);
		float L_14 = L_13->get_x_1();
		float L_15 = __this->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_16 = ___q0;
		NullCheck(L_16);
		float L_17 = L_16->get_w_0();
		float L_18 = __this->get_y_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_19 = ___q0;
		NullCheck(L_19);
		float L_20 = L_19->get_z_3();
		float L_21 = __this->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_22 = ___q0;
		NullCheck(L_22);
		float L_23 = L_22->get_y_2();
		float L_24 = __this->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_25 = ___q0;
		NullCheck(L_25);
		float L_26 = L_25->get_y_2();
		float L_27 = __this->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_28 = ___q0;
		NullCheck(L_28);
		float L_29 = L_28->get_z_3();
		float L_30 = __this->get_y_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_31 = ___q0;
		NullCheck(L_31);
		float L_32 = L_31->get_w_0();
		float L_33 = __this->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_34 = ___q0;
		NullCheck(L_34);
		float L_35 = L_34->get_x_1();
		float L_36 = __this->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_37 = ___q0;
		NullCheck(L_37);
		float L_38 = L_37->get_z_3();
		float L_39 = __this->get_x_1();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_40 = ___q0;
		NullCheck(L_40);
		float L_41 = L_40->get_y_2();
		float L_42 = __this->get_y_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_43 = ___q0;
		NullCheck(L_43);
		float L_44 = L_43->get_x_1();
		float L_45 = __this->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_46 = ___q0;
		NullCheck(L_46);
		float L_47 = L_46->get_w_0();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_48 = (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 *)il2cpp_codegen_object_new(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8_il2cpp_TypeInfo_var);
		Quaternion__ctor_m92DA345F6BE49020B629CDD9BF41894310469503(L_48, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_2)), (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_14)), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)))), (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_20)))), (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_23)))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_26)), (float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_29)))), (float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_32)))), (float)((float)il2cpp_codegen_multiply((float)L_33, (float)L_35)))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_36, (float)L_38)), (float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_41)))), (float)((float)il2cpp_codegen_multiply((float)L_42, (float)L_44)))), (float)((float)il2cpp_codegen_multiply((float)L_45, (float)L_47)))), /*hidden argument*/NULL);
		// return _q;
		return L_48;
	}
}
// MPU6050.MPU6050/Quaternion MPU6050.MPU6050/Quaternion::getConjugate()
extern "C" IL2CPP_METHOD_ATTR Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * Quaternion_getConjugate_m21D088D212AE02DC7169EB16AD285CEEBD50D787 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quaternion_getConjugate_m21D088D212AE02DC7169EB16AD285CEEBD50D787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Quaternion _q = new Quaternion(w, -x, -y, -z);
		float L_0 = __this->get_w_0();
		float L_1 = __this->get_x_1();
		float L_2 = __this->get_y_2();
		float L_3 = __this->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_4 = (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 *)il2cpp_codegen_object_new(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8_il2cpp_TypeInfo_var);
		Quaternion__ctor_m92DA345F6BE49020B629CDD9BF41894310469503(L_4, L_0, ((-L_1)), ((-L_2)), ((-L_3)), /*hidden argument*/NULL);
		// return _q;
		return L_4;
	}
}
// System.Single MPU6050.MPU6050/Quaternion::getMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Quaternion_getMagnitude_m18D3891A802D1F415D2F3168F26B5372A1A6F002 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quaternion_getMagnitude_m18D3891A802D1F415D2F3168F26B5372A1A6F002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (float)Math.Sqrt(w * w + x * x + y * y + z * z);
		float L_0 = __this->get_w_0();
		float L_1 = __this->get_w_0();
		float L_2 = __this->get_x_1();
		float L_3 = __this->get_x_1();
		float L_4 = __this->get_y_2();
		float L_5 = __this->get_y_2();
		float L_6 = __this->get_z_3();
		float L_7 = __this->get_z_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_8 = sqrt((((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))))))));
		return (((float)((float)L_8)));
	}
}
// System.Void MPU6050.MPU6050/Quaternion::normalize()
extern "C" IL2CPP_METHOD_ATTR void Quaternion_normalize_m1C3F976126AAC515F1121479517B8D4773717D88 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float m = getMagnitude();
		float L_0 = Quaternion_getMagnitude_m18D3891A802D1F415D2F3168F26B5372A1A6F002(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// w /= m;
		float L_1 = __this->get_w_0();
		float L_2 = V_0;
		__this->set_w_0(((float)((float)L_1/(float)L_2)));
		// x /= m;
		float L_3 = __this->get_x_1();
		float L_4 = V_0;
		__this->set_x_1(((float)((float)L_3/(float)L_4)));
		// y /= m;
		float L_5 = __this->get_y_2();
		float L_6 = V_0;
		__this->set_y_2(((float)((float)L_5/(float)L_6)));
		// z /= m;
		float L_7 = __this->get_z_3();
		float L_8 = V_0;
		__this->set_z_3(((float)((float)L_7/(float)L_8)));
		// }
		return;
	}
}
// MPU6050.MPU6050/Quaternion MPU6050.MPU6050/Quaternion::getNormalized()
extern "C" IL2CPP_METHOD_ATTR Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * Quaternion_getNormalized_mB273DFC10A752E3DA4E2419DB50C8EB7FEAB4AE0 (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Quaternion_getNormalized_mB273DFC10A752E3DA4E2419DB50C8EB7FEAB4AE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Quaternion r = new Quaternion(w, x, y, z);
		float L_0 = __this->get_w_0();
		float L_1 = __this->get_x_1();
		float L_2 = __this->get_y_2();
		float L_3 = __this->get_z_3();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_4 = (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 *)il2cpp_codegen_object_new(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8_il2cpp_TypeInfo_var);
		Quaternion__ctor_m92DA345F6BE49020B629CDD9BF41894310469503(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// r.normalize();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_5 = L_4;
		NullCheck(L_5);
		Quaternion_normalize_m1C3F976126AAC515F1121479517B8D4773717D88(L_5, /*hidden argument*/NULL);
		// return r;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MPU6050.MPU6050/VectorFloat::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VectorFloat__ctor_mD27CAFBEE292EB71B8A71FAFDF200A99773B3F0A (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, const RuntimeMethod* method)
{
	{
		// public VectorFloat()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// x = 0;
		__this->set_x_0((0.0f));
		// y = 0;
		__this->set_y_1((0.0f));
		// z = 0;
		__this->set_z_2((0.0f));
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050/VectorFloat::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void VectorFloat__ctor_m2BC9A2CE7268F800F13F4FED914927A8FCC900B7 (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, float ___nx0, float ___ny1, float ___nz2, const RuntimeMethod* method)
{
	{
		// public VectorFloat(float nx, float ny, float nz)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// x = nx;
		float L_0 = ___nx0;
		__this->set_x_0(L_0);
		// y = ny;
		float L_1 = ___ny1;
		__this->set_y_1(L_1);
		// z = nz;
		float L_2 = ___nz2;
		__this->set_z_2(L_2);
		// }
		return;
	}
}
// System.Single MPU6050.MPU6050/VectorFloat::getMagnitude()
extern "C" IL2CPP_METHOD_ATTR float VectorFloat_getMagnitude_m2EC5EFE5D06882D9EB0FCC0BDE61D160CBC81254 (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorFloat_getMagnitude_m2EC5EFE5D06882D9EB0FCC0BDE61D160CBC81254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (float)Math.Sqrt(x * x + y * y + z * z);
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_x_0();
		float L_2 = __this->get_y_1();
		float L_3 = __this->get_y_1();
		float L_4 = __this->get_z_2();
		float L_5 = __this->get_z_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_6 = sqrt((((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))))))));
		return (((float)((float)L_6)));
	}
}
// System.Void MPU6050.MPU6050/VectorFloat::normalize()
extern "C" IL2CPP_METHOD_ATTR void VectorFloat_normalize_m3243D52D8ECD75A3268BD766C0B106DD3AF6AB2D (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float m = getMagnitude();
		float L_0 = VectorFloat_getMagnitude_m2EC5EFE5D06882D9EB0FCC0BDE61D160CBC81254(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// x /= m;
		float L_1 = __this->get_x_0();
		float L_2 = V_0;
		__this->set_x_0(((float)((float)L_1/(float)L_2)));
		// y /= m;
		float L_3 = __this->get_y_1();
		float L_4 = V_0;
		__this->set_y_1(((float)((float)L_3/(float)L_4)));
		// z /= m;
		float L_5 = __this->get_z_2();
		float L_6 = V_0;
		__this->set_z_2(((float)((float)L_5/(float)L_6)));
		// }
		return;
	}
}
// MPU6050.MPU6050/VectorFloat MPU6050.MPU6050/VectorFloat::getNormalized()
extern "C" IL2CPP_METHOD_ATTR VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * VectorFloat_getNormalized_mB9DB931110387C477C02761669B239E61507AC89 (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorFloat_getNormalized_mB9DB931110387C477C02761669B239E61507AC89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VectorFloat r = new VectorFloat(x, y, z);
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_y_1();
		float L_2 = __this->get_z_2();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_3 = (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 *)il2cpp_codegen_object_new(VectorFloat_t258D595FC302A20980CBC2604F090D5641027816_il2cpp_TypeInfo_var);
		VectorFloat__ctor_m2BC9A2CE7268F800F13F4FED914927A8FCC900B7(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		// r.normalize();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_4 = L_3;
		NullCheck(L_4);
		VectorFloat_normalize_m3243D52D8ECD75A3268BD766C0B106DD3AF6AB2D(L_4, /*hidden argument*/NULL);
		// return r;
		return L_4;
	}
}
// System.Void MPU6050.MPU6050/VectorFloat::rotate(MPU6050.MPU6050/Quaternion)
extern "C" IL2CPP_METHOD_ATTR void VectorFloat_rotate_mCAB376431DCD9BBFE9E57F5C6711D6F56C497036 (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * ___q0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorFloat_rotate_mCAB376431DCD9BBFE9E57F5C6711D6F56C497036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * V_0 = NULL;
	{
		// Quaternion p = new Quaternion(0, x, y, z);
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_y_1();
		float L_2 = __this->get_z_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_3 = (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 *)il2cpp_codegen_object_new(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8_il2cpp_TypeInfo_var);
		Quaternion__ctor_m92DA345F6BE49020B629CDD9BF41894310469503(L_3, (0.0f), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// p = q.getProduct(p);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_4 = ___q0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_5 = V_0;
		NullCheck(L_4);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_6 = Quaternion_getProduct_m95A9DC4881F3247FD2F732B530FE2D74DADAF87E(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// p = p.getProduct(q.getConjugate());
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_7 = V_0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_8 = ___q0;
		NullCheck(L_8);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_9 = Quaternion_getConjugate_m21D088D212AE02DC7169EB16AD285CEEBD50D787(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_10 = Quaternion_getProduct_m95A9DC4881F3247FD2F732B530FE2D74DADAF87E(L_7, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// x = p.x;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_11 = V_0;
		NullCheck(L_11);
		float L_12 = L_11->get_x_1();
		__this->set_x_0(L_12);
		// y = p.y;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_13 = V_0;
		NullCheck(L_13);
		float L_14 = L_13->get_y_2();
		__this->set_y_1(L_14);
		// z = p.z;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_15 = V_0;
		NullCheck(L_15);
		float L_16 = L_15->get_z_3();
		__this->set_z_2(L_16);
		// }
		return;
	}
}
// MPU6050.MPU6050/VectorFloat MPU6050.MPU6050/VectorFloat::getRotated(MPU6050.MPU6050/Quaternion&)
extern "C" IL2CPP_METHOD_ATTR VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * VectorFloat_getRotated_mC343E4FEB475B5D38099E9BDF071BCF7F4D94CD3 (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorFloat_getRotated_mC343E4FEB475B5D38099E9BDF071BCF7F4D94CD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VectorFloat r = new VectorFloat(x, y, z);
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_y_1();
		float L_2 = __this->get_z_2();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_3 = (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 *)il2cpp_codegen_object_new(VectorFloat_t258D595FC302A20980CBC2604F090D5641027816_il2cpp_TypeInfo_var);
		VectorFloat__ctor_m2BC9A2CE7268F800F13F4FED914927A8FCC900B7(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		// r.rotate(q);
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_4 = L_3;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_5 = ___q0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_6 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_5);
		NullCheck(L_4);
		VectorFloat_rotate_mCAB376431DCD9BBFE9E57F5C6711D6F56C497036(L_4, L_6, /*hidden argument*/NULL);
		// return r;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MPU6050.MPU6050/VectorInt16::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VectorInt16__ctor_m1C4827192554B7EFD23D5D35300281D9E4260BF1 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, const RuntimeMethod* method)
{
	{
		// public VectorInt16()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// x = 0;
		__this->set_x_0(0);
		// y = 0;
		__this->set_y_1(0);
		// z = 0;
		__this->set_z_2(0);
		// }
		return;
	}
}
// System.Void MPU6050.MPU6050/VectorInt16::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void VectorInt16__ctor_m702C9F9D39A7382823B85B3A9E90FD0A72CF5270 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, int32_t ___nx0, int32_t ___ny1, int32_t ___nz2, const RuntimeMethod* method)
{
	{
		// public VectorInt16(int nx, int ny, int nz)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// x = nx;
		int32_t L_0 = ___nx0;
		__this->set_x_0(L_0);
		// y = ny;
		int32_t L_1 = ___ny1;
		__this->set_y_1(L_1);
		// z = nz;
		int32_t L_2 = ___nz2;
		__this->set_z_2(L_2);
		// }
		return;
	}
}
// System.Single MPU6050.MPU6050/VectorInt16::getMagnitude()
extern "C" IL2CPP_METHOD_ATTR float VectorInt16_getMagnitude_m75A5BE089EB91D08E9A1E01859347FC540AD7AC4 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorInt16_getMagnitude_m75A5BE089EB91D08E9A1E01859347FC540AD7AC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (float)Math.Sqrt(x * x + y * y + z * z);
		int32_t L_0 = __this->get_x_0();
		int32_t L_1 = __this->get_x_0();
		int32_t L_2 = __this->get_y_1();
		int32_t L_3 = __this->get_y_1();
		int32_t L_4 = __this->get_z_2();
		int32_t L_5 = __this->get_z_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_6 = sqrt((((double)((double)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5))))))));
		return (((float)((float)L_6)));
	}
}
// System.Void MPU6050.MPU6050/VectorInt16::normalize()
extern "C" IL2CPP_METHOD_ATTR void VectorInt16_normalize_mF94E043692AF9BF32B165020185B157959BEB8EC (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float m = getMagnitude();
		float L_0 = VectorInt16_getMagnitude_m75A5BE089EB91D08E9A1E01859347FC540AD7AC4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// x = (int)(x / m);
		int32_t L_1 = __this->get_x_0();
		float L_2 = V_0;
		__this->set_x_0((((int32_t)((int32_t)((float)((float)(((float)((float)L_1)))/(float)L_2))))));
		// y = (int)(y / m);
		int32_t L_3 = __this->get_y_1();
		float L_4 = V_0;
		__this->set_y_1((((int32_t)((int32_t)((float)((float)(((float)((float)L_3)))/(float)L_4))))));
		// z = (int)(z / m);
		int32_t L_5 = __this->get_z_2();
		float L_6 = V_0;
		__this->set_z_2((((int32_t)((int32_t)((float)((float)(((float)((float)L_5)))/(float)L_6))))));
		// }
		return;
	}
}
// MPU6050.MPU6050/VectorInt16 MPU6050.MPU6050/VectorInt16::getNormalized()
extern "C" IL2CPP_METHOD_ATTR VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * VectorInt16_getNormalized_m5A764D5FAA593946A88EDE641E97D69932F49F54 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorInt16_getNormalized_m5A764D5FAA593946A88EDE641E97D69932F49F54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VectorInt16 r = new VectorInt16(x, y, z);
		int32_t L_0 = __this->get_x_0();
		int32_t L_1 = __this->get_y_1();
		int32_t L_2 = __this->get_z_2();
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_3 = (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 *)il2cpp_codegen_object_new(VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790_il2cpp_TypeInfo_var);
		VectorInt16__ctor_m702C9F9D39A7382823B85B3A9E90FD0A72CF5270(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		// r.normalize();
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_4 = L_3;
		NullCheck(L_4);
		VectorInt16_normalize_mF94E043692AF9BF32B165020185B157959BEB8EC(L_4, /*hidden argument*/NULL);
		// return r;
		return L_4;
	}
}
// System.Void MPU6050.MPU6050/VectorInt16::rotate(MPU6050.MPU6050/Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void VectorInt16_rotate_mF503A8A718E6E28EEFC3138FEF084E6BAC662D99 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorInt16_rotate_mF503A8A718E6E28EEFC3138FEF084E6BAC662D99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * V_0 = NULL;
	{
		// Quaternion p = new Quaternion(0, x, y, z);
		int32_t L_0 = __this->get_x_0();
		int32_t L_1 = __this->get_y_1();
		int32_t L_2 = __this->get_z_2();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_3 = (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 *)il2cpp_codegen_object_new(Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8_il2cpp_TypeInfo_var);
		Quaternion__ctor_m92DA345F6BE49020B629CDD9BF41894310469503(L_3, (0.0f), (((float)((float)L_0))), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		V_0 = L_3;
		// p = q.getProduct(p);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_4 = ___q0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_5 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_4);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_6 = V_0;
		NullCheck(L_5);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_7 = Quaternion_getProduct_m95A9DC4881F3247FD2F732B530FE2D74DADAF87E(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// p = p.getProduct(q.getConjugate());
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_8 = V_0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_9 = ___q0;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_10 = *((Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_9);
		NullCheck(L_10);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_11 = Quaternion_getConjugate_m21D088D212AE02DC7169EB16AD285CEEBD50D787(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_12 = Quaternion_getProduct_m95A9DC4881F3247FD2F732B530FE2D74DADAF87E(L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// x = (int)p.x;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_13 = V_0;
		NullCheck(L_13);
		float L_14 = L_13->get_x_1();
		__this->set_x_0((((int32_t)((int32_t)L_14))));
		// y = (int)p.y;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_15 = V_0;
		NullCheck(L_15);
		float L_16 = L_15->get_y_2();
		__this->set_y_1((((int32_t)((int32_t)L_16))));
		// z = (int)p.z;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_17 = V_0;
		NullCheck(L_17);
		float L_18 = L_17->get_z_3();
		__this->set_z_2((((int32_t)((int32_t)L_18))));
		// }
		return;
	}
}
// MPU6050.MPU6050/VectorInt16 MPU6050.MPU6050/VectorInt16::getRotated(MPU6050.MPU6050/Quaternion&)
extern "C" IL2CPP_METHOD_ATTR VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * VectorInt16_getRotated_m91097A4F589BD31AA0703AB46B9B67DCDF71B4D4 (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * __this, Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** ___q0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorInt16_getRotated_m91097A4F589BD31AA0703AB46B9B67DCDF71B4D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VectorInt16 r = new VectorInt16(x, y, z);
		int32_t L_0 = __this->get_x_0();
		int32_t L_1 = __this->get_y_1();
		int32_t L_2 = __this->get_z_2();
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_3 = (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 *)il2cpp_codegen_object_new(VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790_il2cpp_TypeInfo_var);
		VectorInt16__ctor_m702C9F9D39A7382823B85B3A9E90FD0A72CF5270(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		// r.rotate(ref q);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_4 = L_3;
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_5 = ___q0;
		NullCheck(L_4);
		VectorInt16_rotate_mF503A8A718E6E28EEFC3138FEF084E6BAC662D99(L_4, (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_5, /*hidden argument*/NULL);
		// return r;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotate::Start()
extern "C" IL2CPP_METHOD_ATTR void Rotate_Start_mFF56EB83C79B5DEC931AA33F269381DD6A526FEC (Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotate_Start_mFF56EB83C79B5DEC931AA33F269381DD6A526FEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _target = GetComponent<Transform>();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m9885424E349D692D715FADED33BD0E2D0CEFB20F(__this, /*hidden argument*/Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m9885424E349D692D715FADED33BD0E2D0CEFB20F_RuntimeMethod_var);
		__this->set__target_4(L_0);
		// }
		return;
	}
}
// System.Void Rotate::Update()
extern "C" IL2CPP_METHOD_ATTR void Rotate_Update_mA3B26220EF9616351F003F9E3CA799FEB234B9E3 (Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C * __this, const RuntimeMethod* method)
{
	{
		// _target.Rotate(1.0f, 2.0f, 0.5f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get__target_4();
		NullCheck(L_0);
		Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9(L_0, (1.0f), (2.0f), (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Rotate__ctor_m6E97A5DAE2DF20704A0A006973DF805DCA460F5F (Rotate_t763544D6383D5853BC2A73F921EB5C3A7A2F836C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotate1::Start()
extern "C" IL2CPP_METHOD_ATTR void Rotate1_Start_mA0717CC355E13476AE3B5003D416460E41822753 (Rotate1_t4E82840B03408F80219DFBD79573CE673E94ED4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotate1_Start_mA0717CC355E13476AE3B5003D416460E41822753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _target = GetComponent<Transform>();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m9885424E349D692D715FADED33BD0E2D0CEFB20F(__this, /*hidden argument*/Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m9885424E349D692D715FADED33BD0E2D0CEFB20F_RuntimeMethod_var);
		__this->set__target_4(L_0);
		// }
		return;
	}
}
// System.Void Rotate1::Update()
extern "C" IL2CPP_METHOD_ATTR void Rotate1_Update_m9AD9F07FDCB4A78C9DB009F5F328F9DC324BA0BA (Rotate1_t4E82840B03408F80219DFBD79573CE673E94ED4C * __this, const RuntimeMethod* method)
{
	{
		// _target.Rotate(0.0f, 1.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get__target_4();
		NullCheck(L_0);
		Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9(L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotate1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Rotate1__ctor_m183F44DF26D15BDB8203681AC5BD0D50E659B239 (Rotate1_t4E82840B03408F80219DFBD79573CE673E94ED4C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void fps::Awake()
extern "C" IL2CPP_METHOD_ATTR void fps_Awake_m3DFDFE60291185C6CCB037790AE075DE9076A8A9 (fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A * __this, const RuntimeMethod* method)
{
	{
		// Application.targetFrameRate = 30;
		Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC(((int32_t)30), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void fps::Start()
extern "C" IL2CPP_METHOD_ATTR void fps_Start_m065762A4BDD5F9B9B7570A14566D194DF625FC13 (fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A * __this, const RuntimeMethod* method)
{
	{
		// frameCount = 0;
		__this->set_frameCount_5(0);
		// prevTime = 0.0f;
		__this->set_prevTime_6((0.0f));
		// _cnt = 0;
		__this->set__cnt_7(0);
		// }
		return;
	}
}
// System.Void fps::Update()
extern "C" IL2CPP_METHOD_ATTR void fps_Update_m97F672CB0BFF6ABB4448A190238C1771F76EFFF9 (fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fps_Update_m97F672CB0BFF6ABB4448A190238C1771F76EFFF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// _cnt++;
		int32_t L_0 = __this->get__cnt_7();
		__this->set__cnt_7(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// frameCount++;
		int32_t L_1 = __this->get_frameCount_5();
		__this->set_frameCount_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// float time = Time.realtimeSinceStartup - prevTime;
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_3 = __this->get_prevTime_6();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		// if (time >= 0.5f)
		float L_4 = V_0;
		if ((!(((float)L_4) >= ((float)(0.5f)))))
		{
			goto IL_005f;
		}
	}
	{
		// _fps = (frameCount / time).ToString("0.00");
		int32_t L_5 = __this->get_frameCount_5();
		float L_6 = V_0;
		V_1 = ((float)((float)(((float)((float)L_5)))/(float)L_6));
		String_t* L_7 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&V_1), _stringLiteral22CF82B68B95049BFFB91128349CCC312A460B10, /*hidden argument*/NULL);
		__this->set__fps_9(L_7);
		// frameCount = 0;
		__this->set_frameCount_5(0);
		// prevTime = Time.realtimeSinceStartup;
		float L_8 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_prevTime_6(L_8);
	}

IL_005f:
	{
		// _d = string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__d_8(L_9);
		// _d = _cnt.ToString();
		int32_t* L_10 = __this->get_address_of__cnt_7();
		String_t* L_11 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_10, /*hidden argument*/NULL);
		__this->set__d_8(L_11);
		// _d += "\n";
		String_t* L_12 = __this->get__d_8();
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_12, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
		__this->set__d_8(L_13);
		// _d += _fps;
		String_t* L_14 = __this->get__d_8();
		String_t* L_15 = __this->get__fps_9();
		String_t* L_16 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_14, L_15, /*hidden argument*/NULL);
		__this->set__d_8(L_16);
		// _txt.text = _d;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_17 = __this->get__txt_4();
		String_t* L_18 = __this->get__d_8();
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		// }
		return;
	}
}
// System.Void fps::.ctor()
extern "C" IL2CPP_METHOD_ATTR void fps__ctor_mC7825FE814373B3C483A423D607DB7539D443481 (fps_t1EBD7C643A92A614792189871C4754CE3AB0DE3A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void mpur6050_main::updateValue()
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main_updateValue_mD67A8D0B1700B4FF3F0DDA85628E42D5F342627F (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mpur6050_main_updateValue_mD67A8D0B1700B4FF3F0DDA85628E42D5F342627F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if(_mpu.devStatus != 0)
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_0 = __this->get__mpu_8();
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_devStatus_8();
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (!dmpReady)
		bool L_2 = __this->get_dmpReady_16();
		if (L_2)
		{
			goto IL_0059;
		}
	}
	{
		// Msg = "devStatus : ";
		__this->set_Msg_5(_stringLiteral785BACABA0BC6E2222F5C977E1C1C874C5B19C42);
		// Msg += _mpu.devStatus;
		String_t* L_3 = __this->get_Msg_5();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_4 = __this->get__mpu_8();
		NullCheck(L_4);
		uint8_t L_5 = L_4->get_devStatus_8();
		uint8_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(L_3, L_7, /*hidden argument*/NULL);
		__this->set_Msg_5(L_8);
		// Msg += "\nDMP Not Ready\n";
		String_t* L_9 = __this->get_Msg_5();
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_9, _stringLiteral4AF067D827661BD35D10B8ADF4BE24D52F7620DC, /*hidden argument*/NULL);
		__this->set_Msg_5(L_10);
		// return;
		return;
	}

IL_0059:
	{
		// mpuIntStatus = _mpu.getIntStatus();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_11 = __this->get__mpu_8();
		NullCheck(L_11);
		uint8_t L_12 = MPU6050_getIntStatus_m8E1420FD1F1E18D83842B1AE62478C28298B85E9(L_11, /*hidden argument*/NULL);
		__this->set_mpuIntStatus_17(L_12);
		// if ((mpuIntStatus & 0x12) != 0)
		uint8_t L_13 = __this->get_mpuIntStatus_17();
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)18))))
		{
			goto IL_018b;
		}
	}
	{
		// uint fifoCount = _mpu.getFIFOCount();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_14 = __this->get__mpu_8();
		NullCheck(L_14);
		uint32_t L_15 = MPU6050_getFIFOCount_m0D83DD0E87748351BA436FF50ACE1320348C6012(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// if ((mpuIntStatus & 0x10) != 0 || (1024 <= fifoCount))
		uint8_t L_16 = __this->get_mpuIntStatus_17();
		if (((int32_t)((int32_t)L_16&(int32_t)((int32_t)16))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)((int32_t)1024)) <= ((uint32_t)L_17))))
		{
			goto IL_00ae;
		}
	}

IL_0097:
	{
		// _mpu.resetFIFO();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_18 = __this->get__mpu_8();
		NullCheck(L_18);
		MPU6050_resetFIFO_m4CED87826317333FCE50EF1F2D3196B54642562F(L_18, /*hidden argument*/NULL);
		// Msg = "FIFO overflow!\n";
		__this->set_Msg_5(_stringLiteral615FDC45F29C28730FF147D6111742EB1360E6AD);
		// }
		return;
	}

IL_00ae:
	{
		// else if ((mpuIntStatus & 0x02) != 0 && (packetSize <= fifoCount))
		uint8_t L_19 = __this->get_mpuIntStatus_17();
		if (!((int32_t)((int32_t)L_19&(int32_t)2)))
		{
			goto IL_018b;
		}
	}
	{
		uint32_t L_20 = __this->get_packetSize_18();
		uint32_t L_21 = V_0;
		if ((!(((uint32_t)L_20) <= ((uint32_t)L_21))))
		{
			goto IL_018b;
		}
	}
	{
		// Msg = "Read FIFO Data\n";
		__this->set_Msg_5(_stringLiteral70761B0C091B1F143096317CD537AD28F67BD80C);
		// _mpu.getFIFOBytes(ref fifoBuffer, packetSize);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_22 = __this->get__mpu_8();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_23 = __this->get_address_of_fifoBuffer_20();
		uint32_t L_24 = __this->get_packetSize_18();
		NullCheck(L_22);
		MPU6050_getFIFOBytes_m203A25E8D7E23B7021237E61FBE070D39C2E127D(L_22, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_23, L_24, /*hidden argument*/NULL);
		// _mpu.dmpGetQuaternion(ref q, ref fifoBuffer);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_25 = __this->get__mpu_8();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_26 = __this->get_address_of_q_9();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_27 = __this->get_address_of_fifoBuffer_20();
		NullCheck(L_25);
		MPU6050_dmpGetQuaternion_mB03B50B5D988F3D116ECF07AF7ECF2FA2E80EDFD(L_25, (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_26, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_27, /*hidden argument*/NULL);
		// _mpu.dmpGetGravity(ref gravity, ref q);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_28 = __this->get__mpu_8();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** L_29 = __this->get_address_of_gravity_13();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_30 = __this->get_address_of_q_9();
		NullCheck(L_28);
		MPU6050_dmpGetGravity_m946B74E1871B75DFF1EE5CC9AD2E73E9CE508C74(L_28, (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 **)L_29, (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_30, /*hidden argument*/NULL);
		// _mpu.dmpGetAccel(ref aa, ref fifoBuffer);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_31 = __this->get__mpu_8();
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_32 = __this->get_address_of_aa_10();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_33 = __this->get_address_of_fifoBuffer_20();
		NullCheck(L_31);
		MPU6050_dmpGetAccel_m9F97786440B173F6F45BD35D10CD17B98D30B373(L_31, (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_32, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_33, /*hidden argument*/NULL);
		// _mpu.dmpGetLinearAccel(ref aaReal, ref aa, ref gravity);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_34 = __this->get__mpu_8();
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_35 = __this->get_address_of_aaReal_11();
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_36 = __this->get_address_of_aa_10();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 ** L_37 = __this->get_address_of_gravity_13();
		NullCheck(L_34);
		MPU6050_dmpGetLinearAccel_m2668559AD852F206E0FD927806EE95DE24F01F81(L_34, (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_35, (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_36, (VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 **)L_37, /*hidden argument*/NULL);
		// _mpu.dmpGetLinearAccelInWorld(ref aaWorld, ref aaReal, ref q);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_38 = __this->get__mpu_8();
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_39 = __this->get_address_of_aaWorld_12();
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 ** L_40 = __this->get_address_of_aaReal_11();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 ** L_41 = __this->get_address_of_q_9();
		NullCheck(L_38);
		MPU6050_dmpGetLinearAccelInWorld_m02EE0C0C902A4221C1CB3A81BF5165437910FD84(L_38, (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_39, (VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 **)L_40, (Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 **)L_41, /*hidden argument*/NULL);
		// _mpu.dmpGetYawPitchRoll(ref ypr, q, gravity);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_42 = __this->get__mpu_8();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_43 = __this->get_address_of_ypr_15();
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_44 = __this->get_q_9();
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_45 = __this->get_gravity_13();
		NullCheck(L_42);
		MPU6050_dmpGetYawPitchRoll_mC9209D9FD29441FA8C342E819282191155CB88A0(L_42, (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_018b:
	{
		// }
		return;
	}
}
// System.Void mpur6050_main::getEulerAngle(System.Single[]&)
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main_getEulerAngle_mC76856422894FDD061B494E15CF762894933336A (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** ___v0, const RuntimeMethod* method)
{
	{
		// v[0] = (float)(ypr[0] * 180 / Math.PI);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_0 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_0);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = __this->get_ypr_15();
		NullCheck(L_2);
		int32_t L_3 = 0;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(((float)((float)((double)((double)(((double)((double)((float)il2cpp_codegen_multiply((float)L_4, (float)(180.0f))))))/(double)(3.1415926535897931)))))));
		// v[1] = (float)(ypr[1] * 180 / Math.PI);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_5 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_5);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_7 = __this->get_ypr_15();
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(((float)((float)((double)((double)(((double)((double)((float)il2cpp_codegen_multiply((float)L_9, (float)(180.0f))))))/(double)(3.1415926535897931)))))));
		// v[2] = (float)(ypr[2] * 180 / Math.PI);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_10 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_11 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_10);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_12 = __this->get_ypr_15();
		NullCheck(L_12);
		int32_t L_13 = 2;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)(((float)((float)((double)((double)(((double)((double)((float)il2cpp_codegen_multiply((float)L_14, (float)(180.0f))))))/(double)(3.1415926535897931)))))));
		// }
		return;
	}
}
// System.Void mpur6050_main::getQuaternion(System.Single[]&)
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main_getQuaternion_mC4CFDDA4E2A8033D5B376CF65247A651F24F7ACA (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** ___v0, const RuntimeMethod* method)
{
	{
		// v[0] = q.w;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_0 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_0);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_2 = __this->get_q_9();
		NullCheck(L_2);
		float L_3 = L_2->get_w_0();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		// v[1] = q.x;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_4 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_4);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_6 = __this->get_q_9();
		NullCheck(L_6);
		float L_7 = L_6->get_x_1();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_7);
		// v[2] = q.y;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_8 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_8);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_10 = __this->get_q_9();
		NullCheck(L_10);
		float L_11 = L_10->get_y_2();
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_11);
		// v[3] = q.z;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_12 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_13 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_12);
		Quaternion_tB9AF86E03ADE793DA4756844C45693CA66FCE6D8 * L_14 = __this->get_q_9();
		NullCheck(L_14);
		float L_15 = L_14->get_z_3();
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_15);
		// }
		return;
	}
}
// System.Void mpur6050_main::getGravity(System.Single[]&)
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main_getGravity_m48B48163E90395B25BE61DBC10AB5541695284BA (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** ___v0, const RuntimeMethod* method)
{
	{
		// v[0] = gravity.x;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_0 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_0);
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_2 = __this->get_gravity_13();
		NullCheck(L_2);
		float L_3 = L_2->get_x_0();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		// v[1] = gravity.y;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_4 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_4);
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_6 = __this->get_gravity_13();
		NullCheck(L_6);
		float L_7 = L_6->get_y_1();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_7);
		// v[2] = gravity.z;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** L_8 = ___v0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = *((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5**)L_8);
		VectorFloat_t258D595FC302A20980CBC2604F090D5641027816 * L_10 = __this->get_gravity_13();
		NullCheck(L_10);
		float L_11 = L_10->get_z_2();
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_11);
		// }
		return;
	}
}
// System.Void mpur6050_main::getRealAccel(System.Int32[]&)
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main_getRealAccel_mB8B548BB0B12CC8459FE0EB0640A9D6DDA6FC416 (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** ___v0, const RuntimeMethod* method)
{
	{
		// v[0] = aaReal.x;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_0 = ___v0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_0);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_2 = __this->get_aaReal_11();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_x_0();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_3);
		// v[1] = aaReal.y;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_4 = ___v0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_4);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_6 = __this->get_aaReal_11();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_y_1();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_7);
		// v[2] = aaReal.z;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_8 = ___v0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_8);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_10 = __this->get_aaReal_11();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_z_2();
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_11);
		// }
		return;
	}
}
// System.Void mpur6050_main::getWorldAccel(System.Int32[]&)
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main_getWorldAccel_mD59ACCB62EE0687DD5BC24484A564AC58F5E6DA4 (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** ___v0, const RuntimeMethod* method)
{
	{
		// v[0] = aaWorld.x;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_0 = ___v0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_0);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_2 = __this->get_aaWorld_12();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_x_0();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_3);
		// v[1] = aaWorld.y;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_4 = ___v0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_4);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_6 = __this->get_aaWorld_12();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_y_1();
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_7);
		// v[2] = aaWorld.z;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_8 = ___v0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = *((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)L_8);
		VectorInt16_t9D3BA195AC7CAA82971193AB9CBF363F4BBC7790 * L_10 = __this->get_aaWorld_12();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_z_2();
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_11);
		// }
		return;
	}
}
// System.Void mpur6050_main::Start()
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main_Start_m4FBA485EDC4F328DA53637215138BBBE836B8AED (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mpur6050_main_Start_m4FBA485EDC4F328DA53637215138BBBE836B8AED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eulerAngle = new float[] { 0.0f, 0.0f, 0.0f };
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_eulerAngle_6(L_0);
		// initStatus = 0;
		__this->set_initStatus_7((uint8_t)0);
		// CalOfs = new int[] { 167, -27, -18, 1072 };
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = L_1;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____2EA6269DAA0AEBBA2CAC5D2612A50390CFDEA5E1_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		__this->set_CalOfs_21(L_2);
		// _mpu = new MPU6050.MPU6050();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_4 = (MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 *)il2cpp_codegen_object_new(MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92_il2cpp_TypeInfo_var);
		MPU6050__ctor_mCD790B4F8544683A3420BEB15433A5BD890AE91A(L_4, /*hidden argument*/NULL);
		__this->set__mpu_8(L_4);
		// }
		return;
	}
}
// System.Void mpur6050_main::Update()
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main_Update_m89E989B5671E696C56DFB02C3FC49C3BFC1E05C7 (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mpur6050_main_Update_m89E989B5671E696C56DFB02C3FC49C3BFC1E05C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// switch (initStatus)
		uint8_t L_0 = __this->get_initStatus_7();
		V_0 = L_0;
		uint8_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_011b;
			}
		}
	}
	{
		goto IL_011b;
	}

IL_0022:
	{
		// _mpu.devStatus = 0;
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_2 = __this->get__mpu_8();
		NullCheck(L_2);
		L_2->set_devStatus_8((uint8_t)0);
		// _mpu.InitHardware();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_3 = __this->get__mpu_8();
		NullCheck(L_3);
		MPU6050_InitHardware_mFF3B45D396442074236502D50705A19E80BA1D3D(L_3, /*hidden argument*/NULL);
		// initStatus = 1;
		__this->set_initStatus_7((uint8_t)1);
		// break;
		goto IL_011b;
	}

IL_0045:
	{
		// if(!_mpu.isInitHardware) return;
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_4 = __this->get__mpu_8();
		NullCheck(L_4);
		bool L_5 = L_4->get_isInitHardware_3();
		if (L_5)
		{
			goto IL_0053;
		}
	}
	{
		// if(!_mpu.isInitHardware) return;
		return;
	}

IL_0053:
	{
		// _mpu.dmpInitialize();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_6 = __this->get__mpu_8();
		NullCheck(L_6);
		MPU6050_dmpInitialize_mD0A20062D9B704B81FEB66529C1E276821B4874E(L_6, /*hidden argument*/NULL);
		// initStatus = 2;
		__this->set_initStatus_7((uint8_t)2);
		// break;
		goto IL_011b;
	}

IL_006a:
	{
		// if (!_mpu.isdmpInitialize) return;
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_7 = __this->get__mpu_8();
		NullCheck(L_7);
		bool L_8 = L_7->get_isdmpInitialize_7();
		if (L_8)
		{
			goto IL_0078;
		}
	}
	{
		// if (!_mpu.isdmpInitialize) return;
		return;
	}

IL_0078:
	{
		// _mpu.setXGyroOffset(CalOfs[0]);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_9 = __this->get__mpu_8();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = __this->get_CalOfs_21();
		NullCheck(L_10);
		int32_t L_11 = 0;
		int32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		MPU6050_setXGyroOffset_m1E9F5DFEEA8ACA3B9F669C81A27EC9C9CA04BC09(L_9, L_12, /*hidden argument*/NULL);
		// _mpu.setYGyroOffset(CalOfs[1]);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_13 = __this->get__mpu_8();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_14 = __this->get_CalOfs_21();
		NullCheck(L_14);
		int32_t L_15 = 1;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		MPU6050_setYGyroOffset_mF8485D38879E05D7FDC2CEC8C2B5D09AEC9770E4(L_13, L_16, /*hidden argument*/NULL);
		// _mpu.setZGyroOffset(CalOfs[2]);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_17 = __this->get__mpu_8();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_18 = __this->get_CalOfs_21();
		NullCheck(L_18);
		int32_t L_19 = 2;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_17);
		MPU6050_setZGyroOffset_m866CB44F560D207CB18071D4467B3D230833BFF8(L_17, L_20, /*hidden argument*/NULL);
		// _mpu.setZAccelOffset(CalOfs[3]);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_21 = __this->get__mpu_8();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = __this->get_CalOfs_21();
		NullCheck(L_22);
		int32_t L_23 = 3;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_21);
		MPU6050_setZAccelOffset_m8E5D372EF50E8ED4C0C30AE09B50D83164DD87A6(L_21, L_24, /*hidden argument*/NULL);
		// if (_mpu.devStatus == 0)
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_25 = __this->get__mpu_8();
		NullCheck(L_25);
		uint8_t L_26 = L_25->get_devStatus_8();
		if (L_26)
		{
			goto IL_0108;
		}
	}
	{
		// _mpu.setDMPEnabled(true);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_27 = __this->get__mpu_8();
		NullCheck(L_27);
		MPU6050_setDMPEnabled_m143C14E7488C2F7A0C3F918B65B8E885AA85BF52(L_27, (bool)1, /*hidden argument*/NULL);
		// mpuIntStatus = _mpu.getIntStatus();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_28 = __this->get__mpu_8();
		NullCheck(L_28);
		uint8_t L_29 = MPU6050_getIntStatus_m8E1420FD1F1E18D83842B1AE62478C28298B85E9(L_28, /*hidden argument*/NULL);
		__this->set_mpuIntStatus_17(L_29);
		// dmpReady = true;
		__this->set_dmpReady_16((bool)1);
		// packetSize = _mpu.dmpGetFIFOPacketSize();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_30 = __this->get__mpu_8();
		NullCheck(L_30);
		uint32_t L_31 = MPU6050_dmpGetFIFOPacketSize_m1100A2FB90438B7DC1A8EC44A64B8B56A4908EE8(L_30, /*hidden argument*/NULL);
		__this->set_packetSize_18(L_31);
		// }
		goto IL_0114;
	}

IL_0108:
	{
		// _mpu.devStatus = 2;
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_32 = __this->get__mpu_8();
		NullCheck(L_32);
		L_32->set_devStatus_8((uint8_t)2);
	}

IL_0114:
	{
		// initStatus = 3;
		__this->set_initStatus_7((uint8_t)3);
	}

IL_011b:
	{
		// _mpu.ischkInitErr();
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_33 = __this->get__mpu_8();
		NullCheck(L_33);
		MPU6050_ischkInitErr_m7219118B2FE8A98F6B99C711BB38184412FADFEC(L_33, /*hidden argument*/NULL);
		// switch (_mpu.devStatus)
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_34 = __this->get__mpu_8();
		NullCheck(L_34);
		uint8_t L_35 = L_34->get_devStatus_8();
		V_0 = L_35;
		uint8_t L_36 = V_0;
		switch (L_36)
		{
			case 0:
			{
				goto IL_0152;
			}
			case 1:
			{
				goto IL_015f;
			}
			case 2:
			{
				goto IL_016c;
			}
			case 3:
			{
				goto IL_0179;
			}
			case 4:
			{
				goto IL_0186;
			}
			case 5:
			{
				goto IL_0193;
			}
		}
	}
	{
		goto IL_019e;
	}

IL_0152:
	{
		// Msg = "Error is Nothing\n";
		__this->set_Msg_5(_stringLiteral5E54F95F957B8454FBBFC768552CD412260064A8);
		// break;
		goto IL_019e;
	}

IL_015f:
	{
		// Msg = "initial memory load failed\n";
		__this->set_Msg_5(_stringLiteralFD92461977EC24EA7B31532A11AE6CCDEE490182);
		// break;
		goto IL_019e;
	}

IL_016c:
	{
		// Msg = "DMP configuration updates failed\n";
		__this->set_Msg_5(_stringLiteral5846B1416F9DBE3DDB54BD0982D3BB9144FCE47F);
		// break;
		goto IL_019e;
	}

IL_0179:
	{
		// Msg = "Init Error\n";
		__this->set_Msg_5(_stringLiteral971D7DCFA4FD96BE64CB55225E02CDE4FE7D323B);
		// break;
		goto IL_019e;
	}

IL_0186:
	{
		// Msg = "Debug Return\n";
		__this->set_Msg_5(_stringLiteral205DD3BD4E032AAB3C0BA9C3BA0EA60315C12078);
		// break;
		goto IL_019e;
	}

IL_0193:
	{
		// Msg = "isInitErr True \n";
		__this->set_Msg_5(_stringLiteral83D0AC1490BD786E698BF690E18382EB9C860EF1);
	}

IL_019e:
	{
		// txt_Debug.text = initStatus.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_37 = __this->get_txt_Debug_4();
		uint8_t* L_38 = __this->get_address_of_initStatus_7();
		String_t* L_39 = Byte_ToString_m461A53F95948CC32D6646704F994C1F38DD8B263((uint8_t*)L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_39);
		// txt_Debug.text += "\n";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_40 = __this->get_txt_Debug_4();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_41 = L_40;
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_41);
		String_t* L_43 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_42, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_43);
		// txt_Debug.text += _mpu.mpu6050Msg;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_44 = __this->get_txt_Debug_4();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_45 = L_44;
		NullCheck(L_45);
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_45);
		MPU6050_t0C410A8414574468B440DEB07CCAD8108B188A92 * L_47 = __this->get__mpu_8();
		NullCheck(L_47);
		String_t* L_48 = L_47->get_mpu6050Msg_1();
		String_t* L_49 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_46, L_48, /*hidden argument*/NULL);
		NullCheck(L_45);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_49);
		// txt_Debug.text += Msg;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_50 = __this->get_txt_Debug_4();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_51 = L_50;
		NullCheck(L_51);
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_51);
		String_t* L_53 = __this->get_Msg_5();
		String_t* L_54 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_52, L_53, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_54);
		// txt_Debug.text += eulerAngle[0];
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_55 = __this->get_txt_Debug_4();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_56 = L_55;
		NullCheck(L_56);
		String_t* L_57 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_56);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_58 = __this->get_eulerAngle_6();
		NullCheck(L_58);
		int32_t L_59 = 0;
		float L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		float L_61 = L_60;
		RuntimeObject * L_62 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_61);
		String_t* L_63 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(L_57, L_62, /*hidden argument*/NULL);
		NullCheck(L_56);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_56, L_63);
		// }
		return;
	}
}
// System.Void mpur6050_main::.ctor()
extern "C" IL2CPP_METHOD_ATTR void mpur6050_main__ctor_m96CCDA07BD709167C6B50EB278E9309524339D27 (mpur6050_main_tFB9DA94E43F73539B63CA8F86500AD8237582081 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mpur6050_main__ctor_m96CCDA07BD709167C6B50EB278E9309524339D27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// String Msg = String.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_Msg_5(L_0);
		// public float[] eulerAngle = new float[3];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_eulerAngle_6(L_1);
		// float[] euler = new float[3];         // [psi, theta, phi]    Euler angle container
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_euler_14(L_2);
		// float[] ypr = new float[3];           // [yaw, pitch, roll]   yaw/pitch/roll container and gravity vector
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_ypr_15(L_3);
		// byte[] fifoBuffer = new byte[64]; // FIFO storage buffer
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->set_fifoBuffer_20(L_4);
		// int[] CalOfs = new int[4];  //Gyro x,y,z, Accel z
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_CalOfs_21(L_5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
