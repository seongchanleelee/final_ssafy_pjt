#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203;
// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
// System.Collections.Generic.EqualityComparer`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct EqualityComparer_1_tC6FE9A43CF5576B8F28C39B87FC198BF764D786F;
// Google.Protobuf.FieldCodec`1<System.Object>
struct FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7;
// Google.Protobuf.FieldCodec`1<System.Single>
struct FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708;
// Google.Protobuf.FieldCodec`1<System.UInt32>
struct FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C;
// Google.Protobuf.FieldCodec`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D;
// System.Func`1<Mediapipe.FaceGeometry.Environment>
struct Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B;
// System.Func`1<Mediapipe.FaceGeometry.FaceGeometry>
struct Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7;
// System.Func`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata>
struct Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918;
// System.Func`1<Mediapipe.FaceGeometry.Mesh3d>
struct Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<Mediapipe.FaceGeometry.PerspectiveCamera>
struct Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C;
// System.Func`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB;
// System.Func`2<Google.Protobuf.IMessage,System.Boolean>
struct Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB;
// System.Func`2<System.Single,System.Int32>
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9;
// System.Func`2<System.UInt32,System.Int32>
struct Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A;
// System.Func`2<Mediapipe.FaceGeometry.WeightedLandmarkRef,System.Int32>
struct Func_2_tBCE9548D691E7E5F820B84303CA05940399286EC;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897;
// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.UnknownField>
struct IDictionary_2_tDE18981433E3420ACE1F95A42EC7A93F5AA317EE;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tDB170C5929E4ACA380EEF5C8E082139CE49EC21B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
// System.Collections.Generic.IEnumerable`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct IEnumerable_1_tF742428C1576FD12E43D756E9B7231AF9EFE004D;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t2113D31E64AB4BC3FE73AB5985B7D30B220225D2;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t1C3796CCB02A6FB46469A8C82C9FBB10883C38B1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180;
// Google.Protobuf.FieldCodec`1/InputMerger<System.Single>
struct InputMerger_t0724F82AB0B8DEF9D6DE4B136007FBAC34BBADE5;
// Google.Protobuf.FieldCodec`1/InputMerger<System.UInt32>
struct InputMerger_t8E672FAACDF7B0E0433553D481623AC29692E370;
// Google.Protobuf.FieldCodec`1/InputMerger<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct InputMerger_t27597FD78A3AE3057A0E12B9521D26882D1F881E;
// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>>
struct Lazy_1_t9EE2A1123EC79B036ABD6DA8C3433CC66609B4A6;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Environment>
struct MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.FaceGeometry>
struct MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata>
struct MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149;
// Google.Protobuf.MessageParser`1<Mediapipe.MatrixData>
struct MessageParser_1_t3BAC591FD848A72395EEE4B29D97839C659EA6F1;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Mesh3d>
struct MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE;
// Google.Protobuf.MessageParser`1<System.Object>
struct MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.PerspectiveCamera>
struct MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9;
// Google.Protobuf.Collections.RepeatedField`1<System.Single>
struct RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D;
// Google.Protobuf.Collections.RepeatedField`1<System.UInt32>
struct RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A;
// Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB;
// Google.Protobuf.ValueReader`1<System.Single>
struct ValueReader_1_t4D9826DD910C46BC66170ABEBF30FB17571DB7F0;
// Google.Protobuf.ValueReader`1<System.UInt32>
struct ValueReader_1_t5CCE66F6C80B7B25D7EA2F334DA2CF8ADE116F6E;
// Google.Protobuf.ValueReader`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct ValueReader_1_tA5D8ABED40C439954D5CDFA70A4913335CFFA27B;
// Google.Protobuf.ValueWriter`1<System.Single>
struct ValueWriter_1_tB873C4D58ED5CAB163EB974B7F210127341A541D;
// Google.Protobuf.ValueWriter`1<System.UInt32>
struct ValueWriter_1_t0AB2367E8B323C2118DD539B2C3F94FD26B1FDF3;
// Google.Protobuf.ValueWriter`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct ValueWriter_1_tA02B4DD2CAB3086017919A0C06A1A92A737D4B8D;
// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Single>
struct ValuesMerger_t94F775B22406ECD260E75EAC4B57C84C68931ED4;
// Google.Protobuf.FieldCodec`1/ValuesMerger<System.UInt32>
struct ValuesMerger_t9EF9E780DEA0C2F4748D00964DED5456995A71C8;
// Google.Protobuf.FieldCodec`1/ValuesMerger<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct ValuesMerger_tDF17D8578858E3F674400DC02572064F44B5B643;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Mediapipe.FaceGeometry.WeightedLandmarkRef[]
struct WeightedLandmarkRefU5BU5D_t9851F3A024C843477D49E08560097ADDECD60B31;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592;
// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425;
// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D;
// Mediapipe.FaceGeometry.Environment
struct Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22;
// Google.Protobuf.Extension
struct Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A;
// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC;
// Mediapipe.FaceGeometry.FaceGeometry
struct FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E;
// Mediapipe.FaceGeometry.GeometryPipelineMetadata
struct GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261;
// Google.Protobuf.IMessage
struct IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940;
// Mediapipe.MatrixData
struct MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Mediapipe.FaceGeometry.Mesh3d
struct Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906;
// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mediapipe.FaceGeometry.PerspectiveCamera
struct PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Google.Protobuf.UnknownField
struct UnknownField_tC38F0EBBE48029F7B0BF156B6CCB6585176E91DD;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Mediapipe.FaceGeometry.WeightedLandmarkRef
struct WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18;
// Mediapipe.FaceGeometry.Environment/<>c
struct U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF;
// Mediapipe.FaceGeometry.FaceGeometry/<>c
struct U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9;
// Mediapipe.FaceGeometry.GeometryPipelineMetadata/<>c
struct U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4;
// Mediapipe.FaceGeometry.Mesh3d/<>c
struct U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3;
// Mediapipe.FaceGeometry.PerspectiveCamera/<>c
struct U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3;
// Mediapipe.FaceGeometry.WeightedLandmarkRef/<>c
struct U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053;

IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentReflection_t35B2B087C4DD67B24E9AEAFD70276DBEC26B41BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatrixDataReflection_t6DA00287FAF3117A823F7A618087DFDF7E74885E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02ABCF9F5056489378969D5B528FF46CBCF4FCF1;
IL2CPP_EXTERN_C String_t* _stringLiteral1501BEF9536FED975ADED8DDC845C9E6AF9C05F6;
IL2CPP_EXTERN_C String_t* _stringLiteral16BCBCC0240C2EA43585B4E9E90CE98AD61E73BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1745A44121BDC00664387D287F571C36D972D21F;
IL2CPP_EXTERN_C String_t* _stringLiteral178532CB79F23A598950040A5EB274B566D59364;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5C3571C9C145AC23F82B722B160F99EAF7896A;
IL2CPP_EXTERN_C String_t* _stringLiteral21FC2C5D6480BB0DA10F76D33ED938197744B6F3;
IL2CPP_EXTERN_C String_t* _stringLiteral300FC9B7294EEEFBC33F6E50ABB12D9F829E3E1A;
IL2CPP_EXTERN_C String_t* _stringLiteral32BE1947FEB0B3A1EE22505D8B2625B4A285AC98;
IL2CPP_EXTERN_C String_t* _stringLiteral3B6EDB958072643696FAEBF03C72966C67D54166;
IL2CPP_EXTERN_C String_t* _stringLiteral3EAB7C84A717B5021D47DD77B69776754098C27F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F87FC02F38FC0CA874F8DF96DFB0A3052845CB5;
IL2CPP_EXTERN_C String_t* _stringLiteral44C6D807C5938D43977667A8A9EBF29A6B1B2FE3;
IL2CPP_EXTERN_C String_t* _stringLiteral47F7500B29C0D10436AFBD9007865B858C1E7880;
IL2CPP_EXTERN_C String_t* _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821;
IL2CPP_EXTERN_C String_t* _stringLiteral6891951625266AECBF1B540B0498CFC73CEB9D4F;
IL2CPP_EXTERN_C String_t* _stringLiteral6DAF6171D2B99FCF76CF5EA38DD36C9E1DA3837A;
IL2CPP_EXTERN_C String_t* _stringLiteral701B14400C2587794A95696C9A3A754FE47D3BCE;
IL2CPP_EXTERN_C String_t* _stringLiteral78E3E5CD703380D6872389E79617603C265FE6EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7B342276FBB60529D21E2D47196A38A03B54F85B;
IL2CPP_EXTERN_C String_t* _stringLiteral7C1322B3A70AE0444E711C2F7320B5D8ACC9B29F;
IL2CPP_EXTERN_C String_t* _stringLiteral833E1B8B5510CECB320BF75FC55D423A29324076;
IL2CPP_EXTERN_C String_t* _stringLiteral89E82FD37525882F367AB622B605BD32C9268214;
IL2CPP_EXTERN_C String_t* _stringLiteral8D7CAF888C0BB1022E9386305FD0F38608F3431F;
IL2CPP_EXTERN_C String_t* _stringLiteral9024EFCE2742080D96FDD51651E94F63A6FA5AC0;
IL2CPP_EXTERN_C String_t* _stringLiteral91266B0861A06C53F321BB4A232F00D5AC7BB6EB;
IL2CPP_EXTERN_C String_t* _stringLiteral973DFE1C9B03BFB4966DDA45567A1BEF02F649C7;
IL2CPP_EXTERN_C String_t* _stringLiteralA48F9C8927A7C07C01708B074701B5F618ADBA02;
IL2CPP_EXTERN_C String_t* _stringLiteralAA00183B24CDC302DDD09A6B4AAD27C6E16D8A5A;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6A2CE49BF8089F4DA0A814E5C56CD6C185CE87;
IL2CPP_EXTERN_C String_t* _stringLiteralAF202E23EBA94546CA86ECEFFB141FDFD0BDE206;
IL2CPP_EXTERN_C String_t* _stringLiteralB239DE3E1C3A1AC710F658159D7E8E901A4A99FF;
IL2CPP_EXTERN_C String_t* _stringLiteralBEBBA621EF9976D04DFBD8067604563FB2E5B8E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC677C85C10E79B356328B2593497B1276E88F55E;
IL2CPP_EXTERN_C String_t* _stringLiteralD4005E3C3FD158E447DAEDC5D4AD65314C35F0D1;
IL2CPP_EXTERN_C String_t* _stringLiteralE376FCD4A340AF9C59756C5970723E75E1C69EE2;
IL2CPP_EXTERN_C String_t* _stringLiteralEC77BF55C00E10F63F14098D8E96998543F32135;
IL2CPP_EXTERN_C String_t* _stringLiteralEC93BC9A6BC9D387A6780CE6BE453A9254FD2CD2;
IL2CPP_EXTERN_C String_t* _stringLiteralEE5A21FC7F16F5A3C8DCA695B4E178C39598A0B2;
IL2CPP_EXTERN_C String_t* _stringLiteralF0D30F2A7FBC2D9ECB2D66B13DA2C58549678CDB;
IL2CPP_EXTERN_C String_t* _stringLiteralF30A51DA100934A7DDC519E8AB8C2FFA2837815C;
IL2CPP_EXTERN_C String_t* _stringLiteralF5CDC4B8F24423236A4914E13F8B5A6182BDDDBB;
IL2CPP_EXTERN_C String_t* _stringLiteralF95194DEB9E0422C969FE59CAD91136BD80DE9C8;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCodec_ForMessage_TisWeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_m9F2CE7B75F20C4C4DAD605E42C70D3455A479FBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m1CB7D2E5F94E6486E2252DA47F84A6F5765DFAB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m7580E715C6BF542C9E6C3CB673F8C9B728B4C476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m949950F36274AC14476249A9587CA946918DBA41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mD2CDF9BEF38146C98F7401EACDF804095FB5225F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mD623BCE960047B4E8BED2880653416B6708F7849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mFE9613E5D557C1A99EB952B90BB3AAFA3B3231BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_AddEntriesFrom_mC1DDF16C77F4578DCF0A7DF6116AD7351DE6303A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_AddEntriesFrom_mD27169EBD59C2D9003813689BE3B6215AFE7D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_AddEntriesFrom_mDFA081024A40FB93F2B669497FEE9505F2E9CC08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Add_m4496DCFCF8EAEE27EEE89AB5865D26C274EA979E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Add_m4CB431DF2CD79B75C26BC1728816BB4C62674B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Add_mAE8E425E3F2EE80F7C1116A263136606BE22CDC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_CalculateSize_m0BF270F733569FE095C1790E9943BC80109E60DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_CalculateSize_m9670D453530A3D1CF5CF3FB229456AFA4555CDFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_CalculateSize_mD3C3299755C5AF6826643EC7F75F1E457CA7766C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Clone_m3560CCA58621F97DFB1BE9603C8D1FECFF084B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Clone_m91CC8FF65D1709887661C714B0D6FCFBCB981C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Clone_m9F21FF98196C413FE301701E69C3D0309986CF1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Equals_m78D7CE1E96A6595DB8738EB0184381940A33B666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Equals_m7C23DEC7DDF6DB695D60FECE17ACBD35D4490F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Equals_mB8B9CDF845A83C576237D0DE9BD2740C98F6B603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_WriteTo_m07B1B741FC742F54FB54EB8D0612094488F2D84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_WriteTo_m0BDC341F29C484651ACA13B5D299C352B1D8E91F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_WriteTo_mF302CC1B25D02E6C3565275393910D763B89F801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1__ctor_m41ABDAFB51A18022F7F4DA6B9684907740FB8147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1__ctor_m6768ACA53064577BED72BB90964A8EB12BE397E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1__ctor_mBFDE464D22CBD6D73802E1327ADFEB73BBE358B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__32_0_mC2A626F9A04F31CA87D84D0EF69D7E264BB0E0F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_0_m7527BD2E430FFEAD331512AAFE6F39B4869F044E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__41_0_m39932B06BB4FD2D099447F7853494DF166300F97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__42_0_m85EA05CFD7865B5DD7839B697E5897BC49766284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__50_0_mA661D6FB6D783708CD3980732B6F31FFA7901C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__52_0_mB5DEB53AB6DB0A9ED395DC42CA3CF8596E4B352D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputSource_t9955D1EA6ECB6D5B727A2DB4518F27AD68ADEA62_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PrimitiveType_t6C8BD57516E5526C5B5445E7C4CFDD4A76CC8E9F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VertexType_t5F594A08F1E6A4BB55A7E02701255981EBDAF686_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66;
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};

struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer_0;
};

// Google.Protobuf.FieldCodec`1<System.Single>
struct FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// Google.Protobuf.ValueWriter`1<T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	ValueWriter_1_tB873C4D58ED5CAB163EB974B7F210127341A541D* ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// Google.Protobuf.ValueReader`1<T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	ValueReader_1_t4D9826DD910C46BC66170ABEBF30FB17571DB7F0* ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t0724F82AB0B8DEF9D6DE4B136007FBAC34BBADE5* ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t94F775B22406ECD260E75EAC4B57C84C68931ED4* ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	float ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;
};

struct FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	float ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;
};

// Google.Protobuf.FieldCodec`1<System.UInt32>
struct FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// Google.Protobuf.ValueWriter`1<T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	ValueWriter_1_t0AB2367E8B323C2118DD539B2C3F94FD26B1FDF3* ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t69FEEB113FE65D4BE2BF33EF1EA72FAA686A2F6A* ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// Google.Protobuf.ValueReader`1<T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	ValueReader_1_t5CCE66F6C80B7B25D7EA2F334DA2CF8ADE116F6E* ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t8E672FAACDF7B0E0433553D481623AC29692E370* ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t9EF9E780DEA0C2F4748D00964DED5456995A71C8* ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	uint32_t ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;
};

struct FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	uint32_t ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;
};

// Google.Protobuf.FieldCodec`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// Google.Protobuf.ValueWriter`1<T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	ValueWriter_1_tA02B4DD2CAB3086017919A0C06A1A92A737D4B8D* ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_tBCE9548D691E7E5F820B84303CA05940399286EC* ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// Google.Protobuf.ValueReader`1<T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	ValueReader_1_tA5D8ABED40C439954D5CDFA70A4913335CFFA27B* ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t27597FD78A3AE3057A0E12B9521D26882D1F881E* ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_tDF17D8578858E3F674400DC02572064F44B5B643* ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;
};

struct FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_tC6FE9A43CF5576B8F28C39B87FC198BF764D786F* ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;
};

// Google.Protobuf.Collections.RepeatedField`1<System.Single>
struct RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<System.UInt32>
struct RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	WeightedLandmarkRefU5BU5D_t9851F3A024C843477D49E08560097ADDECD60B31* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tC6FE9A43CF5576B8F28C39B87FC198BF764D786F* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	WeightedLandmarkRefU5BU5D_t9851F3A024C843477D49E08560097ADDECD60B31* ___EmptyArray_1;
};
struct Il2CppArrayBounds;

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::<File>k__BackingField
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___U3CFileU3Ek__BackingField_2;
};

// Mediapipe.FaceGeometry.Environment
struct Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Mediapipe.FaceGeometry.Environment::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Int32 Mediapipe.FaceGeometry.Environment::_hasBits0
	int32_t ____hasBits0_2;
	// Mediapipe.FaceGeometry.OriginPointLocation Mediapipe.FaceGeometry.Environment::originPointLocation_
	int32_t ___originPointLocation__5;
	// Mediapipe.FaceGeometry.PerspectiveCamera Mediapipe.FaceGeometry.Environment::perspectiveCamera_
	PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___perspectiveCamera__7;
};

struct Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_StaticFields
{
	// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Environment> Mediapipe.FaceGeometry.Environment::_parser
	MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2* ____parser_0;
	// Mediapipe.FaceGeometry.OriginPointLocation Mediapipe.FaceGeometry.Environment::OriginPointLocationDefaultValue
	int32_t ___OriginPointLocationDefaultValue_4;
};

// Google.Protobuf.Extension
struct Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.Extension::<FieldNumber>k__BackingField
	int32_t ___U3CFieldNumberU3Ek__BackingField_0;
};

// Mediapipe.FaceGeometry.FaceGeometry
struct FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Mediapipe.FaceGeometry.FaceGeometry::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.FaceGeometry::mesh_
	Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___mesh__3;
	// Mediapipe.MatrixData Mediapipe.FaceGeometry.FaceGeometry::poseTransformMatrix_
	MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* ___poseTransformMatrix__5;
};

struct FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_StaticFields
{
	// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.FaceGeometry> Mediapipe.FaceGeometry.FaceGeometry::_parser
	MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* ____parser_0;
};

// Mediapipe.FaceGeometry.FaceGeometryReflection
struct FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF  : public RuntimeObject
{
};

struct FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.FaceGeometryReflection::descriptor
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___descriptor_0;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE  : public RuntimeObject
{
	// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>> Google.Protobuf.Reflection.FileDescriptor::declarations
	Lazy_1_t9EE2A1123EC79B036ABD6DA8C3433CC66609B4A6* ___declarations_0;
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___U3CProtoU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.Syntax Google.Protobuf.Reflection.FileDescriptor::<Syntax>k__BackingField
	int32_t ___U3CSyntaxU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_5;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.FileDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* ___U3CExtensionsU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_7;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_8;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___U3CSerializedDataU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* ___U3CDescriptorPoolU3Ek__BackingField_10;
};

// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E  : public RuntimeObject
{
	// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_4;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_5;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<PropertyNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CPropertyNamesU3Ek__BackingField_6;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Extensions>k__BackingField
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___U3CExtensionsU3Ek__BackingField_7;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<OneofNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COneofNamesU3Ek__BackingField_8;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedTypes>k__BackingField
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___U3CNestedTypesU3Ek__BackingField_9;
	// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedEnums>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CNestedEnumsU3Ek__BackingField_10;
};

struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields
{
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyNames_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyCodeInfo
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___EmptyCodeInfo_1;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyExtensions
	ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___EmptyExtensions_2;
};

// Mediapipe.FaceGeometry.GeometryPipelineMetadata
struct GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Mediapipe.FaceGeometry.GeometryPipelineMetadata::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Int32 Mediapipe.FaceGeometry.GeometryPipelineMetadata::_hasBits0
	int32_t ____hasBits0_2;
	// Mediapipe.FaceGeometry.InputSource Mediapipe.FaceGeometry.GeometryPipelineMetadata::inputSource_
	int32_t ___inputSource__5;
	// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.GeometryPipelineMetadata::canonicalMesh_
	Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___canonicalMesh__7;
	// Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef> Mediapipe.FaceGeometry.GeometryPipelineMetadata::procrustesLandmarkBasis_
	RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* ___procrustesLandmarkBasis__10;
};

struct GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields
{
	// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata> Mediapipe.FaceGeometry.GeometryPipelineMetadata::_parser
	MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* ____parser_0;
	// Mediapipe.FaceGeometry.InputSource Mediapipe.FaceGeometry.GeometryPipelineMetadata::InputSourceDefaultValue
	int32_t ___InputSourceDefaultValue_4;
	// Google.Protobuf.FieldCodec`1<Mediapipe.FaceGeometry.WeightedLandmarkRef> Mediapipe.FaceGeometry.GeometryPipelineMetadata::_repeated_procrustesLandmarkBasis_codec
	FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* ____repeated_procrustesLandmarkBasis_codec_9;
};

// Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection
struct GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487  : public RuntimeObject
{
};

struct GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection::descriptor
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___descriptor_0;
};

// Mediapipe.MatrixData
struct MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Mediapipe.MatrixData::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Int32 Mediapipe.MatrixData::_hasBits0
	int32_t ____hasBits0_2;
	// System.Int32 Mediapipe.MatrixData::rows_
	int32_t ___rows__5;
	// System.Int32 Mediapipe.MatrixData::cols_
	int32_t ___cols__8;
	// Google.Protobuf.Collections.RepeatedField`1<System.Single> Mediapipe.MatrixData::packedData_
	RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* ___packedData__11;
	// Mediapipe.MatrixData/Types/Layout Mediapipe.MatrixData::layout_
	int32_t ___layout__14;
};

struct MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B_StaticFields
{
	// Google.Protobuf.MessageParser`1<Mediapipe.MatrixData> Mediapipe.MatrixData::_parser
	MessageParser_1_t3BAC591FD848A72395EEE4B29D97839C659EA6F1* ____parser_0;
	// System.Int32 Mediapipe.MatrixData::RowsDefaultValue
	int32_t ___RowsDefaultValue_4;
	// System.Int32 Mediapipe.MatrixData::ColsDefaultValue
	int32_t ___ColsDefaultValue_7;
	// Google.Protobuf.FieldCodec`1<System.Single> Mediapipe.MatrixData::_repeated_packedData_codec
	FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* ____repeated_packedData_codec_10;
	// Mediapipe.MatrixData/Types/Layout Mediapipe.MatrixData::LayoutDefaultValue
	int32_t ___LayoutDefaultValue_13;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Mediapipe.FaceGeometry.Mesh3DReflection
struct Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097  : public RuntimeObject
{
};

struct Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.Mesh3DReflection::descriptor
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___descriptor_0;
};

// Mediapipe.FaceGeometry.Mesh3d
struct Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Mediapipe.FaceGeometry.Mesh3d::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Int32 Mediapipe.FaceGeometry.Mesh3d::_hasBits0
	int32_t ____hasBits0_2;
	// Mediapipe.FaceGeometry.Mesh3d/Types/VertexType Mediapipe.FaceGeometry.Mesh3d::vertexType_
	int32_t ___vertexType__5;
	// Mediapipe.FaceGeometry.Mesh3d/Types/PrimitiveType Mediapipe.FaceGeometry.Mesh3d::primitiveType_
	int32_t ___primitiveType__8;
	// Google.Protobuf.Collections.RepeatedField`1<System.Single> Mediapipe.FaceGeometry.Mesh3d::vertexBuffer_
	RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* ___vertexBuffer__11;
	// Google.Protobuf.Collections.RepeatedField`1<System.UInt32> Mediapipe.FaceGeometry.Mesh3d::indexBuffer_
	RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* ___indexBuffer__14;
};

struct Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields
{
	// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Mesh3d> Mediapipe.FaceGeometry.Mesh3d::_parser
	MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* ____parser_0;
	// Mediapipe.FaceGeometry.Mesh3d/Types/VertexType Mediapipe.FaceGeometry.Mesh3d::VertexTypeDefaultValue
	int32_t ___VertexTypeDefaultValue_4;
	// Mediapipe.FaceGeometry.Mesh3d/Types/PrimitiveType Mediapipe.FaceGeometry.Mesh3d::PrimitiveTypeDefaultValue
	int32_t ___PrimitiveTypeDefaultValue_7;
	// Google.Protobuf.FieldCodec`1<System.Single> Mediapipe.FaceGeometry.Mesh3d::_repeated_vertexBuffer_codec
	FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* ____repeated_vertexBuffer_codec_10;
	// Google.Protobuf.FieldCodec`1<System.UInt32> Mediapipe.FaceGeometry.Mesh3d::_repeated_indexBuffer_codec
	FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* ____repeated_indexBuffer_codec_13;
};

// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D  : public RuntimeObject
{
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918* ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.MessageParser::<Extensions>k__BackingField
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionsU3Ek__BackingField_2;
};

// Mediapipe.FaceGeometry.PerspectiveCamera
struct PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Mediapipe.FaceGeometry.PerspectiveCamera::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Int32 Mediapipe.FaceGeometry.PerspectiveCamera::_hasBits0
	int32_t ____hasBits0_2;
	// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::verticalFovDegrees_
	float ___verticalFovDegrees__5;
	// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::near_
	float ___near__8;
	// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::far_
	float ___far__11;
};

struct PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields
{
	// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.PerspectiveCamera> Mediapipe.FaceGeometry.PerspectiveCamera::_parser
	MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC* ____parser_0;
	// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::VerticalFovDegreesDefaultValue
	float ___VerticalFovDegreesDefaultValue_4;
	// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::NearDefaultValue
	float ___NearDefaultValue_7;
	// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::FarDefaultValue
	float ___FarDefaultValue_10;
};

// Google.Protobuf.Collections.ProtobufEqualityComparers
struct ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09  : public RuntimeObject
{
};

struct ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
	// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.UnknownField> Google.Protobuf.UnknownFieldSet::fields
	RuntimeObject* ___fields_0;
	// System.Int32 Google.Protobuf.UnknownFieldSet::lastFieldNumber
	int32_t ___lastFieldNumber_1;
	// Google.Protobuf.UnknownField Google.Protobuf.UnknownFieldSet::lastField
	UnknownField_tC38F0EBBE48029F7B0BF156B6CCB6585176E91DD* ___lastField_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Mediapipe.FaceGeometry.WeightedLandmarkRef
struct WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Mediapipe.FaceGeometry.WeightedLandmarkRef::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Int32 Mediapipe.FaceGeometry.WeightedLandmarkRef::_hasBits0
	int32_t ____hasBits0_2;
	// System.UInt32 Mediapipe.FaceGeometry.WeightedLandmarkRef::landmarkId_
	uint32_t ___landmarkId__5;
	// System.Single Mediapipe.FaceGeometry.WeightedLandmarkRef::weight_
	float ___weight__8;
};

struct WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_StaticFields
{
	// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.WeightedLandmarkRef> Mediapipe.FaceGeometry.WeightedLandmarkRef::_parser
	MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* ____parser_0;
	// System.UInt32 Mediapipe.FaceGeometry.WeightedLandmarkRef::LandmarkIdDefaultValue
	uint32_t ___LandmarkIdDefaultValue_4;
	// System.Single Mediapipe.FaceGeometry.WeightedLandmarkRef::WeightDefaultValue
	float ___WeightDefaultValue_7;
};

// Mediapipe.FaceGeometry.Environment/<>c
struct U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF  : public RuntimeObject
{
};

struct U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_StaticFields
{
	// Mediapipe.FaceGeometry.Environment/<>c Mediapipe.FaceGeometry.Environment/<>c::<>9
	U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF* ___U3CU3E9_0;
};

// Mediapipe.FaceGeometry.FaceGeometry/<>c
struct U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9  : public RuntimeObject
{
};

struct U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_StaticFields
{
	// Mediapipe.FaceGeometry.FaceGeometry/<>c Mediapipe.FaceGeometry.FaceGeometry/<>c::<>9
	U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9* ___U3CU3E9_0;
};

// Mediapipe.FaceGeometry.GeometryPipelineMetadata/<>c
struct U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4  : public RuntimeObject
{
};

struct U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_StaticFields
{
	// Mediapipe.FaceGeometry.GeometryPipelineMetadata/<>c Mediapipe.FaceGeometry.GeometryPipelineMetadata/<>c::<>9
	U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4* ___U3CU3E9_0;
};

// Mediapipe.FaceGeometry.Mesh3d/<>c
struct U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A  : public RuntimeObject
{
};

struct U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_StaticFields
{
	// Mediapipe.FaceGeometry.Mesh3d/<>c Mediapipe.FaceGeometry.Mesh3d/<>c::<>9
	U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A* ___U3CU3E9_0;
};

// Mediapipe.FaceGeometry.Mesh3d/Types
struct Types_t66E328DAC5FBABD7C304751B18E248AB56BA3261  : public RuntimeObject
{
};

