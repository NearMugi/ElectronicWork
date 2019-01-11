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
// getMPU6050
struct getMPU6050_tCBCCA9F5E14FCC3066C980E690F214D4C0319676;
// mpu6050.MPU6050
struct MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9;
// mpu6050.MpuSensorValue
struct MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D;

extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
extern RuntimeClass* I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t24BEFFB31822663BC19FF6104A04EEA251272897_il2cpp_TypeInfo_var;
extern RuntimeClass* MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9_il2cpp_TypeInfo_var;
extern RuntimeClass* MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral22CF82B68B95049BFFB91128349CCC312A460B10;
extern String_t* _stringLiteral501971B869BA3F791A49C6C0CAB32F2EB6411281;
extern String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
extern String_t* _stringLiteralEAA65CEB021AB0D62DA36F8621EE13BD80A4E5FE;
extern String_t* _stringLiteralF5935CFDBA4314051D642531D6635938EFD6956E;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m6185DEB347778E88E5503C876FD14F35C99A64A1_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_mD3415C49838BACF9D5C663834C54684D51A8E027_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m430D40E2018AC1A9563E99FE7ED1D4678ECCB9F3_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m46AA57BD6C01D964CF70D41569BA4E3FA2E3CC59_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m9885424E349D692D715FADED33BD0E2D0CEFB20F_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m1D9FFDC78B08E211B8341CAE0C335B60BB43B069_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m7578B28CF8B63C064016453EBA95D58C4A058EF8_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m66DCCCFB07DFD0DA4B7340702E8039263B296AB4_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC7C51DD2698AA19A0C8BDD2DC423D43B5051A8A4_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisDeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7_m1CC6828562E01EA47C35CDEADF28FB9C413910FC_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisI2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128_m8CFCC8548C48C464850A53EB6DE3E6A7E3FD5AE6_RuntimeMethod_var;
extern const uint32_t MPU6050_Dispose_mAFF65367BE4E3FAD26C093B8A703813D1708CE60_MetadataUsageId;
extern const uint32_t MPU6050_InitHardware_m70E9C8CC277AC5BD755F4F4BD0DB7E2C8BA0F8D8_MetadataUsageId;
extern const uint32_t MPU6050_ReadByte_mAD3872A34BFB3D23C077457AC18EBCA42106021F_MetadataUsageId;
extern const uint32_t MPU6050_ReadBytes_m9054F514AB1D96EDAE64A81291EA0C95030672C0_MetadataUsageId;
extern const uint32_t MPU6050_ReadSensorData_m4F8FDDEA205DB3385AC4FEDFE956AB0F2A827472_MetadataUsageId;
extern const uint32_t MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872_MetadataUsageId;
extern const uint32_t MPU6050__ctor_mC15FCE13041E3E84EB507A136ADC052307BA243A_MetadataUsageId;
extern const uint32_t Rotate1_Start_mA0717CC355E13476AE3B5003D416460E41822753_MetadataUsageId;
extern const uint32_t Rotate_Start_mFF56EB83C79B5DEC931AA33F269381DD6A526FEC_MetadataUsageId;
extern const uint32_t U3CInitHardwareU3Ed__29_MoveNext_mCA3D7F9F71E08197E9C6E5628AED8F1850AED5A1_MetadataUsageId;
extern const uint32_t fps_Update_m97F672CB0BFF6ABB4448A190238C1771F76EFFF9_MetadataUsageId;
extern const uint32_t getMPU6050_Start_m1544AC1280DA361BF9D709AAD489751804EFB5DE_MetadataUsageId;
extern const uint32_t getMPU6050_Update_m19D329CCAD89264D482452F5DF6054B66070AC80_MetadataUsageId;
extern const uint32_t getMPU6050__ctor_m18A06974C0C58FEF8AE6A31A3964A79D8CBB0954_MetadataUsageId;
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
#ifndef MPU6050_TB510E16AC7A8543789ABECF11C4A1EC40B398EF9_H
#define MPU6050_TB510E16AC7A8543789ABECF11C4A1EC40B398EF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mpu6050.MPU6050
struct  MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9  : public RuntimeObject
{
public:
	// mpu6050.MpuSensorValue mpu6050.MPU6050::<LastValues>k__BackingField
	MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * ___U3CLastValuesU3Ek__BackingField_0;
	// System.String mpu6050.MPU6050::Msg
	String_t* ___Msg_1;
	// System.Byte[] mpu6050.MPU6050::SensorData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___SensorData_17;
	// Windows.Devices.I2c.I2cDevice mpu6050.MPU6050::_mpu6050Device
	I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * ____mpu6050Device_18;
	// Windows.Devices.Gpio.GpioController mpu6050.MPU6050::IoController
	GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * ___IoController_19;
	// System.Boolean mpu6050.MPU6050::disposedValue
	bool ___disposedValue_20;

public:
	inline static int32_t get_offset_of_U3CLastValuesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9, ___U3CLastValuesU3Ek__BackingField_0)); }
	inline MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * get_U3CLastValuesU3Ek__BackingField_0() const { return ___U3CLastValuesU3Ek__BackingField_0; }
	inline MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D ** get_address_of_U3CLastValuesU3Ek__BackingField_0() { return &___U3CLastValuesU3Ek__BackingField_0; }
	inline void set_U3CLastValuesU3Ek__BackingField_0(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * value)
	{
		___U3CLastValuesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLastValuesU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_Msg_1() { return static_cast<int32_t>(offsetof(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9, ___Msg_1)); }
	inline String_t* get_Msg_1() const { return ___Msg_1; }
	inline String_t** get_address_of_Msg_1() { return &___Msg_1; }
	inline void set_Msg_1(String_t* value)
	{
		___Msg_1 = value;
		Il2CppCodeGenWriteBarrier((&___Msg_1), value);
	}

	inline static int32_t get_offset_of_SensorData_17() { return static_cast<int32_t>(offsetof(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9, ___SensorData_17)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_SensorData_17() const { return ___SensorData_17; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_SensorData_17() { return &___SensorData_17; }
	inline void set_SensorData_17(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___SensorData_17 = value;
		Il2CppCodeGenWriteBarrier((&___SensorData_17), value);
	}

	inline static int32_t get_offset_of__mpu6050Device_18() { return static_cast<int32_t>(offsetof(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9, ____mpu6050Device_18)); }
	inline I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * get__mpu6050Device_18() const { return ____mpu6050Device_18; }
	inline I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 ** get_address_of__mpu6050Device_18() { return &____mpu6050Device_18; }
	inline void set__mpu6050Device_18(I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * value)
	{
		____mpu6050Device_18 = value;
		Il2CppCodeGenWriteBarrier((&____mpu6050Device_18), value);
	}

	inline static int32_t get_offset_of_IoController_19() { return static_cast<int32_t>(offsetof(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9, ___IoController_19)); }
	inline GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * get_IoController_19() const { return ___IoController_19; }
	inline GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D ** get_address_of_IoController_19() { return &___IoController_19; }
	inline void set_IoController_19(GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * value)
	{
		___IoController_19 = value;
		Il2CppCodeGenWriteBarrier((&___IoController_19), value);
	}

	inline static int32_t get_offset_of_disposedValue_20() { return static_cast<int32_t>(offsetof(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9, ___disposedValue_20)); }
	inline bool get_disposedValue_20() const { return ___disposedValue_20; }
	inline bool* get_address_of_disposedValue_20() { return &___disposedValue_20; }
	inline void set_disposedValue_20(bool value)
	{
		___disposedValue_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MPU6050_TB510E16AC7A8543789ABECF11C4A1EC40B398EF9_H
#ifndef MPUSENSORVALUE_T7A67A2F92DE2F1C8BE635E8F03892624EA926C6D_H
#define MPUSENSORVALUE_T7A67A2F92DE2F1C8BE635E8F03892624EA926C6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mpu6050.MpuSensorValue
struct  MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D  : public RuntimeObject
{
public:
	// System.Single mpu6050.MpuSensorValue::<AccelerationX>k__BackingField
	float ___U3CAccelerationXU3Ek__BackingField_0;
	// System.Single mpu6050.MpuSensorValue::<AccelerationY>k__BackingField
	float ___U3CAccelerationYU3Ek__BackingField_1;
	// System.Single mpu6050.MpuSensorValue::<AccelerationZ>k__BackingField
	float ___U3CAccelerationZU3Ek__BackingField_2;
	// System.Single mpu6050.MpuSensorValue::<GyroX>k__BackingField
	float ___U3CGyroXU3Ek__BackingField_3;
	// System.Single mpu6050.MpuSensorValue::<GyroY>k__BackingField
	float ___U3CGyroYU3Ek__BackingField_4;
	// System.Single mpu6050.MpuSensorValue::<GyroZ>k__BackingField
	float ___U3CGyroZU3Ek__BackingField_5;
	// System.Single mpu6050.MpuSensorValue::<degX>k__BackingField
	float ___U3CdegXU3Ek__BackingField_6;
	// System.Single mpu6050.MpuSensorValue::<degY>k__BackingField
	float ___U3CdegYU3Ek__BackingField_7;
	// System.Single mpu6050.MpuSensorValue::<degZ>k__BackingField
	float ___U3CdegZU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CAccelerationXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CAccelerationXU3Ek__BackingField_0)); }
	inline float get_U3CAccelerationXU3Ek__BackingField_0() const { return ___U3CAccelerationXU3Ek__BackingField_0; }
	inline float* get_address_of_U3CAccelerationXU3Ek__BackingField_0() { return &___U3CAccelerationXU3Ek__BackingField_0; }
	inline void set_U3CAccelerationXU3Ek__BackingField_0(float value)
	{
		___U3CAccelerationXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAccelerationYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CAccelerationYU3Ek__BackingField_1)); }
	inline float get_U3CAccelerationYU3Ek__BackingField_1() const { return ___U3CAccelerationYU3Ek__BackingField_1; }
	inline float* get_address_of_U3CAccelerationYU3Ek__BackingField_1() { return &___U3CAccelerationYU3Ek__BackingField_1; }
	inline void set_U3CAccelerationYU3Ek__BackingField_1(float value)
	{
		___U3CAccelerationYU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CAccelerationZU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CAccelerationZU3Ek__BackingField_2)); }
	inline float get_U3CAccelerationZU3Ek__BackingField_2() const { return ___U3CAccelerationZU3Ek__BackingField_2; }
	inline float* get_address_of_U3CAccelerationZU3Ek__BackingField_2() { return &___U3CAccelerationZU3Ek__BackingField_2; }
	inline void set_U3CAccelerationZU3Ek__BackingField_2(float value)
	{
		___U3CAccelerationZU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGyroXU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CGyroXU3Ek__BackingField_3)); }
	inline float get_U3CGyroXU3Ek__BackingField_3() const { return ___U3CGyroXU3Ek__BackingField_3; }
	inline float* get_address_of_U3CGyroXU3Ek__BackingField_3() { return &___U3CGyroXU3Ek__BackingField_3; }
	inline void set_U3CGyroXU3Ek__BackingField_3(float value)
	{
		___U3CGyroXU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CGyroYU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CGyroYU3Ek__BackingField_4)); }
	inline float get_U3CGyroYU3Ek__BackingField_4() const { return ___U3CGyroYU3Ek__BackingField_4; }
	inline float* get_address_of_U3CGyroYU3Ek__BackingField_4() { return &___U3CGyroYU3Ek__BackingField_4; }
	inline void set_U3CGyroYU3Ek__BackingField_4(float value)
	{
		___U3CGyroYU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CGyroZU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CGyroZU3Ek__BackingField_5)); }
	inline float get_U3CGyroZU3Ek__BackingField_5() const { return ___U3CGyroZU3Ek__BackingField_5; }
	inline float* get_address_of_U3CGyroZU3Ek__BackingField_5() { return &___U3CGyroZU3Ek__BackingField_5; }
	inline void set_U3CGyroZU3Ek__BackingField_5(float value)
	{
		___U3CGyroZU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdegXU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CdegXU3Ek__BackingField_6)); }
	inline float get_U3CdegXU3Ek__BackingField_6() const { return ___U3CdegXU3Ek__BackingField_6; }
	inline float* get_address_of_U3CdegXU3Ek__BackingField_6() { return &___U3CdegXU3Ek__BackingField_6; }
	inline void set_U3CdegXU3Ek__BackingField_6(float value)
	{
		___U3CdegXU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdegYU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CdegYU3Ek__BackingField_7)); }
	inline float get_U3CdegYU3Ek__BackingField_7() const { return ___U3CdegYU3Ek__BackingField_7; }
	inline float* get_address_of_U3CdegYU3Ek__BackingField_7() { return &___U3CdegYU3Ek__BackingField_7; }
	inline void set_U3CdegYU3Ek__BackingField_7(float value)
	{
		___U3CdegYU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CdegZU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D, ___U3CdegZU3Ek__BackingField_8)); }
	inline float get_U3CdegZU3Ek__BackingField_8() const { return ___U3CdegZU3Ek__BackingField_8; }
	inline float* get_address_of_U3CdegZU3Ek__BackingField_8() { return &___U3CdegZU3Ek__BackingField_8; }
	inline void set_U3CdegZU3Ek__BackingField_8(float value)
	{
		___U3CdegZU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MPUSENSORVALUE_T7A67A2F92DE2F1C8BE635E8F03892624EA926C6D_H
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
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
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
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
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
#ifndef U3CINITHARDWAREU3ED__29_T27C41CB719580B263DCFE34581D54463E28C4C6C_H
#define U3CINITHARDWAREU3ED__29_T27C41CB719580B263DCFE34581D54463E28C4C6C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mpu6050.MPU6050/<InitHardware>d__29
struct  U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C 
{
public:
	// System.Int32 mpu6050.MPU6050/<InitHardware>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder mpu6050.MPU6050/<InitHardware>d__29::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// mpu6050.MPU6050 mpu6050.MPU6050/<InitHardware>d__29::<>4__this
	MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.Enumeration.DeviceInformationCollection> mpu6050.MPU6050/<InitHardware>d__29::<>u__1
	TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.I2c.I2cDevice> mpu6050.MPU6050/<InitHardware>d__29::<>u__2
	TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  ___U3CU3Eu__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter mpu6050.MPU6050/<InitHardware>d__29::<>u__3
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C, ___U3CU3E4__this_2)); }
	inline MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  value)
	{
		___U3CU3Eu__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  value)
	{
		___U3CU3Eu__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_5() { return static_cast<int32_t>(offsetof(U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C, ___U3CU3Eu__3_5)); }
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
#endif // U3CINITHARDWAREU3ED__29_T27C41CB719580B263DCFE34581D54463E28C4C6C_H
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
#ifndef GETMPU6050_TCBCCA9F5E14FCC3066C980E690F214D4C0319676_H
#define GETMPU6050_TCBCCA9F5E14FCC3066C980E690F214D4C0319676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// getMPU6050
struct  getMPU6050_tCBCCA9F5E14FCC3066C980E690F214D4C0319676  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text getMPU6050::txt
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___txt_4;
	// mpu6050.MPU6050 getMPU6050::_mpu6050
	MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * ____mpu6050_5;
	// mpu6050.MpuSensorValue getMPU6050::LastValue
	MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * ___LastValue_6;

public:
	inline static int32_t get_offset_of_txt_4() { return static_cast<int32_t>(offsetof(getMPU6050_tCBCCA9F5E14FCC3066C980E690F214D4C0319676, ___txt_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_txt_4() const { return ___txt_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_txt_4() { return &___txt_4; }
	inline void set_txt_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___txt_4 = value;
		Il2CppCodeGenWriteBarrier((&___txt_4), value);
	}

	inline static int32_t get_offset_of__mpu6050_5() { return static_cast<int32_t>(offsetof(getMPU6050_tCBCCA9F5E14FCC3066C980E690F214D4C0319676, ____mpu6050_5)); }
	inline MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * get__mpu6050_5() const { return ____mpu6050_5; }
	inline MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 ** get_address_of__mpu6050_5() { return &____mpu6050_5; }
	inline void set__mpu6050_5(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * value)
	{
		____mpu6050_5 = value;
		Il2CppCodeGenWriteBarrier((&____mpu6050_5), value);
	}

	inline static int32_t get_offset_of_LastValue_6() { return static_cast<int32_t>(offsetof(getMPU6050_tCBCCA9F5E14FCC3066C980E690F214D4C0319676, ___LastValue_6)); }
	inline MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * get_LastValue_6() const { return ___LastValue_6; }
	inline MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D ** get_address_of_LastValue_6() { return &___LastValue_6; }
	inline void set_LastValue_6(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * value)
	{
		___LastValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___LastValue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETMPU6050_TCBCCA9F5E14FCC3066C980E690F214D4C0319676_H
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<mpu6050.MPU6050/<InitHardware>d__29>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m46AA57BD6C01D964CF70D41569BA4E3FA2E3CC59_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m1E2175CF410B96A4F467043697DA9DC4D231294C_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,mpu6050.MPU6050/<InitHardware>d__29>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m28C9C47854FCB0FB02DEAF368B2B04BB69F0606D_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,mpu6050.MPU6050/<InitHardware>d__29>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m430D40E2018AC1A9563E99FE7ED1D4678ECCB9F3_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * p1, const RuntimeMethod* method);

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
// System.Void mpu6050.MPU6050::InitHardware()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_InitHardware_m70E9C8CC277AC5BD755F4F4BD0DB7E2C8BA0F8D8 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method);
// System.Void mpu6050.MpuSensorValue::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue__ctor_m31D715FC101067DF75CC937A2FFFD809DCC7844E (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method);
// System.Void mpu6050.MPU6050::ReadSensorData()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_ReadSensorData_m4F8FDDEA205DB3385AC4FEDFE956AB0F2A827472 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method);
// mpu6050.MpuSensorValue mpu6050.MPU6050::getLastValue()
extern "C" IL2CPP_METHOD_ATTR MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * MPU6050_getLastValue_m4B29D79B9A30B7416EFA462A3D328F1C3E7A884D (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method);
// System.String mpu6050.MPU6050::getMsg()
extern "C" IL2CPP_METHOD_ATTR String_t* MPU6050_getMsg_m60FBB4EC17188867872CC02B86E5CF15AB01FB3C (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method);
// System.Single mpu6050.MpuSensorValue::get_AccelerationX()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_AccelerationX_mA8792C5A0BB37B1AE389B9FA6FE1E5012A582983 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method);
// System.Void mpu6050.MPU6050::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MPU6050__ctor_mC15FCE13041E3E84EB507A136ADC052307BA243A (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method);
// mpu6050.MpuSensorValue mpu6050.MPU6050::get_LastValues()
extern "C" IL2CPP_METHOD_ATTR MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method);
// System.Void Windows.Devices.I2c.I2cDevice::WriteRead(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void I2cDevice_WriteRead_m5F827A985ED324242E9C97FD2BDECF73581D8706 (I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p1, const RuntimeMethod* method);
// System.Byte[] mpu6050.MPU6050::ReadBytes(System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MPU6050_ReadBytes_m9054F514AB1D96EDAE64A81291EA0C95030672C0 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, uint8_t ___regAddr0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Windows.Devices.I2c.I2cDevice::Write(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void I2cDevice_Write_mB17B14EA9E0D5CF100FE5D428681CE9FE7BB7012 (I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<mpu6050.MPU6050/<InitHardware>d__29>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m46AA57BD6C01D964CF70D41569BA4E3FA2E3CC59 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m46AA57BD6C01D964CF70D41569BA4E3FA2E3CC59_gshared)(__this, p0, method);
}
// System.Byte mpu6050.MPU6050::ReadByte(System.Byte)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_ReadByte_mAD3872A34BFB3D23C077457AC18EBCA42106021F (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, uint8_t ___regAddr0, const RuntimeMethod* method);
// System.Void mpu6050.MPU6050::WriteByte(System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, uint8_t ___regAddr0, uint8_t ___data1, const RuntimeMethod* method);
// System.UInt16 mpu6050.MPU6050::getFifoCnt()
extern "C" IL2CPP_METHOD_ATTR uint16_t MPU6050_getFifoCnt_mCEA3EA35D9D0496F370FC7A16121D7A96CA91497 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method);
// System.Void mpu6050.MpuSensorValue::set_AccelerationX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_AccelerationX_m0BFF65B351ACA40D38EC00A7B9EFE37C6424CE7D (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method);
// System.Void mpu6050.MpuSensorValue::set_AccelerationY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_AccelerationY_m6DDFF1B7FAE02A7FF13FCCC9D79EC8F58D083E8C (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method);
// System.Void mpu6050.MpuSensorValue::set_AccelerationZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_AccelerationZ_mE09E239429B036752F410262981309F396E7058E (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method);
// System.Void mpu6050.MpuSensorValue::set_GyroX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_GyroX_m70C6C473B24E12D39F7572A5513C7BF8A2AAE034 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method);
// System.Void mpu6050.MpuSensorValue::set_GyroY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_GyroY_m6DAFD785D936EFFFD8327D946879ECF78FA02AFD (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method);
// System.Void mpu6050.MpuSensorValue::set_GyroZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_GyroZ_m3DB75586A201A052473F74B2CA73ED626C169421 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method);
// System.Void Windows.Devices.I2c.I2cDevice::Dispose()
extern "C" IL2CPP_METHOD_ATTR void I2cDevice_Dispose_m09D05003C9BF4BBBFD468576EFA37EF41A15B846 (I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void mpu6050.MPU6050::set_LastValues(mpu6050.MpuSensorValue)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_set_LastValues_mB575B3A32CE1E0FC4AE29926CC4A484AE738ECFB (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * ___value0, const RuntimeMethod* method);
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
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.Enumeration.DeviceInformationCollection>,mpu6050.MPU6050/<InitHardware>d__29>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m6185DEB347778E88E5503C876FD14F35C99A64A1 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 * p0, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m28C9C47854FCB0FB02DEAF368B2B04BB69F0606D_gshared)(__this, p0, p1, method);
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
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Devices.I2c.I2cDevice>,mpu6050.MPU6050/<InitHardware>d__29>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_mD3415C49838BACF9D5C663834C54684D51A8E027 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 * p0, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m28C9C47854FCB0FB02DEAF368B2B04BB69F0606D_gshared)(__this, p0, p1, method);
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
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,mpu6050.MPU6050/<InitHardware>d__29>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m430D40E2018AC1A9563E99FE7ED1D4678ECCB9F3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * p0, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m430D40E2018AC1A9563E99FE7ED1D4678ECCB9F3_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void mpu6050.MPU6050/<InitHardware>d__29::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CInitHardwareU3Ed__29_MoveNext_mCA3D7F9F71E08197E9C6E5628AED8F1850AED5A1 (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void mpu6050.MPU6050/<InitHardware>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CInitHardwareU3Ed__29_SetStateMachine_m8A0BA8587DD1C5F9E9C81F26D38F9CD42FCB327A (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void getMPU6050::Start()
extern "C" IL2CPP_METHOD_ATTR void getMPU6050_Start_m1544AC1280DA361BF9D709AAD489751804EFB5DE (getMPU6050_tCBCCA9F5E14FCC3066C980E690F214D4C0319676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (getMPU6050_Start_m1544AC1280DA361BF9D709AAD489751804EFB5DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mpu6050.InitHardware();
		MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_0 = __this->get__mpu6050_5();
		NullCheck(L_0);
		MPU6050_InitHardware_m70E9C8CC277AC5BD755F4F4BD0DB7E2C8BA0F8D8(L_0, /*hidden argument*/NULL);
		// LastValue = new mpu6050.MpuSensorValue();
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_1 = (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D *)il2cpp_codegen_object_new(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D_il2cpp_TypeInfo_var);
		MpuSensorValue__ctor_m31D715FC101067DF75CC937A2FFFD809DCC7844E(L_1, /*hidden argument*/NULL);
		__this->set_LastValue_6(L_1);
		// }
		return;
	}
}
// System.Void getMPU6050::Update()
extern "C" IL2CPP_METHOD_ATTR void getMPU6050_Update_m19D329CCAD89264D482452F5DF6054B66070AC80 (getMPU6050_tCBCCA9F5E14FCC3066C980E690F214D4C0319676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (getMPU6050_Update_m19D329CCAD89264D482452F5DF6054B66070AC80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// _mpu6050.ReadSensorData();
		MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_0 = __this->get__mpu6050_5();
		NullCheck(L_0);
		MPU6050_ReadSensorData_m4F8FDDEA205DB3385AC4FEDFE956AB0F2A827472(L_0, /*hidden argument*/NULL);
		// LastValue = _mpu6050.getLastValue();
		MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_1 = __this->get__mpu6050_5();
		NullCheck(L_1);
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_2 = MPU6050_getLastValue_m4B29D79B9A30B7416EFA462A3D328F1C3E7A884D(L_1, /*hidden argument*/NULL);
		__this->set_LastValue_6(L_2);
		// txt.text = string.Empty;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_txt_4();
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// txt.text += _mpu6050.getMsg();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_5 = __this->get_txt_4();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_6 = L_5;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_8 = __this->get__mpu6050_5();
		NullCheck(L_8);
		String_t* L_9 = MPU6050_getMsg_m60FBB4EC17188867872CC02B86E5CF15AB01FB3C(L_8, /*hidden argument*/NULL);
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		// txt.text += LastValue.AccelerationX.ToString("0.00");
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_11 = __this->get_txt_4();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_12 = L_11;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_12);
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_14 = __this->get_LastValue_6();
		NullCheck(L_14);
		float L_15 = MpuSensorValue_get_AccelerationX_mA8792C5A0BB37B1AE389B9FA6FE1E5012A582983(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&V_0), _stringLiteral22CF82B68B95049BFFB91128349CCC312A460B10, /*hidden argument*/NULL);
		String_t* L_17 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_17);
		// }
		return;
	}
}
// System.Void getMPU6050::.ctor()
extern "C" IL2CPP_METHOD_ATTR void getMPU6050__ctor_m18A06974C0C58FEF8AE6A31A3964A79D8CBB0954 (getMPU6050_tCBCCA9F5E14FCC3066C980E690F214D4C0319676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (getMPU6050__ctor_m18A06974C0C58FEF8AE6A31A3964A79D8CBB0954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mpu6050.MPU6050 _mpu6050 = new mpu6050.MPU6050();
		MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_0 = (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 *)il2cpp_codegen_object_new(MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9_il2cpp_TypeInfo_var);
		MPU6050__ctor_mC15FCE13041E3E84EB507A136ADC052307BA243A(L_0, /*hidden argument*/NULL);
		__this->set__mpu6050_5(L_0);
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
// mpu6050.MpuSensorValue mpu6050.MPU6050::get_LastValues()
extern "C" IL2CPP_METHOD_ATTR MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
{
	{
		// MpuSensorValue LastValues { get; set; }
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_0 = __this->get_U3CLastValuesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void mpu6050.MPU6050::set_LastValues(mpu6050.MpuSensorValue)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_set_LastValues_mB575B3A32CE1E0FC4AE29926CC4A484AE738ECFB (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * ___value0, const RuntimeMethod* method)
{
	{
		// MpuSensorValue LastValues { get; set; }
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_0 = ___value0;
		__this->set_U3CLastValuesU3Ek__BackingField_0(L_0);
		return;
	}
}
// mpu6050.MpuSensorValue mpu6050.MPU6050::getLastValue()
extern "C" IL2CPP_METHOD_ATTR MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * MPU6050_getLastValue_m4B29D79B9A30B7416EFA462A3D328F1C3E7A884D (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
{
	{
		// return LastValues;
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_0 = MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String mpu6050.MPU6050::getMsg()
extern "C" IL2CPP_METHOD_ATTR String_t* MPU6050_getMsg_m60FBB4EC17188867872CC02B86E5CF15AB01FB3C (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
{
	{
		// return Msg;
		String_t* L_0 = __this->get_Msg_1();
		return L_0;
	}
}
// System.Byte mpu6050.MPU6050::ReadByte(System.Byte)
extern "C" IL2CPP_METHOD_ATTR uint8_t MPU6050_ReadByte_mAD3872A34BFB3D23C077457AC18EBCA42106021F (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, uint8_t ___regAddr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_ReadByte_mAD3872A34BFB3D23C077457AC18EBCA42106021F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// byte[] buffer = new byte[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		// buffer[0] = regAddr;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		uint8_t L_2 = ___regAddr0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		// byte[] value = new byte[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_3;
		// _mpu6050Device.WriteRead(buffer, value);
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_4 = __this->get__mpu6050Device_18();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_1;
		NullCheck(L_4);
		I2cDevice_WriteRead_m5F827A985ED324242E9C97FD2BDECF73581D8706(L_4, L_5, L_6, /*hidden argument*/NULL);
		// return value[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}
}
// System.Byte[] mpu6050.MPU6050::ReadBytes(System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MPU6050_ReadBytes_m9054F514AB1D96EDAE64A81291EA0C95030672C0 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, uint8_t ___regAddr0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_ReadBytes_m9054F514AB1D96EDAE64A81291EA0C95030672C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		// byte[] values = new byte[length];
		int32_t L_0 = ___length1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// byte[] buffer = new byte[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_2;
		// buffer[0] = regAddr;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_1;
		uint8_t L_4 = ___regAddr0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		// _mpu6050Device.WriteRead(buffer, values);
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_5 = __this->get__mpu6050Device_18();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		NullCheck(L_5);
		I2cDevice_WriteRead_m5F827A985ED324242E9C97FD2BDECF73581D8706(L_5, L_6, L_7, /*hidden argument*/NULL);
		// return values;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_0;
		return L_8;
	}
}
// System.UInt16 mpu6050.MPU6050::getFifoCnt()
extern "C" IL2CPP_METHOD_ATTR uint16_t MPU6050_getFifoCnt_mCEA3EA35D9D0496F370FC7A16121D7A96CA91497 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// byte[] buffer = ReadBytes(FIFO_COUNT, 2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = MPU6050_ReadBytes_m9054F514AB1D96EDAE64A81291EA0C95030672C0(__this, (uint8_t)((int32_t)114), 2, /*hidden argument*/NULL);
		V_0 = L_0;
		// return (ushort)(((int)buffer[0] << 8) | (int)buffer[1]);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return (uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)8))|(int32_t)L_6)))));
	}
}
// System.Void mpu6050.MPU6050::WriteByte(System.Byte,System.Byte)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, uint8_t ___regAddr0, uint8_t ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// byte[] buffer = new byte[2];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		// buffer[0] = regAddr;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		uint8_t L_2 = ___regAddr0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		// buffer[1] = data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		uint8_t L_4 = ___data1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_4);
		// _mpu6050Device.Write(buffer);
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_5 = __this->get__mpu6050Device_18();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		NullCheck(L_5);
		I2cDevice_Write_mB17B14EA9E0D5CF100FE5D428681CE9FE7BB7012(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void mpu6050.MPU6050::InitHardware()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_InitHardware_m70E9C8CC277AC5BD755F4F4BD0DB7E2C8BA0F8D8 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_InitHardware_m70E9C8CC277AC5BD755F4F4BD0DB7E2C8BA0F8D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m46AA57BD6C01D964CF70D41569BA4E3FA2E3CC59((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m46AA57BD6C01D964CF70D41569BA4E3FA2E3CC59_RuntimeMethod_var);
		return;
	}
}
// System.Void mpu6050.MPU6050::ReadSensorData()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_ReadSensorData_m4F8FDDEA205DB3385AC4FEDFE956AB0F2A827472 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_ReadSensorData_m4F8FDDEA205DB3385AC4FEDFE956AB0F2A827472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	int16_t V_2 = 0;
	int16_t V_3 = 0;
	int16_t V_4 = 0;
	int16_t V_5 = 0;
	uint8_t G_B4_0 = 0x0;
	uint8_t G_B3_0 = 0x0;
	{
		// Msg = "[Start ReadSensorData]";
		__this->set_Msg_1(_stringLiteral501971B869BA3F791A49C6C0CAB32F2EB6411281);
		// if (_mpu6050Device == null) {
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_0 = __this->get__mpu6050Device_18();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// int interrupt_status = ReadByte(INT_STATUS);
		uint8_t L_1 = MPU6050_ReadByte_mAD3872A34BFB3D23C077457AC18EBCA42106021F(__this, (uint8_t)((int32_t)58), /*hidden argument*/NULL);
		// if ((interrupt_status & 0x10) != 0)
		uint8_t L_2 = L_1;
		G_B3_0 = L_2;
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)16))))
		{
			G_B4_0 = L_2;
			goto IL_002c;
		}
	}
	{
		// WriteByte(USER_CTRL, 0x44); // reset and enable fifo
		MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872(__this, (uint8_t)((int32_t)106), (uint8_t)((int32_t)68), /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_002c:
	{
		// if ((interrupt_status & 0x1) != 0)
		if (!((int32_t)((int32_t)G_B4_0&(int32_t)1)))
		{
			goto IL_0152;
		}
	}
	{
		// if (getFifoCnt() >= SensorBytes)
		uint16_t L_3 = MPU6050_getFifoCnt_mCEA3EA35D9D0496F370FC7A16121D7A96CA91497(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)12))))
		{
			goto IL_0152;
		}
	}
	{
		// SensorData = ReadBytes(FIFO_R_W, (byte)SensorBytes);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = MPU6050_ReadBytes_m9054F514AB1D96EDAE64A81291EA0C95030672C0(__this, (uint8_t)((int32_t)116), ((int32_t)12), /*hidden argument*/NULL);
		__this->set_SensorData_17(L_4);
		// short xa = (short)((int)SensorData[0] << 8 | (int)SensorData[1]);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_SensorData_17();
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get_SensorData_17();
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7<<(int32_t)8))|(int32_t)L_10)))));
		// short ya = (short)((int)SensorData[2] << 8 | (int)SensorData[3]);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = __this->get_SensorData_17();
		NullCheck(L_11);
		int32_t L_12 = 2;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_SensorData_17();
		NullCheck(L_14);
		int32_t L_15 = 3;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13<<(int32_t)8))|(int32_t)L_16)))));
		// short za = (short)((int)SensorData[4] << 8 | (int)SensorData[5]);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = __this->get_SensorData_17();
		NullCheck(L_17);
		int32_t L_18 = 4;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = __this->get_SensorData_17();
		NullCheck(L_20);
		int32_t L_21 = 5;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19<<(int32_t)8))|(int32_t)L_22)))));
		// short xg = (short)((int)SensorData[6] << 8 | (int)SensorData[7]);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = __this->get_SensorData_17();
		NullCheck(L_23);
		int32_t L_24 = 6;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = __this->get_SensorData_17();
		NullCheck(L_26);
		int32_t L_27 = 7;
		uint8_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25<<(int32_t)8))|(int32_t)L_28)))));
		// short yg = (short)((int)SensorData[8] << 8 | (int)SensorData[9]);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = __this->get_SensorData_17();
		NullCheck(L_29);
		int32_t L_30 = 8;
		uint8_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = __this->get_SensorData_17();
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)9);
		uint8_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31<<(int32_t)8))|(int32_t)L_34)))));
		// short zg = (short)((int)SensorData[10] << 8 | (int)SensorData[11]);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = __this->get_SensorData_17();
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)10);
		uint8_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = __this->get_SensorData_17();
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)11);
		uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_5 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_37<<(int32_t)8))|(int32_t)L_40)))));
		// LastValues.AccelerationX = (float)xa / accelsensitivity;
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_41 = MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F(__this, /*hidden argument*/NULL);
		int16_t L_42 = V_0;
		NullCheck(L_41);
		MpuSensorValue_set_AccelerationX_m0BFF65B351ACA40D38EC00A7B9EFE37C6424CE7D(L_41, ((float)((float)(((float)((float)L_42)))/(float)(16384.0f))), /*hidden argument*/NULL);
		// LastValues.AccelerationY = (float)ya / accelsensitivity;
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_43 = MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F(__this, /*hidden argument*/NULL);
		int16_t L_44 = V_1;
		NullCheck(L_43);
		MpuSensorValue_set_AccelerationY_m6DDFF1B7FAE02A7FF13FCCC9D79EC8F58D083E8C(L_43, ((float)((float)(((float)((float)L_44)))/(float)(16384.0f))), /*hidden argument*/NULL);
		// LastValues.AccelerationZ = (float)za / accelsensitivity;
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_45 = MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F(__this, /*hidden argument*/NULL);
		int16_t L_46 = V_2;
		NullCheck(L_45);
		MpuSensorValue_set_AccelerationZ_mE09E239429B036752F410262981309F396E7058E(L_45, ((float)((float)(((float)((float)L_46)))/(float)(16384.0f))), /*hidden argument*/NULL);
		// LastValues.GyroX = (float)xg / gyrosensitivity;
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_47 = MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F(__this, /*hidden argument*/NULL);
		int16_t L_48 = V_3;
		NullCheck(L_47);
		MpuSensorValue_set_GyroX_m70C6C473B24E12D39F7572A5513C7BF8A2AAE034(L_47, ((float)((float)(((float)((float)L_48)))/(float)(131.0f))), /*hidden argument*/NULL);
		// LastValues.GyroY = (float)yg / gyrosensitivity;
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_49 = MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F(__this, /*hidden argument*/NULL);
		int16_t L_50 = V_4;
		NullCheck(L_49);
		MpuSensorValue_set_GyroY_m6DAFD785D936EFFFD8327D946879ECF78FA02AFD(L_49, ((float)((float)(((float)((float)L_50)))/(float)(131.0f))), /*hidden argument*/NULL);
		// LastValues.GyroZ = (float)zg / gyrosensitivity;
		MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_51 = MPU6050_get_LastValues_mA90BD6D96BC5F6B9FD40D830869BC39F864A4B9F(__this, /*hidden argument*/NULL);
		int16_t L_52 = V_5;
		NullCheck(L_51);
		MpuSensorValue_set_GyroZ_m3DB75586A201A052473F74B2CA73ED626C169421(L_51, ((float)((float)(((float)((float)L_52)))/(float)(131.0f))), /*hidden argument*/NULL);
		// Msg = "[Update LastValues]";
		__this->set_Msg_1(_stringLiteralF5935CFDBA4314051D642531D6635938EFD6956E);
	}

IL_0152:
	{
		// }
		return;
	}
}
// System.Void mpu6050.MPU6050::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MPU6050_Dispose_m480C1FDC53B8EE67DC600A44FC6E17C2B4D704C0 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		// if (!disposedValue)
		bool L_0 = __this->get_disposedValue_20();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// if (_mpu6050Device != null)
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_1 = __this->get__mpu6050Device_18();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// _mpu6050Device.Dispose();
		I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_2 = __this->get__mpu6050Device_18();
		NullCheck(L_2);
		I2cDevice_Dispose_m09D05003C9BF4BBBFD468576EFA37EF41A15B846(L_2, /*hidden argument*/NULL);
		// _mpu6050Device = null;
		__this->set__mpu6050Device_18((I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 *)NULL);
	}

IL_0022:
	{
		// disposedValue = true;
		__this->set_disposedValue_20((bool)1);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void mpu6050.MPU6050::Finalize()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_Finalize_m3F9AA81BA0357A21D159771B7CE048EA5FCA73C4 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void mpu6050.MPU6050::Dispose(System.Boolean) */, __this, (bool)0);
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
// System.Void mpu6050.MPU6050::Dispose()
extern "C" IL2CPP_METHOD_ATTR void MPU6050_Dispose_mAFF65367BE4E3FAD26C093B8A703813D1708CE60 (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050_Dispose_mAFF65367BE4E3FAD26C093B8A703813D1708CE60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void mpu6050.MPU6050::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void mpu6050.MPU6050::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MPU6050__ctor_mC15FCE13041E3E84EB507A136ADC052307BA243A (MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MPU6050__ctor_mC15FCE13041E3E84EB507A136ADC052307BA243A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[] SensorData = new byte[SensorBytes];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->set_SensorData_17(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void mpu6050.MPU6050/<InitHardware>d__29::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CInitHardwareU3Ed__29_MoveNext_mCA3D7F9F71E08197E9C6E5628AED8F1850AED5A1 (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInitHardwareU3Ed__29_MoveNext_mCA3D7F9F71E08197E9C6E5628AED8F1850AED5A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * V_1 = NULL;
	I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * V_2 = NULL;
	TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  V_3;
	memset(&V_3, 0, sizeof(V_3));
	I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * V_4 = NULL;
	TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  V_5;
	memset(&V_5, 0, sizeof(V_5));
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				switch (L_3)
				{
					case 0:
					{
						goto IL_0086;
					}
					case 1:
					{
						goto IL_0104;
					}
					case 2:
					{
						goto IL_016c;
					}
					case 3:
					{
						goto IL_01d8;
					}
				}
			}

IL_0029:
			{
				// LastValues = new MpuSensorValue();
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_4 = V_1;
				MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * L_5 = (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D *)il2cpp_codegen_object_new(MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D_il2cpp_TypeInfo_var);
				MpuSensorValue__ctor_m31D715FC101067DF75CC937A2FFFD809DCC7844E(L_5, /*hidden argument*/NULL);
				NullCheck(L_4);
				MPU6050_set_LastValues_mB575B3A32CE1E0FC4AE29926CC4A484AE738ECFB(L_4, L_5, /*hidden argument*/NULL);
				// Msg = "[Start InitHardware]";
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_6 = V_1;
				NullCheck(L_6);
				L_6->set_Msg_1(_stringLiteralEAA65CEB021AB0D62DA36F8621EE13BD80A4E5FE);
				// IoController = GpioController.GetDefault();
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_7 = V_1;
				GpioController_t9EC04AE9960323D7AD5D38705D1A92E5DF62079D * L_8 = GpioController_GetDefault_mB4A541F47D43F3062A9FBCC2F810ECA3A725DEEC(/*hidden argument*/NULL);
				NullCheck(L_7);
				L_7->set_IoController_19(L_8);
				// string aqs = I2cDevice.GetDeviceSelector();
				String_t* L_9 = I2cDevice_GetDeviceSelector_mE5EBCAAEFAC3508FED1B6396BB628AAF882A18BC(/*hidden argument*/NULL);
				// DeviceInformationCollection collection = await DeviceInformation.FindAllAsync(aqs);
				RuntimeObject* L_10 = DeviceInformation_FindAllAsync_m996740009B773388FBCC4B81D5BC9CF099B4F141(L_9, /*hidden argument*/NULL);
				TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  L_11 = WindowsRuntimeSystemExtensions_GetAwaiter_TisDeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7_m1CC6828562E01EA47C35CDEADF28FB9C413910FC(L_10, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisDeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7_m1CC6828562E01EA47C35CDEADF28FB9C413910FC_RuntimeMethod_var);
				V_3 = L_11;
				bool L_12 = TaskAwaiter_1_get_IsCompleted_mC7C51DD2698AA19A0C8BDD2DC423D43B5051A8A4((TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mC7C51DD2698AA19A0C8BDD2DC423D43B5051A8A4_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_00a2;
				}
			}

IL_0063:
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->set_U3CU3E1__state_0(L_13);
				TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  L_14 = V_3;
				__this->set_U3CU3Eu__1_3(L_14);
				AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_15 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m6185DEB347778E88E5503C876FD14F35C99A64A1((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_15, (TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *)(&V_3), (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m6185DEB347778E88E5503C876FD14F35C99A64A1_RuntimeMethod_var);
				goto IL_0259;
			}

IL_0086:
			{
				TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53  L_16 = __this->get_U3CU3Eu__1_3();
				V_3 = L_16;
				TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 * L_17 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 ));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->set_U3CU3E1__state_0(L_18);
			}

IL_00a2:
			{
				DeviceInformationCollection_tB110A173809E8054E7B70E4DD097BA13060F6FC7 * L_19 = TaskAwaiter_1_GetResult_m1D9FFDC78B08E211B8341CAE0C335B60BB43B069((TaskAwaiter_1_t325C97E6C136F306CC070DB48ECEBD92997F3E53 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m1D9FFDC78B08E211B8341CAE0C335B60BB43B069_RuntimeMethod_var);
				// I2cConnectionSettings settings = new I2cConnectionSettings(ADDRESS);
				I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * L_20 = (I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 *)il2cpp_codegen_object_new(I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3_il2cpp_TypeInfo_var);
				I2cConnectionSettings__ctor_m9F3C9DC8564CBBB3B887A1B1A965D1DEE48EF971(L_20, ((int32_t)104), /*hidden argument*/NULL);
				V_2 = L_20;
				// settings.BusSpeed = I2cBusSpeed.FastMode; // 400kHz clock
				I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * L_21 = V_2;
				NullCheck(L_21);
				I2cConnectionSettings_put_BusSpeed_mBC01F93AE08CB98CB6703B46E103EFD8B3A83BC0(L_21, 1, /*hidden argument*/NULL);
				// settings.SharingMode = I2cSharingMode.Exclusive;
				I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * L_22 = V_2;
				NullCheck(L_22);
				I2cConnectionSettings_put_SharingMode_mC43D9E5B1AA80BEACE708088C8E18A35FF09676C(L_22, 0, /*hidden argument*/NULL);
				// _mpu6050Device = await I2cDevice.FromIdAsync(collection[0].Id, settings);
				NullCheck(L_19);
				DeviceInformation_t6188B770C92A6C990958DA0821869BF350ED39C9 * L_23 = InterfaceFuncInvoker1< DeviceInformation_t6188B770C92A6C990958DA0821869BF350ED39C9 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Windows.Devices.Enumeration.DeviceInformation>::get_Item(System.Int32) */, IReadOnlyList_1_t24BEFFB31822663BC19FF6104A04EEA251272897_il2cpp_TypeInfo_var, L_19, 0);
				NullCheck(L_23);
				String_t* L_24 = DeviceInformation_get_Id_m8596792EF7C8149D474A3C4DBC85C5048D461F70(L_23, /*hidden argument*/NULL);
				I2cConnectionSettings_tDD980C2F6B9B5A626B91FCA02033271C84B6B1C3 * L_25 = V_2;
				RuntimeObject* L_26 = I2cDevice_FromIdAsync_m5B9AD081A33D59F5C5CF8FC8A73C22AF0AFFB67B(L_24, L_25, /*hidden argument*/NULL);
				TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  L_27 = WindowsRuntimeSystemExtensions_GetAwaiter_TisI2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128_m8CFCC8548C48C464850A53EB6DE3E6A7E3FD5AE6(L_26, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisI2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128_m8CFCC8548C48C464850A53EB6DE3E6A7E3FD5AE6_RuntimeMethod_var);
				V_5 = L_27;
				bool L_28 = TaskAwaiter_1_get_IsCompleted_m66DCCCFB07DFD0DA4B7340702E8039263B296AB4((TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m66DCCCFB07DFD0DA4B7340702E8039263B296AB4_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_0121;
				}
			}

IL_00e0:
			{
				int32_t L_29 = 1;
				V_0 = L_29;
				__this->set_U3CU3E1__state_0(L_29);
				TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  L_30 = V_5;
				__this->set_U3CU3Eu__2_4(L_30);
				AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_31 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_mD3415C49838BACF9D5C663834C54684D51A8E027((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_31, (TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *)(&V_5), (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_mD3415C49838BACF9D5C663834C54684D51A8E027_RuntimeMethod_var);
				goto IL_0259;
			}

IL_0104:
			{
				TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2  L_32 = __this->get_U3CU3Eu__2_4();
				V_5 = L_32;
				TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 * L_33 = __this->get_address_of_U3CU3Eu__2_4();
				il2cpp_codegen_initobj(L_33, sizeof(TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 ));
				int32_t L_34 = (-1);
				V_0 = L_34;
				__this->set_U3CU3E1__state_0(L_34);
			}

IL_0121:
			{
				I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_35 = TaskAwaiter_1_GetResult_m7578B28CF8B63C064016453EBA95D58C4A058EF8((TaskAwaiter_1_t9D92A8E4110B8CF1C04031A3019CBD634FBAF3E2 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m7578B28CF8B63C064016453EBA95D58C4A058EF8_RuntimeMethod_var);
				V_4 = L_35;
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_36 = V_1;
				I2cDevice_t98FC86BEF8346B93999084F247BB5BDE4D946128 * L_37 = V_4;
				NullCheck(L_36);
				L_36->set__mpu6050Device_18(L_37);
				// await Task.Delay(3); // wait power up sequence
				IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
				Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_38 = Task_Delay_m193E6692B81A2A6C45F5FAE08CF79FA06FC7DA60(3, /*hidden argument*/NULL);
				NullCheck(L_38);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_39 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_38, /*hidden argument*/NULL);
				V_6 = L_39;
				bool L_40 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), /*hidden argument*/NULL);
				if (L_40)
				{
					goto IL_0189;
				}
			}

IL_0148:
			{
				int32_t L_41 = 2;
				V_0 = L_41;
				__this->set_U3CU3E1__state_0(L_41);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_42 = V_6;
				__this->set_U3CU3Eu__3_5(L_42);
				AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_43 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m430D40E2018AC1A9563E99FE7ED1D4678ECCB9F3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_43, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m430D40E2018AC1A9563E99FE7ED1D4678ECCB9F3_RuntimeMethod_var);
				goto IL_0259;
			}

IL_016c:
			{
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_44 = __this->get_U3CU3Eu__3_5();
				V_6 = L_44;
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_45 = __this->get_address_of_U3CU3Eu__3_5();
				il2cpp_codegen_initobj(L_45, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
				int32_t L_46 = (-1);
				V_0 = L_46;
				__this->set_U3CU3E1__state_0(L_46);
			}

IL_0189:
			{
				TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), /*hidden argument*/NULL);
				// WriteByte(PWR_MGMT_1, 0x80);// reset the device
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_47 = V_1;
				NullCheck(L_47);
				MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872(L_47, (uint8_t)((int32_t)107), (uint8_t)((int32_t)128), /*hidden argument*/NULL);
				// await Task.Delay(100);
				IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
				Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_48 = Task_Delay_m193E6692B81A2A6C45F5FAE08CF79FA06FC7DA60(((int32_t)100), /*hidden argument*/NULL);
				NullCheck(L_48);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_49 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_48, /*hidden argument*/NULL);
				V_6 = L_49;
				bool L_50 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), /*hidden argument*/NULL);
				if (L_50)
				{
					goto IL_01f5;
				}
			}