// Mediapipe.FaceGeometry.PerspectiveCamera/<>c
struct U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3  : public RuntimeObject
{
};

struct U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_StaticFields
{
	// Mediapipe.FaceGeometry.PerspectiveCamera/<>c Mediapipe.FaceGeometry.PerspectiveCamera/<>c::<>9
	U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3* ___U3CU3E9_0;
};

// Mediapipe.FaceGeometry.WeightedLandmarkRef/<>c
struct U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053  : public RuntimeObject
{
};

struct U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_StaticFields
{
	// Mediapipe.FaceGeometry.WeightedLandmarkRef/<>c Mediapipe.FaceGeometry.WeightedLandmarkRef/<>c::<>9
	U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053* ___U3CU3E9_0;
};

// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Environment>
struct MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B* ___factory_3;
};

// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.FaceGeometry>
struct MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7* ___factory_3;
};

// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata>
struct MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239* ___factory_3;
};

// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Mesh3d>
struct MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081* ___factory_3;
};

// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.PerspectiveCamera>
struct MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C* ___factory_3;
};

// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB* ___factory_3;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A 
{
	// System.Object System.Buffers.ReadOnlySequence`1::_startObject
	RuntimeObject* ____startObject_0;
	// System.Object System.Buffers.ReadOnlySequence`1::_endObject
	RuntimeObject* ____endObject_1;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_startInteger
	int32_t ____startInteger_2;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_endInteger
	int32_t ____endInteger_3;
};

struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A_StaticFields
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___Empty_4;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// System.Func`2<Google.Protobuf.IMessage,System.Boolean> Google.Protobuf.Reflection.MessageDescriptor::extensionSetIsInitialized
	Func_2_t64044CF5E0B6B699F3DA0D2B8DE3028365AA0FCB* ___extensionSetIsInitialized_7;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___U3CProtoU3Ek__BackingField_8;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_9;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CContainingTypeU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* ___U3CFieldsU3Ek__BackingField_12;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tB99C14F49DA3F67113593C9FD990613B6072E7A0* ___U3CExtensionsU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_15;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_16;
	// System.Int32 Google.Protobuf.Reflection.MessageDescriptor::<RealOneofCount>k__BackingField
	int32_t ___U3CRealOneofCountU3Ek__BackingField_17;
};

struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
};

// System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 
{
	// System.Object System.SequencePosition::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;
};
// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557 
{
	// System.Buffers.IBufferWriter`1<System.Byte> Google.Protobuf.WriteBufferHelper::bufferWriter
	RuntimeObject* ___bufferWriter_0;
	// Google.Protobuf.CodedOutputStream Google.Protobuf.WriteBufferHelper::codedOutputStream
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_pinvoke
{
	RuntimeObject* ___bufferWriter_0;
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};
// Native definition for COM marshalling of Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_com
{
	RuntimeObject* ___bufferWriter_0;
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_tB80448B9400D76E5CD8B95FB8075386796D552BB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tB80448B9400D76E5CD8B95FB8075386796D552BB__padding[64];
	};
};
#pragma pack(pop, tp)

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Buffers.ReadOnlySequence`1/Enumerator<System.Byte>
struct Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1/Enumerator::_sequence
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_0;
	// System.SequencePosition System.Buffers.ReadOnlySequence`1/Enumerator::_next
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ____next_1;
	// System.ReadOnlyMemory`1<T> System.Buffers.ReadOnlySequence`1/Enumerator::_currentMemory
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ____currentMemory_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t83AD72739FF7DB5BE9F3BE973891FFC1AB48D793  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t83AD72739FF7DB5BE9F3BE973891FFC1AB48D793_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::16322F9E59A01BCE155CD36A4785FC6BA26D0A7322A1944EA13AB4919017BEC7
	__StaticArrayInitTypeSizeU3D64_tB80448B9400D76E5CD8B95FB8075386796D552BB ___16322F9E59A01BCE155CD36A4785FC6BA26D0A7322A1944EA13AB4919017BEC7_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::AB5F9848584ABBC9381D96D17CF88BDF2A8F2B9F9933C2A961FE911E8083B5FA
	__StaticArrayInitTypeSizeU3D64_tB80448B9400D76E5CD8B95FB8075386796D552BB ___AB5F9848584ABBC9381D96D17CF88BDF2A8F2B9F9933C2A961FE911E8083B5FA_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780 
{
	// System.Int32 Google.Protobuf.WriterInternalState::limit
	int32_t ___limit_0;
	// System.Int32 Google.Protobuf.WriterInternalState::position
	int32_t ___position_1;
	// Google.Protobuf.WriteBufferHelper Google.Protobuf.WriterInternalState::writeBufferHelper
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557 ___writeBufferHelper_2;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_pinvoke
{
	int32_t ___limit_0;
	int32_t ___position_1;
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_pinvoke ___writeBufferHelper_2;
};
// Native definition for COM marshalling of Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_com
{
	int32_t ___limit_0;
	int32_t ___position_1;
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_com ___writeBufferHelper_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.CodedOutputStream::leaveOpen
	bool ___leaveOpen_6;
	// System.Byte[] Google.Protobuf.CodedOutputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_7;
	// Google.Protobuf.WriterInternalState Google.Protobuf.CodedOutputStream::state
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780 ___state_8;
	// System.IO.Stream Google.Protobuf.CodedOutputStream::output
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output_9;
};

struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_StaticFields
{
	// System.Int32 Google.Protobuf.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B 
{
	// System.Nullable`1<System.Int32> Google.Protobuf.SegmentedBufferHelper::totalLength
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	// System.Buffers.ReadOnlySequence`1/Enumerator<System.Byte> Google.Protobuf.SegmentedBufferHelper::readOnlySequenceEnumerator
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	// Google.Protobuf.CodedInputStream Google.Protobuf.SegmentedBufferHelper::codedInputStream
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_pinvoke
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
};
// Native definition for COM marshalling of Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_com
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`1<Mediapipe.FaceGeometry.Environment>
struct Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B  : public MulticastDelegate_t
{
};

// System.Func`1<Mediapipe.FaceGeometry.FaceGeometry>
struct Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7  : public MulticastDelegate_t
{
};

// System.Func`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata>
struct Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239  : public MulticastDelegate_t
{
};

// System.Func`1<Mediapipe.FaceGeometry.Mesh3d>
struct Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081  : public MulticastDelegate_t
{
};

// System.Func`1<Mediapipe.FaceGeometry.PerspectiveCamera>
struct Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C  : public MulticastDelegate_t
{
};

// System.Func`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>
struct Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB  : public MulticastDelegate_t
{
};

// Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C 
{
	// System.Int32 Google.Protobuf.ParserInternalState::bufferPos
	int32_t ___bufferPos_0;
	// System.Int32 Google.Protobuf.ParserInternalState::bufferSize
	int32_t ___bufferSize_1;
	// System.Int32 Google.Protobuf.ParserInternalState::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_2;
	// System.Int32 Google.Protobuf.ParserInternalState::currentLimit
	int32_t ___currentLimit_3;
	// System.Int32 Google.Protobuf.ParserInternalState::totalBytesRetired
	int32_t ___totalBytesRetired_4;
	// System.Int32 Google.Protobuf.ParserInternalState::recursionDepth
	int32_t ___recursionDepth_5;
	// Google.Protobuf.SegmentedBufferHelper Google.Protobuf.ParserInternalState::segmentedBufferHelper
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B ___segmentedBufferHelper_6;
	// System.UInt32 Google.Protobuf.ParserInternalState::lastTag
	uint32_t ___lastTag_7;
	// System.UInt32 Google.Protobuf.ParserInternalState::nextTag
	uint32_t ___nextTag_8;
	// System.Boolean Google.Protobuf.ParserInternalState::hasNextTag
	bool ___hasNextTag_9;
	// System.Int32 Google.Protobuf.ParserInternalState::sizeLimit
	int32_t ___sizeLimit_10;
	// System.Int32 Google.Protobuf.ParserInternalState::recursionLimit
	int32_t ___recursionLimit_11;
	// System.Boolean Google.Protobuf.ParserInternalState::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.ParserInternalState::<ExtensionRegistry>k__BackingField
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_pinvoke
{
	int32_t ___bufferPos_0;
	int32_t ___bufferSize_1;
	int32_t ___bufferSizeAfterLimit_2;
	int32_t ___currentLimit_3;
	int32_t ___totalBytesRetired_4;
	int32_t ___recursionDepth_5;
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_pinvoke ___segmentedBufferHelper_6;
	uint32_t ___lastTag_7;
	uint32_t ___nextTag_8;
	int32_t ___hasNextTag_9;
	int32_t ___sizeLimit_10;
	int32_t ___recursionLimit_11;
	int32_t ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};
// Native definition for COM marshalling of Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_com
{
	int32_t ___bufferPos_0;
	int32_t ___bufferSize_1;
	int32_t ___bufferSizeAfterLimit_2;
	int32_t ___currentLimit_3;
	int32_t ___totalBytesRetired_4;
	int32_t ___recursionDepth_5;
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_com ___segmentedBufferHelper_6;
	uint32_t ___lastTag_7;
	uint32_t ___nextTag_8;
	int32_t ___hasNextTag_9;
	int32_t ___sizeLimit_10;
	int32_t ___recursionLimit_11;
	int32_t ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};

// Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D 
{
	// System.Span`1<System.Byte> Google.Protobuf.WriteContext::buffer
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	// Google.Protobuf.WriterInternalState Google.Protobuf.WriteContext::state
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780 ___state_1;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D_marshaled_pinvoke
{
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_pinvoke ___state_1;
};
// Native definition for COM marshalling of Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D_marshaled_com
{
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_com ___state_1;
};

// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.CodedInputStream::leaveOpen
	bool ___leaveOpen_0;
	// System.Byte[] Google.Protobuf.CodedInputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_1;
	// System.IO.Stream Google.Protobuf.CodedInputStream::input
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input_2;
	// Google.Protobuf.ParserInternalState Google.Protobuf.CodedInputStream::state
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C ___state_3;
};

// Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF 
{
	// System.ReadOnlySpan`1<System.Byte> Google.Protobuf.ParseContext::buffer
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	// Google.Protobuf.ParserInternalState Google.Protobuf.ParseContext::state
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C ___state_3;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF_marshaled_pinvoke
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_pinvoke ___state_3;
};
// Native definition for COM marshalling of Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF_marshaled_com
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_com ___state_3;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F  : public RuntimeArray
{
	ALIGN_FIELD (8) FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* m_Items[1];

	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89  : public RuntimeArray
{
	ALIGN_FIELD (8) GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* m_Items[1];

	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66  : public RuntimeArray
{
	ALIGN_FIELD (8) Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* m_Items[1];

	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Extension_t6E2FC60A8DDFF4D12FA92724730D9E893E680E7A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.MessageParser`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared (MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___factory0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1__ctor_mEC741EF2D79E8E634E5F906779782076EB8E1097_gshared (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<T> Google.Protobuf.Collections.RepeatedField`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* RepeatedField_1_Clone_m2A6AA5A5830B15E07AE6D941B2A7D6D7E6EF463A_gshared (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<System.Object>::Equals(Google.Protobuf.Collections.RepeatedField`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RepeatedField_1_Equals_mC9362B802F8950AAF04C724062FCA1142BC1E788_gshared (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* ___other0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::WriteTo(Google.Protobuf.WriteContext&,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_WriteTo_mA9F069089C36243547FEE60319217DB57561FF2F_gshared (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___ctx0, FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* ___codec1, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Object>::CalculateSize(Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RepeatedField_1_CalculateSize_mCF919BDB4B90FD6AE9B7528721B42882566BF3F2_gshared (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* ___codec0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::Add(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_Add_m070A57CEAE835B761C7F210A39A86BEB84661063_gshared (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, RuntimeObject* ___values0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::AddEntriesFrom(Google.Protobuf.ParseContext&,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_AddEntriesFrom_mD9AEAC5A373A976DB0AE4498BAC21AF332740196_gshared (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx0, FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* ___codec1, const RuntimeMethod* method) ;
// Google.Protobuf.FieldCodec`1<T> Google.Protobuf.FieldCodec::ForMessage<System.Object>(System.UInt32,Google.Protobuf.MessageParser`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* FieldCodec_ForMessage_TisRuntimeObject_mBD1C61B94DF96267D57938C8C9B1E2F251A42F8A_gshared (uint32_t ___tag0, MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F* ___parser1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1__ctor_mBFDE464D22CBD6D73802E1327ADFEB73BBE358B4_gshared (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1__ctor_m41ABDAFB51A18022F7F4DA6B9684907740FB8147_gshared (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<T> Google.Protobuf.Collections.RepeatedField`1<System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* RepeatedField_1_Clone_m91CC8FF65D1709887661C714B0D6FCFBCB981C31_gshared (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<T> Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* RepeatedField_1_Clone_m9F21FF98196C413FE301701E69C3D0309986CF1D_gshared (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<System.Single>::Equals(Google.Protobuf.Collections.RepeatedField`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RepeatedField_1_Equals_m7C23DEC7DDF6DB695D60FECE17ACBD35D4490F45_gshared (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* ___other0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::Equals(Google.Protobuf.Collections.RepeatedField`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RepeatedField_1_Equals_m78D7CE1E96A6595DB8738EB0184381940A33B666_gshared (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* ___other0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Single>::WriteTo(Google.Protobuf.WriteContext&,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_WriteTo_m0BDC341F29C484651ACA13B5D299C352B1D8E91F_gshared (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___ctx0, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* ___codec1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::WriteTo(Google.Protobuf.WriteContext&,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_WriteTo_m07B1B741FC742F54FB54EB8D0612094488F2D84B_gshared (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___ctx0, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* ___codec1, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Single>::CalculateSize(Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RepeatedField_1_CalculateSize_mD3C3299755C5AF6826643EC7F75F1E457CA7766C_gshared (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* ___codec0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::CalculateSize(Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RepeatedField_1_CalculateSize_m0BF270F733569FE095C1790E9943BC80109E60DE_gshared (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* ___codec0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Single>::Add(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_Add_mAE8E425E3F2EE80F7C1116A263136606BE22CDC3_gshared (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, RuntimeObject* ___values0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::Add(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_Add_m4496DCFCF8EAEE27EEE89AB5865D26C274EA979E_gshared (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, RuntimeObject* ___values0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Single>::AddEntriesFrom(Google.Protobuf.ParseContext&,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_AddEntriesFrom_mDFA081024A40FB93F2B669497FEE9505F2E9CC08_gshared (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx0, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* ___codec1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::AddEntriesFrom(Google.Protobuf.ParseContext&,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_AddEntriesFrom_mC1DDF16C77F4578DCF0A7DF6116AD7351DE6303A_gshared (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx0, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* ___codec1, const RuntimeMethod* method) ;

// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.EnvironmentReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* EnvironmentReflection_get_Descriptor_m6DFD821C61921FFC4039EAE5BD575225B90AEABC (const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.PerspectiveCamera::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* PerspectiveCamera_get_Descriptor_m2870D33B187A92492E605E550ABEE7097454E926 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera__ctor_m5083B610F85E8646EBE211114A109C51EA2E8445 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) ;
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::Clone(Google.Protobuf.UnknownFieldSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723 (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ___other0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::.ctor(Mediapipe.FaceGeometry.PerspectiveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera__ctor_mDA70E1F675317E9788143190BA66682E35A963ED (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___other0, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::Equals(Mediapipe.FaceGeometry.PerspectiveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_Equals_m4A59C98625A0D3A9C1AA515A5E6D1818E405BA47 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___other0, const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline (const RuntimeMethod* method) ;
// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::get_VerticalFovDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerspectiveCamera_get_VerticalFovDegrees_mBFAA125DF2C64BAAF93F84C24FE0F7DD4B8D0D43 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) ;
// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::get_Near()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerspectiveCamera_get_Near_mA72F2B5C2E0FAEA088B0106FB197B7A314119B05 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) ;
// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::get_Far()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerspectiveCamera_get_Far_m92B0C423C1A826DCC625CA09BD6094F8EEA4476D (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::get_HasVerticalFovDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_get_HasVerticalFovDegrees_m407C03B4E9B8CADB6CB09254C442D250E7393201 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::get_HasNear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_get_HasNear_m5D16F4DD0DA9DF18375C6F5CEED45B1DD7B29A80 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::get_HasFar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_get_HasFar_m01D486507B58FB3589BBE387EC426DAFDFC84C45 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.JsonFormatter::ToDiagnosticString(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteRawMessage(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteRawTag(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, uint8_t ___b10, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteFloat_m21105D66CB04BD793C0C21F2C30B1EC1912029C3 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.UnknownFieldSet::WriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476 (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___ctx0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.UnknownFieldSet::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1 (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* __this, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::set_VerticalFovDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_set_VerticalFovDegrees_mD04A7AB784CEC7DF1AE8F54657BD87D3EA23BFC2 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::set_Near(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_set_Near_m65C3BAA5E9C3DF24F4C014F0B00D61CC3587D133 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::set_Far(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_set_Far_m6DE384FB317FE30D57FD5BEE32A9B39C48E840A4 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, float ___value0, const RuntimeMethod* method) ;
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::MergeFrom(Google.Protobuf.UnknownFieldSet,Google.Protobuf.UnknownFieldSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2 (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ___unknownFields0, UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ___other1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedInputStream::ReadRawMessage(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::MergeFieldFrom(Google.Protobuf.UnknownFieldSet,Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F (UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ___unknownFields0, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx1, const RuntimeMethod* method) ;
// System.Single Google.Protobuf.ParseContext::ReadFloat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ParseContext_ReadFloat_mCED59543DF5DE0A97E3CAF2075DCD3DD4DC7CDD8_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParseContext::ReadTag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Mediapipe.FaceGeometry.PerspectiveCamera>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m544FC2427D33FC1CD97023C66A44AF0150A4B9F3 (Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.PerspectiveCamera>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m7580E715C6BF542C9E6C3CB673F8C9B728B4C476 (MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC* __this, Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC*, Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4BDFE9D815105BFA137831D165FB52D49374FC62 (U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.Environment::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Environment_get_Descriptor_m1AD042C3C7378CD6D4292530C2033F237307405B (const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.Environment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment__ctor_m9B6A4AB736CB65879C4DD7D669297C0B4466A8B0 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.PerspectiveCamera Mediapipe.FaceGeometry.PerspectiveCamera::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* PerspectiveCamera_Clone_m227027310624DAC37D06ADEEE838EAC1CBB78043 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.Environment::.ctor(Mediapipe.FaceGeometry.Environment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment__ctor_m8436F46D97269F9CDAFEA54BD97557080EE3A807 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* ___other0, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.Environment::Equals(Mediapipe.FaceGeometry.Environment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Environment_Equals_mCA608E7B5854726DEE0929AC6F21356AE3990132 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* ___other0, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.OriginPointLocation Mediapipe.FaceGeometry.Environment::get_OriginPointLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_OriginPointLocation_m9EE211206612ADB33E20B7AD385869D981AA4F03 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.PerspectiveCamera Mediapipe.FaceGeometry.Environment::get_PerspectiveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.Environment::get_HasOriginPointLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Environment_get_HasOriginPointLocation_mC0A2D0366C78185BB509470AAB79BBAE466598FB (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteEnum_m9D943000AEB1B4AF9DA9BF3E506F1CD1A79C623F (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteMessage(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteMessage_m2F77C0E66BE30E7D27F74713F4C2967F9CB67575 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeEnumSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeMessageSize(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeMessageSize_m96CA0965A80BAE333592894886B82CF0F5B357C2 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.Environment::set_OriginPointLocation(Mediapipe.FaceGeometry.OriginPointLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_set_OriginPointLocation_m84BE66592DCA6285F3AE3A2222378215A87FF226 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.Environment::set_PerspectiveCamera(Mediapipe.FaceGeometry.PerspectiveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_set_PerspectiveCamera_m0C44CB17D925B96688ACC0957334E689F631EB4B (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::MergeFrom(Mediapipe.FaceGeometry.PerspectiveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_MergeFrom_m4859B2E9B615B4CC75CD3697C7BB758586107538 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___other0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.ParseContext::ReadEnum()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.ParseContext::ReadMessage(Google.Protobuf.IMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Func`1<Mediapipe.FaceGeometry.Environment>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m4DB41D57D8FB3367FAA8EA7A34F4098035355B00 (Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Environment>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_mFE9613E5D557C1A99EB952B90BB3AAFA3B3231BB (MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2* __this, Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2*, Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Mediapipe.FaceGeometry.Environment/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m456D775FDAA5C14F865DDB5EA42D259E2A8C914B (U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Mediapipe.MatrixDataReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* MatrixDataReflection_get_Descriptor_m344D07633FC8F054025E9D2BAD4D2396337DF3CA (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.Mesh3DReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* Mesh3DReflection_get_Descriptor_m446CB05BFADBC6755D03CD431D9B1A218458211A (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.FaceGeometry> Mediapipe.FaceGeometry.FaceGeometry::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* FaceGeometry_get_Parser_m06EE36B72EA9BBA0F277EA9BFB5612FC8915A950 (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___extensions5, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes6, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Extension[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m6C6F4A657670674B74F3AF88AA06251E4C8DD022 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66* ___extensions1, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes2, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::FromGeneratedCode(System.Byte[],Google.Protobuf.Reflection.FileDescriptor[],Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___descriptorData0, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies1, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo2, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.FaceGeometryReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FaceGeometryReflection_get_Descriptor_m26EC99853485E53441123CC61E7CE59905DF6369 (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.FaceGeometry::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FaceGeometry_get_Descriptor_m825D262D1A9CCD933C577F9C3C814182209D975C (const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.FaceGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry__ctor_m410FAA2CF9C74E622F4413D463562E878F5DFF9A (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.Mesh3d::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* Mesh3d_Clone_m4F343E3E9B9AB2D43A95F3A8565380F8179A22E1 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) ;
// Mediapipe.MatrixData Mediapipe.MatrixData::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* MatrixData_Clone_mB2E95E948CEA61E4589DC49EEC3DC2CB6FD707C2 (MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* __this, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.FaceGeometry::.ctor(Mediapipe.FaceGeometry.FaceGeometry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry__ctor_mC77FEB546FE612044AB48ED4D3F1AD0976671DE6 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* ___other0, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.FaceGeometry::Equals(Mediapipe.FaceGeometry.FaceGeometry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceGeometry_Equals_m60CC7958F225AAA24655092656C97A9769D03465 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* ___other0, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.FaceGeometry::get_Mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) ;
// Mediapipe.MatrixData Mediapipe.FaceGeometry.FaceGeometry::get_PoseTransformMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.Mesh3d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d__ctor_m299396DE2810219E16F96B4F86D7FE29021A7A13 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.FaceGeometry::set_Mesh(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_set_Mesh_m2732ADEB0439CD5160FC3BFF6D81B4F26266AC07 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.Mesh3d::MergeFrom(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_MergeFrom_mCE1540AA9756A990AEB6F546761A1316662ADE6C (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___other0, const RuntimeMethod* method) ;
// System.Void Mediapipe.MatrixData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixData__ctor_m33551F79D9BA0DDAE56FB97595277A2709EC0CF5 (MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* __this, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.FaceGeometry::set_PoseTransformMatrix(Mediapipe.MatrixData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_set_PoseTransformMatrix_m314F58E8CAB7EB9269F3F5FD5EF9065BEB1B6E56 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.MatrixData::MergeFrom(Mediapipe.MatrixData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixData_MergeFrom_mA3627EB7026C6226DA57148521E3A2CB8BB4C123 (MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* __this, MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* ___other0, const RuntimeMethod* method) ;
// System.Void System.Func`1<Mediapipe.FaceGeometry.FaceGeometry>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mA6DB2716D907C54FE614370F1D6574F5BE4A1007 (Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.FaceGeometry>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m949950F36274AC14476249A9587CA946918DBA41 (MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* __this, Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716*, Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m712BE22A9279EA9B32877771E3827D1A5B601D4E (U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9* __this, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.WeightedLandmarkRef> Mediapipe.FaceGeometry.WeightedLandmarkRef::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* WeightedLandmarkRef_get_Parser_mB1E47745E0449C2E9A983F3F3294ED14B742E84C (const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata> Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* GeometryPipelineMetadata_get_Parser_m31C981FBC62922D5919CB89622EF6BFC27E71087 (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GeometryPipelineMetadataReflection_get_Descriptor_m7DAB52F82FE4A6C51EFE2B536BF4987FA5228EFE (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.WeightedLandmarkRef::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* WeightedLandmarkRef_get_Descriptor_m3B51972CEF342165E769BE0F8AE9916AED83E0AD (const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef__ctor_m4CAD1F585C41AE97691771C0310BFFAB65F271D2 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::.ctor(Mediapipe.FaceGeometry.WeightedLandmarkRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef__ctor_m44FF573D41AF2674AEDBF17BBB6BF3E71C3037AE (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* ___other0, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.WeightedLandmarkRef::Equals(Mediapipe.FaceGeometry.WeightedLandmarkRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeightedLandmarkRef_Equals_m0DADBA825A9F45D6C95C9F507E2199FBBE3751C3 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* ___other0, const RuntimeMethod* method) ;
// System.UInt32 Mediapipe.FaceGeometry.WeightedLandmarkRef::get_LandmarkId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WeightedLandmarkRef_get_LandmarkId_m9869C82522A519D941F9F49DB2B308F11A71C13F (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) ;
// System.Single Mediapipe.FaceGeometry.WeightedLandmarkRef::get_Weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeightedLandmarkRef_get_Weight_m3A6720EAA4E1F11F51EDA7B3C0BBFADC4C1D07F7 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.WeightedLandmarkRef::get_HasLandmarkId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeightedLandmarkRef_get_HasLandmarkId_m8CDB286D577B1C7D472129B2E91A1C4F9D337D23 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.WeightedLandmarkRef::get_HasWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeightedLandmarkRef_get_HasWeight_m8995A438CE86C624F1968B0AC48781FE101555BD (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteUInt32_m8FB1F179695D99942D1F4156A3F2306A99CBA9B3 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeUInt32Size(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeUInt32Size_m1366404BD8A221D39D2A1B86D43384700DACC81C (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::set_LandmarkId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_set_LandmarkId_m332F092357CEF9598B302D297F6FCB89406387C5 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::set_Weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_set_Weight_m8B6ACE76BFC91C4A0E2B1E73F15F560A0802A0AD (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, float ___value0, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParseContext::ReadUInt32()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ParseContext_ReadUInt32_m290E926290AD8F726D2E5E7E681F4F9316D0AC8C_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m0F2C4F7D8AB44EF021D1B19E717BFFA513F4B56F (Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m1CB7D2E5F94E6486E2252DA47F84A6F5765DFAB1 (MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* __this, Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9*, Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB0388380C3D8BB78B3952C9798DB98111932F232 (U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* GeometryPipelineMetadata_get_Descriptor_mEF7C584032D36AF7350D80DD57A529F0CAEE35C8 (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::.ctor()
inline void RepeatedField_1__ctor_m6768ACA53064577BED72BB90964A8EB12BE397E8 (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* __this, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*, const RuntimeMethod*))RepeatedField_1__ctor_mEC741EF2D79E8E634E5F906779782076EB8E1097_gshared)(__this, method);
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata__ctor_m9B3AB179A9E74D3994188BAE58A5D221078FB878 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<T> Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::Clone()
inline RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* RepeatedField_1_Clone_m3560CCA58621F97DFB1BE9603C8D1FECFF084B1E (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* __this, const RuntimeMethod* method)
{
	return ((  RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* (*) (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*, const RuntimeMethod*))RepeatedField_1_Clone_m2A6AA5A5830B15E07AE6D941B2A7D6D7E6EF463A_gshared)(__this, method);
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::.ctor(Mediapipe.FaceGeometry.GeometryPipelineMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata__ctor_m239F8875D74D4B2C1E8629E02E153FAA4EDAAB40 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* ___other0, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.GeometryPipelineMetadata::Equals(Mediapipe.FaceGeometry.GeometryPipelineMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryPipelineMetadata_Equals_mD92A5E261D1EC35FED880F34F60F639B43C5D911 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* ___other0, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.InputSource Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_InputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeometryPipelineMetadata_get_InputSource_m830527A51062E42CC029323FCB5378B6E89D0B5D (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_CanonicalMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::Equals(Google.Protobuf.Collections.RepeatedField`1<T>)
inline bool RepeatedField_1_Equals_mB8B9CDF845A83C576237D0DE9BD2740C98F6B603 (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* __this, RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*, RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*, const RuntimeMethod*))RepeatedField_1_Equals_mC9362B802F8950AAF04C724062FCA1142BC1E788_gshared)(__this, ___other0, method);
}
// System.Boolean Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_HasInputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryPipelineMetadata_get_HasInputSource_m4575A458AFAA8463BD3984CC1A9620EDEF1E7481 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::WriteTo(Google.Protobuf.WriteContext&,Google.Protobuf.FieldCodec`1<T>)
inline void RepeatedField_1_WriteTo_mF302CC1B25D02E6C3565275393910D763B89F801 (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___ctx0, FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D*, FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D*, const RuntimeMethod*))RepeatedField_1_WriteTo_mA9F069089C36243547FEE60319217DB57561FF2F_gshared)(__this, ___ctx0, ___codec1, method);
}
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::CalculateSize(Google.Protobuf.FieldCodec`1<T>)
inline int32_t RepeatedField_1_CalculateSize_m9670D453530A3D1CF5CF3FB229456AFA4555CDFA (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* __this, FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*, FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D*, const RuntimeMethod*))RepeatedField_1_CalculateSize_mCF919BDB4B90FD6AE9B7528721B42882566BF3F2_gshared)(__this, ___codec0, method);
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::set_InputSource(Mediapipe.FaceGeometry.InputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_set_InputSource_mE35BDECCFED965241B4FB8C5B53E6797A80429C1 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::set_CanonicalMesh(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_set_CanonicalMesh_mAB25872F5E95BC92DECF015872527449BC331961 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::Add(System.Collections.Generic.IEnumerable`1<T>)
inline void RepeatedField_1_Add_m4CB431DF2CD79B75C26BC1728816BB4C62674B6C (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*, RuntimeObject*, const RuntimeMethod*))RepeatedField_1_Add_m070A57CEAE835B761C7F210A39A86BEB84661063_gshared)(__this, ___values0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef>::AddEntriesFrom(Google.Protobuf.ParseContext&,Google.Protobuf.FieldCodec`1<T>)
inline void RepeatedField_1_AddEntriesFrom_mD27169EBD59C2D9003813689BE3B6215AFE7D320 (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx0, FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF*, FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D*, const RuntimeMethod*))RepeatedField_1_AddEntriesFrom_mD9AEAC5A373A976DB0AE4498BAC21AF332740196_gshared)(__this, ___ctx0, ___codec1, method);
}
// System.Void System.Func`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m700913A927531185C34183BA9FD1AB9CAE814DB5 (Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_mD623BCE960047B4E8BED2880653416B6708F7849 (MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* __this, Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149*, Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.FieldCodec`1<T> Google.Protobuf.FieldCodec::ForMessage<Mediapipe.FaceGeometry.WeightedLandmarkRef>(System.UInt32,Google.Protobuf.MessageParser`1<T>)
inline FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* FieldCodec_ForMessage_TisWeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_m9F2CE7B75F20C4C4DAD605E42C70D3455A479FBC (uint32_t ___tag0, MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* ___parser1, const RuntimeMethod* method)
{
	return ((  FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* (*) (uint32_t, MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9*, const RuntimeMethod*))FieldCodec_ForMessage_TisRuntimeObject_mBD1C61B94DF96267D57938C8C9B1E2F251A42F8A_gshared)(___tag0, ___parser1, method);
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m507D1487E25863BCF77D1B878E0C18AB0FC1C277 (U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4* __this, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Mesh3d> Mediapipe.FaceGeometry.Mesh3d::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* Mesh3d_get_Parser_m0B174A03624A2F88F101706DA4603076E69BFBDA (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.Mesh3d::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Mesh3d_get_Descriptor_mAFFDC0023F6644468B824AB4B39A359631B5529A (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Single>::.ctor()
inline void RepeatedField_1__ctor_mBFDE464D22CBD6D73802E1327ADFEB73BBE358B4 (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*, const RuntimeMethod*))RepeatedField_1__ctor_mBFDE464D22CBD6D73802E1327ADFEB73BBE358B4_gshared)(__this, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::.ctor()
inline void RepeatedField_1__ctor_m41ABDAFB51A18022F7F4DA6B9684907740FB8147 (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*, const RuntimeMethod*))RepeatedField_1__ctor_m41ABDAFB51A18022F7F4DA6B9684907740FB8147_gshared)(__this, method);
}
// Google.Protobuf.Collections.RepeatedField`1<T> Google.Protobuf.Collections.RepeatedField`1<System.Single>::Clone()
inline RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* RepeatedField_1_Clone_m91CC8FF65D1709887661C714B0D6FCFBCB981C31 (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, const RuntimeMethod* method)
{
	return ((  RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* (*) (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*, const RuntimeMethod*))RepeatedField_1_Clone_m91CC8FF65D1709887661C714B0D6FCFBCB981C31_gshared)(__this, method);
}
// Google.Protobuf.Collections.RepeatedField`1<T> Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::Clone()
inline RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* RepeatedField_1_Clone_m9F21FF98196C413FE301701E69C3D0309986CF1D (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, const RuntimeMethod* method)
{
	return ((  RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* (*) (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*, const RuntimeMethod*))RepeatedField_1_Clone_m9F21FF98196C413FE301701E69C3D0309986CF1D_gshared)(__this, method);
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::.ctor(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d__ctor_m44F1EA920E48AEC4EF01801B1D9BAE352A72F268 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___other0, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.Mesh3d::Equals(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh3d_Equals_mEE87AD38434BEE49D262673710CFF1472CDD49DA (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___other0, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.Mesh3d/Types/VertexType Mediapipe.FaceGeometry.Mesh3d::get_VertexType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh3d_get_VertexType_m56A6961D1160AF7004DC2F42E0342CEA3E3376B6 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) ;
// Mediapipe.FaceGeometry.Mesh3d/Types/PrimitiveType Mediapipe.FaceGeometry.Mesh3d::get_PrimitiveType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh3d_get_PrimitiveType_mC26AF7ABA50F8DFFB0E398B6BC05DE18978B447B (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<System.Single>::Equals(Google.Protobuf.Collections.RepeatedField`1<T>)
inline bool RepeatedField_1_Equals_m7C23DEC7DDF6DB695D60FECE17ACBD35D4490F45 (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*, RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*, const RuntimeMethod*))RepeatedField_1_Equals_m7C23DEC7DDF6DB695D60FECE17ACBD35D4490F45_gshared)(__this, ___other0, method);
}
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::Equals(Google.Protobuf.Collections.RepeatedField`1<T>)
inline bool RepeatedField_1_Equals_m78D7CE1E96A6595DB8738EB0184381940A33B666 (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*, RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*, const RuntimeMethod*))RepeatedField_1_Equals_m78D7CE1E96A6595DB8738EB0184381940A33B666_gshared)(__this, ___other0, method);
}
// System.Boolean Mediapipe.FaceGeometry.Mesh3d::get_HasVertexType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh3d_get_HasVertexType_m64AABD40F9C7D8035A254350A1449845B73330C9 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) ;
// System.Boolean Mediapipe.FaceGeometry.Mesh3d::get_HasPrimitiveType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh3d_get_HasPrimitiveType_m063950F96DE547F213127358EF65218F2DA14945 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Single>::WriteTo(Google.Protobuf.WriteContext&,Google.Protobuf.FieldCodec`1<T>)
inline void RepeatedField_1_WriteTo_m0BDC341F29C484651ACA13B5D299C352B1D8E91F (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___ctx0, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D*, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708*, const RuntimeMethod*))RepeatedField_1_WriteTo_m0BDC341F29C484651ACA13B5D299C352B1D8E91F_gshared)(__this, ___ctx0, ___codec1, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::WriteTo(Google.Protobuf.WriteContext&,Google.Protobuf.FieldCodec`1<T>)
inline void RepeatedField_1_WriteTo_m07B1B741FC742F54FB54EB8D0612094488F2D84B (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___ctx0, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D*, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C*, const RuntimeMethod*))RepeatedField_1_WriteTo_m07B1B741FC742F54FB54EB8D0612094488F2D84B_gshared)(__this, ___ctx0, ___codec1, method);
}
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Single>::CalculateSize(Google.Protobuf.FieldCodec`1<T>)
inline int32_t RepeatedField_1_CalculateSize_mD3C3299755C5AF6826643EC7F75F1E457CA7766C (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708*, const RuntimeMethod*))RepeatedField_1_CalculateSize_mD3C3299755C5AF6826643EC7F75F1E457CA7766C_gshared)(__this, ___codec0, method);
}
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::CalculateSize(Google.Protobuf.FieldCodec`1<T>)
inline int32_t RepeatedField_1_CalculateSize_m0BF270F733569FE095C1790E9943BC80109E60DE (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C*, const RuntimeMethod*))RepeatedField_1_CalculateSize_m0BF270F733569FE095C1790E9943BC80109E60DE_gshared)(__this, ___codec0, method);
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::set_VertexType(Mediapipe.FaceGeometry.Mesh3d/Types/VertexType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_set_VertexType_m6194CC3ADE2D1F632F7A3D606C7BFE81DC2BC0C5 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.Mesh3d::set_PrimitiveType(Mediapipe.FaceGeometry.Mesh3d/Types/PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_set_PrimitiveType_m1E19530BAC04E79F8ED2CE7F87F8AB70A8AAF44C (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Single>::Add(System.Collections.Generic.IEnumerable`1<T>)
inline void RepeatedField_1_Add_mAE8E425E3F2EE80F7C1116A263136606BE22CDC3 (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*, RuntimeObject*, const RuntimeMethod*))RepeatedField_1_Add_mAE8E425E3F2EE80F7C1116A263136606BE22CDC3_gshared)(__this, ___values0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::Add(System.Collections.Generic.IEnumerable`1<T>)
inline void RepeatedField_1_Add_m4496DCFCF8EAEE27EEE89AB5865D26C274EA979E (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*, RuntimeObject*, const RuntimeMethod*))RepeatedField_1_Add_m4496DCFCF8EAEE27EEE89AB5865D26C274EA979E_gshared)(__this, ___values0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Single>::AddEntriesFrom(Google.Protobuf.ParseContext&,Google.Protobuf.FieldCodec`1<T>)
inline void RepeatedField_1_AddEntriesFrom_mDFA081024A40FB93F2B669497FEE9505F2E9CC08 (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx0, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF*, FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708*, const RuntimeMethod*))RepeatedField_1_AddEntriesFrom_mDFA081024A40FB93F2B669497FEE9505F2E9CC08_gshared)(__this, ___ctx0, ___codec1, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.UInt32>::AddEntriesFrom(Google.Protobuf.ParseContext&,Google.Protobuf.FieldCodec`1<T>)
inline void RepeatedField_1_AddEntriesFrom_mC1DDF16C77F4578DCF0A7DF6116AD7351DE6303A (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx0, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF*, FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C*, const RuntimeMethod*))RepeatedField_1_AddEntriesFrom_mC1DDF16C77F4578DCF0A7DF6116AD7351DE6303A_gshared)(__this, ___ctx0, ___codec1, method);
}
// System.Void System.Func`1<Mediapipe.FaceGeometry.Mesh3d>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1D00DD55134501768CC86611B99E9F60B13D5E8F (Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Mesh3d>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_mD2CDF9BEF38146C98F7401EACDF804095FB5225F (MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* __this, Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE*, Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.FieldCodec`1<System.Single> Google.Protobuf.FieldCodec::ForFloat(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* FieldCodec_ForFloat_m657746B5F917B34A5133683C015184356B5A245D (uint32_t ___tag0, const RuntimeMethod* method) ;
// Google.Protobuf.FieldCodec`1<System.UInt32> Google.Protobuf.FieldCodec::ForUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* FieldCodec_ForUInt32_mE07403CF071DE5A608B7FE131A87D730C918C769 (uint32_t ___tag0, const RuntimeMethod* method) ;
// System.Void Mediapipe.FaceGeometry.Mesh3d/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7A5CAA499A040EF39071ECDC7CE3A7689CBB783 (U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A* __this, const RuntimeMethod* method) ;
// System.Single Google.Protobuf.ParsingPrimitives::ParseFloat(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParsingPrimitives_ParseFloat_mFA9A65043DB6BF390D6E72A41BB9F4463C749DE4 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParsingPrimitives::ParseTag(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ParsingPrimitives_ParseTag_mC3CDF9E540F71AEAB45BC4BAFAE69C8FB097DB64 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParsingPrimitives::ParseRawVarint32(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ParsingPrimitives_ParseRawVarint32_m12E76CAA773AAED8FDAF192EBFAF830E615798BF (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___buffer0, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___state1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.ParsingPrimitivesMessages::ReadMessage(Google.Protobuf.ParseContext&,Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingPrimitivesMessages_ReadMessage_mB316DADE7E701D2EA0E45CDB6100F4E3654C49EF (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___ctx0, RuntimeObject* ___message1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.PerspectiveCamera> Mediapipe.FaceGeometry.PerspectiveCamera::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC* PerspectiveCamera_get_Parser_m444887D987E5C3AAE103B6D105F589E4C0B584E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC* V_0 = NULL;
	{
		// public static pb::MessageParser<PerspectiveCamera> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC* L_0 = ((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->____parser_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// public static pb::MessageParser<PerspectiveCamera> Parser { get { return _parser; } }
		MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.PerspectiveCamera::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* PerspectiveCamera_get_Descriptor_m2870D33B187A92492E605E550ABEE7097454E926 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentReflection_t35B2B087C4DD67B24E9AEAFD70276DBEC26B41BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return global::Mediapipe.FaceGeometry.EnvironmentReflection.Descriptor.MessageTypes[0]; }
		il2cpp_codegen_runtime_class_init_inline(EnvironmentReflection_t35B2B087C4DD67B24E9AEAFD70276DBEC26B41BB_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = EnvironmentReflection_get_Descriptor_m6DFD821C61921FFC4039EAE5BD575225B90AEABC(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 0);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// get { return global::Mediapipe.FaceGeometry.EnvironmentReflection.Descriptor.MessageTypes[0]; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.PerspectiveCamera::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* PerspectiveCamera_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m0324611ADF6BFD3B6C5F32CEF4CFB6AC61CAB08A (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = PerspectiveCamera_get_Descriptor_m2870D33B187A92492E605E550ABEE7097454E926(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Descriptor; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera__ctor_m5083B610F85E8646EBE211114A109C51EA2E8445 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	{
		// public PerspectiveCamera() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::.ctor(Mediapipe.FaceGeometry.PerspectiveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera__ctor_mDA70E1F675317E9788143190BA66682E35A963ED (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___other0, const RuntimeMethod* method) 
{
	{
		// public PerspectiveCamera(PerspectiveCamera other) : this() {
		PerspectiveCamera__ctor_m5083B610F85E8646EBE211114A109C51EA2E8445(__this, NULL);
		// _hasBits0 = other._hasBits0;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->____hasBits0_2;
		__this->____hasBits0_2 = L_1;
		// verticalFovDegrees_ = other.verticalFovDegrees_;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_2 = ___other0;
		NullCheck(L_2);
		float L_3 = L_2->___verticalFovDegrees__5;
		__this->___verticalFovDegrees__5 = L_3;
		// near_ = other.near_;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_4 = ___other0;
		NullCheck(L_4);
		float L_5 = L_4->___near__8;
		__this->___near__8 = L_5;
		// far_ = other.far_;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_6 = ___other0;
		NullCheck(L_6);
		float L_7 = L_6->___far__11;
		__this->___far__11 = L_7;
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_8 = ___other0;
		NullCheck(L_8);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9 = L_8->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10;
		L_10 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_9, NULL);
		__this->____unknownFields_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_10);
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.PerspectiveCamera Mediapipe.FaceGeometry.PerspectiveCamera::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* PerspectiveCamera_Clone_m227027310624DAC37D06ADEEE838EAC1CBB78043 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* V_0 = NULL;
	{
		// return new PerspectiveCamera(this);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_0 = (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)il2cpp_codegen_object_new(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PerspectiveCamera__ctor_mDA70E1F675317E9788143190BA66682E35A963ED(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_1 = V_0;
		return L_1;
	}
}
// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::get_VerticalFovDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerspectiveCamera_get_VerticalFovDegrees_mBFAA125DF2C64BAAF93F84C24FE0F7DD4B8D0D43 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// get { if ((_hasBits0 & 1) != 0) { return verticalFovDegrees_; } else { return VerticalFovDegreesDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 1) != 0) { return verticalFovDegrees_; } else { return VerticalFovDegreesDefaultValue; } }
		float L_2 = __this->___verticalFovDegrees__5;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 1) != 0) { return verticalFovDegrees_; } else { return VerticalFovDegreesDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		float L_3 = ((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->___VerticalFovDegreesDefaultValue_4;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 1) != 0) { return verticalFovDegrees_; } else { return VerticalFovDegreesDefaultValue; } }
		float L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::set_VerticalFovDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_set_VerticalFovDegrees_mD04A7AB784CEC7DF1AE8F54657BD87D3EA23BFC2 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|1));
		// verticalFovDegrees_ = value;
		float L_1 = ___value0;
		__this->___verticalFovDegrees__5 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::get_HasVerticalFovDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_get_HasVerticalFovDegrees_m407C03B4E9B8CADB6CB09254C442D250E7393201 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 1) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 1) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::ClearVerticalFovDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_ClearVerticalFovDegrees_m648B2F99BC4106B076626C947BEA605AF26451FB (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-2)));
		// }
		return;
	}
}
// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::get_Near()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerspectiveCamera_get_Near_mA72F2B5C2E0FAEA088B0106FB197B7A314119B05 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// get { if ((_hasBits0 & 2) != 0) { return near_; } else { return NearDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&2))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 2) != 0) { return near_; } else { return NearDefaultValue; } }
		float L_2 = __this->___near__8;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 2) != 0) { return near_; } else { return NearDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		float L_3 = ((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->___NearDefaultValue_7;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 2) != 0) { return near_; } else { return NearDefaultValue; } }
		float L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::set_Near(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_set_Near_m65C3BAA5E9C3DF24F4C014F0B00D61CC3587D133 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 2;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|2));
		// near_ = value;
		float L_1 = ___value0;
		__this->___near__8 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::get_HasNear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_get_HasNear_m5D16F4DD0DA9DF18375C6F5CEED45B1DD7B29A80 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 2) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 2) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::ClearNear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_ClearNear_m69C899557CADC0F0E3CD77B99D2588B998FB1D34 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~2;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-3)));
		// }
		return;
	}
}
// System.Single Mediapipe.FaceGeometry.PerspectiveCamera::get_Far()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerspectiveCamera_get_Far_m92B0C423C1A826DCC625CA09BD6094F8EEA4476D (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// get { if ((_hasBits0 & 4) != 0) { return far_; } else { return FarDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&4))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 4) != 0) { return far_; } else { return FarDefaultValue; } }
		float L_2 = __this->___far__11;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 4) != 0) { return far_; } else { return FarDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		float L_3 = ((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->___FarDefaultValue_10;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 4) != 0) { return far_; } else { return FarDefaultValue; } }
		float L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::set_Far(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_set_Far_m6DE384FB317FE30D57FD5BEE32A9B39C48E840A4 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 4;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|4));
		// far_ = value;
		float L_1 = ___value0;
		__this->___far__11 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::get_HasFar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_get_HasFar_m01D486507B58FB3589BBE387EC426DAFDFC84C45 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 4) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&4))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 4) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::ClearFar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_ClearFar_m48F0F782A95F02341B38365E46A574022C36280F (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~4;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-5)));
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_Equals_m3EE11B77B3943FF75A2F00B1C964DE201D7D0050 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Equals(other as PerspectiveCamera);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = PerspectiveCamera_Equals_m4A59C98625A0D3A9C1AA515A5E6D1818E405BA47(__this, ((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)IsInstSealed((RuntimeObject*)L_0, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mediapipe.FaceGeometry.PerspectiveCamera::Equals(Mediapipe.FaceGeometry.PerspectiveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PerspectiveCamera_Equals_m4A59C98625A0D3A9C1AA515A5E6D1818E405BA47 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (ReferenceEquals(other, null)) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0099;
	}

IL_0011:
	{
		// if (ReferenceEquals(other, this)) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_2 = ___other0;
		V_2 = (bool)((((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_2) == ((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)__this))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0099;
	}

IL_001e:
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(VerticalFovDegrees, other.VerticalFovDegrees)) return false;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_5;
		L_5 = PerspectiveCamera_get_VerticalFovDegrees_mBFAA125DF2C64BAAF93F84C24FE0F7DD4B8D0D43(__this, NULL);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_6 = ___other0;
		NullCheck(L_6);
		float L_7;
		L_7 = PerspectiveCamera_get_VerticalFovDegrees_mBFAA125DF2C64BAAF93F84C24FE0F7DD4B8D0D43(L_6, NULL);
		NullCheck(L_4);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, L_4, L_5, L_7);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(VerticalFovDegrees, other.VerticalFovDegrees)) return false;
		V_1 = (bool)0;
		goto IL_0099;
	}

IL_003f:
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Near, other.Near)) return false;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_10;
		L_10 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_11;
		L_11 = PerspectiveCamera_get_Near_mA72F2B5C2E0FAEA088B0106FB197B7A314119B05(__this, NULL);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_12 = ___other0;
		NullCheck(L_12);
		float L_13;
		L_13 = PerspectiveCamera_get_Near_mA72F2B5C2E0FAEA088B0106FB197B7A314119B05(L_12, NULL);
		NullCheck(L_10);
		bool L_14;
		L_14 = VirtualFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, L_10, L_11, L_13);
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Near, other.Near)) return false;
		V_1 = (bool)0;
		goto IL_0099;
	}