IL_01b4:
			{
				int32_t L_51 = 3;
				V_0 = L_51;
				__this->set_U3CU3E1__state_0(L_51);
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_52 = V_6;
				__this->set_U3CU3Eu__3_5(L_52);
				AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_53 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m430D40E2018AC1A9563E99FE7ED1D4678ECCB9F3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_53, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C_m430D40E2018AC1A9563E99FE7ED1D4678ECCB9F3_RuntimeMethod_var);
				goto IL_0259;
			}

IL_01d8:
			{
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_54 = __this->get_U3CU3Eu__3_5();
				V_6 = L_54;
				TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_55 = __this->get_address_of_U3CU3Eu__3_5();
				il2cpp_codegen_initobj(L_55, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
				int32_t L_56 = (-1);
				V_0 = L_56;
				__this->set_U3CU3E1__state_0(L_56);
			}

IL_01f5:
			{
				TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_6), /*hidden argument*/NULL);
				// WriteByte(PWR_MGMT_1, 0x00); //????N???b?N???? (????0x02)
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_57 = V_1;
				NullCheck(L_57);
				MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872(L_57, (uint8_t)((int32_t)107), (uint8_t)0, /*hidden argument*/NULL);
				// WriteByte(GYRO_CONFIG, 0x08);
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_58 = V_1;
				NullCheck(L_58);
				MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872(L_58, (uint8_t)((int32_t)27), (uint8_t)8, /*hidden argument*/NULL);
				// WriteByte(ACCEL_CONFIG, 0x10);
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_59 = V_1;
				NullCheck(L_59);
				MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872(L_59, (uint8_t)((int32_t)28), (uint8_t)((int32_t)16), /*hidden argument*/NULL);
				// WriteByte(CONFIG, 0x03); // 184 Hz, 2ms delay
				MPU6050_tB510E16AC7A8543789ABECF11C4A1EC40B398EF9 * L_60 = V_1;
				NullCheck(L_60);
				MPU6050_WriteByte_mFD953ED5EED04CE2B3AF950F3CCF3771D0A53872(L_60, (uint8_t)((int32_t)26), (uint8_t)3, /*hidden argument*/NULL);
				// }
				goto IL_022b;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0223;
			throw e;
		}