IL_0062:
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Far, other.Far)) return false;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_16;
		L_16 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_17;
		L_17 = PerspectiveCamera_get_Far_m92B0C423C1A826DCC625CA09BD6094F8EEA4476D(__this, NULL);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_18 = ___other0;
		NullCheck(L_18);
		float L_19;
		L_19 = PerspectiveCamera_get_Far_m92B0C423C1A826DCC625CA09BD6094F8EEA4476D(L_18, NULL);
		NullCheck(L_16);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, L_16, L_17, L_19);
		V_5 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0085;
		}
	}
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Far, other.Far)) return false;
		V_1 = (bool)0;
		goto IL_0099;
	}

IL_0085:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_22 = __this->____unknownFields_1;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_23 = ___other0;
		NullCheck(L_23);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_24 = L_23->____unknownFields_1;
		bool L_25;
		L_25 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_22, L_24, NULL);
		V_1 = L_25;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		bool L_26 = V_1;
		return L_26;
	}
}
// System.Int32 Mediapipe.FaceGeometry.PerspectiveCamera::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PerspectiveCamera_GetHashCode_m420CD581D9B776F4D1E3FA5B783D2F1D34A3283E (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (HasVerticalFovDegrees) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(VerticalFovDegrees);
		bool L_0;
		L_0 = PerspectiveCamera_get_HasVerticalFovDegrees_m407C03B4E9B8CADB6CB09254C442D250E7393201(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (HasVerticalFovDegrees) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(VerticalFovDegrees);
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_3;
		L_3 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_4;
		L_4 = PerspectiveCamera_get_VerticalFovDegrees_mBFAA125DF2C64BAAF93F84C24FE0F7DD4B8D0D43(__this, NULL);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, float >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, L_3, L_4);
		V_0 = ((int32_t)(L_2^L_5));
	}

IL_0020:
	{
		// if (HasNear) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Near);
		bool L_6;
		L_6 = PerspectiveCamera_get_HasNear_m5D16F4DD0DA9DF18375C6F5CEED45B1DD7B29A80(__this, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// if (HasNear) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Near);
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_9;
		L_9 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_10;
		L_10 = PerspectiveCamera_get_Near_mA72F2B5C2E0FAEA088B0106FB197B7A314119B05(__this, NULL);
		NullCheck(L_9);
		int32_t L_11;
		L_11 = VirtualFuncInvoker1< int32_t, float >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, L_9, L_10);
		V_0 = ((int32_t)(L_8^L_11));
	}

IL_003d:
	{
		// if (HasFar) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Far);
		bool L_12;
		L_12 = PerspectiveCamera_get_HasFar_m01D486507B58FB3589BBE387EC426DAFDFC84C45(__this, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		// if (HasFar) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Far);
		int32_t L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_15;
		L_15 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_16;
		L_16 = PerspectiveCamera_get_Far_m92B0C423C1A826DCC625CA09BD6094F8EEA4476D(__this, NULL);
		NullCheck(L_15);
		int32_t L_17;
		L_17 = VirtualFuncInvoker1< int32_t, float >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, L_15, L_16);
		V_0 = ((int32_t)(L_14^L_17));
	}

IL_005a:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_18 = __this->____unknownFields_1;
		V_4 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0079;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_20 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_21 = __this->____unknownFields_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_21);
		V_0 = ((int32_t)(L_20^L_22));
	}

IL_0079:
	{
		// return hash;
		int32_t L_23 = V_0;
		V_5 = L_23;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		int32_t L_24 = V_5;
		return L_24;
	}
}
// System.String Mediapipe.FaceGeometry.PerspectiveCamera::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PerspectiveCamera_ToString_mF75188E9DD38E3B9E04DDCEC4757337ADE119C5B (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_WriteTo_m0CE169636BF766A106136163BD32D3DC82215365 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_m16B4DFC26B662BAB931509763C82292DB862F652 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (HasVerticalFovDegrees) {
		bool L_0;
		L_0 = PerspectiveCamera_get_HasVerticalFovDegrees_m407C03B4E9B8CADB6CB09254C442D250E7393201(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// output.WriteRawTag(13);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_2, (uint8_t)((int32_t)13), NULL);
		// output.WriteFloat(VerticalFovDegrees);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_3 = ___output0;
		float L_4;
		L_4 = PerspectiveCamera_get_VerticalFovDegrees_mBFAA125DF2C64BAAF93F84C24FE0F7DD4B8D0D43(__this, NULL);
		WriteContext_WriteFloat_m21105D66CB04BD793C0C21F2C30B1EC1912029C3(L_3, L_4, NULL);
	}

IL_0023:
	{
		// if (HasNear) {
		bool L_5;
		L_5 = PerspectiveCamera_get_HasNear_m5D16F4DD0DA9DF18375C6F5CEED45B1DD7B29A80(__this, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// output.WriteRawTag(21);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_7 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_7, (uint8_t)((int32_t)21), NULL);
		// output.WriteFloat(Near);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_8 = ___output0;
		float L_9;
		L_9 = PerspectiveCamera_get_Near_mA72F2B5C2E0FAEA088B0106FB197B7A314119B05(__this, NULL);
		WriteContext_WriteFloat_m21105D66CB04BD793C0C21F2C30B1EC1912029C3(L_8, L_9, NULL);
	}

IL_0045:
	{
		// if (HasFar) {
		bool L_10;
		L_10 = PerspectiveCamera_get_HasFar_m01D486507B58FB3589BBE387EC426DAFDFC84C45(__this, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		// output.WriteRawTag(29);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_12 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_12, (uint8_t)((int32_t)29), NULL);
		// output.WriteFloat(Far);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_13 = ___output0;
		float L_14;
		L_14 = PerspectiveCamera_get_Far_m92B0C423C1A826DCC625CA09BD6094F8EEA4476D(__this, NULL);
		WriteContext_WriteFloat_m21105D66CB04BD793C0C21F2C30B1EC1912029C3(L_13, L_14, NULL);
	}

IL_0067:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_15 = __this->____unknownFields_1;
		V_3 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_17 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_18 = ___output0;
		NullCheck(L_17);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_17, L_18, NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Int32 Mediapipe.FaceGeometry.PerspectiveCamera::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PerspectiveCamera_CalculateSize_m46BFD2161C98AD658724C67CA3E6FAD92425A498 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (HasVerticalFovDegrees) {
		bool L_0;
		L_0 = PerspectiveCamera_get_HasVerticalFovDegrees_m407C03B4E9B8CADB6CB09254C442D250E7393201(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// size += 1 + 4;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 5));
	}

IL_0013:
	{
		// if (HasNear) {
		bool L_3;
		L_3 = PerspectiveCamera_get_HasNear_m5D16F4DD0DA9DF18375C6F5CEED45B1DD7B29A80(__this, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// size += 1 + 4;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 5));
	}

IL_0023:
	{
		// if (HasFar) {
		bool L_6;
		L_6 = PerspectiveCamera_get_HasFar_m01D486507B58FB3589BBE387EC426DAFDFC84C45(__this, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		// size += 1 + 4;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 5));
	}

IL_0033:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9 = __this->____unknownFields_1;
		V_4 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_11 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12 = __this->____unknownFields_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_12, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, L_13));
	}

IL_0052:
	{
		// return size;
		int32_t L_14 = V_0;
		V_5 = L_14;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		int32_t L_15 = V_5;
		return L_15;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::MergeFrom(Mediapipe.FaceGeometry.PerspectiveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_MergeFrom_m4859B2E9B615B4CC75CD3697C7BB758586107538 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (other == null) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_006e;
	}

IL_000c:
	{
		// if (other.HasVerticalFovDegrees) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = PerspectiveCamera_get_HasVerticalFovDegrees_m407C03B4E9B8CADB6CB09254C442D250E7393201(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// VerticalFovDegrees = other.VerticalFovDegrees;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_5 = ___other0;
		NullCheck(L_5);
		float L_6;
		L_6 = PerspectiveCamera_get_VerticalFovDegrees_mBFAA125DF2C64BAAF93F84C24FE0F7DD4B8D0D43(L_5, NULL);
		PerspectiveCamera_set_VerticalFovDegrees_mD04A7AB784CEC7DF1AE8F54657BD87D3EA23BFC2(__this, L_6, NULL);
	}

IL_0025:
	{
		// if (other.HasNear) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = PerspectiveCamera_get_HasNear_m5D16F4DD0DA9DF18375C6F5CEED45B1DD7B29A80(L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// Near = other.Near;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_10 = ___other0;
		NullCheck(L_10);
		float L_11;
		L_11 = PerspectiveCamera_get_Near_mA72F2B5C2E0FAEA088B0106FB197B7A314119B05(L_10, NULL);
		PerspectiveCamera_set_Near_m65C3BAA5E9C3DF24F4C014F0B00D61CC3587D133(__this, L_11, NULL);
	}

IL_003e:
	{
		// if (other.HasFar) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_12 = ___other0;
		NullCheck(L_12);
		bool L_13;
		L_13 = PerspectiveCamera_get_HasFar_m01D486507B58FB3589BBE387EC426DAFDFC84C45(L_12, NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		// Far = other.Far;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_15 = ___other0;
		NullCheck(L_15);
		float L_16;
		L_16 = PerspectiveCamera_get_Far_m92B0C423C1A826DCC625CA09BD6094F8EEA4476D(L_15, NULL);
		PerspectiveCamera_set_Far_m6DE384FB317FE30D57FD5BEE32A9B39C48E840A4(__this, L_16, NULL);
	}

IL_0057:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_17 = __this->____unknownFields_1;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_18 = ___other0;
		NullCheck(L_18);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_19 = L_18->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_20;
		L_20 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_17, L_19, NULL);
		__this->____unknownFields_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_20);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_MergeFrom_mE1213606C19598F6C84C7355267824A03EE85860 (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m46E146513F87E6E8FE548BE75B2B928217A1775B (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	{
		goto IL_0062;
	}

IL_0003:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		V_2 = L_0;
		uint32_t L_1 = V_2;
		V_1 = L_1;
		uint32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)13))))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_000f;
	}

IL_000f:
	{
		uint32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)21))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		uint32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)29))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_001d;
	}

IL_001d:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_5 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_6 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_7;
		L_7 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_5, L_6, NULL);
		__this->____unknownFields_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_7);
		// break;
		goto IL_0061;
	}

IL_0031:
	{
		// VerticalFovDegrees = input.ReadFloat();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_8 = ___input0;
		float L_9;
		L_9 = ParseContext_ReadFloat_mCED59543DF5DE0A97E3CAF2075DCD3DD4DC7CDD8_inline(L_8, NULL);
		PerspectiveCamera_set_VerticalFovDegrees_mD04A7AB784CEC7DF1AE8F54657BD87D3EA23BFC2(__this, L_9, NULL);
		// break;
		goto IL_0061;
	}

IL_0041:
	{
		// Near = input.ReadFloat();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_10 = ___input0;
		float L_11;
		L_11 = ParseContext_ReadFloat_mCED59543DF5DE0A97E3CAF2075DCD3DD4DC7CDD8_inline(L_10, NULL);
		PerspectiveCamera_set_Near_m65C3BAA5E9C3DF24F4C014F0B00D61CC3587D133(__this, L_11, NULL);
		// break;
		goto IL_0061;
	}

IL_0051:
	{
		// Far = input.ReadFloat();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_12 = ___input0;
		float L_13;
		L_13 = ParseContext_ReadFloat_mCED59543DF5DE0A97E3CAF2075DCD3DD4DC7CDD8_inline(L_12, NULL);
		PerspectiveCamera_set_Far_m6DE384FB317FE30D57FD5BEE32A9B39C48E840A4(__this, L_13, NULL);
		// break;
		goto IL_0061;
	}

IL_0061:
	{
	}