CATCH_0223:
		{ // begin catch(System.Exception)
			// string error = ex.ToString();
			NullCheck(((Exception_t *)__exception_local));
			VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t *)__exception_local));
			// }
			goto IL_022b;
		} // end catch (depth: 2)

IL_022b:
		{
			goto IL_0246;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_022d;
		throw e;
	}

CATCH_022d:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_61 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_62 = V_7;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_61, L_62, /*hidden argument*/NULL);
		goto IL_0259;
	} // end catch (depth: 1)

IL_0246:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_63 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_63, /*hidden argument*/NULL);
	}

IL_0259:
	{
		return;
	}
}
extern "C"  void U3CInitHardwareU3Ed__29_MoveNext_mCA3D7F9F71E08197E9C6E5628AED8F1850AED5A1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * _thisAdjusted = reinterpret_cast<U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *>(__this + 1);
	U3CInitHardwareU3Ed__29_MoveNext_mCA3D7F9F71E08197E9C6E5628AED8F1850AED5A1(_thisAdjusted, method);
}
// System.Void mpu6050.MPU6050/<InitHardware>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CInitHardwareU3Ed__29_SetStateMachine_m8A0BA8587DD1C5F9E9C81F26D38F9CD42FCB327A (U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CInitHardwareU3Ed__29_SetStateMachine_m8A0BA8587DD1C5F9E9C81F26D38F9CD42FCB327A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C * _thisAdjusted = reinterpret_cast<U3CInitHardwareU3Ed__29_t27C41CB719580B263DCFE34581D54463E28C4C6C *>(__this + 1);
	U3CInitHardwareU3Ed__29_SetStateMachine_m8A0BA8587DD1C5F9E9C81F26D38F9CD42FCB327A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single mpu6050.MpuSensorValue::get_AccelerationX()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_AccelerationX_mA8792C5A0BB37B1AE389B9FA6FE1E5012A582983 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float AccelerationX { get; set; }
		float L_0 = __this->get_U3CAccelerationXU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_AccelerationX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_AccelerationX_m0BFF65B351ACA40D38EC00A7B9EFE37C6424CE7D (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float AccelerationX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CAccelerationXU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single mpu6050.MpuSensorValue::get_AccelerationY()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_AccelerationY_m07A162C8A1C6DB9DC5562EDBF365EE153C96BA96 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float AccelerationY { get; set; }
		float L_0 = __this->get_U3CAccelerationYU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_AccelerationY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_AccelerationY_m6DDFF1B7FAE02A7FF13FCCC9D79EC8F58D083E8C (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float AccelerationY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CAccelerationYU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Single mpu6050.MpuSensorValue::get_AccelerationZ()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_AccelerationZ_mDC9F78758557FBE3B5E912343054BCFAA05216F9 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float AccelerationZ { get; set; }
		float L_0 = __this->get_U3CAccelerationZU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_AccelerationZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_AccelerationZ_mE09E239429B036752F410262981309F396E7058E (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float AccelerationZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CAccelerationZU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Single mpu6050.MpuSensorValue::get_GyroX()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_GyroX_mB4C8C93E2B3B88235CB623F40924B62E008F9CDD (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float GyroX { get; set; }
		float L_0 = __this->get_U3CGyroXU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_GyroX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_GyroX_m70C6C473B24E12D39F7572A5513C7BF8A2AAE034 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float GyroX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CGyroXU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Single mpu6050.MpuSensorValue::get_GyroY()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_GyroY_m9A20C57F1FD98A6EBB166C0B5D7C4A85F7DE271C (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float GyroY { get; set; }
		float L_0 = __this->get_U3CGyroYU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_GyroY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_GyroY_m6DAFD785D936EFFFD8327D946879ECF78FA02AFD (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float GyroY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CGyroYU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Single mpu6050.MpuSensorValue::get_GyroZ()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_GyroZ_m9DDE69DB1A03246E7C50CCDAF6DC1B218D9DD0C0 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float GyroZ { get; set; }
		float L_0 = __this->get_U3CGyroZU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_GyroZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_GyroZ_m3DB75586A201A052473F74B2CA73ED626C169421 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float GyroZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CGyroZU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Single mpu6050.MpuSensorValue::get_degX()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_degX_m9BD3D06294E3F4CA6444215A1F135D1E1DC0945A (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float degX { get; set; }
		float L_0 = __this->get_U3CdegXU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_degX(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_degX_mB825D07E42989A8C48EB427B85A2E2BB962CC888 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float degX { get; set; }
		float L_0 = ___value0;
		__this->set_U3CdegXU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Single mpu6050.MpuSensorValue::get_degY()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_degY_m27D9FC5D3204F3EBB9D1E549167DE92A4F827222 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float degY { get; set; }
		float L_0 = __this->get_U3CdegYU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_degY(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_degY_m3AD1ECFB5BF8D47DED86FCCDFBAFD7B7C1782608 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float degY { get; set; }
		float L_0 = ___value0;
		__this->set_U3CdegYU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Single mpu6050.MpuSensorValue::get_degZ()
extern "C" IL2CPP_METHOD_ATTR float MpuSensorValue_get_degZ_mE349AF014AFDF90EDAA3DA8C6122D4064682DCE5 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		// public float degZ { get; set; }
		float L_0 = __this->get_U3CdegZU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void mpu6050.MpuSensorValue::set_degZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue_set_degZ_mBAA411DEA59DE19E931745C6A460585EC4581A56 (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float degZ { get; set; }
		float L_0 = ___value0;
		__this->set_U3CdegZU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void mpu6050.MpuSensorValue::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MpuSensorValue__ctor_m31D715FC101067DF75CC937A2FFFD809DCC7844E (MpuSensorValue_t7A67A2F92DE2F1C8BE635E8F03892624EA926C6D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