IL_0062:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_14 = ___input0;
		uint32_t L_15;
		L_15 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_14, NULL);
		uint32_t L_16 = L_15;
		V_0 = L_16;
		V_3 = (bool)((!(((uint32_t)L_16) <= ((uint32_t)0)))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerspectiveCamera__cctor_mE90937D5B16EEB66DD7E23B10A4945889516AF8F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m7580E715C6BF542C9E6C3CB673F8C9B728B4C476_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__50_0_mA661D6FB6D783708CD3980732B6F31FFA7901C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<PerspectiveCamera> _parser = new pb::MessageParser<PerspectiveCamera>(() => new PerspectiveCamera());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_il2cpp_TypeInfo_var);
		U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3* L_0 = ((U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C* L_1 = (Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C*)il2cpp_codegen_object_new(Func_1_t320806F6E268CA14ED07E06E719F37A58F6D2C2C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m544FC2427D33FC1CD97023C66A44AF0150A4B9F3(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__50_0_mA661D6FB6D783708CD3980732B6F31FFA7901C48_RuntimeMethod_var), NULL);
		MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC* L_2 = (MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC*)il2cpp_codegen_object_new(MessageParser_1_t6B0C59B5674C4E90E503F98A2115DFBC07B660FC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_m7580E715C6BF542C9E6C3CB673F8C9B728B4C476(L_2, L_1, MessageParser_1__ctor_m7580E715C6BF542C9E6C3CB673F8C9B728B4C476_RuntimeMethod_var);
		((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
		// private readonly static float VerticalFovDegreesDefaultValue = 0F;
		((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->___VerticalFovDegreesDefaultValue_4 = (0.0f);
		// private readonly static float NearDefaultValue = 0F;
		((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->___NearDefaultValue_7 = (0.0f);
		// private readonly static float FarDefaultValue = 0F;
		((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_StaticFields*)il2cpp_codegen_static_fields_for(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var))->___FarDefaultValue_10 = (0.0f);
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
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1A60239B7C6DB4BD82BC1BB91DD21B0C37C009D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3* L_0 = (U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3*)il2cpp_codegen_object_new(U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4BDFE9D815105BFA137831D165FB52D49374FC62(L_0, NULL);
		((U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.PerspectiveCamera/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4BDFE9D815105BFA137831D165FB52D49374FC62 (U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Mediapipe.FaceGeometry.PerspectiveCamera Mediapipe.FaceGeometry.PerspectiveCamera/<>c::<.cctor>b__50_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* U3CU3Ec_U3C_cctorU3Eb__50_0_mA661D6FB6D783708CD3980732B6F31FFA7901C48 (U3CU3Ec_t6668019CE87D2538880C67A3684ABC073FB8B5D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<PerspectiveCamera> _parser = new pb::MessageParser<PerspectiveCamera>(() => new PerspectiveCamera());
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_0 = (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)il2cpp_codegen_object_new(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PerspectiveCamera__ctor_m5083B610F85E8646EBE211114A109C51EA2E8445(L_0, NULL);
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
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Environment> Mediapipe.FaceGeometry.Environment::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2* Environment_get_Parser_m19732917ED9A260BD36BD82235BE8811F6B700A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2* V_0 = NULL;
	{
		// public static pb::MessageParser<Environment> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2* L_0 = ((Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_StaticFields*)il2cpp_codegen_static_fields_for(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var))->____parser_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// public static pb::MessageParser<Environment> Parser { get { return _parser; } }
		MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.Environment::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Environment_get_Descriptor_m1AD042C3C7378CD6D4292530C2033F237307405B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentReflection_t35B2B087C4DD67B24E9AEAFD70276DBEC26B41BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return global::Mediapipe.FaceGeometry.EnvironmentReflection.Descriptor.MessageTypes[1]; }
		il2cpp_codegen_runtime_class_init_inline(EnvironmentReflection_t35B2B087C4DD67B24E9AEAFD70276DBEC26B41BB_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = EnvironmentReflection_get_Descriptor_m6DFD821C61921FFC4039EAE5BD575225B90AEABC(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 1);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// get { return global::Mediapipe.FaceGeometry.EnvironmentReflection.Descriptor.MessageTypes[1]; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.Environment::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Environment_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mF8329E9CD18ADD781041026A11AF39BE0A02079C (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = Environment_get_Descriptor_m1AD042C3C7378CD6D4292530C2033F237307405B(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Descriptor; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment__ctor_m9B6A4AB736CB65879C4DD7D669297C0B4466A8B0 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	{
		// public Environment() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::.ctor(Mediapipe.FaceGeometry.Environment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment__ctor_m8436F46D97269F9CDAFEA54BD97557080EE3A807 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* ___other0, const RuntimeMethod* method) 
{
	Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* G_B2_0 = NULL;
	Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* G_B1_0 = NULL;
	PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* G_B3_0 = NULL;
	Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* G_B3_1 = NULL;
	{
		// public Environment(Environment other) : this() {
		Environment__ctor_m9B6A4AB736CB65879C4DD7D669297C0B4466A8B0(__this, NULL);
		// _hasBits0 = other._hasBits0;
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->____hasBits0_2;
		__this->____hasBits0_2 = L_1;
		// originPointLocation_ = other.originPointLocation_;
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___originPointLocation__5;
		__this->___originPointLocation__5 = L_3;
		// perspectiveCamera_ = other.perspectiveCamera_ != null ? other.perspectiveCamera_.Clone() : null;
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_4 = ___other0;
		NullCheck(L_4);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_5 = L_4->___perspectiveCamera__7;
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = ((PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_002c:
	{
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_6 = ___other0;
		NullCheck(L_6);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_7 = L_6->___perspectiveCamera__7;
		NullCheck(L_7);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_8;
		L_8 = PerspectiveCamera_Clone_m227027310624DAC37D06ADEEE838EAC1CBB78043(L_7, NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		NullCheck(G_B3_1);
		G_B3_1->___perspectiveCamera__7 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___perspectiveCamera__7), (void*)G_B3_0);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_9 = ___other0;
		NullCheck(L_9);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = L_9->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11;
		L_11 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_10, NULL);
		__this->____unknownFields_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_11);
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.Environment Mediapipe.FaceGeometry.Environment::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* Environment_Clone_m960A66A891E6FD9B36A2CAD8229DDDD434E2610C (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* V_0 = NULL;
	{
		// return new Environment(this);
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_0 = (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22*)il2cpp_codegen_object_new(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Environment__ctor_m8436F46D97269F9CDAFEA54BD97557080EE3A807(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_1 = V_0;
		return L_1;
	}
}
// Mediapipe.FaceGeometry.OriginPointLocation Mediapipe.FaceGeometry.Environment::get_OriginPointLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_OriginPointLocation_m9EE211206612ADB33E20B7AD385869D981AA4F03 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// get { if ((_hasBits0 & 1) != 0) { return originPointLocation_; } else { return OriginPointLocationDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 1) != 0) { return originPointLocation_; } else { return OriginPointLocationDefaultValue; } }
		int32_t L_2 = __this->___originPointLocation__5;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 1) != 0) { return originPointLocation_; } else { return OriginPointLocationDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_StaticFields*)il2cpp_codegen_static_fields_for(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var))->___OriginPointLocationDefaultValue_4;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 1) != 0) { return originPointLocation_; } else { return OriginPointLocationDefaultValue; } }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::set_OriginPointLocation(Mediapipe.FaceGeometry.OriginPointLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_set_OriginPointLocation_m84BE66592DCA6285F3AE3A2222378215A87FF226 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|1));
		// originPointLocation_ = value;
		int32_t L_1 = ___value0;
		__this->___originPointLocation__5 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.Environment::get_HasOriginPointLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Environment_get_HasOriginPointLocation_mC0A2D0366C78185BB509470AAB79BBAE466598FB (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 1) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 1) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::ClearOriginPointLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_ClearOriginPointLocation_mD1618C1AA78F1F898DADD24CB020EC3C80306ED3 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-2)));
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.PerspectiveCamera Mediapipe.FaceGeometry.Environment::get_PerspectiveCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* V_0 = NULL;
	{
		// get { return perspectiveCamera_; }
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_0 = __this->___perspectiveCamera__7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return perspectiveCamera_; }
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::set_PerspectiveCamera(Mediapipe.FaceGeometry.PerspectiveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_set_PerspectiveCamera_m0C44CB17D925B96688ACC0957334E689F631EB4B (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* ___value0, const RuntimeMethod* method) 
{
	{
		// perspectiveCamera_ = value;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_0 = ___value0;
		__this->___perspectiveCamera__7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___perspectiveCamera__7), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.Environment::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Environment_Equals_m0EEAC79C8BDDB65219801D6E4C512B6494577896 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Equals(other as Environment);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = Environment_Equals_mCA608E7B5854726DEE0929AC6F21356AE3990132(__this, ((Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22*)IsInstSealed((RuntimeObject*)L_0, Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mediapipe.FaceGeometry.Environment::Equals(Mediapipe.FaceGeometry.Environment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Environment_Equals_mCA608E7B5854726DEE0929AC6F21356AE3990132 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (ReferenceEquals(other, null)) {
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0066;
	}

IL_000e:
	{
		// if (ReferenceEquals(other, this)) {
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_2 = ___other0;
		V_2 = (bool)((((RuntimeObject*)(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22*)L_2) == ((RuntimeObject*)(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22*)__this))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0066;
	}

IL_001b:
	{
		// if (OriginPointLocation != other.OriginPointLocation) return false;
		int32_t L_4;
		L_4 = Environment_get_OriginPointLocation_m9EE211206612ADB33E20B7AD385869D981AA4F03(__this, NULL);
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Environment_get_OriginPointLocation_m9EE211206612ADB33E20B7AD385869D981AA4F03(L_5, NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// if (OriginPointLocation != other.OriginPointLocation) return false;
		V_1 = (bool)0;
		goto IL_0066;
	}

IL_0034:
	{
		// if (!object.Equals(PerspectiveCamera, other.PerspectiveCamera)) return false;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_8;
		L_8 = Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918(__this, NULL);
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_9 = ___other0;
		NullCheck(L_9);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_10;
		L_10 = Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918(L_9, NULL);
		bool L_11;
		L_11 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_8, L_10, NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// if (!object.Equals(PerspectiveCamera, other.PerspectiveCamera)) return false;
		V_1 = (bool)0;
		goto IL_0066;
	}

IL_0052:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_14 = ___other0;
		NullCheck(L_14);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_15 = L_14->____unknownFields_1;
		bool L_16;
		L_16 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_13, L_15, NULL);
		V_1 = L_16;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Int32 Mediapipe.FaceGeometry.Environment::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_GetHashCode_m174E6459D895B40D7958A6C15A95450262593EC8 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (HasOriginPointLocation) hash ^= OriginPointLocation.GetHashCode();
		bool L_0;
		L_0 = Environment_get_HasOriginPointLocation_mC0A2D0366C78185BB509470AAB79BBAE466598FB(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (HasOriginPointLocation) hash ^= OriginPointLocation.GetHashCode();
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Environment_get_OriginPointLocation_m9EE211206612ADB33E20B7AD385869D981AA4F03(__this, NULL);
		V_2 = L_3;
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&V_2), NULL);
		V_0 = ((int32_t)(L_2^L_4));
	}

IL_0024:
	{
		// if (perspectiveCamera_ != null) hash ^= PerspectiveCamera.GetHashCode();
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_5 = __this->___perspectiveCamera__7;
		V_3 = (bool)((!(((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// if (perspectiveCamera_ != null) hash ^= PerspectiveCamera.GetHashCode();
		int32_t L_7 = V_0;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_8;
		L_8 = Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		V_0 = ((int32_t)(L_7^L_9));
	}

IL_003f:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		V_4 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_12 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_13);
		V_0 = ((int32_t)(L_12^L_14));
	}

IL_005e:
	{
		// return hash;
		int32_t L_15 = V_0;
		V_5 = L_15;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		int32_t L_16 = V_5;
		return L_16;
	}
}
// System.String Mediapipe.FaceGeometry.Environment::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_ToString_mDA2E440B5ED541FC263AD5D24A44FB38E2850F60 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_WriteTo_mADE990123B9B2B434437A95B359463603752FDDC (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_m13A8DB2C2ED4A01542586E2C0A3BC6039F03FC0A (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (HasOriginPointLocation) {
		bool L_0;
		L_0 = Environment_get_HasOriginPointLocation_mC0A2D0366C78185BB509470AAB79BBAE466598FB(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// output.WriteRawTag(8);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_2, (uint8_t)8, NULL);
		// output.WriteEnum((int) OriginPointLocation);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_3 = ___output0;
		int32_t L_4;
		L_4 = Environment_get_OriginPointLocation_m9EE211206612ADB33E20B7AD385869D981AA4F03(__this, NULL);
		WriteContext_WriteEnum_m9D943000AEB1B4AF9DA9BF3E506F1CD1A79C623F(L_3, L_4, NULL);
	}

IL_0022:
	{
		// if (perspectiveCamera_ != null) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_5 = __this->___perspectiveCamera__7;
		V_1 = (bool)((!(((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// output.WriteRawTag(18);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_7 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_7, (uint8_t)((int32_t)18), NULL);
		// output.WriteMessage(PerspectiveCamera);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_8 = ___output0;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_9;
		L_9 = Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918(__this, NULL);
		WriteContext_WriteMessage_m2F77C0E66BE30E7D27F74713F4C2967F9CB67575(L_8, L_9, NULL);
	}

IL_0047:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		V_2 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_13 = ___output0;
		NullCheck(L_12);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_12, L_13, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Int32 Mediapipe.FaceGeometry.Environment::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_CalculateSize_m02B6391C0B57417016834DEFDC626026DA07D2CC (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (HasOriginPointLocation) {
		bool L_0;
		L_0 = Environment_get_HasOriginPointLocation_mC0A2D0366C78185BB509470AAB79BBAE466598FB(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) OriginPointLocation);
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Environment_get_OriginPointLocation_m9EE211206612ADB33E20B7AD385869D981AA4F03(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(1, L_4))));
	}

IL_001f:
	{
		// if (perspectiveCamera_ != null) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_5 = __this->___perspectiveCamera__7;
		V_2 = (bool)((!(((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeMessageSize(PerspectiveCamera);
		int32_t L_7 = V_0;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_8;
		L_8 = Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = CodedOutputStream_ComputeMessageSize_m96CA0965A80BAE333592894886B82CF0F5B357C2(L_8, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_add(1, L_9))));
	}

IL_003e:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		V_3 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_12 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_13, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, L_14));
	}

IL_005b:
	{
		// return size;
		int32_t L_15 = V_0;
		V_4 = L_15;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		int32_t L_16 = V_4;
		return L_16;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::MergeFrom(Mediapipe.FaceGeometry.Environment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_MergeFrom_m65B84A7AA0282E823D17E946A55FEDD9822FACDC (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (other == null) {
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_0078;
	}

IL_000c:
	{
		// if (other.HasOriginPointLocation) {
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Environment_get_HasOriginPointLocation_mC0A2D0366C78185BB509470AAB79BBAE466598FB(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// OriginPointLocation = other.OriginPointLocation;
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Environment_get_OriginPointLocation_m9EE211206612ADB33E20B7AD385869D981AA4F03(L_5, NULL);
		Environment_set_OriginPointLocation_m84BE66592DCA6285F3AE3A2222378215A87FF226(__this, L_6, NULL);
	}

IL_0025:
	{
		// if (other.perspectiveCamera_ != null) {
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_7 = ___other0;
		NullCheck(L_7);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_8 = L_7->___perspectiveCamera__7;
		V_2 = (bool)((!(((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// if (perspectiveCamera_ == null) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_10 = __this->___perspectiveCamera__7;
		V_3 = (bool)((((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// PerspectiveCamera = new global::Mediapipe.FaceGeometry.PerspectiveCamera();
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_12 = (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)il2cpp_codegen_object_new(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		PerspectiveCamera__ctor_m5083B610F85E8646EBE211114A109C51EA2E8445(L_12, NULL);
		Environment_set_PerspectiveCamera_m0C44CB17D925B96688ACC0957334E689F631EB4B(__this, L_12, NULL);
	}

IL_004e:
	{
		// PerspectiveCamera.MergeFrom(other.PerspectiveCamera);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_13;
		L_13 = Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918(__this, NULL);
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_14 = ___other0;
		NullCheck(L_14);
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_15;
		L_15 = Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918(L_14, NULL);
		NullCheck(L_13);
		PerspectiveCamera_MergeFrom_m4859B2E9B615B4CC75CD3697C7BB758586107538(L_13, L_15, NULL);
	}

IL_0061:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_16 = __this->____unknownFields_1;
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_17 = ___other0;
		NullCheck(L_17);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_18 = L_17->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_19;
		L_19 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_16, L_18, NULL);
		__this->____unknownFields_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_19);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_MergeFrom_m8B1F6685D47EF10BE01609F2C4D5662EF2BF8EE2 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m24B7E2A5713C1CFCC677401759F425EF7FE17519 (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		goto IL_0065;
	}

IL_0003:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		V_2 = L_0;
		uint32_t L_1 = V_2;
		V_1 = L_1;
		uint32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		uint32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)18))))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0015;
	}

IL_0015:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_5 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_6;
		L_6 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_4, L_5, NULL);
		__this->____unknownFields_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_6);
		// break;
		goto IL_0064;
	}

IL_0029:
	{
		// OriginPointLocation = (global::Mediapipe.FaceGeometry.OriginPointLocation) input.ReadEnum();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_7 = ___input0;
		int32_t L_8;
		L_8 = ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline(L_7, NULL);
		Environment_set_OriginPointLocation_m84BE66592DCA6285F3AE3A2222378215A87FF226(__this, L_8, NULL);
		// break;
		goto IL_0064;
	}

IL_0039:
	{
		// if (perspectiveCamera_ == null) {
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_9 = __this->___perspectiveCamera__7;
		V_3 = (bool)((((RuntimeObject*)(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		// PerspectiveCamera = new global::Mediapipe.FaceGeometry.PerspectiveCamera();
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_11 = (PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F*)il2cpp_codegen_object_new(PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		PerspectiveCamera__ctor_m5083B610F85E8646EBE211114A109C51EA2E8445(L_11, NULL);
		Environment_set_PerspectiveCamera_m0C44CB17D925B96688ACC0957334E689F631EB4B(__this, L_11, NULL);
	}

IL_0055:
	{
		// input.ReadMessage(PerspectiveCamera);
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_12 = ___input0;
		PerspectiveCamera_t9069CF361073B8FD4C254E34EEB3E4D051F5262F* L_13;
		L_13 = Environment_get_PerspectiveCamera_m5CB481DAED7A0470E6D89CDEAA1B06A220A1C918(__this, NULL);
		ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline(L_12, L_13, NULL);
		// break;
		goto IL_0064;
	}

IL_0064:
	{
	}

IL_0065:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_14 = ___input0;
		uint32_t L_15;
		L_15 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_14, NULL);
		uint32_t L_16 = L_15;
		V_0 = L_16;
		V_4 = (bool)((!(((uint32_t)L_16) <= ((uint32_t)0)))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment__cctor_mD84E0FDE8645AE70B96E101354FA1A1AA70DF5A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mFE9613E5D557C1A99EB952B90BB3AAFA3B3231BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__37_0_m7527BD2E430FFEAD331512AAFE6F39B4869F044E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<Environment> _parser = new pb::MessageParser<Environment>(() => new Environment());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_il2cpp_TypeInfo_var);
		U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF* L_0 = ((U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B* L_1 = (Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B*)il2cpp_codegen_object_new(Func_1_tFFD946B06622F688F5AA8C5B7F7765659E36D80B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m4DB41D57D8FB3367FAA8EA7A34F4098035355B00(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__37_0_m7527BD2E430FFEAD331512AAFE6F39B4869F044E_RuntimeMethod_var), NULL);
		MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2* L_2 = (MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2*)il2cpp_codegen_object_new(MessageParser_1_tE877B603FFEB2F53EB52FB893B34F6E2627B3AF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_mFE9613E5D557C1A99EB952B90BB3AAFA3B3231BB(L_2, L_1, MessageParser_1__ctor_mFE9613E5D557C1A99EB952B90BB3AAFA3B3231BB_RuntimeMethod_var);
		((Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_StaticFields*)il2cpp_codegen_static_fields_for(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_StaticFields*)il2cpp_codegen_static_fields_for(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
		// private readonly static global::Mediapipe.FaceGeometry.OriginPointLocation OriginPointLocationDefaultValue = global::Mediapipe.FaceGeometry.OriginPointLocation.BottomLeftCorner;
		((Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_StaticFields*)il2cpp_codegen_static_fields_for(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var))->___OriginPointLocationDefaultValue_4 = 1;
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
// System.Void Mediapipe.FaceGeometry.Environment/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5030CB72054D040FFDA811520FEBD7F07421E735 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF* L_0 = (U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF*)il2cpp_codegen_object_new(U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m456D775FDAA5C14F865DDB5EA42D259E2A8C914B(L_0, NULL);
		((U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Environment/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m456D775FDAA5C14F865DDB5EA42D259E2A8C914B (U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Mediapipe.FaceGeometry.Environment Mediapipe.FaceGeometry.Environment/<>c::<.cctor>b__37_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* U3CU3Ec_U3C_cctorU3Eb__37_0_m7527BD2E430FFEAD331512AAFE6F39B4869F044E (U3CU3Ec_tF3AD00EF1B4435926FB01BEF05FCD183C34F78BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<Environment> _parser = new pb::MessageParser<Environment>(() => new Environment());
		Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22* L_0 = (Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22*)il2cpp_codegen_object_new(Environment_tE177DB9A65CA084D7B9F5DDE1E6AAC168EB4CB22_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Environment__ctor_m9B6A4AB736CB65879C4DD7D669297C0B4466A8B0(L_0, NULL);
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
// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.FaceGeometryReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FaceGeometryReflection_get_Descriptor_m26EC99853485E53441123CC61E7CE59905DF6369 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_0 = NULL;
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_StaticFields*)il2cpp_codegen_static_fields_for(FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var))->___descriptor_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return descriptor; }
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometryReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometryReflection__cctor_mDA42A86F57B153A2B824D6EF78457263DE97D56C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixDataReflection_t6DA00287FAF3117A823F7A618087DFDF7E74885E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16BCBCC0240C2EA43585B4E9E90CE98AD61E73BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F87FC02F38FC0CA874F8DF96DFB0A3052845CB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6891951625266AECBF1B540B0498CFC73CEB9D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral701B14400C2587794A95696C9A3A754FE47D3BCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B342276FBB60529D21E2D47196A38A03B54F85B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C1322B3A70AE0444E711C2F7320B5D8ACC9B29F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89E82FD37525882F367AB622B605BD32C9268214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9024EFCE2742080D96FDD51651E94F63A6FA5AC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB6A2CE49BF8089F4DA0A814E5C56CD6C185CE87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB239DE3E1C3A1AC710F658159D7E8E901A4A99FF);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "CjptZWRpYXBpcGUvbW9kdWxlcy9mYWNlX2dlb21ldHJ5L3Byb3Rvcy9mYWNl",
		//       "X2dlb21ldHJ5LnByb3RvEhdtZWRpYXBpcGUuZmFjZV9nZW9tZXRyeRotbWVk",
		//       "aWFwaXBlL2ZyYW1ld29yay9mb3JtYXRzL21hdHJpeF9kYXRhLnByb3RvGjRt",
		//       "ZWRpYXBpcGUvbW9kdWxlcy9mYWNlX2dlb21ldHJ5L3Byb3Rvcy9tZXNoXzNk",
		//       "LnByb3RvInMKDEZhY2VHZW9tZXRyeRItCgRtZXNoGAEgASgLMh8ubWVkaWFw",
		//       "aXBlLmZhY2VfZ2VvbWV0cnkuTWVzaDNkEjQKFXBvc2VfdHJhbnNmb3JtX21h",
		//       "dHJpeBgCIAEoCzIVLm1lZGlhcGlwZS5NYXRyaXhEYXRhQj4KKWNvbS5nb29n",
		//       "bGUubWVkaWFwaXBlLm1vZHVsZXMuZmFjZWdlb21ldHJ5QhFGYWNlR2VvbWV0",
		//       "cnlQcm90bw=="));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6891951625266AECBF1B540B0498CFC73CEB9D4F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6891951625266AECBF1B540B0498CFC73CEB9D4F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3F87FC02F38FC0CA874F8DF96DFB0A3052845CB5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3F87FC02F38FC0CA874F8DF96DFB0A3052845CB5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral7C1322B3A70AE0444E711C2F7320B5D8ACC9B29F);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7C1322B3A70AE0444E711C2F7320B5D8ACC9B29F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral16BCBCC0240C2EA43585B4E9E90CE98AD61E73BC);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral16BCBCC0240C2EA43585B4E9E90CE98AD61E73BC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral89E82FD37525882F367AB622B605BD32C9268214);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral89E82FD37525882F367AB622B605BD32C9268214);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral9024EFCE2742080D96FDD51651E94F63A6FA5AC0);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral9024EFCE2742080D96FDD51651E94F63A6FA5AC0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral701B14400C2587794A95696C9A3A754FE47D3BCE);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral701B14400C2587794A95696C9A3A754FE47D3BCE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral7B342276FBB60529D21E2D47196A38A03B54F85B);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral7B342276FBB60529D21E2D47196A38A03B54F85B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralAB6A2CE49BF8089F4DA0A814E5C56CD6C185CE87);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralAB6A2CE49BF8089F4DA0A814E5C56CD6C185CE87);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_10, NULL);
		V_0 = L_11;
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { global::Mediapipe.MatrixDataReflection.Descriptor, global::Mediapipe.FaceGeometry.Mesh3DReflection.Descriptor, },
		//     new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Mediapipe.FaceGeometry.FaceGeometry), global::Mediapipe.FaceGeometry.FaceGeometry.Parser, new[]{ "Mesh", "PoseTransformMatrix" }, null, null, null, null)
		//     }));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_13 = (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)SZArrayNew(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var, (uint32_t)2);
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_14 = L_13;
		il2cpp_codegen_runtime_class_init_inline(MatrixDataReflection_t6DA00287FAF3117A823F7A618087DFDF7E74885E_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_15;
		L_15 = MatrixDataReflection_get_Descriptor_m344D07633FC8F054025E9D2BAD4D2396337DF3CA(NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE*)L_15);
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_16 = L_14;
		il2cpp_codegen_runtime_class_init_inline(Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_17;
		L_17 = Mesh3DReflection_get_Descriptor_m446CB05BFADBC6755D03CD431D9B1A218458211A(NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE*)L_17);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_18 = (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var, (uint32_t)1);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_19 = L_18;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* L_22;
		L_22 = FaceGeometry_get_Parser_m06EE36B72EA9BBA0F277EA9BFB5612FC8915A950(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralB239DE3E1C3A1AC710F658159D7E8E901A4A99FF);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB239DE3E1C3A1AC710F658159D7E8E901A4A99FF);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_26 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_26, L_21, L_22, L_25, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_26);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_26);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_27 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		GeneratedClrTypeInfo__ctor_m6C6F4A657670674B74F3AF88AA06251E4C8DD022(L_27, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_28;
		L_28 = FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823(L_12, L_16, L_27, NULL);
		((FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_StaticFields*)il2cpp_codegen_static_fields_for(FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var))->___descriptor_0 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_StaticFields*)il2cpp_codegen_static_fields_for(FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var))->___descriptor_0), (void*)L_28);
		// }
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
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.FaceGeometry> Mediapipe.FaceGeometry.FaceGeometry::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* FaceGeometry_get_Parser_m06EE36B72EA9BBA0F277EA9BFB5612FC8915A950 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* V_0 = NULL;
	{
		// public static pb::MessageParser<FaceGeometry> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* L_0 = ((FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_StaticFields*)il2cpp_codegen_static_fields_for(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var))->____parser_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// public static pb::MessageParser<FaceGeometry> Parser { get { return _parser; } }
		MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.FaceGeometry::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FaceGeometry_get_Descriptor_m825D262D1A9CCD933C577F9C3C814182209D975C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return global::Mediapipe.FaceGeometry.FaceGeometryReflection.Descriptor.MessageTypes[0]; }
		il2cpp_codegen_runtime_class_init_inline(FaceGeometryReflection_t7ACC1B3E6D2F8FEB78217206BD4B84E4554E1ACF_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = FaceGeometryReflection_get_Descriptor_m26EC99853485E53441123CC61E7CE59905DF6369(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 0);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// get { return global::Mediapipe.FaceGeometry.FaceGeometryReflection.Descriptor.MessageTypes[0]; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.FaceGeometry::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FaceGeometry_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mABBFECC2BEDF132E5E18BEB9E884FF9D9F65CDEE (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = FaceGeometry_get_Descriptor_m825D262D1A9CCD933C577F9C3C814182209D975C(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Descriptor; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry__ctor_m410FAA2CF9C74E622F4413D463562E878F5DFF9A (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) 
{
	{
		// public FaceGeometry() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::.ctor(Mediapipe.FaceGeometry.FaceGeometry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry__ctor_mC77FEB546FE612044AB48ED4D3F1AD0976671DE6 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* ___other0, const RuntimeMethod* method) 
{
	FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* G_B2_0 = NULL;
	FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* G_B1_0 = NULL;
	Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* G_B3_0 = NULL;
	FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* G_B3_1 = NULL;
	FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* G_B5_0 = NULL;
	FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* G_B4_0 = NULL;
	MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* G_B6_0 = NULL;
	FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* G_B6_1 = NULL;
	{
		// public FaceGeometry(FaceGeometry other) : this() {
		FaceGeometry__ctor_m410FAA2CF9C74E622F4413D463562E878F5DFF9A(__this, NULL);
		// mesh_ = other.mesh_ != null ? other.mesh_.Clone() : null;
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_0 = ___other0;
		NullCheck(L_0);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_1 = L_0->___mesh__3;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_0014:
	{
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_2 = ___other0;
		NullCheck(L_2);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_3 = L_2->___mesh__3;
		NullCheck(L_3);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_4;
		L_4 = Mesh3d_Clone_m4F343E3E9B9AB2D43A95F3A8565380F8179A22E1(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___mesh__3 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___mesh__3), (void*)G_B3_0);
		// poseTransformMatrix_ = other.poseTransformMatrix_ != null ? other.poseTransformMatrix_.Clone() : null;
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_5 = ___other0;
		NullCheck(L_5);
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_6 = L_5->___poseTransformMatrix__5;
		G_B4_0 = __this;
		if (L_6)
		{
			G_B5_0 = __this;
			goto IL_0030;
		}
	}
	{
		G_B6_0 = ((MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)(NULL));
		G_B6_1 = G_B4_0;
		goto IL_003b;
	}

IL_0030:
	{
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_7 = ___other0;
		NullCheck(L_7);
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_8 = L_7->___poseTransformMatrix__5;
		NullCheck(L_8);
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_9;
		L_9 = MatrixData_Clone_mB2E95E948CEA61E4589DC49EEC3DC2CB6FD707C2(L_8, NULL);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
	}

IL_003b:
	{
		NullCheck(G_B6_1);
		G_B6_1->___poseTransformMatrix__5 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___poseTransformMatrix__5), (void*)G_B6_0);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_10 = ___other0;
		NullCheck(L_10);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11 = L_10->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12;
		L_12 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_11, NULL);
		__this->____unknownFields_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_12);
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.FaceGeometry Mediapipe.FaceGeometry.FaceGeometry::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* FaceGeometry_Clone_m10A2DEB9CA81CD16AFF5141F78D542851A2ACC06 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* V_0 = NULL;
	{
		// return new FaceGeometry(this);
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_0 = (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E*)il2cpp_codegen_object_new(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FaceGeometry__ctor_mC77FEB546FE612044AB48ED4D3F1AD0976671DE6(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_1 = V_0;
		return L_1;
	}
}
// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.FaceGeometry::get_Mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) 
{
	Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* V_0 = NULL;
	{
		// get { return mesh_; }
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = __this->___mesh__3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mesh_; }
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::set_Mesh(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_set_Mesh_m2732ADEB0439CD5160FC3BFF6D81B4F26266AC07 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___value0, const RuntimeMethod* method) 
{
	{
		// mesh_ = value;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = ___value0;
		__this->___mesh__3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh__3), (void*)L_0);
		// }
		return;
	}
}
// Mediapipe.MatrixData Mediapipe.FaceGeometry.FaceGeometry::get_PoseTransformMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) 
{
	MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* V_0 = NULL;
	{
		// get { return poseTransformMatrix_; }
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_0 = __this->___poseTransformMatrix__5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return poseTransformMatrix_; }
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::set_PoseTransformMatrix(Mediapipe.MatrixData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_set_PoseTransformMatrix_m314F58E8CAB7EB9269F3F5FD5EF9065BEB1B6E56 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* ___value0, const RuntimeMethod* method) 
{
	{
		// poseTransformMatrix_ = value;
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_0 = ___value0;
		__this->___poseTransformMatrix__5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poseTransformMatrix__5), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.FaceGeometry::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceGeometry_Equals_m9484DB571FB1E8A409474D939FFFB818C34ED19B (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Equals(other as FaceGeometry);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = FaceGeometry_Equals_m60CC7958F225AAA24655092656C97A9769D03465(__this, ((FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E*)IsInstSealed((RuntimeObject*)L_0, FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mediapipe.FaceGeometry.FaceGeometry::Equals(Mediapipe.FaceGeometry.FaceGeometry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceGeometry_Equals_m60CC7958F225AAA24655092656C97A9769D03465 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (ReferenceEquals(other, null)) {
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0069;
	}

IL_000e:
	{
		// if (ReferenceEquals(other, this)) {
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_2 = ___other0;
		V_2 = (bool)((((RuntimeObject*)(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E*)L_2) == ((RuntimeObject*)(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E*)__this))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_001b:
	{
		// if (!object.Equals(Mesh, other.Mesh)) return false;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_4;
		L_4 = FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF(__this, NULL);
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_5 = ___other0;
		NullCheck(L_5);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_6;
		L_6 = FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF(L_5, NULL);
		bool L_7;
		L_7 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_4, L_6, NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		// if (!object.Equals(Mesh, other.Mesh)) return false;
		V_1 = (bool)0;
		goto IL_0069;
	}

IL_0037:
	{
		// if (!object.Equals(PoseTransformMatrix, other.PoseTransformMatrix)) return false;
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_9;
		L_9 = FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6(__this, NULL);
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_10 = ___other0;
		NullCheck(L_10);
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_11;
		L_11 = FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6(L_10, NULL);
		bool L_12;
		L_12 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_9, L_11, NULL);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		// if (!object.Equals(PoseTransformMatrix, other.PoseTransformMatrix)) return false;
		V_1 = (bool)0;
		goto IL_0069;
	}

IL_0055:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_14 = __this->____unknownFields_1;
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_15 = ___other0;
		NullCheck(L_15);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_16 = L_15->____unknownFields_1;
		bool L_17;
		L_17 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_14, L_16, NULL);
		V_1 = L_17;
		goto IL_0069;
	}

IL_0069:
	{
		// }
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Int32 Mediapipe.FaceGeometry.FaceGeometry::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceGeometry_GetHashCode_m7E9A36BAB53FA6F328774318F413DDFF9F44609F (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (mesh_ != null) hash ^= Mesh.GetHashCode();
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = __this->___mesh__3;
		V_1 = (bool)((!(((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (mesh_ != null) hash ^= Mesh.GetHashCode();
		int32_t L_2 = V_0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_3;
		L_3 = FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		V_0 = ((int32_t)(L_2^L_4));
	}

IL_001e:
	{
		// if (poseTransformMatrix_ != null) hash ^= PoseTransformMatrix.GetHashCode();
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_5 = __this->___poseTransformMatrix__5;
		V_2 = (bool)((!(((RuntimeObject*)(MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// if (poseTransformMatrix_ != null) hash ^= PoseTransformMatrix.GetHashCode();
		int32_t L_7 = V_0;
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_8;
		L_8 = FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		V_0 = ((int32_t)(L_7^L_9));
	}

IL_0039:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		V_3 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_12 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_13);
		V_0 = ((int32_t)(L_12^L_14));
	}

IL_0056:
	{
		// return hash;
		int32_t L_15 = V_0;
		V_4 = L_15;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		int32_t L_16 = V_4;
		return L_16;
	}
}
// System.String Mediapipe.FaceGeometry.FaceGeometry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceGeometry_ToString_m2CC469267A08C3DFDF144A6B7A894D70BDC113C0 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_WriteTo_m22492A33D7BD0C52440B3B9CA5DBE8BE7E72D44C (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_mA0CF7B57C9A59596421D951BCAE5516C8B540BC0 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (mesh_ != null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = __this->___mesh__3;
		V_0 = (bool)((!(((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// output.WriteRawTag(10);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_2, (uint8_t)((int32_t)10), NULL);
		// output.WriteMessage(Mesh);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_3 = ___output0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_4;
		L_4 = FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF(__this, NULL);
		WriteContext_WriteMessage_m2F77C0E66BE30E7D27F74713F4C2967F9CB67575(L_3, L_4, NULL);
	}

IL_0026:
	{
		// if (poseTransformMatrix_ != null) {
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_5 = __this->___poseTransformMatrix__5;
		V_1 = (bool)((!(((RuntimeObject*)(MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// output.WriteRawTag(18);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_7 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_7, (uint8_t)((int32_t)18), NULL);
		// output.WriteMessage(PoseTransformMatrix);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_8 = ___output0;
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_9;
		L_9 = FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6(__this, NULL);
		WriteContext_WriteMessage_m2F77C0E66BE30E7D27F74713F4C2967F9CB67575(L_8, L_9, NULL);
	}

IL_004b:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		V_2 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_13 = ___output0;
		NullCheck(L_12);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_12, L_13, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Int32 Mediapipe.FaceGeometry.FaceGeometry::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceGeometry_CalculateSize_m8034C43DF11DD110AAB39EAC3FBA9DC21CE6D5EE (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (mesh_ != null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = __this->___mesh__3;
		V_1 = (bool)((!(((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeMessageSize(Mesh);
		int32_t L_2 = V_0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_3;
		L_3 = FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeMessageSize_m96CA0965A80BAE333592894886B82CF0F5B357C2(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(1, L_4))));
	}

IL_0022:
	{
		// if (poseTransformMatrix_ != null) {
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_5 = __this->___poseTransformMatrix__5;
		V_2 = (bool)((!(((RuntimeObject*)(MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeMessageSize(PoseTransformMatrix);
		int32_t L_7 = V_0;
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_8;
		L_8 = FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = CodedOutputStream_ComputeMessageSize_m96CA0965A80BAE333592894886B82CF0F5B357C2(L_8, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_add(1, L_9))));
	}

IL_0041:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		V_3 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_12 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_13, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, L_14));
	}

IL_005e:
	{
		// return size;
		int32_t L_15 = V_0;
		V_4 = L_15;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		int32_t L_16 = V_4;
		return L_16;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::MergeFrom(Mediapipe.FaceGeometry.FaceGeometry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_MergeFrom_m4FD57B12A0D739C985E88A9BC45F8594E08F4D41 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (other == null) {
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_00a0;
	}

IL_000f:
	{
		// if (other.mesh_ != null) {
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_2 = ___other0;
		NullCheck(L_2);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_3 = L_2->___mesh__3;
		V_1 = (bool)((!(((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// if (mesh_ == null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_5 = __this->___mesh__3;
		V_2 = (bool)((((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// Mesh = new global::Mediapipe.FaceGeometry.Mesh3d();
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_7 = (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)il2cpp_codegen_object_new(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Mesh3d__ctor_m299396DE2810219E16F96B4F86D7FE29021A7A13(L_7, NULL);
		FaceGeometry_set_Mesh_m2732ADEB0439CD5160FC3BFF6D81B4F26266AC07(__this, L_7, NULL);
	}

IL_0038:
	{
		// Mesh.MergeFrom(other.Mesh);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_8;
		L_8 = FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF(__this, NULL);
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_9 = ___other0;
		NullCheck(L_9);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_10;
		L_10 = FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF(L_9, NULL);
		NullCheck(L_8);
		Mesh3d_MergeFrom_mCE1540AA9756A990AEB6F546761A1316662ADE6C(L_8, L_10, NULL);
	}

IL_004b:
	{
		// if (other.poseTransformMatrix_ != null) {
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_11 = ___other0;
		NullCheck(L_11);
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_12 = L_11->___poseTransformMatrix__5;
		V_3 = (bool)((!(((RuntimeObject*)(MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// if (poseTransformMatrix_ == null) {
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_14 = __this->___poseTransformMatrix__5;
		V_4 = (bool)((((RuntimeObject*)(MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		// PoseTransformMatrix = new global::Mediapipe.MatrixData();
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_16 = (MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)il2cpp_codegen_object_new(MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		MatrixData__ctor_m33551F79D9BA0DDAE56FB97595277A2709EC0CF5(L_16, NULL);
		FaceGeometry_set_PoseTransformMatrix_m314F58E8CAB7EB9269F3F5FD5EF9065BEB1B6E56(__this, L_16, NULL);
	}

IL_0076:
	{
		// PoseTransformMatrix.MergeFrom(other.PoseTransformMatrix);
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_17;
		L_17 = FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6(__this, NULL);
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_18 = ___other0;
		NullCheck(L_18);
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_19;
		L_19 = FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6(L_18, NULL);
		NullCheck(L_17);
		MatrixData_MergeFrom_mA3627EB7026C6226DA57148521E3A2CB8BB4C123(L_17, L_19, NULL);
	}

IL_0089:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_20 = __this->____unknownFields_1;
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_21 = ___other0;
		NullCheck(L_21);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_22 = L_21->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_23;
		L_23 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_20, L_22, NULL);
		__this->____unknownFields_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_23);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_MergeFrom_mC9FEC8803F4EFC26CE321C1E855C34838C8817C1 (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m82DF66F91A3E3FFAD817126D5517D3C05F1EF8FE (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		goto IL_0086;
	}

IL_0006:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		V_2 = L_0;
		uint32_t L_1 = V_2;
		V_1 = L_1;
		uint32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		uint32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)18))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0019;
	}

IL_0019:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_5 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_6;
		L_6 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_4, L_5, NULL);
		__this->____unknownFields_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_6);
		// break;
		goto IL_0085;
	}

IL_002d:
	{
		// if (mesh_ == null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_7 = __this->___mesh__3;
		V_3 = (bool)((((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// Mesh = new global::Mediapipe.FaceGeometry.Mesh3d();
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_9 = (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)il2cpp_codegen_object_new(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Mesh3d__ctor_m299396DE2810219E16F96B4F86D7FE29021A7A13(L_9, NULL);
		FaceGeometry_set_Mesh_m2732ADEB0439CD5160FC3BFF6D81B4F26266AC07(__this, L_9, NULL);
	}

IL_0049:
	{
		// input.ReadMessage(Mesh);
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_10 = ___input0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_11;
		L_11 = FaceGeometry_get_Mesh_m5925C8724A467FB27E6BCE044FE1558C8AADC1EF(__this, NULL);
		ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline(L_10, L_11, NULL);
		// break;
		goto IL_0085;
	}

IL_0058:
	{
		// if (poseTransformMatrix_ == null) {
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_12 = __this->___poseTransformMatrix__5;
		V_4 = (bool)((((RuntimeObject*)(MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		// PoseTransformMatrix = new global::Mediapipe.MatrixData();
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_14 = (MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B*)il2cpp_codegen_object_new(MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		MatrixData__ctor_m33551F79D9BA0DDAE56FB97595277A2709EC0CF5(L_14, NULL);
		FaceGeometry_set_PoseTransformMatrix_m314F58E8CAB7EB9269F3F5FD5EF9065BEB1B6E56(__this, L_14, NULL);
	}

IL_0076:
	{
		// input.ReadMessage(PoseTransformMatrix);
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_15 = ___input0;
		MatrixData_t99D69FD91EEB2FBB73E189194FB7C66A5C9FFB9B* L_16;
		L_16 = FaceGeometry_get_PoseTransformMatrix_m641A0C4C4E446F62B20AA199447CD66E5BB940F6(__this, NULL);
		ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline(L_15, L_16, NULL);
		// break;
		goto IL_0085;
	}

IL_0085:
	{
	}

IL_0086:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_17 = ___input0;
		uint32_t L_18;
		L_18 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_17, NULL);
		uint32_t L_19 = L_18;
		V_0 = L_19;
		V_5 = (bool)((!(((uint32_t)L_19) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceGeometry__cctor_m36772DD709622526DCD1E3F07139F19DDA813987 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m949950F36274AC14476249A9587CA946918DBA41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__32_0_mC2A626F9A04F31CA87D84D0EF69D7E264BB0E0F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<FaceGeometry> _parser = new pb::MessageParser<FaceGeometry>(() => new FaceGeometry());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_il2cpp_TypeInfo_var);
		U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9* L_0 = ((U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7* L_1 = (Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7*)il2cpp_codegen_object_new(Func_1_tE3E677A989DA1B4855E41784B4653A44D60F5EA7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mA6DB2716D907C54FE614370F1D6574F5BE4A1007(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__32_0_mC2A626F9A04F31CA87D84D0EF69D7E264BB0E0F4_RuntimeMethod_var), NULL);
		MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716* L_2 = (MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716*)il2cpp_codegen_object_new(MessageParser_1_t9A9829E6D239B53EFD3C1D00E317520B18F30716_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_m949950F36274AC14476249A9587CA946918DBA41(L_2, L_1, MessageParser_1__ctor_m949950F36274AC14476249A9587CA946918DBA41_RuntimeMethod_var);
		((FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_StaticFields*)il2cpp_codegen_static_fields_for(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_StaticFields*)il2cpp_codegen_static_fields_for(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
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
// System.Void Mediapipe.FaceGeometry.FaceGeometry/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3D83A1891EE52B3A0639372C22D1AF0D7403F02C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9* L_0 = (U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9*)il2cpp_codegen_object_new(U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m712BE22A9279EA9B32877771E3827D1A5B601D4E(L_0, NULL);
		((U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.FaceGeometry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m712BE22A9279EA9B32877771E3827D1A5B601D4E (U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Mediapipe.FaceGeometry.FaceGeometry Mediapipe.FaceGeometry.FaceGeometry/<>c::<.cctor>b__32_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* U3CU3Ec_U3C_cctorU3Eb__32_0_mC2A626F9A04F31CA87D84D0EF69D7E264BB0E0F4 (U3CU3Ec_tECE9AC04DA10954BE3CB6341E0180AE20FE296C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<FaceGeometry> _parser = new pb::MessageParser<FaceGeometry>(() => new FaceGeometry());
		FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E* L_0 = (FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E*)il2cpp_codegen_object_new(FaceGeometry_t16AB5BE02B3DDCBAE99C79323D2AFBC65E992D2E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FaceGeometry__ctor_m410FAA2CF9C74E622F4413D463562E878F5DFF9A(L_0, NULL);
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
// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GeometryPipelineMetadataReflection_get_Descriptor_m7DAB52F82FE4A6C51EFE2B536BF4987FA5228EFE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_0 = NULL;
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var))->___descriptor_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return descriptor; }
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadataReflection__cctor_mE76ED7123BA1C2E64FCB45E0C6BA6D98769FFE53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSource_t9955D1EA6ECB6D5B727A2DB4518F27AD68ADEA62_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02ABCF9F5056489378969D5B528FF46CBCF4FCF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1745A44121BDC00664387D287F571C36D972D21F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral178532CB79F23A598950040A5EB274B566D59364);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21FC2C5D6480BB0DA10F76D33ED938197744B6F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral300FC9B7294EEEFBC33F6E50ABB12D9F829E3E1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32BE1947FEB0B3A1EE22505D8B2625B4A285AC98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47F7500B29C0D10436AFBD9007865B858C1E7880);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DAF6171D2B99FCF76CF5EA38DD36C9E1DA3837A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E3E5CD703380D6872389E79617603C265FE6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral833E1B8B5510CECB320BF75FC55D423A29324076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973DFE1C9B03BFB4966DDA45567A1BEF02F649C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA00183B24CDC302DDD09A6B4AAD27C6E16D8A5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF202E23EBA94546CA86ECEFFB141FDFD0BDE206);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4005E3C3FD158E447DAEDC5D4AD65314C35F0D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE376FCD4A340AF9C59756C5970723E75E1C69EE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC77BF55C00E10F63F14098D8E96998543F32135);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE5A21FC7F16F5A3C8DCA695B4E178C39598A0B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D30F2A7FBC2D9ECB2D66B13DA2C58549678CDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF95194DEB9E0422C969FE59CAD91136BD80DE9C8);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "CkdtZWRpYXBpcGUvbW9kdWxlcy9mYWNlX2dlb21ldHJ5L3Byb3Rvcy9nZW9t",
		//       "ZXRyeV9waXBlbGluZV9tZXRhZGF0YS5wcm90bxIXbWVkaWFwaXBlLmZhY2Vf",
		//       "Z2VvbWV0cnkaNG1lZGlhcGlwZS9tb2R1bGVzL2ZhY2VfZ2VvbWV0cnkvcHJv",
		//       "dG9zL21lc2hfM2QucHJvdG8iOgoTV2VpZ2h0ZWRMYW5kbWFya1JlZhITCgts",
		//       "YW5kbWFya19pZBgBIAEoDRIOCgZ3ZWlnaHQYAiABKAIi4AEKGEdlb21ldHJ5",
		//       "UGlwZWxpbmVNZXRhZGF0YRI6CgxpbnB1dF9zb3VyY2UYAyABKA4yJC5tZWRp",
		//       "YXBpcGUuZmFjZV9nZW9tZXRyeS5JbnB1dFNvdXJjZRI3Cg5jYW5vbmljYWxf",
		//       "bWVzaBgBIAEoCzIfLm1lZGlhcGlwZS5mYWNlX2dlb21ldHJ5Lk1lc2gzZBJP",
		//       "Chlwcm9jcnVzdGVzX2xhbmRtYXJrX2Jhc2lzGAIgAygLMiwubWVkaWFwaXBl",
		//       "LmZhY2VfZ2VvbWV0cnkuV2VpZ2h0ZWRMYW5kbWFya1JlZipTCgtJbnB1dFNv",
		//       "dXJjZRILCgdERUZBVUxUEAASGgoWRkFDRV9MQU5ETUFSS19QSVBFTElORRAB",
		//       "EhsKF0ZBQ0VfREVURUNUSU9OX1BJUEVMSU5FEAJCSgopY29tLmdvb2dsZS5t",
		//       "ZWRpYXBpcGUubW9kdWxlcy5mYWNlZ2VvbWV0cnlCHUdlb21ldHJ5UGlwZWxp",
		//       "bmVNZXRhZGF0YVByb3Rv"));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1745A44121BDC00664387D287F571C36D972D21F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1745A44121BDC00664387D287F571C36D972D21F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral6DAF6171D2B99FCF76CF5EA38DD36C9E1DA3837A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral6DAF6171D2B99FCF76CF5EA38DD36C9E1DA3837A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralAA00183B24CDC302DDD09A6B4AAD27C6E16D8A5A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAA00183B24CDC302DDD09A6B4AAD27C6E16D8A5A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralF0D30F2A7FBC2D9ECB2D66B13DA2C58549678CDB);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF0D30F2A7FBC2D9ECB2D66B13DA2C58549678CDB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralD4005E3C3FD158E447DAEDC5D4AD65314C35F0D1);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralD4005E3C3FD158E447DAEDC5D4AD65314C35F0D1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral973DFE1C9B03BFB4966DDA45567A1BEF02F649C7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral973DFE1C9B03BFB4966DDA45567A1BEF02F649C7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral78E3E5CD703380D6872389E79617603C265FE6EB);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral78E3E5CD703380D6872389E79617603C265FE6EB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral32BE1947FEB0B3A1EE22505D8B2625B4A285AC98);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral32BE1947FEB0B3A1EE22505D8B2625B4A285AC98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralAF202E23EBA94546CA86ECEFFB141FDFD0BDE206);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralAF202E23EBA94546CA86ECEFFB141FDFD0BDE206);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral02ABCF9F5056489378969D5B528FF46CBCF4FCF1);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral02ABCF9F5056489378969D5B528FF46CBCF4FCF1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral300FC9B7294EEEFBC33F6E50ABB12D9F829E3E1A);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral300FC9B7294EEEFBC33F6E50ABB12D9F829E3E1A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral833E1B8B5510CECB320BF75FC55D423A29324076);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral833E1B8B5510CECB320BF75FC55D423A29324076);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralF95194DEB9E0422C969FE59CAD91136BD80DE9C8);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralF95194DEB9E0422C969FE59CAD91136BD80DE9C8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralEE5A21FC7F16F5A3C8DCA695B4E178C39598A0B2);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralEE5A21FC7F16F5A3C8DCA695B4E178C39598A0B2);
		String_t* L_15;
		L_15 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_15, NULL);
		V_0 = L_16;
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { global::Mediapipe.FaceGeometry.Mesh3DReflection.Descriptor, },
		//     new pbr::GeneratedClrTypeInfo(new[] {typeof(global::Mediapipe.FaceGeometry.InputSource), }, null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Mediapipe.FaceGeometry.WeightedLandmarkRef), global::Mediapipe.FaceGeometry.WeightedLandmarkRef.Parser, new[]{ "LandmarkId", "Weight" }, null, null, null, null),
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Mediapipe.FaceGeometry.GeometryPipelineMetadata), global::Mediapipe.FaceGeometry.GeometryPipelineMetadata.Parser, new[]{ "InputSource", "CanonicalMesh", "ProcrustesLandmarkBasis" }, null, null, null, null)
		//     }));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_18 = (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)SZArrayNew(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var, (uint32_t)1);
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_19 = L_18;
		il2cpp_codegen_runtime_class_init_inline(Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_20;
		L_20 = Mesh3DReflection_get_Descriptor_m446CB05BFADBC6755D03CD431D9B1A218458211A(NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE*)L_20);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = L_21;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (InputSource_t9955D1EA6ECB6D5B727A2DB4518F27AD68ADEA62_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_24);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_25 = (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var, (uint32_t)2);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_26 = L_25;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* L_29;
		L_29 = WeightedLandmarkRef_get_Parser_mB1E47745E0449C2E9A983F3F3294ED14B742E84C(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral21FC2C5D6480BB0DA10F76D33ED938197744B6F3);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral21FC2C5D6480BB0DA10F76D33ED938197744B6F3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralE376FCD4A340AF9C59756C5970723E75E1C69EE2);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE376FCD4A340AF9C59756C5970723E75E1C69EE2);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_33 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_33, L_28, L_29, L_32, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_33);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_33);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_34 = L_26;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* L_37;
		L_37 = GeometryPipelineMetadata_get_Parser_m31C981FBC62922D5919CB89622EF6BFC27E71087(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralEC77BF55C00E10F63F14098D8E96998543F32135);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC77BF55C00E10F63F14098D8E96998543F32135);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral47F7500B29C0D10436AFBD9007865B858C1E7880);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral47F7500B29C0D10436AFBD9007865B858C1E7880);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral178532CB79F23A598950040A5EB274B566D59364);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral178532CB79F23A598950040A5EB274B566D59364);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_42 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_42, L_36, L_37, L_41, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_42);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_42);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_43 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		GeneratedClrTypeInfo__ctor_m6C6F4A657670674B74F3AF88AA06251E4C8DD022(L_43, L_22, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_44;
		L_44 = FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823(L_17, L_19, L_43, NULL);
		((GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var))->___descriptor_0 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var))->___descriptor_0), (void*)L_44);
		// }
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
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.WeightedLandmarkRef> Mediapipe.FaceGeometry.WeightedLandmarkRef::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* WeightedLandmarkRef_get_Parser_mB1E47745E0449C2E9A983F3F3294ED14B742E84C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* V_0 = NULL;
	{
		// public static pb::MessageParser<WeightedLandmarkRef> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* L_0 = ((WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_StaticFields*)il2cpp_codegen_static_fields_for(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var))->____parser_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// public static pb::MessageParser<WeightedLandmarkRef> Parser { get { return _parser; } }
		MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.WeightedLandmarkRef::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* WeightedLandmarkRef_get_Descriptor_m3B51972CEF342165E769BE0F8AE9916AED83E0AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return global::Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection.Descriptor.MessageTypes[0]; }
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = GeometryPipelineMetadataReflection_get_Descriptor_m7DAB52F82FE4A6C51EFE2B536BF4987FA5228EFE(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 0);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// get { return global::Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection.Descriptor.MessageTypes[0]; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.WeightedLandmarkRef::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* WeightedLandmarkRef_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m0D1C0961CCFACF909BF291A3BF4DB2FDA464E775 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = WeightedLandmarkRef_get_Descriptor_m3B51972CEF342165E769BE0F8AE9916AED83E0AD(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Descriptor; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef__ctor_m4CAD1F585C41AE97691771C0310BFFAB65F271D2 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	{
		// public WeightedLandmarkRef() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::.ctor(Mediapipe.FaceGeometry.WeightedLandmarkRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef__ctor_m44FF573D41AF2674AEDBF17BBB6BF3E71C3037AE (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* ___other0, const RuntimeMethod* method) 
{
	{
		// public WeightedLandmarkRef(WeightedLandmarkRef other) : this() {
		WeightedLandmarkRef__ctor_m4CAD1F585C41AE97691771C0310BFFAB65F271D2(__this, NULL);
		// _hasBits0 = other._hasBits0;
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->____hasBits0_2;
		__this->____hasBits0_2 = L_1;
		// landmarkId_ = other.landmarkId_;
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_2 = ___other0;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___landmarkId__5;
		__this->___landmarkId__5 = L_3;
		// weight_ = other.weight_;
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_4 = ___other0;
		NullCheck(L_4);
		float L_5 = L_4->___weight__8;
		__this->___weight__8 = L_5;
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_6 = ___other0;
		NullCheck(L_6);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_7 = L_6->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_8;
		L_8 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_7, NULL);
		__this->____unknownFields_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_8);
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.WeightedLandmarkRef Mediapipe.FaceGeometry.WeightedLandmarkRef::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* WeightedLandmarkRef_Clone_m607DD34A8572F29C249E8DF3A6F7E5BBDEA3A1A2 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* V_0 = NULL;
	{
		// return new WeightedLandmarkRef(this);
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_0 = (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18*)il2cpp_codegen_object_new(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WeightedLandmarkRef__ctor_m44FF573D41AF2674AEDBF17BBB6BF3E71C3037AE(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 Mediapipe.FaceGeometry.WeightedLandmarkRef::get_LandmarkId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WeightedLandmarkRef_get_LandmarkId_m9869C82522A519D941F9F49DB2B308F11A71C13F (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		// get { if ((_hasBits0 & 1) != 0) { return landmarkId_; } else { return LandmarkIdDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 1) != 0) { return landmarkId_; } else { return LandmarkIdDefaultValue; } }
		uint32_t L_2 = __this->___landmarkId__5;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 1) != 0) { return landmarkId_; } else { return LandmarkIdDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		uint32_t L_3 = ((WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_StaticFields*)il2cpp_codegen_static_fields_for(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var))->___LandmarkIdDefaultValue_4;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 1) != 0) { return landmarkId_; } else { return LandmarkIdDefaultValue; } }
		uint32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::set_LandmarkId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_set_LandmarkId_m332F092357CEF9598B302D297F6FCB89406387C5 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|1));
		// landmarkId_ = value;
		uint32_t L_1 = ___value0;
		__this->___landmarkId__5 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.WeightedLandmarkRef::get_HasLandmarkId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeightedLandmarkRef_get_HasLandmarkId_m8CDB286D577B1C7D472129B2E91A1C4F9D337D23 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 1) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 1) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::ClearLandmarkId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_ClearLandmarkId_mF2F20C4162BB4498E805D390F1D97325E7EB398E (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-2)));
		// }
		return;
	}
}
// System.Single Mediapipe.FaceGeometry.WeightedLandmarkRef::get_Weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeightedLandmarkRef_get_Weight_m3A6720EAA4E1F11F51EDA7B3C0BBFADC4C1D07F7 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// get { if ((_hasBits0 & 2) != 0) { return weight_; } else { return WeightDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&2))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 2) != 0) { return weight_; } else { return WeightDefaultValue; } }
		float L_2 = __this->___weight__8;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 2) != 0) { return weight_; } else { return WeightDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		float L_3 = ((WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_StaticFields*)il2cpp_codegen_static_fields_for(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var))->___WeightDefaultValue_7;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 2) != 0) { return weight_; } else { return WeightDefaultValue; } }
		float L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::set_Weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_set_Weight_m8B6ACE76BFC91C4A0E2B1E73F15F560A0802A0AD (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 2;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|2));
		// weight_ = value;
		float L_1 = ___value0;
		__this->___weight__8 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.WeightedLandmarkRef::get_HasWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeightedLandmarkRef_get_HasWeight_m8995A438CE86C624F1968B0AC48781FE101555BD (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 2) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 2) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::ClearWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_ClearWeight_m7FA682E4C02A2BE81D69926E214699A543844B02 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~2;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-3)));
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.WeightedLandmarkRef::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeightedLandmarkRef_Equals_m11A1818A0438F192482C72CBB5CE9E6717BC820C (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Equals(other as WeightedLandmarkRef);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = WeightedLandmarkRef_Equals_m0DADBA825A9F45D6C95C9F507E2199FBBE3751C3(__this, ((WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18*)IsInstSealed((RuntimeObject*)L_0, WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mediapipe.FaceGeometry.WeightedLandmarkRef::Equals(Mediapipe.FaceGeometry.WeightedLandmarkRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeightedLandmarkRef_Equals_m0DADBA825A9F45D6C95C9F507E2199FBBE3751C3 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (ReferenceEquals(other, null)) {
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_006b;
	}

IL_000e:
	{
		// if (ReferenceEquals(other, this)) {
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_2 = ___other0;
		V_2 = (bool)((((RuntimeObject*)(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18*)L_2) == ((RuntimeObject*)(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18*)__this))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_006b;
	}

IL_001b:
	{
		// if (LandmarkId != other.LandmarkId) return false;
		uint32_t L_4;
		L_4 = WeightedLandmarkRef_get_LandmarkId_m9869C82522A519D941F9F49DB2B308F11A71C13F(__this, NULL);
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_5 = ___other0;
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = WeightedLandmarkRef_get_LandmarkId_m9869C82522A519D941F9F49DB2B308F11A71C13F(L_5, NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// if (LandmarkId != other.LandmarkId) return false;
		V_1 = (bool)0;
		goto IL_006b;
	}

IL_0034:
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Weight, other.Weight)) return false;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_8;
		L_8 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_9;
		L_9 = WeightedLandmarkRef_get_Weight_m3A6720EAA4E1F11F51EDA7B3C0BBFADC4C1D07F7(__this, NULL);
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_10 = ___other0;
		NullCheck(L_10);
		float L_11;
		L_11 = WeightedLandmarkRef_get_Weight_m3A6720EAA4E1F11F51EDA7B3C0BBFADC4C1D07F7(L_10, NULL);
		NullCheck(L_8);
		bool L_12;
		L_12 = VirtualFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, L_8, L_9, L_11);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		// if (!pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.Equals(Weight, other.Weight)) return false;
		V_1 = (bool)0;
		goto IL_006b;
	}

IL_0057:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_14 = __this->____unknownFields_1;
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_15 = ___other0;
		NullCheck(L_15);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_16 = L_15->____unknownFields_1;
		bool L_17;
		L_17 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_14, L_16, NULL);
		V_1 = L_17;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Int32 Mediapipe.FaceGeometry.WeightedLandmarkRef::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeightedLandmarkRef_GetHashCode_m5C418CF582F2E9FFB9F50FE4AAB80922694D42DA (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (HasLandmarkId) hash ^= LandmarkId.GetHashCode();
		bool L_0;
		L_0 = WeightedLandmarkRef_get_HasLandmarkId_m8CDB286D577B1C7D472129B2E91A1C4F9D337D23(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (HasLandmarkId) hash ^= LandmarkId.GetHashCode();
		int32_t L_2 = V_0;
		uint32_t L_3;
		L_3 = WeightedLandmarkRef_get_LandmarkId_m9869C82522A519D941F9F49DB2B308F11A71C13F(__this, NULL);
		V_2 = L_3;
		int32_t L_4;
		L_4 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_2), NULL);
		V_0 = ((int32_t)(L_2^L_4));
	}

IL_001e:
	{
		// if (HasWeight) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Weight);
		bool L_5;
		L_5 = WeightedLandmarkRef_get_HasWeight_m8995A438CE86C624F1968B0AC48781FE101555BD(__this, NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// if (HasWeight) hash ^= pbc::ProtobufEqualityComparers.BitwiseSingleEqualityComparer.GetHashCode(Weight);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_8;
		L_8 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline(NULL);
		float L_9;
		L_9 = WeightedLandmarkRef_get_Weight_m3A6720EAA4E1F11F51EDA7B3C0BBFADC4C1D07F7(__this, NULL);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = VirtualFuncInvoker1< int32_t, float >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, L_8, L_9);
		V_0 = ((int32_t)(L_7^L_10));
	}

IL_003b:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11 = __this->____unknownFields_1;
		V_4 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_13 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_14 = __this->____unknownFields_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_14);
		V_0 = ((int32_t)(L_13^L_15));
	}

IL_005a:
	{
		// return hash;
		int32_t L_16 = V_0;
		V_5 = L_16;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		int32_t L_17 = V_5;
		return L_17;
	}
}
// System.String Mediapipe.FaceGeometry.WeightedLandmarkRef::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WeightedLandmarkRef_ToString_m077A348A6A66FB6DC628BC4E2F5225FDC72E2B1E (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_WriteTo_m6720535F5234F47155FC3A95FA3CCB83DE278B52 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_m23EAEE24B1F96E6990165680F9C34A4696E1C8D0 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (HasLandmarkId) {
		bool L_0;
		L_0 = WeightedLandmarkRef_get_HasLandmarkId_m8CDB286D577B1C7D472129B2E91A1C4F9D337D23(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// output.WriteRawTag(8);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_2, (uint8_t)8, NULL);
		// output.WriteUInt32(LandmarkId);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_3 = ___output0;
		uint32_t L_4;
		L_4 = WeightedLandmarkRef_get_LandmarkId_m9869C82522A519D941F9F49DB2B308F11A71C13F(__this, NULL);
		WriteContext_WriteUInt32_m8FB1F179695D99942D1F4156A3F2306A99CBA9B3(L_3, L_4, NULL);
	}

IL_0022:
	{
		// if (HasWeight) {
		bool L_5;
		L_5 = WeightedLandmarkRef_get_HasWeight_m8995A438CE86C624F1968B0AC48781FE101555BD(__this, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// output.WriteRawTag(21);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_7 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_7, (uint8_t)((int32_t)21), NULL);
		// output.WriteFloat(Weight);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_8 = ___output0;
		float L_9;
		L_9 = WeightedLandmarkRef_get_Weight_m3A6720EAA4E1F11F51EDA7B3C0BBFADC4C1D07F7(__this, NULL);
		WriteContext_WriteFloat_m21105D66CB04BD793C0C21F2C30B1EC1912029C3(L_8, L_9, NULL);
	}

IL_0044:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_10 = __this->____unknownFields_1;
		V_2 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_13 = ___output0;
		NullCheck(L_12);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_12, L_13, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Int32 Mediapipe.FaceGeometry.WeightedLandmarkRef::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeightedLandmarkRef_CalculateSize_m12813E1C283C63C715A679DCAE7A5A51ECFECDA2 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (HasLandmarkId) {
		bool L_0;
		L_0 = WeightedLandmarkRef_get_HasLandmarkId_m8CDB286D577B1C7D472129B2E91A1C4F9D337D23(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeUInt32Size(LandmarkId);
		int32_t L_2 = V_0;
		uint32_t L_3;
		L_3 = WeightedLandmarkRef_get_LandmarkId_m9869C82522A519D941F9F49DB2B308F11A71C13F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeUInt32Size_m1366404BD8A221D39D2A1B86D43384700DACC81C(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(1, L_4))));
	}

IL_001f:
	{
		// if (HasWeight) {
		bool L_5;
		L_5 = WeightedLandmarkRef_get_HasWeight_m8995A438CE86C624F1968B0AC48781FE101555BD(__this, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// size += 1 + 4;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 5));
	}

IL_002f:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_8 = __this->____unknownFields_1;
		V_3 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_10 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11 = __this->____unknownFields_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, L_12));
	}

IL_004c:
	{
		// return size;
		int32_t L_13 = V_0;
		V_4 = L_13;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		int32_t L_14 = V_4;
		return L_14;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::MergeFrom(Mediapipe.FaceGeometry.WeightedLandmarkRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_MergeFrom_mA43877A174670248E8F8D171674CB307D6438FBF (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (other == null) {
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_0055;
	}

IL_000c:
	{
		// if (other.HasLandmarkId) {
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = WeightedLandmarkRef_get_HasLandmarkId_m8CDB286D577B1C7D472129B2E91A1C4F9D337D23(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// LandmarkId = other.LandmarkId;
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_5 = ___other0;
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = WeightedLandmarkRef_get_LandmarkId_m9869C82522A519D941F9F49DB2B308F11A71C13F(L_5, NULL);
		WeightedLandmarkRef_set_LandmarkId_m332F092357CEF9598B302D297F6FCB89406387C5(__this, L_6, NULL);
	}

IL_0025:
	{
		// if (other.HasWeight) {
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = WeightedLandmarkRef_get_HasWeight_m8995A438CE86C624F1968B0AC48781FE101555BD(L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// Weight = other.Weight;
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_10 = ___other0;
		NullCheck(L_10);
		float L_11;
		L_11 = WeightedLandmarkRef_get_Weight_m3A6720EAA4E1F11F51EDA7B3C0BBFADC4C1D07F7(L_10, NULL);
		WeightedLandmarkRef_set_Weight_m8B6ACE76BFC91C4A0E2B1E73F15F560A0802A0AD(__this, L_11, NULL);
	}

IL_003e:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_12 = __this->____unknownFields_1;
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_13 = ___other0;
		NullCheck(L_13);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_14 = L_13->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_15;
		L_15 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_12, L_14, NULL);
		__this->____unknownFields_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_15);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_MergeFrom_m4F9A6235C2552DE334778502709EB9719FA675DE (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_mAF5D79AA4A9C4E6AD3072C84C39CC908F4C35966 (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	{
		goto IL_004a;
	}

IL_0003:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		V_2 = L_0;
		uint32_t L_1 = V_2;
		V_1 = L_1;
		uint32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		uint32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)21))))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0015;
	}

IL_0015:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_4 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_5 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_6;
		L_6 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_4, L_5, NULL);
		__this->____unknownFields_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_6);
		// break;
		goto IL_0049;
	}

IL_0029:
	{
		// LandmarkId = input.ReadUInt32();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_7 = ___input0;
		uint32_t L_8;
		L_8 = ParseContext_ReadUInt32_m290E926290AD8F726D2E5E7E681F4F9316D0AC8C_inline(L_7, NULL);
		WeightedLandmarkRef_set_LandmarkId_m332F092357CEF9598B302D297F6FCB89406387C5(__this, L_8, NULL);
		// break;
		goto IL_0049;
	}

IL_0039:
	{
		// Weight = input.ReadFloat();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_9 = ___input0;
		float L_10;
		L_10 = ParseContext_ReadFloat_mCED59543DF5DE0A97E3CAF2075DCD3DD4DC7CDD8_inline(L_9, NULL);
		WeightedLandmarkRef_set_Weight_m8B6ACE76BFC91C4A0E2B1E73F15F560A0802A0AD(__this, L_10, NULL);
		// break;
		goto IL_0049;
	}

IL_0049:
	{
	}

IL_004a:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_11 = ___input0;
		uint32_t L_12;
		L_12 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_11, NULL);
		uint32_t L_13 = L_12;
		V_0 = L_13;
		V_3 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightedLandmarkRef__cctor_m6675B8892B4BACAE0F41BC3AB120D153C3826235 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m1CB7D2E5F94E6486E2252DA47F84A6F5765DFAB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__41_0_m39932B06BB4FD2D099447F7853494DF166300F97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<WeightedLandmarkRef> _parser = new pb::MessageParser<WeightedLandmarkRef>(() => new WeightedLandmarkRef());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_il2cpp_TypeInfo_var);
		U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053* L_0 = ((U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB* L_1 = (Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB*)il2cpp_codegen_object_new(Func_1_t14EFF4996E395828CAE636EC7BE1F1039E9F46DB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m0F2C4F7D8AB44EF021D1B19E717BFFA513F4B56F(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__41_0_m39932B06BB4FD2D099447F7853494DF166300F97_RuntimeMethod_var), NULL);
		MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* L_2 = (MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9*)il2cpp_codegen_object_new(MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_m1CB7D2E5F94E6486E2252DA47F84A6F5765DFAB1(L_2, L_1, MessageParser_1__ctor_m1CB7D2E5F94E6486E2252DA47F84A6F5765DFAB1_RuntimeMethod_var);
		((WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_StaticFields*)il2cpp_codegen_static_fields_for(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_StaticFields*)il2cpp_codegen_static_fields_for(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
		// private readonly static uint LandmarkIdDefaultValue = 0;
		((WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_StaticFields*)il2cpp_codegen_static_fields_for(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var))->___LandmarkIdDefaultValue_4 = 0;
		// private readonly static float WeightDefaultValue = 0F;
		((WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_StaticFields*)il2cpp_codegen_static_fields_for(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var))->___WeightDefaultValue_7 = (0.0f);
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
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCAD3654CA2BFE044606CE6AAB3A022038594BD4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053* L_0 = (U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053*)il2cpp_codegen_object_new(U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB0388380C3D8BB78B3952C9798DB98111932F232(L_0, NULL);
		((U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.WeightedLandmarkRef/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB0388380C3D8BB78B3952C9798DB98111932F232 (U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Mediapipe.FaceGeometry.WeightedLandmarkRef Mediapipe.FaceGeometry.WeightedLandmarkRef/<>c::<.cctor>b__41_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* U3CU3Ec_U3C_cctorU3Eb__41_0_m39932B06BB4FD2D099447F7853494DF166300F97 (U3CU3Ec_t3421EA9D9703A9E8D10DDACCD7BBD4482D099053* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<WeightedLandmarkRef> _parser = new pb::MessageParser<WeightedLandmarkRef>(() => new WeightedLandmarkRef());
		WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18* L_0 = (WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18*)il2cpp_codegen_object_new(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WeightedLandmarkRef__ctor_m4CAD1F585C41AE97691771C0310BFFAB65F271D2(L_0, NULL);
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
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.GeometryPipelineMetadata> Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* GeometryPipelineMetadata_get_Parser_m31C981FBC62922D5919CB89622EF6BFC27E71087 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* V_0 = NULL;
	{
		// public static pb::MessageParser<GeometryPipelineMetadata> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* L_0 = ((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->____parser_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// public static pb::MessageParser<GeometryPipelineMetadata> Parser { get { return _parser; } }
		MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* GeometryPipelineMetadata_get_Descriptor_mEF7C584032D36AF7350D80DD57A529F0CAEE35C8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return global::Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection.Descriptor.MessageTypes[1]; }
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadataReflection_t37E9E43479A1281755CE283CE5039C92668F0487_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = GeometryPipelineMetadataReflection_get_Descriptor_m7DAB52F82FE4A6C51EFE2B536BF4987FA5228EFE(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 1);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// get { return global::Mediapipe.FaceGeometry.GeometryPipelineMetadataReflection.Descriptor.MessageTypes[1]; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.GeometryPipelineMetadata::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* GeometryPipelineMetadata_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mFC5B5A1907254053D21A480357BCC1B016BEEE16 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = GeometryPipelineMetadata_get_Descriptor_mEF7C584032D36AF7350D80DD57A529F0CAEE35C8(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Descriptor; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata__ctor_m9B3AB179A9E74D3994188BAE58A5D221078FB878 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1__ctor_m6768ACA53064577BED72BB90964A8EB12BE397E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly pbc::RepeatedField<global::Mediapipe.FaceGeometry.WeightedLandmarkRef> procrustesLandmarkBasis_ = new pbc::RepeatedField<global::Mediapipe.FaceGeometry.WeightedLandmarkRef>();
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_0 = (RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB*)il2cpp_codegen_object_new(RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RepeatedField_1__ctor_m6768ACA53064577BED72BB90964A8EB12BE397E8(L_0, RepeatedField_1__ctor_m6768ACA53064577BED72BB90964A8EB12BE397E8_RuntimeMethod_var);
		__this->___procrustesLandmarkBasis__10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___procrustesLandmarkBasis__10), (void*)L_0);
		// public GeometryPipelineMetadata() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::.ctor(Mediapipe.FaceGeometry.GeometryPipelineMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata__ctor_m239F8875D74D4B2C1E8629E02E153FAA4EDAAB40 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Clone_m3560CCA58621F97DFB1BE9603C8D1FECFF084B1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* G_B2_0 = NULL;
	GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* G_B1_0 = NULL;
	Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* G_B3_0 = NULL;
	GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* G_B3_1 = NULL;
	{
		// public GeometryPipelineMetadata(GeometryPipelineMetadata other) : this() {
		GeometryPipelineMetadata__ctor_m9B3AB179A9E74D3994188BAE58A5D221078FB878(__this, NULL);
		// _hasBits0 = other._hasBits0;
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->____hasBits0_2;
		__this->____hasBits0_2 = L_1;
		// inputSource_ = other.inputSource_;
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___inputSource__5;
		__this->___inputSource__5 = L_3;
		// canonicalMesh_ = other.canonicalMesh_ != null ? other.canonicalMesh_.Clone() : null;
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_4 = ___other0;
		NullCheck(L_4);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_5 = L_4->___canonicalMesh__7;
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_002c:
	{
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_6 = ___other0;
		NullCheck(L_6);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_7 = L_6->___canonicalMesh__7;
		NullCheck(L_7);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_8;
		L_8 = Mesh3d_Clone_m4F343E3E9B9AB2D43A95F3A8565380F8179A22E1(L_7, NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		NullCheck(G_B3_1);
		G_B3_1->___canonicalMesh__7 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___canonicalMesh__7), (void*)G_B3_0);
		// procrustesLandmarkBasis_ = other.procrustesLandmarkBasis_.Clone();
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_9 = ___other0;
		NullCheck(L_9);
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_10 = L_9->___procrustesLandmarkBasis__10;
		NullCheck(L_10);
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_11;
		L_11 = RepeatedField_1_Clone_m3560CCA58621F97DFB1BE9603C8D1FECFF084B1E(L_10, RepeatedField_1_Clone_m3560CCA58621F97DFB1BE9603C8D1FECFF084B1E_RuntimeMethod_var);
		__this->___procrustesLandmarkBasis__10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___procrustesLandmarkBasis__10), (void*)L_11);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_12 = ___other0;
		NullCheck(L_12);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = L_12->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_14;
		L_14 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_13, NULL);
		__this->____unknownFields_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_14);
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.GeometryPipelineMetadata Mediapipe.FaceGeometry.GeometryPipelineMetadata::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* GeometryPipelineMetadata_Clone_mAF16B3750866654CF5CC79DE6164F0C340F6B6F1 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* V_0 = NULL;
	{
		// return new GeometryPipelineMetadata(this);
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_0 = (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261*)il2cpp_codegen_object_new(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GeometryPipelineMetadata__ctor_m239F8875D74D4B2C1E8629E02E153FAA4EDAAB40(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_1 = V_0;
		return L_1;
	}
}
// Mediapipe.FaceGeometry.InputSource Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_InputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeometryPipelineMetadata_get_InputSource_m830527A51062E42CC029323FCB5378B6E89D0B5D (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// get { if ((_hasBits0 & 1) != 0) { return inputSource_; } else { return InputSourceDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 1) != 0) { return inputSource_; } else { return InputSourceDefaultValue; } }
		int32_t L_2 = __this->___inputSource__5;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 1) != 0) { return inputSource_; } else { return InputSourceDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		int32_t L_3 = ((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->___InputSourceDefaultValue_4;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 1) != 0) { return inputSource_; } else { return InputSourceDefaultValue; } }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::set_InputSource(Mediapipe.FaceGeometry.InputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_set_InputSource_mE35BDECCFED965241B4FB8C5B53E6797A80429C1 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|1));
		// inputSource_ = value;
		int32_t L_1 = ___value0;
		__this->___inputSource__5 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_HasInputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryPipelineMetadata_get_HasInputSource_m4575A458AFAA8463BD3984CC1A9620EDEF1E7481 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 1) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 1) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::ClearInputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_ClearInputSource_mE8F58E53CF23A04301E512FA1D06C66181476FF8 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-2)));
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_CanonicalMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* V_0 = NULL;
	{
		// get { return canonicalMesh_; }
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = __this->___canonicalMesh__7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return canonicalMesh_; }
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::set_CanonicalMesh(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_set_CanonicalMesh_mAB25872F5E95BC92DECF015872527449BC331961 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___value0, const RuntimeMethod* method) 
{
	{
		// canonicalMesh_ = value;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = ___value0;
		__this->___canonicalMesh__7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canonicalMesh__7), (void*)L_0);
		// }
		return;
	}
}
// Google.Protobuf.Collections.RepeatedField`1<Mediapipe.FaceGeometry.WeightedLandmarkRef> Mediapipe.FaceGeometry.GeometryPipelineMetadata::get_ProcrustesLandmarkBasis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* GeometryPipelineMetadata_get_ProcrustesLandmarkBasis_m233342B6BBD338AD1516D13DED5B34D50D679B0D (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* V_0 = NULL;
	{
		// get { return procrustesLandmarkBasis_; }
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_0 = __this->___procrustesLandmarkBasis__10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return procrustesLandmarkBasis_; }
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mediapipe.FaceGeometry.GeometryPipelineMetadata::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryPipelineMetadata_Equals_mEEEEFE22BEBC5426AE9DAEBE14DAC4D4B285B31F (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Equals(other as GeometryPipelineMetadata);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = GeometryPipelineMetadata_Equals_mD92A5E261D1EC35FED880F34F60F639B43C5D911(__this, ((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261*)IsInstSealed((RuntimeObject*)L_0, GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mediapipe.FaceGeometry.GeometryPipelineMetadata::Equals(Mediapipe.FaceGeometry.GeometryPipelineMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryPipelineMetadata_Equals_mD92A5E261D1EC35FED880F34F60F639B43C5D911 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Equals_mB8B9CDF845A83C576237D0DE9BD2740C98F6B603_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (ReferenceEquals(other, null)) {
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0084;
	}

IL_000e:
	{
		// if (ReferenceEquals(other, this)) {
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_2 = ___other0;
		V_2 = (bool)((((RuntimeObject*)(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261*)L_2) == ((RuntimeObject*)(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261*)__this))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0084;
	}

IL_001b:
	{
		// if (InputSource != other.InputSource) return false;
		int32_t L_4;
		L_4 = GeometryPipelineMetadata_get_InputSource_m830527A51062E42CC029323FCB5378B6E89D0B5D(__this, NULL);
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = GeometryPipelineMetadata_get_InputSource_m830527A51062E42CC029323FCB5378B6E89D0B5D(L_5, NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// if (InputSource != other.InputSource) return false;
		V_1 = (bool)0;
		goto IL_0084;
	}

IL_0034:
	{
		// if (!object.Equals(CanonicalMesh, other.CanonicalMesh)) return false;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_8;
		L_8 = GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC(__this, NULL);
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_9 = ___other0;
		NullCheck(L_9);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_10;
		L_10 = GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC(L_9, NULL);
		bool L_11;
		L_11 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_8, L_10, NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// if (!object.Equals(CanonicalMesh, other.CanonicalMesh)) return false;
		V_1 = (bool)0;
		goto IL_0084;
	}

IL_0052:
	{
		// if(!procrustesLandmarkBasis_.Equals(other.procrustesLandmarkBasis_)) return false;
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_13 = __this->___procrustesLandmarkBasis__10;
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_14 = ___other0;
		NullCheck(L_14);
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_15 = L_14->___procrustesLandmarkBasis__10;
		NullCheck(L_13);
		bool L_16;
		L_16 = RepeatedField_1_Equals_mB8B9CDF845A83C576237D0DE9BD2740C98F6B603(L_13, L_15, RepeatedField_1_Equals_mB8B9CDF845A83C576237D0DE9BD2740C98F6B603_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		// if(!procrustesLandmarkBasis_.Equals(other.procrustesLandmarkBasis_)) return false;
		V_1 = (bool)0;
		goto IL_0084;
	}

IL_0070:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_18 = __this->____unknownFields_1;
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_19 = ___other0;
		NullCheck(L_19);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_20 = L_19->____unknownFields_1;
		bool L_21;
		L_21 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_18, L_20, NULL);
		V_1 = L_21;
		goto IL_0084;
	}

IL_0084:
	{
		// }
		bool L_22 = V_1;
		return L_22;
	}
}
// System.Int32 Mediapipe.FaceGeometry.GeometryPipelineMetadata::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeometryPipelineMetadata_GetHashCode_m9BEDFC9D7FB76BA76570168B6F216954B9E978BD (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (HasInputSource) hash ^= InputSource.GetHashCode();
		bool L_0;
		L_0 = GeometryPipelineMetadata_get_HasInputSource_m4575A458AFAA8463BD3984CC1A9620EDEF1E7481(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (HasInputSource) hash ^= InputSource.GetHashCode();
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = GeometryPipelineMetadata_get_InputSource_m830527A51062E42CC029323FCB5378B6E89D0B5D(__this, NULL);
		V_2 = L_3;
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&V_2), NULL);
		V_0 = ((int32_t)(L_2^L_4));
	}

IL_0024:
	{
		// if (canonicalMesh_ != null) hash ^= CanonicalMesh.GetHashCode();
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_5 = __this->___canonicalMesh__7;
		V_3 = (bool)((!(((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// if (canonicalMesh_ != null) hash ^= CanonicalMesh.GetHashCode();
		int32_t L_7 = V_0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_8;
		L_8 = GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		V_0 = ((int32_t)(L_7^L_9));
	}

IL_003f:
	{
		// hash ^= procrustesLandmarkBasis_.GetHashCode();
		int32_t L_10 = V_0;
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_11 = __this->___procrustesLandmarkBasis__10;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_11);
		V_0 = ((int32_t)(L_10^L_12));
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		V_4 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_15 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_16 = __this->____unknownFields_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_16);
		V_0 = ((int32_t)(L_15^L_17));
	}

IL_006c:
	{
		// return hash;
		int32_t L_18 = V_0;
		V_5 = L_18;
		goto IL_0071;
	}

IL_0071:
	{
		// }
		int32_t L_19 = V_5;
		return L_19;
	}
}
// System.String Mediapipe.FaceGeometry.GeometryPipelineMetadata::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeometryPipelineMetadata_ToString_m98FDCB965B057CE9778FB171D61818097CA84D88 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_WriteTo_m441ECE3030776BB0BE293A0F4D7E9611A4510539 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_m2B73861D4D420D483CB27B8A19796E36E69F2D11 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_WriteTo_mF302CC1B25D02E6C3565275393910D763B89F801_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (canonicalMesh_ != null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = __this->___canonicalMesh__7;
		V_0 = (bool)((!(((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// output.WriteRawTag(10);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_2, (uint8_t)((int32_t)10), NULL);
		// output.WriteMessage(CanonicalMesh);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_3 = ___output0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_4;
		L_4 = GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC(__this, NULL);
		WriteContext_WriteMessage_m2F77C0E66BE30E7D27F74713F4C2967F9CB67575(L_3, L_4, NULL);
	}

IL_0026:
	{
		// procrustesLandmarkBasis_.WriteTo(ref output, _repeated_procrustesLandmarkBasis_codec);
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_5 = __this->___procrustesLandmarkBasis__10;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_6 = ___output0;
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* L_7 = ((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->____repeated_procrustesLandmarkBasis_codec_9;
		NullCheck(L_5);
		RepeatedField_1_WriteTo_mF302CC1B25D02E6C3565275393910D763B89F801(L_5, L_6, L_7, RepeatedField_1_WriteTo_mF302CC1B25D02E6C3565275393910D763B89F801_RuntimeMethod_var);
		// if (HasInputSource) {
		bool L_8;
		L_8 = GeometryPipelineMetadata_get_HasInputSource_m4575A458AFAA8463BD3984CC1A9620EDEF1E7481(__this, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// output.WriteRawTag(24);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_10 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_10, (uint8_t)((int32_t)24), NULL);
		// output.WriteEnum((int) InputSource);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_11 = ___output0;
		int32_t L_12;
		L_12 = GeometryPipelineMetadata_get_InputSource_m830527A51062E42CC029323FCB5378B6E89D0B5D(__this, NULL);
		WriteContext_WriteEnum_m9D943000AEB1B4AF9DA9BF3E506F1CD1A79C623F(L_11, L_12, NULL);
	}

IL_005a:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = __this->____unknownFields_1;
		V_2 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_15 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_16 = ___output0;
		NullCheck(L_15);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_15, L_16, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Int32 Mediapipe.FaceGeometry.GeometryPipelineMetadata::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeometryPipelineMetadata_CalculateSize_m6B225BB9412931B0C07F5E8EFC82A75F09B2A9F0 (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_CalculateSize_m9670D453530A3D1CF5CF3FB229456AFA4555CDFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (HasInputSource) {
		bool L_0;
		L_0 = GeometryPipelineMetadata_get_HasInputSource_m4575A458AFAA8463BD3984CC1A9620EDEF1E7481(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) InputSource);
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = GeometryPipelineMetadata_get_InputSource_m830527A51062E42CC029323FCB5378B6E89D0B5D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(1, L_4))));
	}

IL_001f:
	{
		// if (canonicalMesh_ != null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_5 = __this->___canonicalMesh__7;
		V_2 = (bool)((!(((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeMessageSize(CanonicalMesh);
		int32_t L_7 = V_0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_8;
		L_8 = GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = CodedOutputStream_ComputeMessageSize_m96CA0965A80BAE333592894886B82CF0F5B357C2(L_8, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_add(1, L_9))));
	}

IL_003e:
	{
		// size += procrustesLandmarkBasis_.CalculateSize(_repeated_procrustesLandmarkBasis_codec);
		int32_t L_10 = V_0;
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_11 = __this->___procrustesLandmarkBasis__10;
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* L_12 = ((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->____repeated_procrustesLandmarkBasis_codec_9;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = RepeatedField_1_CalculateSize_m9670D453530A3D1CF5CF3FB229456AFA4555CDFA(L_11, L_12, RepeatedField_1_CalculateSize_m9670D453530A3D1CF5CF3FB229456AFA4555CDFA_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, L_13));
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_14 = __this->____unknownFields_1;
		V_3 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006e;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_16 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_17 = __this->____unknownFields_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_17, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, L_18));
	}

IL_006e:
	{
		// return size;
		int32_t L_19 = V_0;
		V_4 = L_19;
		goto IL_0073;
	}

IL_0073:
	{
		// }
		int32_t L_20 = V_4;
		return L_20;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::MergeFrom(Mediapipe.FaceGeometry.GeometryPipelineMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_MergeFrom_mFAC115448584C1AD68D6A7A93ABF82EDBEA406EF (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Add_m4CB431DF2CD79B75C26BC1728816BB4C62674B6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (other == null) {
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_008a;
	}

IL_000c:
	{
		// if (other.HasInputSource) {
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GeometryPipelineMetadata_get_HasInputSource_m4575A458AFAA8463BD3984CC1A9620EDEF1E7481(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// InputSource = other.InputSource;
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = GeometryPipelineMetadata_get_InputSource_m830527A51062E42CC029323FCB5378B6E89D0B5D(L_5, NULL);
		GeometryPipelineMetadata_set_InputSource_mE35BDECCFED965241B4FB8C5B53E6797A80429C1(__this, L_6, NULL);
	}

IL_0025:
	{
		// if (other.canonicalMesh_ != null) {
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_7 = ___other0;
		NullCheck(L_7);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_8 = L_7->___canonicalMesh__7;
		V_2 = (bool)((!(((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// if (canonicalMesh_ == null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_10 = __this->___canonicalMesh__7;
		V_3 = (bool)((((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// CanonicalMesh = new global::Mediapipe.FaceGeometry.Mesh3d();
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_12 = (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)il2cpp_codegen_object_new(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Mesh3d__ctor_m299396DE2810219E16F96B4F86D7FE29021A7A13(L_12, NULL);
		GeometryPipelineMetadata_set_CanonicalMesh_mAB25872F5E95BC92DECF015872527449BC331961(__this, L_12, NULL);
	}

IL_004e:
	{
		// CanonicalMesh.MergeFrom(other.CanonicalMesh);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_13;
		L_13 = GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC(__this, NULL);
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_14 = ___other0;
		NullCheck(L_14);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_15;
		L_15 = GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC(L_14, NULL);
		NullCheck(L_13);
		Mesh3d_MergeFrom_mCE1540AA9756A990AEB6F546761A1316662ADE6C(L_13, L_15, NULL);
	}

IL_0061:
	{
		// procrustesLandmarkBasis_.Add(other.procrustesLandmarkBasis_);
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_16 = __this->___procrustesLandmarkBasis__10;
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_17 = ___other0;
		NullCheck(L_17);
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_18 = L_17->___procrustesLandmarkBasis__10;
		NullCheck(L_16);
		RepeatedField_1_Add_m4CB431DF2CD79B75C26BC1728816BB4C62674B6C(L_16, L_18, RepeatedField_1_Add_m4CB431DF2CD79B75C26BC1728816BB4C62674B6C_RuntimeMethod_var);
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_19 = __this->____unknownFields_1;
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_20 = ___other0;
		NullCheck(L_20);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_21 = L_20->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_22;
		L_22 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_19, L_21, NULL);
		__this->____unknownFields_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_22);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_MergeFrom_m55976E2949272DE6B37BBEC0A5BA6354EECFF15B (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m157ABA31D4B268CD931506ED6C1BDA9C010241BA (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_AddEntriesFrom_mD27169EBD59C2D9003813689BE3B6215AFE7D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		goto IL_0082;
	}

IL_0003:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		V_2 = L_0;
		uint32_t L_1 = V_2;
		V_1 = L_1;
		uint32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_000f;
	}

IL_000f:
	{
		uint32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)18))))
		{
			goto IL_005c;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		uint32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)24))))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_001d;
	}

IL_001d:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_5 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_6 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_7;
		L_7 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_5, L_6, NULL);
		__this->____unknownFields_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_7);
		// break;
		goto IL_0081;
	}

IL_0031:
	{
		// if (canonicalMesh_ == null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_8 = __this->___canonicalMesh__7;
		V_3 = (bool)((((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// CanonicalMesh = new global::Mediapipe.FaceGeometry.Mesh3d();
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_10 = (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)il2cpp_codegen_object_new(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Mesh3d__ctor_m299396DE2810219E16F96B4F86D7FE29021A7A13(L_10, NULL);
		GeometryPipelineMetadata_set_CanonicalMesh_mAB25872F5E95BC92DECF015872527449BC331961(__this, L_10, NULL);
	}

IL_004d:
	{
		// input.ReadMessage(CanonicalMesh);
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_11 = ___input0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_12;
		L_12 = GeometryPipelineMetadata_get_CanonicalMesh_mAB5A8C21C6F654720DB77DBCE92377A7E32DC9AC(__this, NULL);
		ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline(L_11, L_12, NULL);
		// break;
		goto IL_0081;
	}

IL_005c:
	{
		// procrustesLandmarkBasis_.AddEntriesFrom(ref input, _repeated_procrustesLandmarkBasis_codec);
		RepeatedField_1_tA661D638292FEB69AB911A59CC0922E6BC7CF9BB* L_13 = __this->___procrustesLandmarkBasis__10;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_14 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* L_15 = ((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->____repeated_procrustesLandmarkBasis_codec_9;
		NullCheck(L_13);
		RepeatedField_1_AddEntriesFrom_mD27169EBD59C2D9003813689BE3B6215AFE7D320(L_13, L_14, L_15, RepeatedField_1_AddEntriesFrom_mD27169EBD59C2D9003813689BE3B6215AFE7D320_RuntimeMethod_var);
		// break;
		goto IL_0081;
	}

IL_0071:
	{
		// InputSource = (global::Mediapipe.FaceGeometry.InputSource) input.ReadEnum();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_16 = ___input0;
		int32_t L_17;
		L_17 = ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline(L_16, NULL);
		GeometryPipelineMetadata_set_InputSource_mE35BDECCFED965241B4FB8C5B53E6797A80429C1(__this, L_17, NULL);
		// break;
		goto IL_0081;
	}

IL_0081:
	{
	}

IL_0082:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_18 = ___input0;
		uint32_t L_19;
		L_19 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_18, NULL);
		uint32_t L_20 = L_19;
		V_0 = L_20;
		V_4 = (bool)((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
		bool L_21 = V_4;
		if (L_21)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryPipelineMetadata__cctor_mFEED8F7A803FF1C6002F1D667DF9CB5394330D9E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldCodec_ForMessage_TisWeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_m9F2CE7B75F20C4C4DAD605E42C70D3455A479FBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mD623BCE960047B4E8BED2880653416B6708F7849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__42_0_m85EA05CFD7865B5DD7839B697E5897BC49766284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<GeometryPipelineMetadata> _parser = new pb::MessageParser<GeometryPipelineMetadata>(() => new GeometryPipelineMetadata());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_il2cpp_TypeInfo_var);
		U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4* L_0 = ((U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239* L_1 = (Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239*)il2cpp_codegen_object_new(Func_1_tA3CF06C3A9CC131FE12369B176614D4522DE5239_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m700913A927531185C34183BA9FD1AB9CAE814DB5(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__42_0_m85EA05CFD7865B5DD7839B697E5897BC49766284_RuntimeMethod_var), NULL);
		MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149* L_2 = (MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149*)il2cpp_codegen_object_new(MessageParser_1_tEC5DB5EDB30640626AEE1AFD64AB54A82DE6B149_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_mD623BCE960047B4E8BED2880653416B6708F7849(L_2, L_1, MessageParser_1__ctor_mD623BCE960047B4E8BED2880653416B6708F7849_RuntimeMethod_var);
		((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
		// private readonly static global::Mediapipe.FaceGeometry.InputSource InputSourceDefaultValue = global::Mediapipe.FaceGeometry.InputSource.Default;
		((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->___InputSourceDefaultValue_4 = 0;
		// private static readonly pb::FieldCodec<global::Mediapipe.FaceGeometry.WeightedLandmarkRef> _repeated_procrustesLandmarkBasis_codec
		//     = pb::FieldCodec.ForMessage(18, global::Mediapipe.FaceGeometry.WeightedLandmarkRef.Parser);
		il2cpp_codegen_runtime_class_init_inline(WeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_il2cpp_TypeInfo_var);
		MessageParser_1_tD5D786EB4E7B471672629C93AB2556A96B0310F9* L_3;
		L_3 = WeightedLandmarkRef_get_Parser_mB1E47745E0449C2E9A983F3F3294ED14B742E84C(NULL);
		FieldCodec_1_tE4BF532E0B937AC549D3251880E7E270EFB9B38D* L_4;
		L_4 = FieldCodec_ForMessage_TisWeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_m9F2CE7B75F20C4C4DAD605E42C70D3455A479FBC(((int32_t)18), L_3, FieldCodec_ForMessage_TisWeightedLandmarkRef_t190586CB5C6D685DE94EB7B319A2E94989E1CD18_m9F2CE7B75F20C4C4DAD605E42C70D3455A479FBC_RuntimeMethod_var);
		((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->____repeated_procrustesLandmarkBasis_codec_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_StaticFields*)il2cpp_codegen_static_fields_for(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var))->____repeated_procrustesLandmarkBasis_codec_9), (void*)L_4);
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
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7B6552CFCBD1A6D90BB23D2957E62A555235186E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4* L_0 = (U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4*)il2cpp_codegen_object_new(U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m507D1487E25863BCF77D1B878E0C18AB0FC1C277(L_0, NULL);
		((U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.GeometryPipelineMetadata/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m507D1487E25863BCF77D1B878E0C18AB0FC1C277 (U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Mediapipe.FaceGeometry.GeometryPipelineMetadata Mediapipe.FaceGeometry.GeometryPipelineMetadata/<>c::<.cctor>b__42_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* U3CU3Ec_U3C_cctorU3Eb__42_0_m85EA05CFD7865B5DD7839B697E5897BC49766284 (U3CU3Ec_tE7E328744DB1AF9FD3BB6A546DF397B06222A1F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<GeometryPipelineMetadata> _parser = new pb::MessageParser<GeometryPipelineMetadata>(() => new GeometryPipelineMetadata());
		GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261* L_0 = (GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261*)il2cpp_codegen_object_new(GeometryPipelineMetadata_t71E4B5EB85BE969C8D2F301E6968885430CFF261_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GeometryPipelineMetadata__ctor_m9B3AB179A9E74D3994188BAE58A5D221078FB878(L_0, NULL);
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
// Google.Protobuf.Reflection.FileDescriptor Mediapipe.FaceGeometry.Mesh3DReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* Mesh3DReflection_get_Descriptor_m446CB05BFADBC6755D03CD431D9B1A218458211A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_0 = NULL;
	{
		// get { return descriptor; }
		il2cpp_codegen_runtime_class_init_inline(Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var))->___descriptor_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return descriptor; }
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3DReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3DReflection__cctor_m4A49BD5C0441D1C390FC7D793EDB94D07CD52CE5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveType_t6C8BD57516E5526C5B5445E7C4CFDD4A76CC8E9F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexType_t5F594A08F1E6A4BB55A7E02701255981EBDAF686_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1501BEF9536FED975ADED8DDC845C9E6AF9C05F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E5C3571C9C145AC23F82B722B160F99EAF7896A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B6EDB958072643696FAEBF03C72966C67D54166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EAB7C84A717B5021D47DD77B69776754098C27F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44C6D807C5938D43977667A8A9EBF29A6B1B2FE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D7CAF888C0BB1022E9386305FD0F38608F3431F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91266B0861A06C53F321BB4A232F00D5AC7BB6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48F9C8927A7C07C01708B074701B5F618ADBA02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEBBA621EF9976D04DFBD8067604563FB2E5B8E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC677C85C10E79B356328B2593497B1276E88F55E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC93BC9A6BC9D387A6780CE6BE453A9254FD2CD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF30A51DA100934A7DDC519E8AB8C2FFA2837815C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5CDC4B8F24423236A4914E13F8B5A6182BDDDBB);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "CjRtZWRpYXBpcGUvbW9kdWxlcy9mYWNlX2dlb21ldHJ5L3Byb3Rvcy9tZXNo",
		//       "XzNkLnByb3RvEhdtZWRpYXBpcGUuZmFjZV9nZW9tZXRyeSL5AQoGTWVzaDNk",
		//       "Ej8KC3ZlcnRleF90eXBlGAEgASgOMioubWVkaWFwaXBlLmZhY2VfZ2VvbWV0",
		//       "cnkuTWVzaDNkLlZlcnRleFR5cGUSRQoOcHJpbWl0aXZlX3R5cGUYAiABKA4y",
		//       "LS5tZWRpYXBpcGUuZmFjZV9nZW9tZXRyeS5NZXNoM2QuUHJpbWl0aXZlVHlw",
		//       "ZRIVCg12ZXJ0ZXhfYnVmZmVyGAMgAygCEhQKDGluZGV4X2J1ZmZlchgEIAMo",
		//       "DSIbCgpWZXJ0ZXhUeXBlEg0KCVZFUlRFWF9QVBAAIh0KDVByaW1pdGl2ZVR5",
		//       "cGUSDAoIVFJJQU5HTEUQAEI4Ciljb20uZ29vZ2xlLm1lZGlhcGlwZS5tb2R1",
		//       "bGVzLmZhY2VnZW9tZXRyeUILTWVzaDNkUHJvdG8="));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral44C6D807C5938D43977667A8A9EBF29A6B1B2FE3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral44C6D807C5938D43977667A8A9EBF29A6B1B2FE3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralF30A51DA100934A7DDC519E8AB8C2FFA2837815C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF30A51DA100934A7DDC519E8AB8C2FFA2837815C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral91266B0861A06C53F321BB4A232F00D5AC7BB6EB);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral91266B0861A06C53F321BB4A232F00D5AC7BB6EB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1501BEF9536FED975ADED8DDC845C9E6AF9C05F6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1501BEF9536FED975ADED8DDC845C9E6AF9C05F6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralC677C85C10E79B356328B2593497B1276E88F55E);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC677C85C10E79B356328B2593497B1276E88F55E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralBEBBA621EF9976D04DFBD8067604563FB2E5B8E0);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralBEBBA621EF9976D04DFBD8067604563FB2E5B8E0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1E5C3571C9C145AC23F82B722B160F99EAF7896A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral1E5C3571C9C145AC23F82B722B160F99EAF7896A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral8D7CAF888C0BB1022E9386305FD0F38608F3431F);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral8D7CAF888C0BB1022E9386305FD0F38608F3431F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralA48F9C8927A7C07C01708B074701B5F618ADBA02);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralA48F9C8927A7C07C01708B074701B5F618ADBA02);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_10, NULL);
		V_0 = L_11;
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { },
		//     new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Mediapipe.FaceGeometry.Mesh3d), global::Mediapipe.FaceGeometry.Mesh3d.Parser, new[]{ "VertexType", "PrimitiveType", "VertexBuffer", "IndexBuffer" }, null, new[]{ typeof(global::Mediapipe.FaceGeometry.Mesh3d.Types.VertexType), typeof(global::Mediapipe.FaceGeometry.Mesh3d.Types.PrimitiveType) }, null, null)
		//     }));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_13 = (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)SZArrayNew(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var, (uint32_t)0);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_14 = (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var, (uint32_t)1);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_15 = L_14;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* L_18;
		L_18 = Mesh3d_get_Parser_m0B174A03624A2F88F101706DA4603076E69BFBDA(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral3EAB7C84A717B5021D47DD77B69776754098C27F);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3EAB7C84A717B5021D47DD77B69776754098C27F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralEC93BC9A6BC9D387A6780CE6BE453A9254FD2CD2);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralEC93BC9A6BC9D387A6780CE6BE453A9254FD2CD2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralF5CDC4B8F24423236A4914E13F8B5A6182BDDDBB);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF5CDC4B8F24423236A4914E13F8B5A6182BDDDBB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral3B6EDB958072643696FAEBF03C72966C67D54166);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3B6EDB958072643696FAEBF03C72966C67D54166);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_25 = L_24;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (VertexType_t5F594A08F1E6A4BB55A7E02701255981EBDAF686_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_27);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_28 = L_25;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (PrimitiveType_t6C8BD57516E5526C5B5445E7C4CFDD4A76CC8E9F_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_30);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_31 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		GeneratedClrTypeInfo__ctor_m5F0B3E2F02BF50D81997F6B1E54DD261F2061108(L_31, L_17, L_18, L_23, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_28, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)NULL, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_31);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)L_31);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_32 = (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E*)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		GeneratedClrTypeInfo__ctor_m6C6F4A657670674B74F3AF88AA06251E4C8DD022(L_32, (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL, (ExtensionU5BU5D_tE4B8DCCB283298091BEF24AF8A8A83CA4CD23C66*)NULL, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_33;
		L_33 = FileDescriptor_FromGeneratedCode_mE8458CBFAFB2D3121B5EFC55182A02EAC93E0823(L_12, L_13, L_32, NULL);
		((Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var))->___descriptor_0 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var))->___descriptor_0), (void*)L_33);
		// }
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
// Google.Protobuf.MessageParser`1<Mediapipe.FaceGeometry.Mesh3d> Mediapipe.FaceGeometry.Mesh3d::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* Mesh3d_get_Parser_m0B174A03624A2F88F101706DA4603076E69BFBDA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* V_0 = NULL;
	{
		// public static pb::MessageParser<Mesh3d> Parser { get { return _parser; } }
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* L_0 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____parser_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// public static pb::MessageParser<Mesh3d> Parser { get { return _parser; } }
		MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.Mesh3d::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Mesh3d_get_Descriptor_mAFFDC0023F6644468B824AB4B39A359631B5529A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return global::Mediapipe.FaceGeometry.Mesh3DReflection.Descriptor.MessageTypes[0]; }
		il2cpp_codegen_runtime_class_init_inline(Mesh3DReflection_t96AA7C5E24C402C6879BB23365D84345D148A097_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = Mesh3DReflection_get_Descriptor_m446CB05BFADBC6755D03CD431D9B1A218458211A(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 0);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// get { return global::Mediapipe.FaceGeometry.Mesh3DReflection.Descriptor.MessageTypes[0]; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = V_0;
		return L_3;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Mediapipe.FaceGeometry.Mesh3d::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Mesh3d_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mB46ED57CCB33CE35AC6DFD60E659F104C2246524 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		// get { return Descriptor; }
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = Mesh3d_get_Descriptor_mAFFDC0023F6644468B824AB4B39A359631B5529A(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return Descriptor; }
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d__ctor_m299396DE2810219E16F96B4F86D7FE29021A7A13 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1__ctor_m41ABDAFB51A18022F7F4DA6B9684907740FB8147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1__ctor_mBFDE464D22CBD6D73802E1327ADFEB73BBE358B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly pbc::RepeatedField<float> vertexBuffer_ = new pbc::RepeatedField<float>();
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_0 = (RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D*)il2cpp_codegen_object_new(RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RepeatedField_1__ctor_mBFDE464D22CBD6D73802E1327ADFEB73BBE358B4(L_0, RepeatedField_1__ctor_mBFDE464D22CBD6D73802E1327ADFEB73BBE358B4_RuntimeMethod_var);
		__this->___vertexBuffer__11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexBuffer__11), (void*)L_0);
		// private readonly pbc::RepeatedField<uint> indexBuffer_ = new pbc::RepeatedField<uint>();
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_1 = (RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A*)il2cpp_codegen_object_new(RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RepeatedField_1__ctor_m41ABDAFB51A18022F7F4DA6B9684907740FB8147(L_1, RepeatedField_1__ctor_m41ABDAFB51A18022F7F4DA6B9684907740FB8147_RuntimeMethod_var);
		__this->___indexBuffer__14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexBuffer__14), (void*)L_1);
		// public Mesh3d() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::.ctor(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d__ctor_m44F1EA920E48AEC4EF01801B1D9BAE352A72F268 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Clone_m91CC8FF65D1709887661C714B0D6FCFBCB981C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Clone_m9F21FF98196C413FE301701E69C3D0309986CF1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Mesh3d(Mesh3d other) : this() {
		Mesh3d__ctor_m299396DE2810219E16F96B4F86D7FE29021A7A13(__this, NULL);
		// _hasBits0 = other._hasBits0;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->____hasBits0_2;
		__this->____hasBits0_2 = L_1;
		// vertexType_ = other.vertexType_;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___vertexType__5;
		__this->___vertexType__5 = L_3;
		// primitiveType_ = other.primitiveType_;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___primitiveType__8;
		__this->___primitiveType__8 = L_5;
		// vertexBuffer_ = other.vertexBuffer_.Clone();
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_6 = ___other0;
		NullCheck(L_6);
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_7 = L_6->___vertexBuffer__11;
		NullCheck(L_7);
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_8;
		L_8 = RepeatedField_1_Clone_m91CC8FF65D1709887661C714B0D6FCFBCB981C31(L_7, RepeatedField_1_Clone_m91CC8FF65D1709887661C714B0D6FCFBCB981C31_RuntimeMethod_var);
		__this->___vertexBuffer__11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexBuffer__11), (void*)L_8);
		// indexBuffer_ = other.indexBuffer_.Clone();
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_9 = ___other0;
		NullCheck(L_9);
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_10 = L_9->___indexBuffer__14;
		NullCheck(L_10);
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_11;
		L_11 = RepeatedField_1_Clone_m9F21FF98196C413FE301701E69C3D0309986CF1D(L_10, RepeatedField_1_Clone_m9F21FF98196C413FE301701E69C3D0309986CF1D_RuntimeMethod_var);
		__this->___indexBuffer__14 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexBuffer__14), (void*)L_11);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_12 = ___other0;
		NullCheck(L_12);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_13 = L_12->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_14;
		L_14 = UnknownFieldSet_Clone_m018B3B5B0DB1F6CC6E3903223D20D3BD0CF4B723(L_13, NULL);
		__this->____unknownFields_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_14);
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.Mesh3d::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* Mesh3d_Clone_m4F343E3E9B9AB2D43A95F3A8565380F8179A22E1 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* V_0 = NULL;
	{
		// return new Mesh3d(this);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)il2cpp_codegen_object_new(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh3d__ctor_m44F1EA920E48AEC4EF01801B1D9BAE352A72F268(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_1 = V_0;
		return L_1;
	}
}
// Mediapipe.FaceGeometry.Mesh3d/Types/VertexType Mediapipe.FaceGeometry.Mesh3d::get_VertexType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh3d_get_VertexType_m56A6961D1160AF7004DC2F42E0342CEA3E3376B6 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// get { if ((_hasBits0 & 1) != 0) { return vertexType_; } else { return VertexTypeDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 1) != 0) { return vertexType_; } else { return VertexTypeDefaultValue; } }
		int32_t L_2 = __this->___vertexType__5;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 1) != 0) { return vertexType_; } else { return VertexTypeDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->___VertexTypeDefaultValue_4;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 1) != 0) { return vertexType_; } else { return VertexTypeDefaultValue; } }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::set_VertexType(Mediapipe.FaceGeometry.Mesh3d/Types/VertexType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_set_VertexType_m6194CC3ADE2D1F632F7A3D606C7BFE81DC2BC0C5 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|1));
		// vertexType_ = value;
		int32_t L_1 = ___value0;
		__this->___vertexType__5 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.Mesh3d::get_HasVertexType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh3d_get_HasVertexType_m64AABD40F9C7D8035A254350A1449845B73330C9 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 1) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 1) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::ClearVertexType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_ClearVertexType_mA42CAFBF389860F1FA00C31B1CC8BA292F1B5CEE (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~1;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-2)));
		// }
		return;
	}
}
// Mediapipe.FaceGeometry.Mesh3d/Types/PrimitiveType Mediapipe.FaceGeometry.Mesh3d::get_PrimitiveType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh3d_get_PrimitiveType_mC26AF7ABA50F8DFFB0E398B6BC05DE18978B447B (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// get { if ((_hasBits0 & 2) != 0) { return primitiveType_; } else { return PrimitiveTypeDefaultValue; } }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&2))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// get { if ((_hasBits0 & 2) != 0) { return primitiveType_; } else { return PrimitiveTypeDefaultValue; } }
		int32_t L_2 = __this->___primitiveType__8;
		V_1 = L_2;
		goto IL_0023;
	}

IL_001a:
	{
		// get { if ((_hasBits0 & 2) != 0) { return primitiveType_; } else { return PrimitiveTypeDefaultValue; } }
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->___PrimitiveTypeDefaultValue_7;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// get { if ((_hasBits0 & 2) != 0) { return primitiveType_; } else { return PrimitiveTypeDefaultValue; } }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::set_PrimitiveType(Mediapipe.FaceGeometry.Mesh3d/Types/PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_set_PrimitiveType_m1E19530BAC04E79F8ED2CE7F87F8AB70A8AAF44C (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// _hasBits0 |= 2;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0|2));
		// primitiveType_ = value;
		int32_t L_1 = ___value0;
		__this->___primitiveType__8 = L_1;
		// }
		return;
	}
}
// System.Boolean Mediapipe.FaceGeometry.Mesh3d::get_HasPrimitiveType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh3d_get_HasPrimitiveType_m063950F96DE547F213127358EF65218F2DA14945 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return (_hasBits0 & 2) != 0; }
		int32_t L_0 = __this->____hasBits0_2;
		V_0 = (bool)((!(((uint32_t)((int32_t)(L_0&2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (_hasBits0 & 2) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::ClearPrimitiveType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_ClearPrimitiveType_m36EE128509B9CF192407B22640964426E5F84ABB (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	{
		// _hasBits0 &= ~2;
		int32_t L_0 = __this->____hasBits0_2;
		__this->____hasBits0_2 = ((int32_t)(L_0&((int32_t)-3)));
		// }
		return;
	}
}
// Google.Protobuf.Collections.RepeatedField`1<System.Single> Mediapipe.FaceGeometry.Mesh3d::get_VertexBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* Mesh3d_get_VertexBuffer_m5BCCD855C7F5B5CB66C3B7F5BE7D179A4A792D30 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* V_0 = NULL;
	{
		// get { return vertexBuffer_; }
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_0 = __this->___vertexBuffer__11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return vertexBuffer_; }
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Collections.RepeatedField`1<System.UInt32> Mediapipe.FaceGeometry.Mesh3d::get_IndexBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* Mesh3d_get_IndexBuffer_m63631008BFB688AE860546C0C0F2E48CF8E5C8F7 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* V_0 = NULL;
	{
		// get { return indexBuffer_; }
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_0 = __this->___indexBuffer__14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return indexBuffer_; }
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mediapipe.FaceGeometry.Mesh3d::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh3d_Equals_m39BD781E0F6839A34F3BE0F519D244E6D2A3325F (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Equals(other as Mesh3d);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = Mesh3d_Equals_mEE87AD38434BEE49D262673710CFF1472CDD49DA(__this, ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)IsInstSealed((RuntimeObject*)L_0, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mediapipe.FaceGeometry.Mesh3d::Equals(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh3d_Equals_mEE87AD38434BEE49D262673710CFF1472CDD49DA (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Equals_m78D7CE1E96A6595DB8738EB0184381940A33B666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Equals_m7C23DEC7DDF6DB695D60FECE17ACBD35D4490F45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (ReferenceEquals(other, null)) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00a5;
	}

IL_0011:
	{
		// if (ReferenceEquals(other, this)) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_2 = ___other0;
		V_2 = (bool)((((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_2) == ((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)__this))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00a5;
	}

IL_0021:
	{
		// if (VertexType != other.VertexType) return false;
		int32_t L_4;
		L_4 = Mesh3d_get_VertexType_m56A6961D1160AF7004DC2F42E0342CEA3E3376B6(__this, NULL);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Mesh3d_get_VertexType_m56A6961D1160AF7004DC2F42E0342CEA3E3376B6(L_5, NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// if (VertexType != other.VertexType) return false;
		V_1 = (bool)0;
		goto IL_00a5;
	}

IL_003a:
	{
		// if (PrimitiveType != other.PrimitiveType) return false;
		int32_t L_8;
		L_8 = Mesh3d_get_PrimitiveType_mC26AF7ABA50F8DFFB0E398B6BC05DE18978B447B(__this, NULL);
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_9 = ___other0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Mesh3d_get_PrimitiveType_mC26AF7ABA50F8DFFB0E398B6BC05DE18978B447B(L_9, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// if (PrimitiveType != other.PrimitiveType) return false;
		V_1 = (bool)0;
		goto IL_00a5;
	}

IL_0055:
	{
		// if(!vertexBuffer_.Equals(other.vertexBuffer_)) return false;
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_12 = __this->___vertexBuffer__11;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_13 = ___other0;
		NullCheck(L_13);
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_14 = L_13->___vertexBuffer__11;
		NullCheck(L_12);
		bool L_15;
		L_15 = RepeatedField_1_Equals_m7C23DEC7DDF6DB695D60FECE17ACBD35D4490F45(L_12, L_14, RepeatedField_1_Equals_m7C23DEC7DDF6DB695D60FECE17ACBD35D4490F45_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		// if(!vertexBuffer_.Equals(other.vertexBuffer_)) return false;
		V_1 = (bool)0;
		goto IL_00a5;
	}

IL_0073:
	{
		// if(!indexBuffer_.Equals(other.indexBuffer_)) return false;
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_17 = __this->___indexBuffer__14;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_18 = ___other0;
		NullCheck(L_18);
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_19 = L_18->___indexBuffer__14;
		NullCheck(L_17);
		bool L_20;
		L_20 = RepeatedField_1_Equals_m78D7CE1E96A6595DB8738EB0184381940A33B666(L_17, L_19, RepeatedField_1_Equals_m78D7CE1E96A6595DB8738EB0184381940A33B666_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		// if(!indexBuffer_.Equals(other.indexBuffer_)) return false;
		V_1 = (bool)0;
		goto IL_00a5;
	}

IL_0091:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_22 = __this->____unknownFields_1;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_23 = ___other0;
		NullCheck(L_23);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_24 = L_23->____unknownFields_1;
		bool L_25;
		L_25 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_22, L_24, NULL);
		V_1 = L_25;
		goto IL_00a5;
	}

IL_00a5:
	{
		// }
		bool L_26 = V_1;
		return L_26;
	}
}
// System.Int32 Mediapipe.FaceGeometry.Mesh3d::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh3d_GetHashCode_m9A596DE401ED68C9819E54B4A2D89FD28971A821 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// if (HasVertexType) hash ^= VertexType.GetHashCode();
		bool L_0;
		L_0 = Mesh3d_get_HasVertexType_m64AABD40F9C7D8035A254350A1449845B73330C9(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (HasVertexType) hash ^= VertexType.GetHashCode();
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Mesh3d_get_VertexType_m56A6961D1160AF7004DC2F42E0342CEA3E3376B6(__this, NULL);
		V_2 = L_3;
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&V_2), NULL);
		V_0 = ((int32_t)(L_2^L_4));
	}

IL_0024:
	{
		// if (HasPrimitiveType) hash ^= PrimitiveType.GetHashCode();
		bool L_5;
		L_5 = Mesh3d_get_HasPrimitiveType_m063950F96DE547F213127358EF65218F2DA14945(__this, NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// if (HasPrimitiveType) hash ^= PrimitiveType.GetHashCode();
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Mesh3d_get_PrimitiveType_mC26AF7ABA50F8DFFB0E398B6BC05DE18978B447B(__this, NULL);
		V_4 = L_8;
		int32_t L_9;
		L_9 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&V_4), NULL);
		V_0 = ((int32_t)(L_7^L_9));
	}

IL_0046:
	{
		// hash ^= vertexBuffer_.GetHashCode();
		int32_t L_10 = V_0;
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_11 = __this->___vertexBuffer__11;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_11);
		V_0 = ((int32_t)(L_10^L_12));
		// hash ^= indexBuffer_.GetHashCode();
		int32_t L_13 = V_0;
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_14 = __this->___indexBuffer__14;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_14);
		V_0 = ((int32_t)(L_13^L_15));
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_16 = __this->____unknownFields_1;
		V_5 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0081;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_18 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_19 = __this->____unknownFields_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_19);
		V_0 = ((int32_t)(L_18^L_20));
	}

IL_0081:
	{
		// return hash;
		int32_t L_21 = V_0;
		V_6 = L_21;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		int32_t L_22 = V_6;
		return L_22;
	}
}
// System.String Mediapipe.FaceGeometry.Mesh3d::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Mesh3d_ToString_mA68F8F5E05DAEB4C6F4CA66D3CCEEB6FEB358C72 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_WriteTo_m1EEA3C2C9F3FDFA46F8804F562B0294468960FFD (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		// output.WriteRawMessage(this);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_0 = ___output0;
		NullCheck(L_0);
		CodedOutputStream_WriteRawMessage_m231876EE2FDAC3B4291A7EA7DB79014DD3BB3D7D(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::pb::Google.Protobuf.IBufferMessage.InternalWriteTo(Google.Protobuf.WriteContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalWriteTo_m153E141FC0CC788F937AE183592EF47C74B9D3F5 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___output0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_WriteTo_m07B1B741FC742F54FB54EB8D0612094488F2D84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_WriteTo_m0BDC341F29C484651ACA13B5D299C352B1D8E91F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (HasVertexType) {
		bool L_0;
		L_0 = Mesh3d_get_HasVertexType_m64AABD40F9C7D8035A254350A1449845B73330C9(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// output.WriteRawTag(8);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_2 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_2, (uint8_t)8, NULL);
		// output.WriteEnum((int) VertexType);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_3 = ___output0;
		int32_t L_4;
		L_4 = Mesh3d_get_VertexType_m56A6961D1160AF7004DC2F42E0342CEA3E3376B6(__this, NULL);
		WriteContext_WriteEnum_m9D943000AEB1B4AF9DA9BF3E506F1CD1A79C623F(L_3, L_4, NULL);
	}

IL_0022:
	{
		// if (HasPrimitiveType) {
		bool L_5;
		L_5 = Mesh3d_get_HasPrimitiveType_m063950F96DE547F213127358EF65218F2DA14945(__this, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// output.WriteRawTag(16);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_7 = ___output0;
		WriteContext_WriteRawTag_m80B3F0598884109F59783C975D1F9614E94A9022(L_7, (uint8_t)((int32_t)16), NULL);
		// output.WriteEnum((int) PrimitiveType);
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_8 = ___output0;
		int32_t L_9;
		L_9 = Mesh3d_get_PrimitiveType_mC26AF7ABA50F8DFFB0E398B6BC05DE18978B447B(__this, NULL);
		WriteContext_WriteEnum_m9D943000AEB1B4AF9DA9BF3E506F1CD1A79C623F(L_8, L_9, NULL);
	}

IL_0044:
	{
		// vertexBuffer_.WriteTo(ref output, _repeated_vertexBuffer_codec);
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_10 = __this->___vertexBuffer__11;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_11 = ___output0;
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* L_12 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_vertexBuffer_codec_10;
		NullCheck(L_10);
		RepeatedField_1_WriteTo_m0BDC341F29C484651ACA13B5D299C352B1D8E91F(L_10, L_11, L_12, RepeatedField_1_WriteTo_m0BDC341F29C484651ACA13B5D299C352B1D8E91F_RuntimeMethod_var);
		// indexBuffer_.WriteTo(ref output, _repeated_indexBuffer_codec);
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_13 = __this->___indexBuffer__14;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_14 = ___output0;
		FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* L_15 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_indexBuffer_codec_13;
		NullCheck(L_13);
		RepeatedField_1_WriteTo_m07B1B741FC742F54FB54EB8D0612094488F2D84B(L_13, L_14, L_15, RepeatedField_1_WriteTo_m07B1B741FC742F54FB54EB8D0612094488F2D84B_RuntimeMethod_var);
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_16 = __this->____unknownFields_1;
		V_2 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0084;
		}
	}
	{
		// _unknownFields.WriteTo(ref output);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_18 = __this->____unknownFields_1;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_19 = ___output0;
		NullCheck(L_18);
		UnknownFieldSet_WriteTo_m8A7052C7DBB2FAA383BADB1260BD55DE99C1F476(L_18, L_19, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Int32 Mediapipe.FaceGeometry.Mesh3d::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh3d_CalculateSize_mA49E2CE3E33B0740480EF239147CBAD0ED7C67C8 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_CalculateSize_m0BF270F733569FE095C1790E9943BC80109E60DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_CalculateSize_mD3C3299755C5AF6826643EC7F75F1E457CA7766C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// if (HasVertexType) {
		bool L_0;
		L_0 = Mesh3d_get_HasVertexType_m64AABD40F9C7D8035A254350A1449845B73330C9(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) VertexType);
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Mesh3d_get_VertexType_m56A6961D1160AF7004DC2F42E0342CEA3E3376B6(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(1, L_4))));
	}

IL_001f:
	{
		// if (HasPrimitiveType) {
		bool L_5;
		L_5 = Mesh3d_get_HasPrimitiveType_m063950F96DE547F213127358EF65218F2DA14945(__this, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) PrimitiveType);
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Mesh3d_get_PrimitiveType_mC26AF7ABA50F8DFFB0E398B6BC05DE18978B447B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = CodedOutputStream_ComputeEnumSize_mA1836D9E8169C256E0EF161A0A7CA86FE3CE0402(L_8, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_add(1, L_9))));
	}

IL_003b:
	{
		// size += vertexBuffer_.CalculateSize(_repeated_vertexBuffer_codec);
		int32_t L_10 = V_0;
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_11 = __this->___vertexBuffer__11;
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* L_12 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_vertexBuffer_codec_10;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = RepeatedField_1_CalculateSize_mD3C3299755C5AF6826643EC7F75F1E457CA7766C(L_11, L_12, RepeatedField_1_CalculateSize_mD3C3299755C5AF6826643EC7F75F1E457CA7766C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, L_13));
		// size += indexBuffer_.CalculateSize(_repeated_indexBuffer_codec);
		int32_t L_14 = V_0;
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_15 = __this->___indexBuffer__14;
		FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* L_16 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_indexBuffer_codec_13;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = RepeatedField_1_CalculateSize_m0BF270F733569FE095C1790E9943BC80109E60DE(L_15, L_16, RepeatedField_1_CalculateSize_m0BF270F733569FE095C1790E9943BC80109E60DE_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, L_17));
		// if (_unknownFields != null) {
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_18 = __this->____unknownFields_1;
		V_3 = (bool)((!(((RuntimeObject*)(UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_20 = V_0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_21 = __this->____unknownFields_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = UnknownFieldSet_CalculateSize_mC3223894C88C1B3431AA98F07AE75617EA0377D1(L_21, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, L_22));
	}

IL_007e:
	{
		// return size;
		int32_t L_23 = V_0;
		V_4 = L_23;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		int32_t L_24 = V_4;
		return L_24;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::MergeFrom(Mediapipe.FaceGeometry.Mesh3d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_MergeFrom_mCE1540AA9756A990AEB6F546761A1316662ADE6C (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Add_m4496DCFCF8EAEE27EEE89AB5865D26C274EA979E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Add_mAE8E425E3F2EE80F7C1116A263136606BE22CDC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (other == null) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_0079;
	}

IL_000c:
	{
		// if (other.HasVertexType) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Mesh3d_get_HasVertexType_m64AABD40F9C7D8035A254350A1449845B73330C9(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// VertexType = other.VertexType;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Mesh3d_get_VertexType_m56A6961D1160AF7004DC2F42E0342CEA3E3376B6(L_5, NULL);
		Mesh3d_set_VertexType_m6194CC3ADE2D1F632F7A3D606C7BFE81DC2BC0C5(__this, L_6, NULL);
	}

IL_0025:
	{
		// if (other.HasPrimitiveType) {
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Mesh3d_get_HasPrimitiveType_m063950F96DE547F213127358EF65218F2DA14945(L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// PrimitiveType = other.PrimitiveType;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_10 = ___other0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Mesh3d_get_PrimitiveType_mC26AF7ABA50F8DFFB0E398B6BC05DE18978B447B(L_10, NULL);
		Mesh3d_set_PrimitiveType_m1E19530BAC04E79F8ED2CE7F87F8AB70A8AAF44C(__this, L_11, NULL);
	}

IL_003e:
	{
		// vertexBuffer_.Add(other.vertexBuffer_);
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_12 = __this->___vertexBuffer__11;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_13 = ___other0;
		NullCheck(L_13);
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_14 = L_13->___vertexBuffer__11;
		NullCheck(L_12);
		RepeatedField_1_Add_mAE8E425E3F2EE80F7C1116A263136606BE22CDC3(L_12, L_14, RepeatedField_1_Add_mAE8E425E3F2EE80F7C1116A263136606BE22CDC3_RuntimeMethod_var);
		// indexBuffer_.Add(other.indexBuffer_);
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_15 = __this->___indexBuffer__14;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_16 = ___other0;
		NullCheck(L_16);
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_17 = L_16->___indexBuffer__14;
		NullCheck(L_15);
		RepeatedField_1_Add_m4496DCFCF8EAEE27EEE89AB5865D26C274EA979E(L_15, L_17, RepeatedField_1_Add_m4496DCFCF8EAEE27EEE89AB5865D26C274EA979E_RuntimeMethod_var);
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_18 = __this->____unknownFields_1;
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_19 = ___other0;
		NullCheck(L_19);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_20 = L_19->____unknownFields_1;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_21;
		L_21 = UnknownFieldSet_MergeFrom_mC8E0E81668D9A72DC65B2C1671F991E6AA2BADA2(L_18, L_20, NULL);
		__this->____unknownFields_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_21);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_MergeFrom_m81631D3891B132DA8F6173B7EE7F8D1BF6FF4241 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	{
		// input.ReadRawMessage(this);
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_0 = ___input0;
		NullCheck(L_0);
		CodedInputStream_ReadRawMessage_m154E3B18A0C724A87A3C496CC2F6C36E1527C0EA(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::pb::Google.Protobuf.IBufferMessage.InternalMergeFrom(Google.Protobuf.ParseContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d_pbU3AU3AGoogle_Protobuf_IBufferMessage_InternalMergeFrom_m0FD5277FBC57E07AEBE09E43AEDC516D43B15437 (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* __this, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_AddEntriesFrom_mC1DDF16C77F4578DCF0A7DF6116AD7351DE6303A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_AddEntriesFrom_mDFA081024A40FB93F2B669497FEE9505F2E9CC08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	{
		goto IL_0098;
	}

IL_0006:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		V_2 = L_0;
		uint32_t L_1 = V_2;
		V_1 = L_1;
		uint32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)26)))))
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		uint32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)16))))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_001d;
	}

IL_001d:
	{
		uint32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)26))))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0039;
	}

IL_0024:
	{
		uint32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)29))))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_002b;
	}

IL_002b:
	{
		uint32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_0082;
		}
	}
	{
		goto IL_0032;
	}

IL_0032:
	{
		uint32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0082;
		}
	}
	{
		goto IL_0039;
	}

IL_0039:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_9 = __this->____unknownFields_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_10 = ___input0;
		UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* L_11;
		L_11 = UnknownFieldSet_MergeFieldFrom_m68D9C117E929BA3B66E020F0B1768E65C8DCEE2F(L_9, L_10, NULL);
		__this->____unknownFields_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unknownFields_1), (void*)L_11);
		// break;
		goto IL_0097;
	}

IL_004d:
	{
		// VertexType = (global::Mediapipe.FaceGeometry.Mesh3d.Types.VertexType) input.ReadEnum();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_12 = ___input0;
		int32_t L_13;
		L_13 = ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline(L_12, NULL);
		Mesh3d_set_VertexType_m6194CC3ADE2D1F632F7A3D606C7BFE81DC2BC0C5(__this, L_13, NULL);
		// break;
		goto IL_0097;
	}

IL_005d:
	{
		// PrimitiveType = (global::Mediapipe.FaceGeometry.Mesh3d.Types.PrimitiveType) input.ReadEnum();
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_14 = ___input0;
		int32_t L_15;
		L_15 = ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline(L_14, NULL);
		Mesh3d_set_PrimitiveType_m1E19530BAC04E79F8ED2CE7F87F8AB70A8AAF44C(__this, L_15, NULL);
		// break;
		goto IL_0097;
	}

IL_006d:
	{
		// vertexBuffer_.AddEntriesFrom(ref input, _repeated_vertexBuffer_codec);
		RepeatedField_1_tE90D3B12DF8FE7C1635F9D57C90B3D13D3C4C28D* L_16 = __this->___vertexBuffer__11;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_17 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* L_18 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_vertexBuffer_codec_10;
		NullCheck(L_16);
		RepeatedField_1_AddEntriesFrom_mDFA081024A40FB93F2B669497FEE9505F2E9CC08(L_16, L_17, L_18, RepeatedField_1_AddEntriesFrom_mDFA081024A40FB93F2B669497FEE9505F2E9CC08_RuntimeMethod_var);
		// break;
		goto IL_0097;
	}

IL_0082:
	{
		// indexBuffer_.AddEntriesFrom(ref input, _repeated_indexBuffer_codec);
		RepeatedField_1_t119254A4FAFFBD983865EFF29506CBC6F2AEB36A* L_19 = __this->___indexBuffer__14;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_20 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* L_21 = ((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_indexBuffer_codec_13;
		NullCheck(L_19);
		RepeatedField_1_AddEntriesFrom_mC1DDF16C77F4578DCF0A7DF6116AD7351DE6303A(L_19, L_20, L_21, RepeatedField_1_AddEntriesFrom_mC1DDF16C77F4578DCF0A7DF6116AD7351DE6303A_RuntimeMethod_var);
		// break;
		goto IL_0097;
	}

IL_0097:
	{
	}

IL_0098:
	{
		// while ((tag = input.ReadTag()) != 0) {
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_22 = ___input0;
		uint32_t L_23;
		L_23 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_22, NULL);
		uint32_t L_24 = L_23;
		V_0 = L_24;
		V_3 = (bool)((!(((uint32_t)L_24) <= ((uint32_t)0)))? 1 : 0);
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh3d__cctor_m75C5F227B9CC97351DFE224749071B6B3964D150 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mD2CDF9BEF38146C98F7401EACDF804095FB5225F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__52_0_mB5DEB53AB6DB0A9ED395DC42CA3CF8596E4B352D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<Mesh3d> _parser = new pb::MessageParser<Mesh3d>(() => new Mesh3d());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_il2cpp_TypeInfo_var);
		U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A* L_0 = ((U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081* L_1 = (Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081*)il2cpp_codegen_object_new(Func_1_t204FB20DCAE74CFAA24FE0E0C492D52D334F5081_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m1D00DD55134501768CC86611B99E9F60B13D5E8F(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__52_0_mB5DEB53AB6DB0A9ED395DC42CA3CF8596E4B352D_RuntimeMethod_var), NULL);
		MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE* L_2 = (MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE*)il2cpp_codegen_object_new(MessageParser_1_t56F00D48B5B45ED6090B45EA8F25BD6D9E72BFEE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MessageParser_1__ctor_mD2CDF9BEF38146C98F7401EACDF804095FB5225F(L_2, L_1, MessageParser_1__ctor_mD2CDF9BEF38146C98F7401EACDF804095FB5225F_RuntimeMethod_var);
		((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____parser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____parser_0), (void*)L_2);
		// private readonly static global::Mediapipe.FaceGeometry.Mesh3d.Types.VertexType VertexTypeDefaultValue = global::Mediapipe.FaceGeometry.Mesh3d.Types.VertexType.VertexPt;
		((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->___VertexTypeDefaultValue_4 = 0;
		// private readonly static global::Mediapipe.FaceGeometry.Mesh3d.Types.PrimitiveType PrimitiveTypeDefaultValue = global::Mediapipe.FaceGeometry.Mesh3d.Types.PrimitiveType.Triangle;
		((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->___PrimitiveTypeDefaultValue_7 = 0;
		// private static readonly pb::FieldCodec<float> _repeated_vertexBuffer_codec
		//     = pb::FieldCodec.ForFloat(29);
		FieldCodec_1_t7A10CF3EF8B8DCF9C119A174CE2E87A8ADF5D708* L_3;
		L_3 = FieldCodec_ForFloat_m657746B5F917B34A5133683C015184356B5A245D(((int32_t)29), NULL);
		((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_vertexBuffer_codec_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_vertexBuffer_codec_10), (void*)L_3);
		// private static readonly pb::FieldCodec<uint> _repeated_indexBuffer_codec
		//     = pb::FieldCodec.ForUInt32(32);
		FieldCodec_1_tC02EF73B698AF9132FF5A931CB2004600BBF689C* L_4;
		L_4 = FieldCodec_ForUInt32_mE07403CF071DE5A608B7FE131A87D730C918C769(((int32_t)32), NULL);
		((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_indexBuffer_codec_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_StaticFields*)il2cpp_codegen_static_fields_for(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var))->____repeated_indexBuffer_codec_13), (void*)L_4);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mediapipe.FaceGeometry.Mesh3d/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1BBA8854B9FE780A852F0B0DCF98D9C736391F08 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A* L_0 = (U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A*)il2cpp_codegen_object_new(U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF7A5CAA499A040EF39071ECDC7CE3A7689CBB783(L_0, NULL);
		((U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Mediapipe.FaceGeometry.Mesh3d/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7A5CAA499A040EF39071ECDC7CE3A7689CBB783 (U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Mediapipe.FaceGeometry.Mesh3d Mediapipe.FaceGeometry.Mesh3d/<>c::<.cctor>b__52_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* U3CU3Ec_U3C_cctorU3Eb__52_0_mB5DEB53AB6DB0A9ED395DC42CA3CF8596E4B352D (U3CU3Ec_tFCF5EE72C4BCB1938F288AFAFAF95CA4CFF6FF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<Mesh3d> _parser = new pb::MessageParser<Mesh3d>(() => new Mesh3d());
		Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363* L_0 = (Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363*)il2cpp_codegen_object_new(Mesh3d_tA7DB2875F623122542ADF13385CD6B7F43A2E363_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh3d__ctor_m299396DE2810219E16F96B4F86D7FE29021A7A13(L_0, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_mB00254F465D7EAA2754FA111AF8F561BF50455A8_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ParseContext_ReadFloat_mCED59543DF5DE0A97E3CAF2075DCD3DD4DC7CDD8_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		float L_2;
		L_2 = ParsingPrimitives_ParseFloat_mFA9A65043DB6BF390D6E72A41BB9F4463C749DE4(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		uint32_t L_2;
		L_2 = ParsingPrimitives_ParseTag_mC3CDF9E540F71AEAB45BC4BAFAE69C8FB097DB64(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParseContext_ReadEnum_mF3B58B12A29DD615F9EC6FD424CF4FFAED1A6E51_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		uint32_t L_2;
		L_2 = ParsingPrimitives_ParseRawVarint32_m12E76CAA773AAED8FDAF192EBFAF830E615798BF(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParseContext_ReadMessage_mEEAE6CBA9B5E75F1BB69069FF90376F64E16FA0F_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var);
		ParsingPrimitivesMessages_ReadMessage_mB316DADE7E701D2EA0E45CDB6100F4E3654C49EF(__this, L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ParseContext_ReadUInt32_m290E926290AD8F726D2E5E7E681F4F9316D0AC8C_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		uint32_t L_2;
		L_2 = ParsingPrimitives_ParseRawVarint32_m12E76CAA773AAED8FDAF192EBFAF830E615798BF(L_0, L_1, NULL);
		return L_2;
	}
}
