#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_tB462913483754319CBE0C6A31F6D92F7D18EAF6D;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t389A029E78109F501EB7FA03F5E5FA15F2E432F3;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_tB311ECB3A4B4B57B1617628BBF34198457C61D9B;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_tD3D7B4C276C5182ACF0A4B175305DF0854686FC4;
// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player>
struct Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t5D92CDE0F52D2C1B2A5E4F48DAB9C29ECB51FC64;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t2FDCE35796605F114A2F6E91C337B721B0651FE1;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t510FB791361517D9490A57D6259732545477D57C;
// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch>
struct Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718;
// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView>
struct HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t9DA47378F3CB196929EDD4275C59F2AF8FB21868;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Photon.Pun.PhotonView>
struct List_1_t22AB20B25E776225271DB850CE278C084A9985EF;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder>
struct List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView>
struct NonAllocDictionary_2_t595F259D877CB2F8823217EACB77167973E54312;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_t7F65BBB19D5F29D81640CA2A99AA963AC75CF631;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_tFF9526B5F79416765882A99F02C06F237631B787;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Photon.Voice.PUN.PunVoiceClient[]
struct PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0;
// Photon.Voice.Unity.Recorder[]
struct RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC;
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Photon.Voice.Unity.VoiceLogger[]
struct VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A;
// Photon.Realtime.AppSettings
struct AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627;
// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Photon.Voice.DeviceFeatures
struct DeviceFeatures_tC381952FCAA1065191E14EF3CA62AD6E13B8C3ED;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t4E594E9B8AABF4918890F9377E390A320E285E50;
// Photon.Voice.ILogger
struct ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tF3EB2E6595EC9E1628055B11863FEF9F08768D8B;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t909A725F84AFD4782D2A23C2BEFAC7F2EA20B68F;
// Photon.Pun.IPunPrefabPool
struct IPunPrefabPool_tA7FF722E5855D5361A1291E669A607E5EC89C6FF;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t53104E311D60AD00120BED168CF434CD936BC80E;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788;
// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tF6F07E6117C92ED4FA052F1747BF2DB352B56220;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8;
// Photon.Pun.PhotonStream
struct PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA;
// Photon.Voice.PhotonTransportProtocol
struct PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// Photon.Voice.PUN.PunVoiceClient
struct PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B;
// Photon.Realtime.RaiseEventOptions
struct RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738;
// Photon.Voice.Unity.Recorder
struct Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5;
// Photon.Realtime.RegionHandler
struct RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// Photon.Realtime.RoomOptions
struct RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F;
// Photon.Pun.ServerSettings
struct ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B;
// Photon.Voice.Unity.Speaker
struct Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// Photon.Realtime.SupportLogger
struct SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t65BC59AA417F53D3BAF3EA9EF35A6C3E32EECA07;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5;
// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E;
// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C;
// Photon.Voice.Unity.VoiceComponentImpl
struct VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704;
// Photon.Voice.PUN.UtilityScripts.VoiceDebugScript
struct VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1;
// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0992D3165D8489C42C7461FA83DBC4B3639330E8;
IL2CPP_EXTERN_C String_t* _stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55;
IL2CPP_EXTERN_C String_t* _stringLiteral09AF8992981BCC4085724E4E3D0CF09319FCE9D9;
IL2CPP_EXTERN_C String_t* _stringLiteral0AAD5240183043F2AC9BF73F3688D7989AA5DD58;
IL2CPP_EXTERN_C String_t* _stringLiteral0AB9A62FEB121241DAF6E027F68F70D4A6625235;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADAA9081239C97382D9F0956300A807BE35143E;
IL2CPP_EXTERN_C String_t* _stringLiteral0C7AAFC814E837F74C65B57D9FAB598FE911F039;
IL2CPP_EXTERN_C String_t* _stringLiteral14727C2772E7388F0F563659C83865E67B93D390;
IL2CPP_EXTERN_C String_t* _stringLiteral179D9FE8817F214B3074543C7798DACDA20D79B7;
IL2CPP_EXTERN_C String_t* _stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93;
IL2CPP_EXTERN_C String_t* _stringLiteral1F11D7FD924312A01D1434E6B6C15C14D50960BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral233B5AC8FCFCA611B06590C6EEDDEE7245A9BB7A;
IL2CPP_EXTERN_C String_t* _stringLiteral2354DE780A5B69C0FEED47C58F7AAB3C88099215;
IL2CPP_EXTERN_C String_t* _stringLiteral24C46FC59ED4CA794BC2A3692B87AA7D0CB46837;
IL2CPP_EXTERN_C String_t* _stringLiteral24F5590E4C612C6C361CC9B6A7D645EEF121B6BD;
IL2CPP_EXTERN_C String_t* _stringLiteral291D2339FDB7548402B5F73BE1A37E590E787397;
IL2CPP_EXTERN_C String_t* _stringLiteral2B2DA86F8E43CCF02C50633D307C27C7B2BBB4AB;
IL2CPP_EXTERN_C String_t* _stringLiteral337A20AAFBA6AC7D9D6BFF4BC9DCE14D072BAA21;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9D80CEFB56309B3CAD8F0BE6870DBD9792E758;
IL2CPP_EXTERN_C String_t* _stringLiteral42A9379093D61078CD6096425E2B43AFB142C8C4;
IL2CPP_EXTERN_C String_t* _stringLiteral45CC5DDEA8717A99A5B870EE5DABECF5F7C7046A;
IL2CPP_EXTERN_C String_t* _stringLiteral481399EB9E74D247B70B58DD3F2B8A76F6C3D695;
IL2CPP_EXTERN_C String_t* _stringLiteral4816459EC827354ABCD3F7B7D8543A20050D2B0D;
IL2CPP_EXTERN_C String_t* _stringLiteral491DFF307155D060DE2930B3A4DACC763B9B9992;
IL2CPP_EXTERN_C String_t* _stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6311C62451843E33262D7C8190CB31A3FDF66A;
IL2CPP_EXTERN_C String_t* _stringLiteral4EAA25CDEC82B11766592502AB76F8FE0EFBF3E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5395A2F08284F5EAE81B1C322B82D7E19E4D4CF3;
IL2CPP_EXTERN_C String_t* _stringLiteral566067E3C1339B5F41E264C307AFED1E012B8F76;
IL2CPP_EXTERN_C String_t* _stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5E7DA8E8875DDA9664D612DF021FC38E6BA46578;
IL2CPP_EXTERN_C String_t* _stringLiteral62D4DA4488413E8C1FACD06BD54997CC4BCD9612;
IL2CPP_EXTERN_C String_t* _stringLiteral631CCB3B38A24A985A55AD1E70ABA1395491A996;
IL2CPP_EXTERN_C String_t* _stringLiteral6458CA1942CDE521844E158F0EC0CC46DFEC227B;
IL2CPP_EXTERN_C String_t* _stringLiteral6ABBF4466BE09D0080DEBDE2BAB8E36F342F072B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D151FB1D99E3E0C476B7791FA53B432E15F603F;
IL2CPP_EXTERN_C String_t* _stringLiteral71D7CEF12F1944491ED72A13C6679D30CE07414C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A8973A32FBEB43D1721AAF5EB33BEF26EF896C5;
IL2CPP_EXTERN_C String_t* _stringLiteral7B5C4D03399EEA9B7DB3B2A1F30F170F7ED0E222;
IL2CPP_EXTERN_C String_t* _stringLiteral7B99C5BB86AD28992FE3EA8391C088EA95489451;
IL2CPP_EXTERN_C String_t* _stringLiteral82B1190104BB5B93E0E671FC52196230F07C4616;
IL2CPP_EXTERN_C String_t* _stringLiteral849994D0F83DC8C476CF3A89C36B232187AE95A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8718556EB9DCBD2575098EAB4C86419472AC7614;
IL2CPP_EXTERN_C String_t* _stringLiteral89D07FA9289A89F82E6B227F7EDD2C8EF9F9D210;
IL2CPP_EXTERN_C String_t* _stringLiteral96F687665AEA502398F1370CEE347C90A340B677;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8;
IL2CPP_EXTERN_C String_t* _stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A;
IL2CPP_EXTERN_C String_t* _stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F700A67A6310E33DD094AAC545BF1871B6D467;
IL2CPP_EXTERN_C String_t* _stringLiteralCBA0771AC72CD21EFF386416E9F6F5302398353F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0942E93D883771539D99BE72A7DDCB8AE98CDC8;
IL2CPP_EXTERN_C String_t* _stringLiteralD0C669958BFD1AB4581DA8AE8C62EA5A5074640C;
IL2CPP_EXTERN_C String_t* _stringLiteralD193818D7EE1F56481A87F5FE7594803C22FC12B;
IL2CPP_EXTERN_C String_t* _stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B;
IL2CPP_EXTERN_C String_t* _stringLiteralD898110020367A3C85DFC02C4633ED3E8B6CE172;
IL2CPP_EXTERN_C String_t* _stringLiteralF9C336C7B61757E192B024456361E39B04C988EE;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m5A42D26F92580ABB4B3C3D5A5B5A48450DF5DA12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m854009113629CFF3D98C300BC7F51EAABFF89AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSpeaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA_mCB07EED27A5529BB80A93EF8BE496089C9681814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_mCFD6E771E71CFD46E1E28975E822F739F764F766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_m4806BA0A9AB825FBC6CBAAD1763CF166C2135856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisVoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F_m20100E021F1FD53584C511B42CA22D6B29D46C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PunVoiceClient_OnPunStateChanged_m66B6BBBA00AC0B1F19EBCEB238721E4E5F0FC0F8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0;
struct RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC;
struct SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC;
struct VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t48C9A5BB4818632815CC5773211B7B96AB4AA0A4 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___customProperties_1)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___expectedUsers_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// Photon.Realtime.RoomOptions
struct RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___CustomRoomProperties_6)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomPropertiesForLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___Plugins_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CSuppressPlayerInfoU3Ek__BackingField_10)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_10() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_10(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CPublishUserIdU3Ek__BackingField_11)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_11() const { return ___U3CPublishUserIdU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_11() { return &___U3CPublishUserIdU3Ek__BackingField_11; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_11(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___U3CDeleteNullPropertiesU3Ek__BackingField_12)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_12() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_12(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_13() { return static_cast<int32_t>(offsetof(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F, ___broadcastPropsChangeToAll_13)); }
	inline bool get_broadcastPropsChangeToAll_13() const { return ___broadcastPropsChangeToAll_13; }
	inline bool* get_address_of_broadcastPropsChangeToAll_13() { return &___broadcastPropsChangeToAll_13; }
	inline void set_broadcastPropsChangeToAll_13(bool value)
	{
		___broadcastPropsChangeToAll_13 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Photon.Voice.DeviceInfo
struct DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D 
{
public:
	// System.Boolean Photon.Voice.DeviceInfo::<IsDefault>k__BackingField
	bool ___U3CIsDefaultU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.DeviceInfo::<IDInt>k__BackingField
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	// System.String Photon.Voice.DeviceInfo::<IDString>k__BackingField
	String_t* ___U3CIDStringU3Ek__BackingField_2;
	// System.String Photon.Voice.DeviceInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// Photon.Voice.DeviceFeatures Photon.Voice.DeviceInfo::features
	DeviceFeatures_tC381952FCAA1065191E14EF3CA62AD6E13B8C3ED * ___features_4;
	// System.Boolean Photon.Voice.DeviceInfo::useStringID
	bool ___useStringID_5;

public:
	inline static int32_t get_offset_of_U3CIsDefaultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D, ___U3CIsDefaultU3Ek__BackingField_0)); }
	inline bool get_U3CIsDefaultU3Ek__BackingField_0() const { return ___U3CIsDefaultU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDefaultU3Ek__BackingField_0() { return &___U3CIsDefaultU3Ek__BackingField_0; }
	inline void set_U3CIsDefaultU3Ek__BackingField_0(bool value)
	{
		___U3CIsDefaultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIDIntU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D, ___U3CIDIntU3Ek__BackingField_1)); }
	inline int32_t get_U3CIDIntU3Ek__BackingField_1() const { return ___U3CIDIntU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIDIntU3Ek__BackingField_1() { return &___U3CIDIntU3Ek__BackingField_1; }
	inline void set_U3CIDIntU3Ek__BackingField_1(int32_t value)
	{
		___U3CIDIntU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIDStringU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D, ___U3CIDStringU3Ek__BackingField_2)); }
	inline String_t* get_U3CIDStringU3Ek__BackingField_2() const { return ___U3CIDStringU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CIDStringU3Ek__BackingField_2() { return &___U3CIDStringU3Ek__BackingField_2; }
	inline void set_U3CIDStringU3Ek__BackingField_2(String_t* value)
	{
		___U3CIDStringU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIDStringU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_features_4() { return static_cast<int32_t>(offsetof(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D, ___features_4)); }
	inline DeviceFeatures_tC381952FCAA1065191E14EF3CA62AD6E13B8C3ED * get_features_4() const { return ___features_4; }
	inline DeviceFeatures_tC381952FCAA1065191E14EF3CA62AD6E13B8C3ED ** get_address_of_features_4() { return &___features_4; }
	inline void set_features_4(DeviceFeatures_tC381952FCAA1065191E14EF3CA62AD6E13B8C3ED * value)
	{
		___features_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___features_4), (void*)value);
	}

	inline static int32_t get_offset_of_useStringID_5() { return static_cast<int32_t>(offsetof(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D, ___useStringID_5)); }
	inline bool get_useStringID_5() const { return ___useStringID_5; }
	inline bool* get_address_of_useStringID_5() { return &___useStringID_5; }
	inline void set_useStringID_5(bool value)
	{
		___useStringID_5 = value;
	}
};

struct DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D_StaticFields
{
public:
	// Photon.Voice.DeviceInfo Photon.Voice.DeviceInfo::Default
	DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D  ___Default_6;

public:
	inline static int32_t get_offset_of_Default_6() { return static_cast<int32_t>(offsetof(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D_StaticFields, ___Default_6)); }
	inline DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D  get_Default_6() const { return ___Default_6; }
	inline DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D * get_address_of_Default_6() { return &___Default_6; }
	inline void set_Default_6(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D  value)
	{
		___Default_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Default_6))->___U3CIDStringU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Default_6))->___U3CNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Default_6))->___features_4), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D_marshaled_pinvoke
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	char* ___U3CIDStringU3Ek__BackingField_2;
	char* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_tC381952FCAA1065191E14EF3CA62AD6E13B8C3ED * ___features_4;
	int32_t ___useStringID_5;
};
// Native definition for COM marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D_marshaled_com
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	Il2CppChar* ___U3CIDStringU3Ek__BackingField_2;
	Il2CppChar* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_tC381952FCAA1065191E14EF3CA62AD6E13B8C3ED * ___features_4;
	int32_t ___useStringID_5;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786 
{
public:
	// System.Int32 Photon.Pun.PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// Photon.Realtime.Player Photon.Pun.PhotonMessageInfo::Sender
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	// Photon.Pun.PhotonView Photon.Pun.PhotonMessageInfo::photonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;

public:
	inline static int32_t get_offset_of_timeInt_0() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___timeInt_0)); }
	inline int32_t get_timeInt_0() const { return ___timeInt_0; }
	inline int32_t* get_address_of_timeInt_0() { return &___timeInt_0; }
	inline void set_timeInt_0(int32_t value)
	{
		___timeInt_0 = value;
	}

	inline static int32_t get_offset_of_Sender_1() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___Sender_1)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_Sender_1() const { return ___Sender_1; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_Sender_1() { return &___Sender_1; }
	inline void set_Sender_1(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___Sender_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sender_1), (void*)value);
	}

	inline static int32_t get_offset_of_photonView_2() { return static_cast<int32_t>(offsetof(PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786, ___photonView_2)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_photonView_2() const { return ___photonView_2; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_photonView_2() { return &___photonView_2; }
	inline void set_photonView_2(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___photonView_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonView_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786_marshaled_pinvoke
{
	int32_t ___timeInt_0;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;
};
// Native definition for COM marshalling of Photon.Pun.PhotonMessageInfo
struct PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786_marshaled_com
{
	int32_t ___timeInt_0;
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___Sender_1;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_2;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 
{
public:
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;

public:
	inline static int32_t get_offset_of_NameServerPort_1() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___NameServerPort_1)); }
	inline uint16_t get_NameServerPort_1() const { return ___NameServerPort_1; }
	inline uint16_t* get_address_of_NameServerPort_1() { return &___NameServerPort_1; }
	inline void set_NameServerPort_1(uint16_t value)
	{
		___NameServerPort_1 = value;
	}

	inline static int32_t get_offset_of_MasterServerPort_2() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___MasterServerPort_2)); }
	inline uint16_t get_MasterServerPort_2() const { return ___MasterServerPort_2; }
	inline uint16_t* get_address_of_MasterServerPort_2() { return &___MasterServerPort_2; }
	inline void set_MasterServerPort_2(uint16_t value)
	{
		___MasterServerPort_2 = value;
	}

	inline static int32_t get_offset_of_GameServerPort_3() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0, ___GameServerPort_3)); }
	inline uint16_t get_GameServerPort_3() const { return ___GameServerPort_3; }
	inline uint16_t* get_address_of_GameServerPort_3() { return &___GameServerPort_3; }
	inline void set_GameServerPort_3(uint16_t value)
	{
		___GameServerPort_3 = value;
	}
};

struct PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0_StaticFields
{
public:
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  ___AlternativeUdpPorts_0;

public:
	inline static int32_t get_offset_of_AlternativeUdpPorts_0() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0_StaticFields, ___AlternativeUdpPorts_0)); }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  get_AlternativeUdpPorts_0() const { return ___AlternativeUdpPorts_0; }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 * get_address_of_AlternativeUdpPorts_0() { return &___AlternativeUdpPorts_0; }
	inline void set_AlternativeUdpPorts_0(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  value)
	{
		___AlternativeUdpPorts_0 = value;
	}
};


// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D  : public RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___players_15)); }
	inline Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CSuppressRoomEventsU3Ek__BackingField_17)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_17() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return &___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_17(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CSuppressPlayerInfoU3Ek__BackingField_18)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_18() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_18(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CPublishUserIdU3Ek__BackingField_19)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_19() const { return ___U3CPublishUserIdU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_19() { return &___U3CPublishUserIdU3Ek__BackingField_19; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_19(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CDeleteNullPropertiesU3Ek__BackingField_20)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_20() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_20(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_20 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 
{
public:
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Low
	int32_t ___Low_1;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::High
	int32_t ___High_2;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Max
	int32_t ___Max_3;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::SpeedUpPerc
	int32_t ___SpeedUpPerc_4;

public:
	inline static int32_t get_offset_of_Low_1() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___Low_1)); }
	inline int32_t get_Low_1() const { return ___Low_1; }
	inline int32_t* get_address_of_Low_1() { return &___Low_1; }
	inline void set_Low_1(int32_t value)
	{
		___Low_1 = value;
	}

	inline static int32_t get_offset_of_High_2() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___High_2)); }
	inline int32_t get_High_2() const { return ___High_2; }
	inline int32_t* get_address_of_High_2() { return &___High_2; }
	inline void set_High_2(int32_t value)
	{
		___High_2 = value;
	}

	inline static int32_t get_offset_of_Max_3() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___Max_3)); }
	inline int32_t get_Max_3() const { return ___Max_3; }
	inline int32_t* get_address_of_Max_3() { return &___Max_3; }
	inline void set_Max_3(int32_t value)
	{
		___Max_3 = value;
	}

	inline static int32_t get_offset_of_SpeedUpPerc_4() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___SpeedUpPerc_4)); }
	inline int32_t get_SpeedUpPerc_4() const { return ___SpeedUpPerc_4; }
	inline int32_t* get_address_of_SpeedUpPerc_4() { return &___SpeedUpPerc_4; }
	inline void set_SpeedUpPerc_4(int32_t value)
	{
		___SpeedUpPerc_4 = value;
	}
};

struct PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7_StaticFields
{
public:
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Default
	PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7_StaticFields, ___Default_0)); }
	inline PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7  get_Default_0() const { return ___Default_0; }
	inline PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7  value)
	{
		___Default_0 = value;
	}
};


// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B 
{
public:
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::AcousticEchoCancellation
	bool ___AcousticEchoCancellation_0;
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::AutomaticGainControl
	bool ___AutomaticGainControl_1;
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::NoiseSuppression
	bool ___NoiseSuppression_2;

public:
	inline static int32_t get_offset_of_AcousticEchoCancellation_0() { return static_cast<int32_t>(offsetof(NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B, ___AcousticEchoCancellation_0)); }
	inline bool get_AcousticEchoCancellation_0() const { return ___AcousticEchoCancellation_0; }
	inline bool* get_address_of_AcousticEchoCancellation_0() { return &___AcousticEchoCancellation_0; }
	inline void set_AcousticEchoCancellation_0(bool value)
	{
		___AcousticEchoCancellation_0 = value;
	}

	inline static int32_t get_offset_of_AutomaticGainControl_1() { return static_cast<int32_t>(offsetof(NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B, ___AutomaticGainControl_1)); }
	inline bool get_AutomaticGainControl_1() const { return ___AutomaticGainControl_1; }
	inline bool* get_address_of_AutomaticGainControl_1() { return &___AutomaticGainControl_1; }
	inline void set_AutomaticGainControl_1(bool value)
	{
		___AutomaticGainControl_1 = value;
	}

	inline static int32_t get_offset_of_NoiseSuppression_2() { return static_cast<int32_t>(offsetof(NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B, ___NoiseSuppression_2)); }
	inline bool get_NoiseSuppression_2() const { return ___NoiseSuppression_2; }
	inline bool* get_address_of_NoiseSuppression_2() { return &___NoiseSuppression_2; }
	inline void set_NoiseSuppression_2(bool value)
	{
		___NoiseSuppression_2 = value;
	}
};

struct NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B_StaticFields
{
public:
	// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::Default
	NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B  ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B_StaticFields, ___Default_3)); }
	inline NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B  get_Default_3() const { return ___Default_3; }
	inline NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B * get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B  value)
	{
		___Default_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B_marshaled_pinvoke
{
	int32_t ___AcousticEchoCancellation_0;
	int32_t ___AutomaticGainControl_1;
	int32_t ___NoiseSuppression_2;
};
// Native definition for COM marshalling of Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B_marshaled_com
{
	int32_t ___AcousticEchoCancellation_0;
	int32_t ___AutomaticGainControl_1;
	int32_t ___NoiseSuppression_2;
};

// Photon.Voice.IOS.AudioSessionCategory
struct AudioSessionCategory_tE250FDE11CD1BE66B77C0CDD6F78F2CC73F821C3 
{
public:
	// System.Int32 Photon.Voice.IOS.AudioSessionCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSessionCategory_tE250FDE11CD1BE66B77C0CDD6F78F2CC73F821C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.IOS.AudioSessionMode
struct AudioSessionMode_tCE654A88A20960DF6620AF7DA7C66E5AB9401EEB 
{
public:
	// System.Int32 Photon.Voice.IOS.AudioSessionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSessionMode_tCE654A88A20960DF6620AF7DA7C66E5AB9401EEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AuthModeOption
struct AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_t9A5CEB3C8BAF3AF2800AB83DC4E89CB5352758A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientAppType
struct ClientAppType_t01DC8E82AB058170EEDEA419365F12ACFD487298 
{
public:
	// System.Int32 Photon.Realtime.ClientAppType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientAppType_t01DC8E82AB058170EEDEA419365F12ACFD487298, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ConnectMethod
struct ConnectMethod_tA13C60CAD48EBE9B1ED72E47FC72070A48660BDD 
{
public:
	// System.Int32 Photon.Pun.ConnectMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectMethod_tA13C60CAD48EBE9B1ED72E47FC72070A48660BDD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_tBBCFE2F2E35974A18DD956A07DB3ADD03EFB7566 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tBBCFE2F2E35974A18DD956A07DB3ADD03EFB7566, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.CustomAuthenticationType
struct CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB 
{
public:
	// System.Byte Photon.Realtime.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_tD0F6E6C7B5CFDC781EAB5E9CDC44F285B1499BEB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_tAE852E1BF0C5981EB7C422C2C5B0F102F125EA6F 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tAE852E1BF0C5981EB7C422C2C5B0F102F125EA6F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Photon.Realtime.DisconnectCause
struct DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_tEB96412F69C8B07702ED390EB12AB8A4FC1DEFCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinMode
struct JoinMode_tEB839015698BA62F01451B47746D8CACCBCB4252 
{
public:
	// System.Byte Photon.Realtime.JoinMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinMode_tEB839015698BA62F01451B47746D8CACCBCB4252, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinType
struct JoinType_t2B1031B1428F1DD0B093F43E3D4242D91E23FF65 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t2B1031B1428F1DD0B093F43E3D4242D91E23FF65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Photon.Pun.OwnershipOption
struct OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771 
{
public:
	// System.Int32 Photon.Pun.OwnershipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PunLogLevel
struct PunLogLevel_t32F30888D76A17E85CDDA79DBD838574BBC5DD11 
{
public:
	// System.Int32 Photon.Pun.PunLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PunLogLevel_t32F30888D76A17E85CDDA79DBD838574BBC5DD11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// POpusCodec.Enums.SamplingRate
struct SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51 
{
public:
	// System.Int32 POpusCodec.Enums.SamplingRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct SerializationProtocol_tC89E309A12BEB3005F85891CFC7FB441D85CD4BC 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_tC89E309A12BEB3005F85891CFC7FB441D85CD4BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ServerConnection
struct ServerConnection_t85511B4B2D222BF3E597E032A33940A848958DB2 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t85511B4B2D222BF3E597E032A33940A848958DB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.TargetFrameworks
struct TargetFrameworks_tC0270DC524CD9E7643C7FFC4CC7F0695CAB5D6B9 
{
public:
	// System.Int32 ExitGames.Client.Photon.TargetFrameworks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetFrameworks_tC0270DC524CD9E7643C7FFC4CC7F0695CAB5D6B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ViewSynchronization
struct ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD 
{
public:
	// System.Int32 Photon.Pun.ViewSynchronization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.OpusCodec/FrameDuration
struct FrameDuration_tD560D6F059401A66EE1FF773851E931BC1E0CE4D 
{
public:
	// System.Int32 Photon.Voice.OpusCodec/FrameDuration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameDuration_tD560D6F059401A66EE1FF773851E931BC1E0CE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonView/ObservableSearch
struct ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47 
{
public:
	// System.Int32 Photon.Pun.PhotonView/ObservableSearch::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder/InputSourceType
struct InputSourceType_tE4976CF7634D1A2EE44CE97F43BC598CE063E5E4 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder/InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_tE4976CF7634D1A2EE44CE97F43BC598CE063E5E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder/MicType
struct MicType_t25290DF0A5AF1BBC22A27D10C65C62AC81B71DD9 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder/MicType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MicType_t25290DF0A5AF1BBC22A27D10C65C62AC81B71DD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_t5149A61E5ED5D99D0A409308A96AA25A43643EA8 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t5149A61E5ED5D99D0A409308A96AA25A43643EA8, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t5149A61E5ED5D99D0A409308A96AA25A43643EA8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Photon.Realtime.AppSettings
struct AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;

public:
	inline static int32_t get_offset_of_AppIdRealtime_0() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdRealtime_0)); }
	inline String_t* get_AppIdRealtime_0() const { return ___AppIdRealtime_0; }
	inline String_t** get_address_of_AppIdRealtime_0() { return &___AppIdRealtime_0; }
	inline void set_AppIdRealtime_0(String_t* value)
	{
		___AppIdRealtime_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdRealtime_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdFusion_1() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdFusion_1)); }
	inline String_t* get_AppIdFusion_1() const { return ___AppIdFusion_1; }
	inline String_t** get_address_of_AppIdFusion_1() { return &___AppIdFusion_1; }
	inline void set_AppIdFusion_1(String_t* value)
	{
		___AppIdFusion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdFusion_1), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdChat_2() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdChat_2)); }
	inline String_t* get_AppIdChat_2() const { return ___AppIdChat_2; }
	inline String_t** get_address_of_AppIdChat_2() { return &___AppIdChat_2; }
	inline void set_AppIdChat_2(String_t* value)
	{
		___AppIdChat_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdChat_2), (void*)value);
	}

	inline static int32_t get_offset_of_AppIdVoice_3() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppIdVoice_3)); }
	inline String_t* get_AppIdVoice_3() const { return ___AppIdVoice_3; }
	inline String_t** get_address_of_AppIdVoice_3() { return &___AppIdVoice_3; }
	inline void set_AppIdVoice_3(String_t* value)
	{
		___AppIdVoice_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdVoice_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_4() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AppVersion_4)); }
	inline String_t* get_AppVersion_4() const { return ___AppVersion_4; }
	inline String_t** get_address_of_AppVersion_4() { return &___AppVersion_4; }
	inline void set_AppVersion_4(String_t* value)
	{
		___AppVersion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_4), (void*)value);
	}

	inline static int32_t get_offset_of_UseNameServer_5() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___UseNameServer_5)); }
	inline bool get_UseNameServer_5() const { return ___UseNameServer_5; }
	inline bool* get_address_of_UseNameServer_5() { return &___UseNameServer_5; }
	inline void set_UseNameServer_5(bool value)
	{
		___UseNameServer_5 = value;
	}

	inline static int32_t get_offset_of_FixedRegion_6() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___FixedRegion_6)); }
	inline String_t* get_FixedRegion_6() const { return ___FixedRegion_6; }
	inline String_t** get_address_of_FixedRegion_6() { return &___FixedRegion_6; }
	inline void set_FixedRegion_6(String_t* value)
	{
		___FixedRegion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_6), (void*)value);
	}

	inline static int32_t get_offset_of_BestRegionSummaryFromStorage_7() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___BestRegionSummaryFromStorage_7)); }
	inline String_t* get_BestRegionSummaryFromStorage_7() const { return ___BestRegionSummaryFromStorage_7; }
	inline String_t** get_address_of_BestRegionSummaryFromStorage_7() { return &___BestRegionSummaryFromStorage_7; }
	inline void set_BestRegionSummaryFromStorage_7(String_t* value)
	{
		___BestRegionSummaryFromStorage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestRegionSummaryFromStorage_7), (void*)value);
	}

	inline static int32_t get_offset_of_Server_8() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Server_8)); }
	inline String_t* get_Server_8() const { return ___Server_8; }
	inline String_t** get_address_of_Server_8() { return &___Server_8; }
	inline void set_Server_8(String_t* value)
	{
		___Server_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_8), (void*)value);
	}

	inline static int32_t get_offset_of_Port_9() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Port_9)); }
	inline int32_t get_Port_9() const { return ___Port_9; }
	inline int32_t* get_address_of_Port_9() { return &___Port_9; }
	inline void set_Port_9(int32_t value)
	{
		___Port_9 = value;
	}

	inline static int32_t get_offset_of_ProxyServer_10() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___ProxyServer_10)); }
	inline String_t* get_ProxyServer_10() const { return ___ProxyServer_10; }
	inline String_t** get_address_of_ProxyServer_10() { return &___ProxyServer_10; }
	inline void set_ProxyServer_10(String_t* value)
	{
		___ProxyServer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServer_10), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_11() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___Protocol_11)); }
	inline uint8_t get_Protocol_11() const { return ___Protocol_11; }
	inline uint8_t* get_address_of_Protocol_11() { return &___Protocol_11; }
	inline void set_Protocol_11(uint8_t value)
	{
		___Protocol_11 = value;
	}

	inline static int32_t get_offset_of_EnableProtocolFallback_12() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___EnableProtocolFallback_12)); }
	inline bool get_EnableProtocolFallback_12() const { return ___EnableProtocolFallback_12; }
	inline bool* get_address_of_EnableProtocolFallback_12() { return &___EnableProtocolFallback_12; }
	inline void set_EnableProtocolFallback_12(bool value)
	{
		___EnableProtocolFallback_12 = value;
	}

	inline static int32_t get_offset_of_AuthMode_13() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___AuthMode_13)); }
	inline int32_t get_AuthMode_13() const { return ___AuthMode_13; }
	inline int32_t* get_address_of_AuthMode_13() { return &___AuthMode_13; }
	inline void set_AuthMode_13(int32_t value)
	{
		___AuthMode_13 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_14() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___EnableLobbyStatistics_14)); }
	inline bool get_EnableLobbyStatistics_14() const { return ___EnableLobbyStatistics_14; }
	inline bool* get_address_of_EnableLobbyStatistics_14() { return &___EnableLobbyStatistics_14; }
	inline void set_EnableLobbyStatistics_14(bool value)
	{
		___EnableLobbyStatistics_14 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_15() { return static_cast<int32_t>(offsetof(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906, ___NetworkLogging_15)); }
	inline uint8_t get_NetworkLogging_15() const { return ___NetworkLogging_15; }
	inline uint8_t* get_address_of_NetworkLogging_15() { return &___NetworkLogging_15; }
	inline void set_NetworkLogging_15(uint8_t value)
	{
		___NetworkLogging_15 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E 
{
public:
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* ___CategoryOptions_2;

public:
	inline static int32_t get_offset_of_Category_0() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___Category_0)); }
	inline int32_t get_Category_0() const { return ___Category_0; }
	inline int32_t* get_address_of_Category_0() { return &___Category_0; }
	inline void set_Category_0(int32_t value)
	{
		___Category_0 = value;
	}

	inline static int32_t get_offset_of_Mode_1() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___Mode_1)); }
	inline int32_t get_Mode_1() const { return ___Mode_1; }
	inline int32_t* get_address_of_Mode_1() { return &___Mode_1; }
	inline void set_Mode_1(int32_t value)
	{
		___Mode_1 = value;
	}

	inline static int32_t get_offset_of_CategoryOptions_2() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___CategoryOptions_2)); }
	inline AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* get_CategoryOptions_2() const { return ___CategoryOptions_2; }
	inline AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F** get_address_of_CategoryOptions_2() { return &___CategoryOptions_2; }
	inline void set_CategoryOptions_2(AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* value)
	{
		___CategoryOptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CategoryOptions_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};

// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A  : public RuntimeObject
{
public:
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CTokenU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___ExpectedUsers_6;

public:
	inline static int32_t get_offset_of_RoomName_0() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___RoomName_0)); }
	inline String_t* get_RoomName_0() const { return ___RoomName_0; }
	inline String_t** get_address_of_RoomName_0() { return &___RoomName_0; }
	inline void set_RoomName_0(String_t* value)
	{
		___RoomName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomName_0), (void*)value);
	}

	inline static int32_t get_offset_of_RoomOptions_1() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___RoomOptions_1)); }
	inline RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * get_RoomOptions_1() const { return ___RoomOptions_1; }
	inline RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F ** get_address_of_RoomOptions_1() { return &___RoomOptions_1; }
	inline void set_RoomOptions_1(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * value)
	{
		___RoomOptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomOptions_1), (void*)value);
	}

	inline static int32_t get_offset_of_Lobby_2() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___Lobby_2)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_Lobby_2() const { return ___Lobby_2; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_Lobby_2() { return &___Lobby_2; }
	inline void set_Lobby_2(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___Lobby_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lobby_2), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerProperties_3() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___PlayerProperties_3)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_PlayerProperties_3() const { return ___PlayerProperties_3; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_PlayerProperties_3() { return &___PlayerProperties_3; }
	inline void set_PlayerProperties_3(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___PlayerProperties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerProperties_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameServer_4() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___OnGameServer_4)); }
	inline bool get_OnGameServer_4() const { return ___OnGameServer_4; }
	inline bool* get_address_of_OnGameServer_4() { return &___OnGameServer_4; }
	inline void set_OnGameServer_4(bool value)
	{
		___OnGameServer_4 = value;
	}

	inline static int32_t get_offset_of_JoinMode_5() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___JoinMode_5)); }
	inline uint8_t get_JoinMode_5() const { return ___JoinMode_5; }
	inline uint8_t* get_address_of_JoinMode_5() { return &___JoinMode_5; }
	inline void set_JoinMode_5(uint8_t value)
	{
		___JoinMode_5 = value;
	}

	inline static int32_t get_offset_of_ExpectedUsers_6() { return static_cast<int32_t>(offsetof(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E, ___ExpectedUsers_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_ExpectedUsers_6() const { return ___ExpectedUsers_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_ExpectedUsers_6() { return &___ExpectedUsers_6; }
	inline void set_ExpectedUsers_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___ExpectedUsers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpectedUsers_6), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Photon.Pun.PhotonNetwork
struct PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC  : public RuntimeObject
{
public:

public:
};

struct PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields
{
public:
	// System.String Photon.Pun.PhotonNetwork::gameVersion
	String_t* ___gameVersion_1;
	// Photon.Realtime.LoadBalancingClient Photon.Pun.PhotonNetwork::NetworkingClient
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___NetworkingClient_2;
	// System.Int32 Photon.Pun.PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_3;
	// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::photonServerSettings
	ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * ___photonServerSettings_5;
	// Photon.Pun.ConnectMethod Photon.Pun.PhotonNetwork::ConnectMethod
	int32_t ___ConnectMethod_7;
	// Photon.Pun.PunLogLevel Photon.Pun.PhotonNetwork::LogLevel
	int32_t ___LogLevel_8;
	// System.Boolean Photon.Pun.PhotonNetwork::EnableCloseConnection
	bool ___EnableCloseConnection_9;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForVectorSynchronization
	float ___PrecisionForVectorSynchronization_10;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForQuaternionSynchronization
	float ___PrecisionForQuaternionSynchronization_11;
	// System.Single Photon.Pun.PhotonNetwork::PrecisionForFloatSynchronization
	float ___PrecisionForFloatSynchronization_12;
	// System.Boolean Photon.Pun.PhotonNetwork::offlineMode
	bool ___offlineMode_13;
	// Photon.Realtime.Room Photon.Pun.PhotonNetwork::offlineModeRoom
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___offlineModeRoom_14;
	// System.Boolean Photon.Pun.PhotonNetwork::automaticallySyncScene
	bool ___automaticallySyncScene_15;
	// System.Int32 Photon.Pun.PhotonNetwork::sendFrequency
	int32_t ___sendFrequency_16;
	// System.Int32 Photon.Pun.PhotonNetwork::serializationFrequency
	int32_t ___serializationFrequency_17;
	// System.Boolean Photon.Pun.PhotonNetwork::isMessageQueueRunning
	bool ___isMessageQueueRunning_18;
	// System.Double Photon.Pun.PhotonNetwork::frametime
	double ___frametime_19;
	// System.Int32 Photon.Pun.PhotonNetwork::frame
	int32_t ___frame_20;
	// System.Diagnostics.Stopwatch Photon.Pun.PhotonNetwork::StartupStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___StartupStopwatch_21;
	// System.Single Photon.Pun.PhotonNetwork::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_22;
	// System.Boolean Photon.Pun.PhotonNetwork::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_24;
	// System.Int32 Photon.Pun.PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_25;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Pun.PhotonNetwork::PrefabsWithoutMagicCallback
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___PrefabsWithoutMagicCallback_26;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::SendInstantiateEvHashtable
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___SendInstantiateEvHashtable_27;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendInstantiateRaiseEventOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendInstantiateRaiseEventOptions_28;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::allowedReceivingGroups
	HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * ___allowedReceivingGroups_29;
	// System.Collections.Generic.HashSet`1<System.Byte> Photon.Pun.PhotonNetwork::blockedSendingGroups
	HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * ___blockedSendingGroups_30;
	// System.Collections.Generic.HashSet`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::reusablePVHashset
	HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * ___reusablePVHashset_31;
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Int32,Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::photonViewList
	NonAllocDictionary_2_t595F259D877CB2F8823217EACB77167973E54312 * ___photonViewList_32;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipRequestEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipRequestEv_33;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferedEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipTransferedEv_34;
	// System.Action`2<Photon.Pun.PhotonView,Photon.Realtime.Player> Photon.Pun.PhotonNetwork::OnOwnershipTransferFailedEv
	Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * ___OnOwnershipTransferFailedEv_35;
	// System.Byte Photon.Pun.PhotonNetwork::currentLevelPrefix
	uint8_t ___currentLevelPrefix_36;
	// System.Boolean Photon.Pun.PhotonNetwork::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_37;
	// Photon.Pun.IPunPrefabPool Photon.Pun.PhotonNetwork::prefabPool
	RuntimeObject* ___prefabPool_40;
	// System.Boolean Photon.Pun.PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_41;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> Photon.Pun.PhotonNetwork::monoRPCMethodsCache
	Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * ___monoRPCMethodsCache_42;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Photon.Pun.PhotonNetwork::rpcShortcuts
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___rpcShortcuts_43;
	// System.Boolean Photon.Pun.PhotonNetwork::RunRpcCoroutines
	bool ___RunRpcCoroutines_44;
	// UnityEngine.AsyncOperation Photon.Pun.PhotonNetwork::_AsyncLevelLoadingOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ____AsyncLevelLoadingOperation_45;
	// System.Single Photon.Pun.PhotonNetwork::_levelLoadingProgress
	float ____levelLoadingProgress_46;
	// System.Type Photon.Pun.PhotonNetwork::typePunRPC
	Type_t * ___typePunRPC_47;
	// System.Type Photon.Pun.PhotonNetwork::typePhotonMessageInfo
	Type_t * ___typePhotonMessageInfo_48;
	// System.Object Photon.Pun.PhotonNetwork::keyByteZero
	RuntimeObject * ___keyByteZero_49;
	// System.Object Photon.Pun.PhotonNetwork::keyByteOne
	RuntimeObject * ___keyByteOne_50;
	// System.Object Photon.Pun.PhotonNetwork::keyByteTwo
	RuntimeObject * ___keyByteTwo_51;
	// System.Object Photon.Pun.PhotonNetwork::keyByteThree
	RuntimeObject * ___keyByteThree_52;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFour
	RuntimeObject * ___keyByteFour_53;
	// System.Object Photon.Pun.PhotonNetwork::keyByteFive
	RuntimeObject * ___keyByteFive_54;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSix
	RuntimeObject * ___keyByteSix_55;
	// System.Object Photon.Pun.PhotonNetwork::keyByteSeven
	RuntimeObject * ___keyByteSeven_56;
	// System.Object Photon.Pun.PhotonNetwork::keyByteEight
	RuntimeObject * ___keyByteEight_57;
	// System.Object[] Photon.Pun.PhotonNetwork::emptyObjectArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyObjectArray_58;
	// System.Type[] Photon.Pun.PhotonNetwork::emptyTypeArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___emptyTypeArray_59;
	// System.Collections.Generic.List`1<Photon.Pun.PhotonView> Photon.Pun.PhotonNetwork::foundPVs
	List_1_t22AB20B25E776225271DB850CE278C084A9985EF * ___foundPVs_60;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::removeFilter
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___removeFilter_61;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::ServerCleanDestroyEvent
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___ServerCleanDestroyEvent_62;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::ServerCleanOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___ServerCleanOptions_63;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToAllOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToAllOptions_64;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToOthersOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToOthersOptions_65;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::SendToSingleOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___SendToSingleOptions_66;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcFilterByViewId
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___rpcFilterByViewId_67;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::OpCleanRpcBufferOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___OpCleanRpcBufferOptions_68;
	// ExitGames.Client.Photon.Hashtable Photon.Pun.PhotonNetwork::rpcEvent
	Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * ___rpcEvent_69;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::RpcOptionsToAll
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___RpcOptionsToAll_70;
	// System.Int32 Photon.Pun.PhotonNetwork::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_71;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamOut
	PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___serializeStreamOut_72;
	// Photon.Pun.PhotonStream Photon.Pun.PhotonNetwork::serializeStreamIn
	PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * ___serializeStreamIn_73;
	// Photon.Realtime.RaiseEventOptions Photon.Pun.PhotonNetwork::serializeRaiseEvOptions
	RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * ___serializeRaiseEvOptions_74;
	// System.Collections.Generic.Dictionary`2<Photon.Pun.PhotonNetwork/RaiseEventBatch,Photon.Pun.PhotonNetwork/SerializeViewBatch> Photon.Pun.PhotonNetwork::serializeViewBatches
	Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * ___serializeViewBatches_75;
	// Photon.Realtime.RegionHandler Photon.Pun.PhotonNetwork::_cachedRegionHandler
	RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ____cachedRegionHandler_80;

public:
	inline static int32_t get_offset_of_gameVersion_1() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___gameVersion_1)); }
	inline String_t* get_gameVersion_1() const { return ___gameVersion_1; }
	inline String_t** get_address_of_gameVersion_1() { return &___gameVersion_1; }
	inline void set_gameVersion_1(String_t* value)
	{
		___gameVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkingClient_2() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___NetworkingClient_2)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_NetworkingClient_2() const { return ___NetworkingClient_2; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_NetworkingClient_2() { return &___NetworkingClient_2; }
	inline void set_NetworkingClient_2(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___NetworkingClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkingClient_2), (void*)value);
	}

	inline static int32_t get_offset_of_MAX_VIEW_IDS_3() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___MAX_VIEW_IDS_3)); }
	inline int32_t get_MAX_VIEW_IDS_3() const { return ___MAX_VIEW_IDS_3; }
	inline int32_t* get_address_of_MAX_VIEW_IDS_3() { return &___MAX_VIEW_IDS_3; }
	inline void set_MAX_VIEW_IDS_3(int32_t value)
	{
		___MAX_VIEW_IDS_3 = value;
	}

	inline static int32_t get_offset_of_photonServerSettings_5() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___photonServerSettings_5)); }
	inline ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * get_photonServerSettings_5() const { return ___photonServerSettings_5; }
	inline ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B ** get_address_of_photonServerSettings_5() { return &___photonServerSettings_5; }
	inline void set_photonServerSettings_5(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * value)
	{
		___photonServerSettings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonServerSettings_5), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectMethod_7() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ConnectMethod_7)); }
	inline int32_t get_ConnectMethod_7() const { return ___ConnectMethod_7; }
	inline int32_t* get_address_of_ConnectMethod_7() { return &___ConnectMethod_7; }
	inline void set_ConnectMethod_7(int32_t value)
	{
		___ConnectMethod_7 = value;
	}

	inline static int32_t get_offset_of_LogLevel_8() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___LogLevel_8)); }
	inline int32_t get_LogLevel_8() const { return ___LogLevel_8; }
	inline int32_t* get_address_of_LogLevel_8() { return &___LogLevel_8; }
	inline void set_LogLevel_8(int32_t value)
	{
		___LogLevel_8 = value;
	}

	inline static int32_t get_offset_of_EnableCloseConnection_9() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___EnableCloseConnection_9)); }
	inline bool get_EnableCloseConnection_9() const { return ___EnableCloseConnection_9; }
	inline bool* get_address_of_EnableCloseConnection_9() { return &___EnableCloseConnection_9; }
	inline void set_EnableCloseConnection_9(bool value)
	{
		___EnableCloseConnection_9 = value;
	}

	inline static int32_t get_offset_of_PrecisionForVectorSynchronization_10() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForVectorSynchronization_10)); }
	inline float get_PrecisionForVectorSynchronization_10() const { return ___PrecisionForVectorSynchronization_10; }
	inline float* get_address_of_PrecisionForVectorSynchronization_10() { return &___PrecisionForVectorSynchronization_10; }
	inline void set_PrecisionForVectorSynchronization_10(float value)
	{
		___PrecisionForVectorSynchronization_10 = value;
	}

	inline static int32_t get_offset_of_PrecisionForQuaternionSynchronization_11() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForQuaternionSynchronization_11)); }
	inline float get_PrecisionForQuaternionSynchronization_11() const { return ___PrecisionForQuaternionSynchronization_11; }
	inline float* get_address_of_PrecisionForQuaternionSynchronization_11() { return &___PrecisionForQuaternionSynchronization_11; }
	inline void set_PrecisionForQuaternionSynchronization_11(float value)
	{
		___PrecisionForQuaternionSynchronization_11 = value;
	}

	inline static int32_t get_offset_of_PrecisionForFloatSynchronization_12() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrecisionForFloatSynchronization_12)); }
	inline float get_PrecisionForFloatSynchronization_12() const { return ___PrecisionForFloatSynchronization_12; }
	inline float* get_address_of_PrecisionForFloatSynchronization_12() { return &___PrecisionForFloatSynchronization_12; }
	inline void set_PrecisionForFloatSynchronization_12(float value)
	{
		___PrecisionForFloatSynchronization_12 = value;
	}

	inline static int32_t get_offset_of_offlineMode_13() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___offlineMode_13)); }
	inline bool get_offlineMode_13() const { return ___offlineMode_13; }
	inline bool* get_address_of_offlineMode_13() { return &___offlineMode_13; }
	inline void set_offlineMode_13(bool value)
	{
		___offlineMode_13 = value;
	}

	inline static int32_t get_offset_of_offlineModeRoom_14() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___offlineModeRoom_14)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_offlineModeRoom_14() const { return ___offlineModeRoom_14; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_offlineModeRoom_14() { return &___offlineModeRoom_14; }
	inline void set_offlineModeRoom_14(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___offlineModeRoom_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offlineModeRoom_14), (void*)value);
	}

	inline static int32_t get_offset_of_automaticallySyncScene_15() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___automaticallySyncScene_15)); }
	inline bool get_automaticallySyncScene_15() const { return ___automaticallySyncScene_15; }
	inline bool* get_address_of_automaticallySyncScene_15() { return &___automaticallySyncScene_15; }
	inline void set_automaticallySyncScene_15(bool value)
	{
		___automaticallySyncScene_15 = value;
	}

	inline static int32_t get_offset_of_sendFrequency_16() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___sendFrequency_16)); }
	inline int32_t get_sendFrequency_16() const { return ___sendFrequency_16; }
	inline int32_t* get_address_of_sendFrequency_16() { return &___sendFrequency_16; }
	inline void set_sendFrequency_16(int32_t value)
	{
		___sendFrequency_16 = value;
	}

	inline static int32_t get_offset_of_serializationFrequency_17() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializationFrequency_17)); }
	inline int32_t get_serializationFrequency_17() const { return ___serializationFrequency_17; }
	inline int32_t* get_address_of_serializationFrequency_17() { return &___serializationFrequency_17; }
	inline void set_serializationFrequency_17(int32_t value)
	{
		___serializationFrequency_17 = value;
	}

	inline static int32_t get_offset_of_isMessageQueueRunning_18() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___isMessageQueueRunning_18)); }
	inline bool get_isMessageQueueRunning_18() const { return ___isMessageQueueRunning_18; }
	inline bool* get_address_of_isMessageQueueRunning_18() { return &___isMessageQueueRunning_18; }
	inline void set_isMessageQueueRunning_18(bool value)
	{
		___isMessageQueueRunning_18 = value;
	}

	inline static int32_t get_offset_of_frametime_19() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___frametime_19)); }
	inline double get_frametime_19() const { return ___frametime_19; }
	inline double* get_address_of_frametime_19() { return &___frametime_19; }
	inline void set_frametime_19(double value)
	{
		___frametime_19 = value;
	}

	inline static int32_t get_offset_of_frame_20() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___frame_20)); }
	inline int32_t get_frame_20() const { return ___frame_20; }
	inline int32_t* get_address_of_frame_20() { return &___frame_20; }
	inline void set_frame_20(int32_t value)
	{
		___frame_20 = value;
	}

	inline static int32_t get_offset_of_StartupStopwatch_21() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___StartupStopwatch_21)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_StartupStopwatch_21() const { return ___StartupStopwatch_21; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_StartupStopwatch_21() { return &___StartupStopwatch_21; }
	inline void set_StartupStopwatch_21(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___StartupStopwatch_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartupStopwatch_21), (void*)value);
	}

	inline static int32_t get_offset_of_MinimalTimeScaleToDispatchInFixedUpdate_22() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___MinimalTimeScaleToDispatchInFixedUpdate_22)); }
	inline float get_MinimalTimeScaleToDispatchInFixedUpdate_22() const { return ___MinimalTimeScaleToDispatchInFixedUpdate_22; }
	inline float* get_address_of_MinimalTimeScaleToDispatchInFixedUpdate_22() { return &___MinimalTimeScaleToDispatchInFixedUpdate_22; }
	inline void set_MinimalTimeScaleToDispatchInFixedUpdate_22(float value)
	{
		___MinimalTimeScaleToDispatchInFixedUpdate_22 = value;
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_23() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_23; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_23(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubId_24() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___lastUsedViewSubId_24)); }
	inline int32_t get_lastUsedViewSubId_24() const { return ___lastUsedViewSubId_24; }
	inline int32_t* get_address_of_lastUsedViewSubId_24() { return &___lastUsedViewSubId_24; }
	inline void set_lastUsedViewSubId_24(int32_t value)
	{
		___lastUsedViewSubId_24 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubIdStatic_25() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___lastUsedViewSubIdStatic_25)); }
	inline int32_t get_lastUsedViewSubIdStatic_25() const { return ___lastUsedViewSubIdStatic_25; }
	inline int32_t* get_address_of_lastUsedViewSubIdStatic_25() { return &___lastUsedViewSubIdStatic_25; }
	inline void set_lastUsedViewSubIdStatic_25(int32_t value)
	{
		___lastUsedViewSubIdStatic_25 = value;
	}

	inline static int32_t get_offset_of_PrefabsWithoutMagicCallback_26() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___PrefabsWithoutMagicCallback_26)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_PrefabsWithoutMagicCallback_26() const { return ___PrefabsWithoutMagicCallback_26; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_PrefabsWithoutMagicCallback_26() { return &___PrefabsWithoutMagicCallback_26; }
	inline void set_PrefabsWithoutMagicCallback_26(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___PrefabsWithoutMagicCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabsWithoutMagicCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_SendInstantiateEvHashtable_27() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendInstantiateEvHashtable_27)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_SendInstantiateEvHashtable_27() const { return ___SendInstantiateEvHashtable_27; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_SendInstantiateEvHashtable_27() { return &___SendInstantiateEvHashtable_27; }
	inline void set_SendInstantiateEvHashtable_27(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___SendInstantiateEvHashtable_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendInstantiateEvHashtable_27), (void*)value);
	}

	inline static int32_t get_offset_of_SendInstantiateRaiseEventOptions_28() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendInstantiateRaiseEventOptions_28)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendInstantiateRaiseEventOptions_28() const { return ___SendInstantiateRaiseEventOptions_28; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendInstantiateRaiseEventOptions_28() { return &___SendInstantiateRaiseEventOptions_28; }
	inline void set_SendInstantiateRaiseEventOptions_28(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendInstantiateRaiseEventOptions_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendInstantiateRaiseEventOptions_28), (void*)value);
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_29() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___allowedReceivingGroups_29)); }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * get_allowedReceivingGroups_29() const { return ___allowedReceivingGroups_29; }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C ** get_address_of_allowedReceivingGroups_29() { return &___allowedReceivingGroups_29; }
	inline void set_allowedReceivingGroups_29(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * value)
	{
		___allowedReceivingGroups_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allowedReceivingGroups_29), (void*)value);
	}

	inline static int32_t get_offset_of_blockedSendingGroups_30() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___blockedSendingGroups_30)); }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * get_blockedSendingGroups_30() const { return ___blockedSendingGroups_30; }
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C ** get_address_of_blockedSendingGroups_30() { return &___blockedSendingGroups_30; }
	inline void set_blockedSendingGroups_30(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C * value)
	{
		___blockedSendingGroups_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockedSendingGroups_30), (void*)value);
	}

	inline static int32_t get_offset_of_reusablePVHashset_31() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___reusablePVHashset_31)); }
	inline HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * get_reusablePVHashset_31() const { return ___reusablePVHashset_31; }
	inline HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 ** get_address_of_reusablePVHashset_31() { return &___reusablePVHashset_31; }
	inline void set_reusablePVHashset_31(HashSet_1_tD01B2FA21C58703EA8C9E494B6D57E316F93FE69 * value)
	{
		___reusablePVHashset_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusablePVHashset_31), (void*)value);
	}

	inline static int32_t get_offset_of_photonViewList_32() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___photonViewList_32)); }
	inline NonAllocDictionary_2_t595F259D877CB2F8823217EACB77167973E54312 * get_photonViewList_32() const { return ___photonViewList_32; }
	inline NonAllocDictionary_2_t595F259D877CB2F8823217EACB77167973E54312 ** get_address_of_photonViewList_32() { return &___photonViewList_32; }
	inline void set_photonViewList_32(NonAllocDictionary_2_t595F259D877CB2F8823217EACB77167973E54312 * value)
	{
		___photonViewList_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonViewList_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipRequestEv_33() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipRequestEv_33)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipRequestEv_33() const { return ___OnOwnershipRequestEv_33; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipRequestEv_33() { return &___OnOwnershipRequestEv_33; }
	inline void set_OnOwnershipRequestEv_33(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipRequestEv_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipRequestEv_33), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipTransferedEv_34() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipTransferedEv_34)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipTransferedEv_34() const { return ___OnOwnershipTransferedEv_34; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipTransferedEv_34() { return &___OnOwnershipTransferedEv_34; }
	inline void set_OnOwnershipTransferedEv_34(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipTransferedEv_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipTransferedEv_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnershipTransferFailedEv_35() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OnOwnershipTransferFailedEv_35)); }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * get_OnOwnershipTransferFailedEv_35() const { return ___OnOwnershipTransferFailedEv_35; }
	inline Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C ** get_address_of_OnOwnershipTransferFailedEv_35() { return &___OnOwnershipTransferFailedEv_35; }
	inline void set_OnOwnershipTransferFailedEv_35(Action_2_t661C4E43EE3CCD85F8A4EB35BA7200113BAA313C * value)
	{
		___OnOwnershipTransferFailedEv_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnershipTransferFailedEv_35), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_36() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___currentLevelPrefix_36)); }
	inline uint8_t get_currentLevelPrefix_36() const { return ___currentLevelPrefix_36; }
	inline uint8_t* get_address_of_currentLevelPrefix_36() { return &___currentLevelPrefix_36; }
	inline void set_currentLevelPrefix_36(uint8_t value)
	{
		___currentLevelPrefix_36 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_37() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___loadingLevelAndPausedNetwork_37)); }
	inline bool get_loadingLevelAndPausedNetwork_37() const { return ___loadingLevelAndPausedNetwork_37; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_37() { return &___loadingLevelAndPausedNetwork_37; }
	inline void set_loadingLevelAndPausedNetwork_37(bool value)
	{
		___loadingLevelAndPausedNetwork_37 = value;
	}

	inline static int32_t get_offset_of_prefabPool_40() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___prefabPool_40)); }
	inline RuntimeObject* get_prefabPool_40() const { return ___prefabPool_40; }
	inline RuntimeObject** get_address_of_prefabPool_40() { return &___prefabPool_40; }
	inline void set_prefabPool_40(RuntimeObject* value)
	{
		___prefabPool_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabPool_40), (void*)value);
	}

	inline static int32_t get_offset_of_UseRpcMonoBehaviourCache_41() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___UseRpcMonoBehaviourCache_41)); }
	inline bool get_UseRpcMonoBehaviourCache_41() const { return ___UseRpcMonoBehaviourCache_41; }
	inline bool* get_address_of_UseRpcMonoBehaviourCache_41() { return &___UseRpcMonoBehaviourCache_41; }
	inline void set_UseRpcMonoBehaviourCache_41(bool value)
	{
		___UseRpcMonoBehaviourCache_41 = value;
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_42() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___monoRPCMethodsCache_42)); }
	inline Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * get_monoRPCMethodsCache_42() const { return ___monoRPCMethodsCache_42; }
	inline Dictionary_2_t510FB791361517D9490A57D6259732545477D57C ** get_address_of_monoRPCMethodsCache_42() { return &___monoRPCMethodsCache_42; }
	inline void set_monoRPCMethodsCache_42(Dictionary_2_t510FB791361517D9490A57D6259732545477D57C * value)
	{
		___monoRPCMethodsCache_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoRPCMethodsCache_42), (void*)value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_43() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcShortcuts_43)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_rpcShortcuts_43() const { return ___rpcShortcuts_43; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_rpcShortcuts_43() { return &___rpcShortcuts_43; }
	inline void set_rpcShortcuts_43(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___rpcShortcuts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcShortcuts_43), (void*)value);
	}

	inline static int32_t get_offset_of_RunRpcCoroutines_44() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___RunRpcCoroutines_44)); }
	inline bool get_RunRpcCoroutines_44() const { return ___RunRpcCoroutines_44; }
	inline bool* get_address_of_RunRpcCoroutines_44() { return &___RunRpcCoroutines_44; }
	inline void set_RunRpcCoroutines_44(bool value)
	{
		___RunRpcCoroutines_44 = value;
	}

	inline static int32_t get_offset_of__AsyncLevelLoadingOperation_45() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____AsyncLevelLoadingOperation_45)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get__AsyncLevelLoadingOperation_45() const { return ____AsyncLevelLoadingOperation_45; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of__AsyncLevelLoadingOperation_45() { return &____AsyncLevelLoadingOperation_45; }
	inline void set__AsyncLevelLoadingOperation_45(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		____AsyncLevelLoadingOperation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AsyncLevelLoadingOperation_45), (void*)value);
	}

	inline static int32_t get_offset_of__levelLoadingProgress_46() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____levelLoadingProgress_46)); }
	inline float get__levelLoadingProgress_46() const { return ____levelLoadingProgress_46; }
	inline float* get_address_of__levelLoadingProgress_46() { return &____levelLoadingProgress_46; }
	inline void set__levelLoadingProgress_46(float value)
	{
		____levelLoadingProgress_46 = value;
	}

	inline static int32_t get_offset_of_typePunRPC_47() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___typePunRPC_47)); }
	inline Type_t * get_typePunRPC_47() const { return ___typePunRPC_47; }
	inline Type_t ** get_address_of_typePunRPC_47() { return &___typePunRPC_47; }
	inline void set_typePunRPC_47(Type_t * value)
	{
		___typePunRPC_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePunRPC_47), (void*)value);
	}

	inline static int32_t get_offset_of_typePhotonMessageInfo_48() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___typePhotonMessageInfo_48)); }
	inline Type_t * get_typePhotonMessageInfo_48() const { return ___typePhotonMessageInfo_48; }
	inline Type_t ** get_address_of_typePhotonMessageInfo_48() { return &___typePhotonMessageInfo_48; }
	inline void set_typePhotonMessageInfo_48(Type_t * value)
	{
		___typePhotonMessageInfo_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typePhotonMessageInfo_48), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteZero_49() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteZero_49)); }
	inline RuntimeObject * get_keyByteZero_49() const { return ___keyByteZero_49; }
	inline RuntimeObject ** get_address_of_keyByteZero_49() { return &___keyByteZero_49; }
	inline void set_keyByteZero_49(RuntimeObject * value)
	{
		___keyByteZero_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteZero_49), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteOne_50() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteOne_50)); }
	inline RuntimeObject * get_keyByteOne_50() const { return ___keyByteOne_50; }
	inline RuntimeObject ** get_address_of_keyByteOne_50() { return &___keyByteOne_50; }
	inline void set_keyByteOne_50(RuntimeObject * value)
	{
		___keyByteOne_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteOne_50), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteTwo_51() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteTwo_51)); }
	inline RuntimeObject * get_keyByteTwo_51() const { return ___keyByteTwo_51; }
	inline RuntimeObject ** get_address_of_keyByteTwo_51() { return &___keyByteTwo_51; }
	inline void set_keyByteTwo_51(RuntimeObject * value)
	{
		___keyByteTwo_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteTwo_51), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteThree_52() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteThree_52)); }
	inline RuntimeObject * get_keyByteThree_52() const { return ___keyByteThree_52; }
	inline RuntimeObject ** get_address_of_keyByteThree_52() { return &___keyByteThree_52; }
	inline void set_keyByteThree_52(RuntimeObject * value)
	{
		___keyByteThree_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteThree_52), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFour_53() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteFour_53)); }
	inline RuntimeObject * get_keyByteFour_53() const { return ___keyByteFour_53; }
	inline RuntimeObject ** get_address_of_keyByteFour_53() { return &___keyByteFour_53; }
	inline void set_keyByteFour_53(RuntimeObject * value)
	{
		___keyByteFour_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFour_53), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteFive_54() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteFive_54)); }
	inline RuntimeObject * get_keyByteFive_54() const { return ___keyByteFive_54; }
	inline RuntimeObject ** get_address_of_keyByteFive_54() { return &___keyByteFive_54; }
	inline void set_keyByteFive_54(RuntimeObject * value)
	{
		___keyByteFive_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteFive_54), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteSix_55() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteSix_55)); }
	inline RuntimeObject * get_keyByteSix_55() const { return ___keyByteSix_55; }
	inline RuntimeObject ** get_address_of_keyByteSix_55() { return &___keyByteSix_55; }
	inline void set_keyByteSix_55(RuntimeObject * value)
	{
		___keyByteSix_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteSix_55), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteSeven_56() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteSeven_56)); }
	inline RuntimeObject * get_keyByteSeven_56() const { return ___keyByteSeven_56; }
	inline RuntimeObject ** get_address_of_keyByteSeven_56() { return &___keyByteSeven_56; }
	inline void set_keyByteSeven_56(RuntimeObject * value)
	{
		___keyByteSeven_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteSeven_56), (void*)value);
	}

	inline static int32_t get_offset_of_keyByteEight_57() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___keyByteEight_57)); }
	inline RuntimeObject * get_keyByteEight_57() const { return ___keyByteEight_57; }
	inline RuntimeObject ** get_address_of_keyByteEight_57() { return &___keyByteEight_57; }
	inline void set_keyByteEight_57(RuntimeObject * value)
	{
		___keyByteEight_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyByteEight_57), (void*)value);
	}

	inline static int32_t get_offset_of_emptyObjectArray_58() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___emptyObjectArray_58)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyObjectArray_58() const { return ___emptyObjectArray_58; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyObjectArray_58() { return &___emptyObjectArray_58; }
	inline void set_emptyObjectArray_58(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyObjectArray_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyObjectArray_58), (void*)value);
	}

	inline static int32_t get_offset_of_emptyTypeArray_59() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___emptyTypeArray_59)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_emptyTypeArray_59() const { return ___emptyTypeArray_59; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_emptyTypeArray_59() { return &___emptyTypeArray_59; }
	inline void set_emptyTypeArray_59(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___emptyTypeArray_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyTypeArray_59), (void*)value);
	}

	inline static int32_t get_offset_of_foundPVs_60() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___foundPVs_60)); }
	inline List_1_t22AB20B25E776225271DB850CE278C084A9985EF * get_foundPVs_60() const { return ___foundPVs_60; }
	inline List_1_t22AB20B25E776225271DB850CE278C084A9985EF ** get_address_of_foundPVs_60() { return &___foundPVs_60; }
	inline void set_foundPVs_60(List_1_t22AB20B25E776225271DB850CE278C084A9985EF * value)
	{
		___foundPVs_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foundPVs_60), (void*)value);
	}

	inline static int32_t get_offset_of_removeFilter_61() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___removeFilter_61)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_removeFilter_61() const { return ___removeFilter_61; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_removeFilter_61() { return &___removeFilter_61; }
	inline void set_removeFilter_61(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___removeFilter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeFilter_61), (void*)value);
	}

	inline static int32_t get_offset_of_ServerCleanDestroyEvent_62() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ServerCleanDestroyEvent_62)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_ServerCleanDestroyEvent_62() const { return ___ServerCleanDestroyEvent_62; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_ServerCleanDestroyEvent_62() { return &___ServerCleanDestroyEvent_62; }
	inline void set_ServerCleanDestroyEvent_62(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___ServerCleanDestroyEvent_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerCleanDestroyEvent_62), (void*)value);
	}

	inline static int32_t get_offset_of_ServerCleanOptions_63() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ServerCleanOptions_63)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_ServerCleanOptions_63() const { return ___ServerCleanOptions_63; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_ServerCleanOptions_63() { return &___ServerCleanOptions_63; }
	inline void set_ServerCleanOptions_63(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___ServerCleanOptions_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerCleanOptions_63), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAllOptions_64() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToAllOptions_64)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToAllOptions_64() const { return ___SendToAllOptions_64; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToAllOptions_64() { return &___SendToAllOptions_64; }
	inline void set_SendToAllOptions_64(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToAllOptions_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAllOptions_64), (void*)value);
	}

	inline static int32_t get_offset_of_SendToOthersOptions_65() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToOthersOptions_65)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToOthersOptions_65() const { return ___SendToOthersOptions_65; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToOthersOptions_65() { return &___SendToOthersOptions_65; }
	inline void set_SendToOthersOptions_65(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToOthersOptions_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToOthersOptions_65), (void*)value);
	}

	inline static int32_t get_offset_of_SendToSingleOptions_66() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___SendToSingleOptions_66)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_SendToSingleOptions_66() const { return ___SendToSingleOptions_66; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_SendToSingleOptions_66() { return &___SendToSingleOptions_66; }
	inline void set_SendToSingleOptions_66(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___SendToSingleOptions_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToSingleOptions_66), (void*)value);
	}

	inline static int32_t get_offset_of_rpcFilterByViewId_67() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcFilterByViewId_67)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_rpcFilterByViewId_67() const { return ___rpcFilterByViewId_67; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_rpcFilterByViewId_67() { return &___rpcFilterByViewId_67; }
	inline void set_rpcFilterByViewId_67(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___rpcFilterByViewId_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcFilterByViewId_67), (void*)value);
	}

	inline static int32_t get_offset_of_OpCleanRpcBufferOptions_68() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___OpCleanRpcBufferOptions_68)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_OpCleanRpcBufferOptions_68() const { return ___OpCleanRpcBufferOptions_68; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_OpCleanRpcBufferOptions_68() { return &___OpCleanRpcBufferOptions_68; }
	inline void set_OpCleanRpcBufferOptions_68(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___OpCleanRpcBufferOptions_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpCleanRpcBufferOptions_68), (void*)value);
	}

	inline static int32_t get_offset_of_rpcEvent_69() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___rpcEvent_69)); }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * get_rpcEvent_69() const { return ___rpcEvent_69; }
	inline Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 ** get_address_of_rpcEvent_69() { return &___rpcEvent_69; }
	inline void set_rpcEvent_69(Hashtable_t5B500F09E1883040B451B5B681A4A7D63B4E5135 * value)
	{
		___rpcEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpcEvent_69), (void*)value);
	}

	inline static int32_t get_offset_of_RpcOptionsToAll_70() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___RpcOptionsToAll_70)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_RpcOptionsToAll_70() const { return ___RpcOptionsToAll_70; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_RpcOptionsToAll_70() { return &___RpcOptionsToAll_70; }
	inline void set_RpcOptionsToAll_70(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___RpcOptionsToAll_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcOptionsToAll_70), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectsInOneUpdate_71() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___ObjectsInOneUpdate_71)); }
	inline int32_t get_ObjectsInOneUpdate_71() const { return ___ObjectsInOneUpdate_71; }
	inline int32_t* get_address_of_ObjectsInOneUpdate_71() { return &___ObjectsInOneUpdate_71; }
	inline void set_ObjectsInOneUpdate_71(int32_t value)
	{
		___ObjectsInOneUpdate_71 = value;
	}

	inline static int32_t get_offset_of_serializeStreamOut_72() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeStreamOut_72)); }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * get_serializeStreamOut_72() const { return ___serializeStreamOut_72; }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA ** get_address_of_serializeStreamOut_72() { return &___serializeStreamOut_72; }
	inline void set_serializeStreamOut_72(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * value)
	{
		___serializeStreamOut_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeStreamOut_72), (void*)value);
	}

	inline static int32_t get_offset_of_serializeStreamIn_73() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeStreamIn_73)); }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * get_serializeStreamIn_73() const { return ___serializeStreamIn_73; }
	inline PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA ** get_address_of_serializeStreamIn_73() { return &___serializeStreamIn_73; }
	inline void set_serializeStreamIn_73(PhotonStream_t3E2767644FED62A3866ACAD9DE37933087C615DA * value)
	{
		___serializeStreamIn_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeStreamIn_73), (void*)value);
	}

	inline static int32_t get_offset_of_serializeRaiseEvOptions_74() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeRaiseEvOptions_74)); }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * get_serializeRaiseEvOptions_74() const { return ___serializeRaiseEvOptions_74; }
	inline RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 ** get_address_of_serializeRaiseEvOptions_74() { return &___serializeRaiseEvOptions_74; }
	inline void set_serializeRaiseEvOptions_74(RaiseEventOptions_t92DE5FA55450412988E3D6096C662FA03C257738 * value)
	{
		___serializeRaiseEvOptions_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeRaiseEvOptions_74), (void*)value);
	}

	inline static int32_t get_offset_of_serializeViewBatches_75() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ___serializeViewBatches_75)); }
	inline Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * get_serializeViewBatches_75() const { return ___serializeViewBatches_75; }
	inline Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 ** get_address_of_serializeViewBatches_75() { return &___serializeViewBatches_75; }
	inline void set_serializeViewBatches_75(Dictionary_2_tA794239D2C244D332775F5BDF772390E816A8EF9 * value)
	{
		___serializeViewBatches_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializeViewBatches_75), (void*)value);
	}

	inline static int32_t get_offset_of__cachedRegionHandler_80() { return static_cast<int32_t>(offsetof(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields, ____cachedRegionHandler_80)); }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * get__cachedRegionHandler_80() const { return ____cachedRegionHandler_80; }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 ** get_address_of__cachedRegionHandler_80() { return &____cachedRegionHandler_80; }
	inline void set__cachedRegionHandler_80(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * value)
	{
		____cachedRegionHandler_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedRegionHandler_80), (void*)value);
	}
};


// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_16;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_17;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t2FDCE35796605F114A2F6E91C337B721B0651FE1 * ___SocketImplementationConfig_18;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_19;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_20;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_21;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_tB462913483754319CBE0C6A31F6D92F7D18EAF6D * ___OnDisconnectMessage_22;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitResends
	int32_t ___SequenceDeltaLimitResends_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitSends
	int32_t ___SequenceDeltaLimitSends_28;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_29;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_31;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_38;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_39;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_42;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_44;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RandomizedSequenceNumbers_45;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B * ___U3CTrafficStatsIncomingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B * ___U3CTrafficStatsOutgoingU3Ek__BackingField_48;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t65BC59AA417F53D3BAF3EA9EF35A6C3E32EECA07 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_49;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___trafficStatsStopwatch_50;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_51;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 * ___peerBase_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_54;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::payloadEncryptorType
	Type_t * ___payloadEncryptorType_56;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PayloadEncryptionSecret_57;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_58;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_59;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_60;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_CommandLogSize_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___CommandLogSize_4)); }
	inline int32_t get_CommandLogSize_4() const { return ___CommandLogSize_4; }
	inline int32_t* get_address_of_CommandLogSize_4() { return &___CommandLogSize_4; }
	inline void set_CommandLogSize_4(int32_t value)
	{
		___CommandLogSize_4 = value;
	}

	inline static int32_t get_offset_of_TargetFramework_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___TargetFramework_8)); }
	inline int32_t get_TargetFramework_8() const { return ___TargetFramework_8; }
	inline int32_t* get_address_of_TargetFramework_8() { return &___TargetFramework_8; }
	inline void set_TargetFramework_8(int32_t value)
	{
		___TargetFramework_8 = value;
	}

	inline static int32_t get_offset_of_RemoveAppIdFromWebSocketPath_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___RemoveAppIdFromWebSocketPath_10)); }
	inline bool get_RemoveAppIdFromWebSocketPath_10() const { return ___RemoveAppIdFromWebSocketPath_10; }
	inline bool* get_address_of_RemoveAppIdFromWebSocketPath_10() { return &___RemoveAppIdFromWebSocketPath_10; }
	inline void set_RemoveAppIdFromWebSocketPath_10(bool value)
	{
		___RemoveAppIdFromWebSocketPath_10 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___ClientSdkId_11)); }
	inline uint8_t get_ClientSdkId_11() const { return ___ClientSdkId_11; }
	inline uint8_t* get_address_of_ClientSdkId_11() { return &___ClientSdkId_11; }
	inline void set_ClientSdkId_11(uint8_t value)
	{
		___ClientSdkId_11 = value;
	}

	inline static int32_t get_offset_of_UseInitV3_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___UseInitV3_16)); }
	inline bool get_UseInitV3_16() const { return ___UseInitV3_16; }
	inline bool* get_address_of_UseInitV3_16() { return &___UseInitV3_16; }
	inline void set_UseInitV3_16(bool value)
	{
		___UseInitV3_16 = value;
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CSerializationProtocolTypeU3Ek__BackingField_17)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_17() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_17() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_17; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_17(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___SocketImplementationConfig_18)); }
	inline Dictionary_2_t2FDCE35796605F114A2F6E91C337B721B0651FE1 * get_SocketImplementationConfig_18() const { return ___SocketImplementationConfig_18; }
	inline Dictionary_2_t2FDCE35796605F114A2F6E91C337B721B0651FE1 ** get_address_of_SocketImplementationConfig_18() { return &___SocketImplementationConfig_18; }
	inline void set_SocketImplementationConfig_18(Dictionary_2_t2FDCE35796605F114A2F6E91C337B721B0651FE1 * value)
	{
		___SocketImplementationConfig_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CSocketImplementationU3Ek__BackingField_19)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_19() const { return ___U3CSocketImplementationU3Ek__BackingField_19; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_19() { return &___U3CSocketImplementationU3Ek__BackingField_19; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_19(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___DebugOut_20)); }
	inline uint8_t get_DebugOut_20() const { return ___DebugOut_20; }
	inline uint8_t* get_address_of_DebugOut_20() { return &___DebugOut_20; }
	inline void set_DebugOut_20(uint8_t value)
	{
		___DebugOut_20 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CListenerU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_21() const { return ___U3CListenerU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_21() { return &___U3CListenerU3Ek__BackingField_21; }
	inline void set_U3CListenerU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectMessage_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___OnDisconnectMessage_22)); }
	inline Action_1_tB462913483754319CBE0C6A31F6D92F7D18EAF6D * get_OnDisconnectMessage_22() const { return ___OnDisconnectMessage_22; }
	inline Action_1_tB462913483754319CBE0C6A31F6D92F7D18EAF6D ** get_address_of_OnDisconnectMessage_22() { return &___OnDisconnectMessage_22; }
	inline void set_OnDisconnectMessage_22(Action_1_tB462913483754319CBE0C6A31F6D92F7D18EAF6D * value)
	{
		___OnDisconnectMessage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectMessage_22), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___reuseEventInstance_23)); }
	inline bool get_reuseEventInstance_23() const { return ___reuseEventInstance_23; }
	inline bool* get_address_of_reuseEventInstance_23() { return &___reuseEventInstance_23; }
	inline void set_reuseEventInstance_23(bool value)
	{
		___reuseEventInstance_23 = value;
	}

	inline static int32_t get_offset_of_useByteArraySlicePoolForEvents_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___useByteArraySlicePoolForEvents_24)); }
	inline bool get_useByteArraySlicePoolForEvents_24() const { return ___useByteArraySlicePoolForEvents_24; }
	inline bool* get_address_of_useByteArraySlicePoolForEvents_24() { return &___useByteArraySlicePoolForEvents_24; }
	inline void set_useByteArraySlicePoolForEvents_24(bool value)
	{
		___useByteArraySlicePoolForEvents_24 = value;
	}

	inline static int32_t get_offset_of_wrapIncomingStructs_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___wrapIncomingStructs_25)); }
	inline bool get_wrapIncomingStructs_25() const { return ___wrapIncomingStructs_25; }
	inline bool* get_address_of_wrapIncomingStructs_25() { return &___wrapIncomingStructs_25; }
	inline void set_wrapIncomingStructs_25(bool value)
	{
		___wrapIncomingStructs_25 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___SendInCreationOrder_26)); }
	inline bool get_SendInCreationOrder_26() const { return ___SendInCreationOrder_26; }
	inline bool* get_address_of_SendInCreationOrder_26() { return &___SendInCreationOrder_26; }
	inline void set_SendInCreationOrder_26(bool value)
	{
		___SendInCreationOrder_26 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitResends_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___SequenceDeltaLimitResends_27)); }
	inline int32_t get_SequenceDeltaLimitResends_27() const { return ___SequenceDeltaLimitResends_27; }
	inline int32_t* get_address_of_SequenceDeltaLimitResends_27() { return &___SequenceDeltaLimitResends_27; }
	inline void set_SequenceDeltaLimitResends_27(int32_t value)
	{
		___SequenceDeltaLimitResends_27 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitSends_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___SequenceDeltaLimitSends_28)); }
	inline int32_t get_SequenceDeltaLimitSends_28() const { return ___SequenceDeltaLimitSends_28; }
	inline int32_t* get_address_of_SequenceDeltaLimitSends_28() { return &___SequenceDeltaLimitSends_28; }
	inline void set_SequenceDeltaLimitSends_28(int32_t value)
	{
		___SequenceDeltaLimitSends_28 = value;
	}

	inline static int32_t get_offset_of_TrafficRecorder_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___TrafficRecorder_29)); }
	inline RuntimeObject* get_TrafficRecorder_29() const { return ___TrafficRecorder_29; }
	inline RuntimeObject** get_address_of_TrafficRecorder_29() { return &___TrafficRecorder_29; }
	inline void set_TrafficRecorder_29(RuntimeObject* value)
	{
		___TrafficRecorder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrafficRecorder_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CEnableServerTracingU3Ek__BackingField_30)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_30() const { return ___U3CEnableServerTracingU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_30() { return &___U3CEnableServerTracingU3Ek__BackingField_30; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_30(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___quickResendAttempts_31)); }
	inline uint8_t get_quickResendAttempts_31() const { return ___quickResendAttempts_31; }
	inline uint8_t* get_address_of_quickResendAttempts_31() { return &___quickResendAttempts_31; }
	inline void set_quickResendAttempts_31(uint8_t value)
	{
		___quickResendAttempts_31 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___ChannelCount_32)); }
	inline uint8_t get_ChannelCount_32() const { return ___ChannelCount_32; }
	inline uint8_t* get_address_of_ChannelCount_32() { return &___ChannelCount_32; }
	inline void set_ChannelCount_32(uint8_t value)
	{
		___ChannelCount_32 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___EnableEncryptedFlag_33)); }
	inline bool get_EnableEncryptedFlag_33() const { return ___EnableEncryptedFlag_33; }
	inline bool* get_address_of_EnableEncryptedFlag_33() { return &___EnableEncryptedFlag_33; }
	inline void set_EnableEncryptedFlag_33(bool value)
	{
		___EnableEncryptedFlag_33 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___crcEnabled_34)); }
	inline bool get_crcEnabled_34() const { return ___crcEnabled_34; }
	inline bool* get_address_of_crcEnabled_34() { return &___crcEnabled_34; }
	inline void set_crcEnabled_34(bool value)
	{
		___crcEnabled_34 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___SentCountAllowance_35)); }
	inline int32_t get_SentCountAllowance_35() const { return ___SentCountAllowance_35; }
	inline int32_t* get_address_of_SentCountAllowance_35() { return &___SentCountAllowance_35; }
	inline void set_SentCountAllowance_35(int32_t value)
	{
		___SentCountAllowance_35 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___InitialResendTimeMax_36)); }
	inline int32_t get_InitialResendTimeMax_36() const { return ___InitialResendTimeMax_36; }
	inline int32_t* get_address_of_InitialResendTimeMax_36() { return &___InitialResendTimeMax_36; }
	inline void set_InitialResendTimeMax_36(int32_t value)
	{
		___InitialResendTimeMax_36 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___TimePingInterval_37)); }
	inline int32_t get_TimePingInterval_37() const { return ___TimePingInterval_37; }
	inline int32_t* get_address_of_TimePingInterval_37() { return &___TimePingInterval_37; }
	inline void set_TimePingInterval_37(int32_t value)
	{
		___TimePingInterval_37 = value;
	}

	inline static int32_t get_offset_of_disconnectTimeout_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___disconnectTimeout_38)); }
	inline int32_t get_disconnectTimeout_38() const { return ___disconnectTimeout_38; }
	inline int32_t* get_address_of_disconnectTimeout_38() { return &___disconnectTimeout_38; }
	inline void set_disconnectTimeout_38(int32_t value)
	{
		___disconnectTimeout_38 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CTransportProtocolU3Ek__BackingField_39)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_39() const { return ___U3CTransportProtocolU3Ek__BackingField_39; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_39() { return &___U3CTransportProtocolU3Ek__BackingField_39; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_39(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_mtu_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___mtu_41)); }
	inline int32_t get_mtu_41() const { return ___mtu_41; }
	inline int32_t* get_address_of_mtu_41() { return &___mtu_41; }
	inline void set_mtu_41(int32_t value)
	{
		___mtu_41 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CIsSendingOnlyAcksU3Ek__BackingField_42)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_42() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_42() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_42; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_42(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___RandomizeSequenceNumbers_44)); }
	inline bool get_RandomizeSequenceNumbers_44() const { return ___RandomizeSequenceNumbers_44; }
	inline bool* get_address_of_RandomizeSequenceNumbers_44() { return &___RandomizeSequenceNumbers_44; }
	inline void set_RandomizeSequenceNumbers_44(bool value)
	{
		___RandomizeSequenceNumbers_44 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___RandomizedSequenceNumbers_45)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RandomizedSequenceNumbers_45() const { return ___RandomizedSequenceNumbers_45; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RandomizedSequenceNumbers_45() { return &___RandomizedSequenceNumbers_45; }
	inline void set_RandomizedSequenceNumbers_45(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RandomizedSequenceNumbers_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_45), (void*)value);
	}

	inline static int32_t get_offset_of_GcmDatagramEncryption_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___GcmDatagramEncryption_46)); }
	inline bool get_GcmDatagramEncryption_46() const { return ___GcmDatagramEncryption_46; }
	inline bool* get_address_of_GcmDatagramEncryption_46() { return &___GcmDatagramEncryption_46; }
	inline void set_GcmDatagramEncryption_46(bool value)
	{
		___GcmDatagramEncryption_46 = value;
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CTrafficStatsIncomingU3Ek__BackingField_47)); }
	inline TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B * get_U3CTrafficStatsIncomingU3Ek__BackingField_47() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_47; }
	inline TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_47() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_47; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_47(TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CTrafficStatsOutgoingU3Ek__BackingField_48)); }
	inline TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B * get_U3CTrafficStatsOutgoingU3Ek__BackingField_48() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_48; }
	inline TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_48() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_48; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_48(TrafficStats_t2798D97268163408DCFAAE010F657E41FABA299B * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CTrafficStatsGameLevelU3Ek__BackingField_49)); }
	inline TrafficStatsGameLevel_t65BC59AA417F53D3BAF3EA9EF35A6C3E32EECA07 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_49() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_49; }
	inline TrafficStatsGameLevel_t65BC59AA417F53D3BAF3EA9EF35A6C3E32EECA07 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_49() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_49; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_49(TrafficStatsGameLevel_t65BC59AA417F53D3BAF3EA9EF35A6C3E32EECA07 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_50() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___trafficStatsStopwatch_50)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_trafficStatsStopwatch_50() const { return ___trafficStatsStopwatch_50; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_trafficStatsStopwatch_50() { return &___trafficStatsStopwatch_50; }
	inline void set_trafficStatsStopwatch_50(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___trafficStatsStopwatch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_50), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_51() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___trafficStatsEnabled_51)); }
	inline bool get_trafficStatsEnabled_51() const { return ___trafficStatsEnabled_51; }
	inline bool* get_address_of_trafficStatsEnabled_51() { return &___trafficStatsEnabled_51; }
	inline void set_trafficStatsEnabled_51(bool value)
	{
		___trafficStatsEnabled_51 = value;
	}

	inline static int32_t get_offset_of_peerBase_52() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___peerBase_52)); }
	inline PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 * get_peerBase_52() const { return ___peerBase_52; }
	inline PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 ** get_address_of_peerBase_52() { return &___peerBase_52; }
	inline void set_peerBase_52(PeerBase_t0869957F8662F8DA8016612119A2D0DA00369E84 * value)
	{
		___peerBase_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_52), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_53() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___SendOutgoingLockObject_53)); }
	inline RuntimeObject * get_SendOutgoingLockObject_53() const { return ___SendOutgoingLockObject_53; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_53() { return &___SendOutgoingLockObject_53; }
	inline void set_SendOutgoingLockObject_53(RuntimeObject * value)
	{
		___SendOutgoingLockObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_54() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___DispatchLockObject_54)); }
	inline RuntimeObject * get_DispatchLockObject_54() const { return ___DispatchLockObject_54; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_54() { return &___DispatchLockObject_54; }
	inline void set_DispatchLockObject_54(RuntimeObject * value)
	{
		___DispatchLockObject_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_54), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_55() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___EnqueueLock_55)); }
	inline RuntimeObject * get_EnqueueLock_55() const { return ___EnqueueLock_55; }
	inline RuntimeObject ** get_address_of_EnqueueLock_55() { return &___EnqueueLock_55; }
	inline void set_EnqueueLock_55(RuntimeObject * value)
	{
		___EnqueueLock_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_55), (void*)value);
	}

	inline static int32_t get_offset_of_payloadEncryptorType_56() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___payloadEncryptorType_56)); }
	inline Type_t * get_payloadEncryptorType_56() const { return ___payloadEncryptorType_56; }
	inline Type_t ** get_address_of_payloadEncryptorType_56() { return &___payloadEncryptorType_56; }
	inline void set_payloadEncryptorType_56(Type_t * value)
	{
		___payloadEncryptorType_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payloadEncryptorType_56), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_57() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___PayloadEncryptionSecret_57)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PayloadEncryptionSecret_57() const { return ___PayloadEncryptionSecret_57; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PayloadEncryptionSecret_57() { return &___PayloadEncryptionSecret_57; }
	inline void set_PayloadEncryptionSecret_57(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PayloadEncryptionSecret_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_57), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_58() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___encryptorType_58)); }
	inline Type_t * get_encryptorType_58() const { return ___encryptorType_58; }
	inline Type_t ** get_address_of_encryptorType_58() { return &___encryptorType_58; }
	inline void set_encryptorType_58(Type_t * value)
	{
		___encryptorType_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_58), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_59() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___Encryptor_59)); }
	inline RuntimeObject* get_Encryptor_59() const { return ___Encryptor_59; }
	inline RuntimeObject** get_address_of_Encryptor_59() { return &___Encryptor_59; }
	inline void set_Encryptor_59(RuntimeObject* value)
	{
		___Encryptor_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDiscardedU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CCountDiscardedU3Ek__BackingField_60)); }
	inline int32_t get_U3CCountDiscardedU3Ek__BackingField_60() const { return ___U3CCountDiscardedU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CCountDiscardedU3Ek__BackingField_60() { return &___U3CCountDiscardedU3Ek__BackingField_60; }
	inline void set_U3CCountDiscardedU3Ek__BackingField_60(int32_t value)
	{
		___U3CCountDiscardedU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8, ___U3CDeltaUnreliableNumberU3Ek__BackingField_61)); }
	inline int32_t get_U3CDeltaUnreliableNumberU3Ek__BackingField_61() const { return ___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return &___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline void set_U3CDeltaUnreliableNumberU3Ek__BackingField_61(int32_t value)
	{
		___U3CDeltaUnreliableNumberU3Ek__BackingField_61 = value;
	}
};

struct PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeSocketLibAvailable
	bool ___NativeSocketLibAvailable_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativePayloadEncryptionLibAvailable
	bool ___NativePayloadEncryptionLibAvailable_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NativeDatagramEncryptionLibAvailable
	bool ___NativeDatagramEncryptionLibAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_43;

public:
	inline static int32_t get_offset_of_NoNativeCallbacks_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8_StaticFields, ___NoNativeCallbacks_9)); }
	inline bool get_NoNativeCallbacks_9() const { return ___NoNativeCallbacks_9; }
	inline bool* get_address_of_NoNativeCallbacks_9() { return &___NoNativeCallbacks_9; }
	inline void set_NoNativeCallbacks_9(bool value)
	{
		___NoNativeCallbacks_9 = value;
	}

	inline static int32_t get_offset_of_clientVersion_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8_StaticFields, ___clientVersion_12)); }
	inline String_t* get_clientVersion_12() const { return ___clientVersion_12; }
	inline String_t** get_address_of_clientVersion_12() { return &___clientVersion_12; }
	inline void set_clientVersion_12(String_t* value)
	{
		___clientVersion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_12), (void*)value);
	}

	inline static int32_t get_offset_of_NativeSocketLibAvailable_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8_StaticFields, ___NativeSocketLibAvailable_13)); }
	inline bool get_NativeSocketLibAvailable_13() const { return ___NativeSocketLibAvailable_13; }
	inline bool* get_address_of_NativeSocketLibAvailable_13() { return &___NativeSocketLibAvailable_13; }
	inline void set_NativeSocketLibAvailable_13(bool value)
	{
		___NativeSocketLibAvailable_13 = value;
	}

	inline static int32_t get_offset_of_NativePayloadEncryptionLibAvailable_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8_StaticFields, ___NativePayloadEncryptionLibAvailable_14)); }
	inline bool get_NativePayloadEncryptionLibAvailable_14() const { return ___NativePayloadEncryptionLibAvailable_14; }
	inline bool* get_address_of_NativePayloadEncryptionLibAvailable_14() { return &___NativePayloadEncryptionLibAvailable_14; }
	inline void set_NativePayloadEncryptionLibAvailable_14(bool value)
	{
		___NativePayloadEncryptionLibAvailable_14 = value;
	}

	inline static int32_t get_offset_of_NativeDatagramEncryptionLibAvailable_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8_StaticFields, ___NativeDatagramEncryptionLibAvailable_15)); }
	inline bool get_NativeDatagramEncryptionLibAvailable_15() const { return ___NativeDatagramEncryptionLibAvailable_15; }
	inline bool* get_address_of_NativeDatagramEncryptionLibAvailable_15() { return &___NativeDatagramEncryptionLibAvailable_15; }
	inline void set_NativeDatagramEncryptionLibAvailable_15(bool value)
	{
		___NativeDatagramEncryptionLibAvailable_15 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8_StaticFields, ___OutgoingStreamBufferSize_40)); }
	inline int32_t get_OutgoingStreamBufferSize_40() const { return ___OutgoingStreamBufferSize_40; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_40() { return &___OutgoingStreamBufferSize_40; }
	inline void set_OutgoingStreamBufferSize_40(int32_t value)
	{
		___OutgoingStreamBufferSize_40 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8_StaticFields, ___AsyncKeyExchange_43)); }
	inline bool get_AsyncKeyExchange_43() const { return ___AsyncKeyExchange_43; }
	inline bool* get_address_of_AsyncKeyExchange_43() { return &___AsyncKeyExchange_43; }
	inline void set_AsyncKeyExchange_43(bool value)
	{
		___AsyncKeyExchange_43 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_t5149A61E5ED5D99D0A409308A96AA25A43643EA8  ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject * ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t389A029E78109F501EB7FA03F5E5FA15F2E432F3 * ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_tB311ECB3A4B4B57B1617628BBF34198457C61D9B * ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_tF6F07E6117C92ED4FA052F1747BF2DB352B56220 * ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CClientTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CClientTypeU3Ek__BackingField_3() const { return ___U3CClientTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CClientTypeU3Ek__BackingField_3() { return &___U3CClientTypeU3Ek__BackingField_3; }
	inline void set_U3CClientTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CClientTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CAuthValuesU3Ek__BackingField_4)); }
	inline AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * get_U3CAuthValuesU3Ek__BackingField_4() const { return ___U3CAuthValuesU3Ek__BackingField_4; }
	inline AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A ** get_address_of_U3CAuthValuesU3Ek__BackingField_4() { return &___U3CAuthValuesU3Ek__BackingField_4; }
	inline void set_U3CAuthValuesU3Ek__BackingField_4(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * value)
	{
		___U3CAuthValuesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___AuthMode_5)); }
	inline int32_t get_AuthMode_5() const { return ___AuthMode_5; }
	inline int32_t* get_address_of_AuthMode_5() { return &___AuthMode_5; }
	inline void set_AuthMode_5(int32_t value)
	{
		___AuthMode_5 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EncryptionMode_6)); }
	inline int32_t get_EncryptionMode_6() const { return ___EncryptionMode_6; }
	inline int32_t* get_address_of_EncryptionMode_6() { return &___EncryptionMode_6; }
	inline void set_EncryptionMode_6(int32_t value)
	{
		___EncryptionMode_6 = value;
	}

	inline static int32_t get_offset_of_U3CExpectedProtocolU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CExpectedProtocolU3Ek__BackingField_7)); }
	inline Nullable_1_t5149A61E5ED5D99D0A409308A96AA25A43643EA8  get_U3CExpectedProtocolU3Ek__BackingField_7() const { return ___U3CExpectedProtocolU3Ek__BackingField_7; }
	inline Nullable_1_t5149A61E5ED5D99D0A409308A96AA25A43643EA8 * get_address_of_U3CExpectedProtocolU3Ek__BackingField_7() { return &___U3CExpectedProtocolU3Ek__BackingField_7; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_7(Nullable_1_t5149A61E5ED5D99D0A409308A96AA25A43643EA8  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_tokenCache_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___tokenCache_8)); }
	inline RuntimeObject * get_tokenCache_8() const { return ___tokenCache_8; }
	inline RuntimeObject ** get_address_of_tokenCache_8() { return &___tokenCache_8; }
	inline void set_tokenCache_8(RuntimeObject * value)
	{
		___tokenCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CIsUsingNameServerU3Ek__BackingField_9)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_9() const { return ___U3CIsUsingNameServerU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_9() { return &___U3CIsUsingNameServerU3Ek__BackingField_9; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_9(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerHost_10)); }
	inline String_t* get_NameServerHost_10() const { return ___NameServerHost_10; }
	inline String_t** get_address_of_NameServerHost_10() { return &___NameServerHost_10; }
	inline void set_NameServerHost_10(String_t* value)
	{
		___NameServerHost_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_12(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_ServerPortOverrides_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ServerPortOverrides_13)); }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  get_ServerPortOverrides_13() const { return ___ServerPortOverrides_13; }
	inline PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0 * get_address_of_ServerPortOverrides_13() { return &___ServerPortOverrides_13; }
	inline void set_ServerPortOverrides_13(PhotonPortDefinition_tC93F6B25ADFE7580E7E03979C6252453F0DC9CA0  value)
	{
		___ServerPortOverrides_13 = value;
	}

	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CEnableProtocolFallbackU3Ek__BackingField_14)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_14() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_14() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_14; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_14(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CMasterServerAddressU3Ek__BackingField_15)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_15() const { return ___U3CMasterServerAddressU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_15() { return &___U3CMasterServerAddressU3Ek__BackingField_15; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_15(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CGameServerAddressU3Ek__BackingField_16)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_16() const { return ___U3CGameServerAddressU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_16() { return &___U3CGameServerAddressU3Ek__BackingField_16; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_16(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CServerU3Ek__BackingField_17)); }
	inline int32_t get_U3CServerU3Ek__BackingField_17() const { return ___U3CServerU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_17() { return &___U3CServerU3Ek__BackingField_17; }
	inline void set_U3CServerU3Ek__BackingField_17(int32_t value)
	{
		___U3CServerU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_ProxyServerAddress_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ProxyServerAddress_18)); }
	inline String_t* get_ProxyServerAddress_18() const { return ___ProxyServerAddress_18; }
	inline String_t** get_address_of_ProxyServerAddress_18() { return &___ProxyServerAddress_18; }
	inline void set_ProxyServerAddress_18(String_t* value)
	{
		___ProxyServerAddress_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServerAddress_18), (void*)value);
	}

	inline static int32_t get_offset_of_state_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___state_19)); }
	inline int32_t get_state_19() const { return ___state_19; }
	inline int32_t* get_address_of_state_19() { return &___state_19; }
	inline void set_state_19(int32_t value)
	{
		___state_19 = value;
	}

	inline static int32_t get_offset_of_StateChanged_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___StateChanged_20)); }
	inline Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * get_StateChanged_20() const { return ___StateChanged_20; }
	inline Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 ** get_address_of_StateChanged_20() { return &___StateChanged_20; }
	inline void set_StateChanged_20(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * value)
	{
		___StateChanged_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_20), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EventReceived_21)); }
	inline Action_1_t389A029E78109F501EB7FA03F5E5FA15F2E432F3 * get_EventReceived_21() const { return ___EventReceived_21; }
	inline Action_1_t389A029E78109F501EB7FA03F5E5FA15F2E432F3 ** get_address_of_EventReceived_21() { return &___EventReceived_21; }
	inline void set_EventReceived_21(Action_1_t389A029E78109F501EB7FA03F5E5FA15F2E432F3 * value)
	{
		___EventReceived_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_21), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___OpResponseReceived_22)); }
	inline Action_1_tB311ECB3A4B4B57B1617628BBF34198457C61D9B * get_OpResponseReceived_22() const { return ___OpResponseReceived_22; }
	inline Action_1_tB311ECB3A4B4B57B1617628BBF34198457C61D9B ** get_address_of_OpResponseReceived_22() { return &___OpResponseReceived_22; }
	inline void set_OpResponseReceived_22(Action_1_tB311ECB3A4B4B57B1617628BBF34198457C61D9B * value)
	{
		___OpResponseReceived_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_22), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ConnectionCallbackTargets_23)); }
	inline ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * get_ConnectionCallbackTargets_23() const { return ___ConnectionCallbackTargets_23; }
	inline ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 ** get_address_of_ConnectionCallbackTargets_23() { return &___ConnectionCallbackTargets_23; }
	inline void set_ConnectionCallbackTargets_23(ConnectionCallbacksContainer_t3FF418F792503D0BAEBE8E0FBA164ED635C5E627 * value)
	{
		___ConnectionCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___MatchMakingCallbackTargets_24)); }
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * get_MatchMakingCallbackTargets_24() const { return ___MatchMakingCallbackTargets_24; }
	inline MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 ** get_address_of_MatchMakingCallbackTargets_24() { return &___MatchMakingCallbackTargets_24; }
	inline void set_MatchMakingCallbackTargets_24(MatchMakingCallbacksContainer_tC3299710E85EF62C6EB01208F802EF70FAA80B09 * value)
	{
		___MatchMakingCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___InRoomCallbackTargets_25)); }
	inline InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * get_InRoomCallbackTargets_25() const { return ___InRoomCallbackTargets_25; }
	inline InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 ** get_address_of_InRoomCallbackTargets_25() { return &___InRoomCallbackTargets_25; }
	inline void set_InRoomCallbackTargets_25(InRoomCallbacksContainer_t937E33ABD47322AD796459C24582B20FB2CD90F0 * value)
	{
		___InRoomCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___LobbyCallbackTargets_26)); }
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * get_LobbyCallbackTargets_26() const { return ___LobbyCallbackTargets_26; }
	inline LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 ** get_address_of_LobbyCallbackTargets_26() { return &___LobbyCallbackTargets_26; }
	inline void set_LobbyCallbackTargets_26(LobbyCallbacksContainer_t5B0AD3D661F636EB9111E8ED4EDC5CEFEC900788 * value)
	{
		___LobbyCallbackTargets_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_26), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___WebRpcCallbackTargets_27)); }
	inline WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * get_WebRpcCallbackTargets_27() const { return ___WebRpcCallbackTargets_27; }
	inline WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 ** get_address_of_WebRpcCallbackTargets_27() { return &___WebRpcCallbackTargets_27; }
	inline void set_WebRpcCallbackTargets_27(WebRpcCallbacksContainer_t0AFAC6986E949F55461C6AE624D37B99FF5F5C96 * value)
	{
		___WebRpcCallbackTargets_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_27), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___ErrorInfoCallbackTargets_28)); }
	inline ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * get_ErrorInfoCallbackTargets_28() const { return ___ErrorInfoCallbackTargets_28; }
	inline ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 ** get_address_of_ErrorInfoCallbackTargets_28() { return &___ErrorInfoCallbackTargets_28; }
	inline void set_ErrorInfoCallbackTargets_28(ErrorInfoCallbacksContainer_tB826CF47FBDA7DDE1BDE3433AD155B973DD800E6 * value)
	{
		___ErrorInfoCallbackTargets_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CDisconnectedCauseU3Ek__BackingField_29)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_29() const { return ___U3CDisconnectedCauseU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_29() { return &___U3CDisconnectedCauseU3Ek__BackingField_29; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_29(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentLobbyU3Ek__BackingField_30)); }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * get_U3CCurrentLobbyU3Ek__BackingField_30() const { return ___U3CCurrentLobbyU3Ek__BackingField_30; }
	inline TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_30() { return &___U3CCurrentLobbyU3Ek__BackingField_30; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_30(TypedLobby_tD368895EDDB4706F8B68ABCA542E3E697845B1C5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___EnableLobbyStatistics_31)); }
	inline bool get_EnableLobbyStatistics_31() const { return ___EnableLobbyStatistics_31; }
	inline bool* get_address_of_EnableLobbyStatistics_31() { return &___EnableLobbyStatistics_31; }
	inline void set_EnableLobbyStatistics_31(bool value)
	{
		___EnableLobbyStatistics_31 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___lobbyStatistics_32)); }
	inline List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * get_lobbyStatistics_32() const { return ___lobbyStatistics_32; }
	inline List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 ** get_address_of_lobbyStatistics_32() { return &___lobbyStatistics_32; }
	inline void set_lobbyStatistics_32(List_1_tE47B5E59999F5719162B295364BEE262CCDB9C70 * value)
	{
		___lobbyStatistics_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CLocalPlayerU3Ek__BackingField_33)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CLocalPlayerU3Ek__BackingField_33() const { return ___U3CLocalPlayerU3Ek__BackingField_33; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_33() { return &___U3CLocalPlayerU3Ek__BackingField_33; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_33(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentRoomU3Ek__BackingField_34)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CCurrentRoomU3Ek__BackingField_34() const { return ___U3CCurrentRoomU3Ek__BackingField_34; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_34() { return &___U3CCurrentRoomU3Ek__BackingField_34; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_34(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CPlayersOnMasterCountU3Ek__BackingField_35)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_35() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_35() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_35; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_35(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CPlayersInRoomsCountU3Ek__BackingField_36)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_36() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_36() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_36; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_36(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CRoomsCountU3Ek__BackingField_37)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_37() const { return ___U3CRoomsCountU3Ek__BackingField_37; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_37() { return &___U3CRoomsCountU3Ek__BackingField_37; }
	inline void set_U3CRoomsCountU3Ek__BackingField_37(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_38() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___lastJoinType_38)); }
	inline int32_t get_lastJoinType_38() const { return ___lastJoinType_38; }
	inline int32_t* get_address_of_lastJoinType_38() { return &___lastJoinType_38; }
	inline void set_lastJoinType_38(int32_t value)
	{
		___lastJoinType_38 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___enterRoomParamsCache_39)); }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * get_enterRoomParamsCache_39() const { return ___enterRoomParamsCache_39; }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E ** get_address_of_enterRoomParamsCache_39() { return &___enterRoomParamsCache_39; }
	inline void set_enterRoomParamsCache_39(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * value)
	{
		___enterRoomParamsCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___failedRoomEntryOperation_40)); }
	inline OperationResponse_tF6F07E6117C92ED4FA052F1747BF2DB352B56220 * get_failedRoomEntryOperation_40() const { return ___failedRoomEntryOperation_40; }
	inline OperationResponse_tF6F07E6117C92ED4FA052F1747BF2DB352B56220 ** get_address_of_failedRoomEntryOperation_40() { return &___failedRoomEntryOperation_40; }
	inline void set_failedRoomEntryOperation_40(OperationResponse_tF6F07E6117C92ED4FA052F1747BF2DB352B56220 * value)
	{
		___failedRoomEntryOperation_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_40), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___friendListRequested_42)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_friendListRequested_42() const { return ___friendListRequested_42; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_friendListRequested_42() { return &___friendListRequested_42; }
	inline void set_friendListRequested_42(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___friendListRequested_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCloudRegionU3Ek__BackingField_43)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_43() const { return ___U3CCloudRegionU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_43() { return &___U3CCloudRegionU3Ek__BackingField_43; }
	inline void set_U3CCloudRegionU3Ek__BackingField_43(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___U3CCurrentClusterU3Ek__BackingField_44)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_44() const { return ___U3CCurrentClusterU3Ek__BackingField_44; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_44() { return &___U3CCurrentClusterU3Ek__BackingField_44; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_44(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___RegionHandler_45)); }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * get_RegionHandler_45() const { return ___RegionHandler_45; }
	inline RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 ** get_address_of_RegionHandler_45() { return &___RegionHandler_45; }
	inline void set_RegionHandler_45(RegionHandler_t36D0892A84D1BC0237780130699C8D09AFCA3A53 * value)
	{
		___RegionHandler_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_45), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___bestRegionSummaryFromStorage_46)); }
	inline String_t* get_bestRegionSummaryFromStorage_46() const { return ___bestRegionSummaryFromStorage_46; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_46() { return &___bestRegionSummaryFromStorage_46; }
	inline void set_bestRegionSummaryFromStorage_46(String_t* value)
	{
		___bestRegionSummaryFromStorage_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_46), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___SummaryToCache_47)); }
	inline String_t* get_SummaryToCache_47() const { return ___SummaryToCache_47; }
	inline String_t** get_address_of_SummaryToCache_47() { return &___SummaryToCache_47; }
	inline void set_SummaryToCache_47(String_t* value)
	{
		___SummaryToCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_48() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___connectToBestRegion_48)); }
	inline bool get_connectToBestRegion_48() const { return ___connectToBestRegion_48; }
	inline bool* get_address_of_connectToBestRegion_48() { return &___connectToBestRegion_48; }
	inline void set_connectToBestRegion_48(bool value)
	{
		___connectToBestRegion_48 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_49() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___callbackTargetChanges_49)); }
	inline Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * get_callbackTargetChanges_49() const { return ___callbackTargetChanges_49; }
	inline Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 ** get_address_of_callbackTargetChanges_49() { return &___callbackTargetChanges_49; }
	inline void set_callbackTargetChanges_49(Queue_1_tFF9526B5F79416765882A99F02C06F237631B787 * value)
	{
		___callbackTargetChanges_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_49), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_50() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___callbackTargets_50)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get_callbackTargets_50() const { return ___callbackTargets_50; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of_callbackTargets_50() { return &___callbackTargets_50; }
	inline void set_callbackTargets_50(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		___callbackTargets_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_50), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortInAppSettings_51() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A, ___NameServerPortInAppSettings_51)); }
	inline int32_t get_NameServerPortInAppSettings_51() const { return ___NameServerPortInAppSettings_51; }
	inline int32_t* get_address_of_NameServerPortInAppSettings_51() { return &___NameServerPortInAppSettings_51; }
	inline void set_NameServerPortInAppSettings_51(int32_t value)
	{
		___NameServerPortInAppSettings_51 = value;
	}
};

struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_t5D92CDE0F52D2C1B2A5E4F48DAB9C29ECB51FC64 * ___ProtocolToNameServerPort_11;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A_StaticFields, ___ProtocolToNameServerPort_11)); }
	inline Dictionary_2_t5D92CDE0F52D2C1B2A5E4F48DAB9C29ECB51FC64 * get_ProtocolToNameServerPort_11() const { return ___ProtocolToNameServerPort_11; }
	inline Dictionary_2_t5D92CDE0F52D2C1B2A5E4F48DAB9C29ECB51FC64 ** get_address_of_ProtocolToNameServerPort_11() { return &___ProtocolToNameServerPort_11; }
	inline void set_ProtocolToNameServerPort_11(Dictionary_2_t5D92CDE0F52D2C1B2A5E4F48DAB9C29ECB51FC64 * value)
	{
		___ProtocolToNameServerPort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_11), (void*)value);
	}
};


// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4  : public PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8
{
public:
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_t7F65BBB19D5F29D81640CA2A99AA963AC75CF631 * ___paramDictionaryPool_62;

public:
	inline static int32_t get_offset_of_paramDictionaryPool_62() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4, ___paramDictionaryPool_62)); }
	inline Pool_1_t7F65BBB19D5F29D81640CA2A99AA963AC75CF631 * get_paramDictionaryPool_62() const { return ___paramDictionaryPool_62; }
	inline Pool_1_t7F65BBB19D5F29D81640CA2A99AA963AC75CF631 ** get_address_of_paramDictionaryPool_62() { return &___paramDictionaryPool_62; }
	inline void set_paramDictionaryPool_62(Pool_1_t7F65BBB19D5F29D81640CA2A99AA963AC75CF631 * value)
	{
		___paramDictionaryPool_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDictionaryPool_62), (void*)value);
	}
};


// Photon.Pun.ServerSettings
struct ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Photon.Realtime.AppSettings Photon.Pun.ServerSettings::AppSettings
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * ___AppSettings_4;
	// System.String Photon.Pun.ServerSettings::DevRegion
	String_t* ___DevRegion_5;
	// Photon.Pun.PunLogLevel Photon.Pun.ServerSettings::PunLogging
	int32_t ___PunLogging_6;
	// System.Boolean Photon.Pun.ServerSettings::EnableSupportLogger
	bool ___EnableSupportLogger_7;
	// System.Boolean Photon.Pun.ServerSettings::RunInBackground
	bool ___RunInBackground_8;
	// System.Boolean Photon.Pun.ServerSettings::StartInOfflineMode
	bool ___StartInOfflineMode_9;
	// System.Collections.Generic.List`1<System.String> Photon.Pun.ServerSettings::RpcList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___RpcList_10;

public:
	inline static int32_t get_offset_of_AppSettings_4() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___AppSettings_4)); }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * get_AppSettings_4() const { return ___AppSettings_4; }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 ** get_address_of_AppSettings_4() { return &___AppSettings_4; }
	inline void set_AppSettings_4(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * value)
	{
		___AppSettings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppSettings_4), (void*)value);
	}

	inline static int32_t get_offset_of_DevRegion_5() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___DevRegion_5)); }
	inline String_t* get_DevRegion_5() const { return ___DevRegion_5; }
	inline String_t** get_address_of_DevRegion_5() { return &___DevRegion_5; }
	inline void set_DevRegion_5(String_t* value)
	{
		___DevRegion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DevRegion_5), (void*)value);
	}

	inline static int32_t get_offset_of_PunLogging_6() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___PunLogging_6)); }
	inline int32_t get_PunLogging_6() const { return ___PunLogging_6; }
	inline int32_t* get_address_of_PunLogging_6() { return &___PunLogging_6; }
	inline void set_PunLogging_6(int32_t value)
	{
		___PunLogging_6 = value;
	}

	inline static int32_t get_offset_of_EnableSupportLogger_7() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___EnableSupportLogger_7)); }
	inline bool get_EnableSupportLogger_7() const { return ___EnableSupportLogger_7; }
	inline bool* get_address_of_EnableSupportLogger_7() { return &___EnableSupportLogger_7; }
	inline void set_EnableSupportLogger_7(bool value)
	{
		___EnableSupportLogger_7 = value;
	}

	inline static int32_t get_offset_of_RunInBackground_8() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___RunInBackground_8)); }
	inline bool get_RunInBackground_8() const { return ___RunInBackground_8; }
	inline bool* get_address_of_RunInBackground_8() { return &___RunInBackground_8; }
	inline void set_RunInBackground_8(bool value)
	{
		___RunInBackground_8 = value;
	}

	inline static int32_t get_offset_of_StartInOfflineMode_9() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___StartInOfflineMode_9)); }
	inline bool get_StartInOfflineMode_9() const { return ___StartInOfflineMode_9; }
	inline bool* get_address_of_StartInOfflineMode_9() { return &___StartInOfflineMode_9; }
	inline void set_StartInOfflineMode_9(bool value)
	{
		___StartInOfflineMode_9 = value;
	}

	inline static int32_t get_offset_of_RpcList_10() { return static_cast<int32_t>(offsetof(ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B, ___RpcList_10)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_RpcList_10() const { return ___RpcList_10; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_RpcList_10() { return &___RpcList_10; }
	inline void set_RpcList_10(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___RpcList_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcList_10), (void*)value);
	}
};


// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460  : public LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A
{
public:
	// Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::voiceClient
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient_53;
	// Photon.Voice.PhotonTransportProtocol Photon.Voice.LoadBalancingTransport::protocol
	PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E * ___protocol_54;
	// System.Array Photon.Voice.LoadBalancingTransport::codecEnumValues
	RuntimeArray * ___codecEnumValues_55;

public:
	inline static int32_t get_offset_of_voiceClient_53() { return static_cast<int32_t>(offsetof(LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460, ___voiceClient_53)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_voiceClient_53() const { return ___voiceClient_53; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_voiceClient_53() { return &___voiceClient_53; }
	inline void set_voiceClient_53(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___voiceClient_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_53), (void*)value);
	}

	inline static int32_t get_offset_of_protocol_54() { return static_cast<int32_t>(offsetof(LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460, ___protocol_54)); }
	inline PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E * get_protocol_54() const { return ___protocol_54; }
	inline PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E ** get_address_of_protocol_54() { return &___protocol_54; }
	inline void set_protocol_54(PhotonTransportProtocol_t69080452DC5F5192DFD87FB301B79A8AAA4C5A5E * value)
	{
		___protocol_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocol_54), (void*)value);
	}

	inline static int32_t get_offset_of_codecEnumValues_55() { return static_cast<int32_t>(offsetof(LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460, ___codecEnumValues_55)); }
	inline RuntimeArray * get_codecEnumValues_55() const { return ___codecEnumValues_55; }
	inline RuntimeArray ** get_address_of_codecEnumValues_55() { return &___codecEnumValues_55; }
	inline void set_codecEnumValues_55(RuntimeArray * value)
	{
		___codecEnumValues_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codecEnumValues_55), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_8;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_11;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___backgroundStopwatch_12;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CClientU3Ek__BackingField_4)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAfterKeepAlive_5() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___DisconnectAfterKeepAlive_5)); }
	inline bool get_DisconnectAfterKeepAlive_5() const { return ___DisconnectAfterKeepAlive_5; }
	inline bool* get_address_of_DisconnectAfterKeepAlive_5() { return &___DisconnectAfterKeepAlive_5; }
	inline void set_DisconnectAfterKeepAlive_5(bool value)
	{
		___DisconnectAfterKeepAlive_5 = value;
	}

	inline static int32_t get_offset_of_KeepAliveInBackground_6() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___KeepAliveInBackground_6)); }
	inline int32_t get_KeepAliveInBackground_6() const { return ___KeepAliveInBackground_6; }
	inline int32_t* get_address_of_KeepAliveInBackground_6() { return &___KeepAliveInBackground_6; }
	inline void set_KeepAliveInBackground_6(int32_t value)
	{
		___KeepAliveInBackground_6 = value;
	}

	inline static int32_t get_offset_of_U3CCountSendAcksOnlyU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___U3CCountSendAcksOnlyU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountSendAcksOnlyU3Ek__BackingField_7() const { return ___U3CCountSendAcksOnlyU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountSendAcksOnlyU3Ek__BackingField_7() { return &___U3CCountSendAcksOnlyU3Ek__BackingField_7; }
	inline void set_U3CCountSendAcksOnlyU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountSendAcksOnlyU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_ApplyDontDestroyOnLoad_8() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___ApplyDontDestroyOnLoad_8)); }
	inline bool get_ApplyDontDestroyOnLoad_8() const { return ___ApplyDontDestroyOnLoad_8; }
	inline bool* get_address_of_ApplyDontDestroyOnLoad_8() { return &___ApplyDontDestroyOnLoad_8; }
	inline void set_ApplyDontDestroyOnLoad_8(bool value)
	{
		___ApplyDontDestroyOnLoad_8 = value;
	}

	inline static int32_t get_offset_of_fallbackThreadId_10() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___fallbackThreadId_10)); }
	inline uint8_t get_fallbackThreadId_10() const { return ___fallbackThreadId_10; }
	inline uint8_t* get_address_of_fallbackThreadId_10() { return &___fallbackThreadId_10; }
	inline void set_fallbackThreadId_10(uint8_t value)
	{
		___fallbackThreadId_10 = value;
	}

	inline static int32_t get_offset_of_didSendAcks_11() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___didSendAcks_11)); }
	inline bool get_didSendAcks_11() const { return ___didSendAcks_11; }
	inline bool* get_address_of_didSendAcks_11() { return &___didSendAcks_11; }
	inline void set_didSendAcks_11(bool value)
	{
		___didSendAcks_11 = value;
	}

	inline static int32_t get_offset_of_backgroundStopwatch_12() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE, ___backgroundStopwatch_12)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_backgroundStopwatch_12() const { return ___backgroundStopwatch_12; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_backgroundStopwatch_12() { return &___backgroundStopwatch_12; }
	inline void set_backgroundStopwatch_12(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___backgroundStopwatch_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundStopwatch_12), (void*)value);
	}
};

struct ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields
{
public:
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_9;

public:
	inline static int32_t get_offset_of_AppQuits_9() { return static_cast<int32_t>(offsetof(ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE_StaticFields, ___AppQuits_9)); }
	inline bool get_AppQuits_9() const { return ___AppQuits_9; }
	inline bool* get_address_of_AppQuits_9() { return &___AppQuits_9; }
	inline void set_AppQuits_9(bool value)
	{
		___AppQuits_9 = value;
	}
};


// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223, ___pvCache_4)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * ___OnControllerChangeCallbacks_31;

public:
	inline static int32_t get_offset_of_Group_4() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Group_4)); }
	inline uint8_t get_Group_4() const { return ___Group_4; }
	inline uint8_t* get_address_of_Group_4() { return &___Group_4; }
	inline void set_Group_4(uint8_t value)
	{
		___Group_4 = value;
	}

	inline static int32_t get_offset_of_prefixField_5() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___prefixField_5)); }
	inline int32_t get_prefixField_5() const { return ___prefixField_5; }
	inline int32_t* get_address_of_prefixField_5() { return &___prefixField_5; }
	inline void set_prefixField_5(int32_t value)
	{
		___prefixField_5 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_6() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___instantiationDataField_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_instantiationDataField_6() const { return ___instantiationDataField_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_instantiationDataField_6() { return &___instantiationDataField_6; }
	inline void set_instantiationDataField_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___instantiationDataField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationDataField_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_7() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataSent_7)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_lastOnSerializeDataSent_7() const { return ___lastOnSerializeDataSent_7; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_lastOnSerializeDataSent_7() { return &___lastOnSerializeDataSent_7; }
	inline void set_lastOnSerializeDataSent_7(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___lastOnSerializeDataSent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataSent_7), (void*)value);
	}

	inline static int32_t get_offset_of_syncValues_8() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___syncValues_8)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_syncValues_8() const { return ___syncValues_8; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_syncValues_8() { return &___syncValues_8; }
	inline void set_syncValues_8(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___syncValues_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncValues_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_9() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataReceived_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_lastOnSerializeDataReceived_9() const { return ___lastOnSerializeDataReceived_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_lastOnSerializeDataReceived_9() { return &___lastOnSerializeDataReceived_9; }
	inline void set_lastOnSerializeDataReceived_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___lastOnSerializeDataReceived_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataReceived_9), (void*)value);
	}

	inline static int32_t get_offset_of_Synchronization_10() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Synchronization_10)); }
	inline int32_t get_Synchronization_10() const { return ___Synchronization_10; }
	inline int32_t* get_address_of_Synchronization_10() { return &___Synchronization_10; }
	inline void set_Synchronization_10(int32_t value)
	{
		___Synchronization_10 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_11() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___mixedModeIsReliable_11)); }
	inline bool get_mixedModeIsReliable_11() const { return ___mixedModeIsReliable_11; }
	inline bool* get_address_of_mixedModeIsReliable_11() { return &___mixedModeIsReliable_11; }
	inline void set_mixedModeIsReliable_11(bool value)
	{
		___mixedModeIsReliable_11 = value;
	}

	inline static int32_t get_offset_of_OwnershipTransfer_12() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OwnershipTransfer_12)); }
	inline int32_t get_OwnershipTransfer_12() const { return ___OwnershipTransfer_12; }
	inline int32_t* get_address_of_OwnershipTransfer_12() { return &___OwnershipTransfer_12; }
	inline void set_OwnershipTransfer_12(int32_t value)
	{
		___OwnershipTransfer_12 = value;
	}

	inline static int32_t get_offset_of_observableSearch_13() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___observableSearch_13)); }
	inline int32_t get_observableSearch_13() const { return ___observableSearch_13; }
	inline int32_t* get_address_of_observableSearch_13() { return &___observableSearch_13; }
	inline void set_observableSearch_13(int32_t value)
	{
		___observableSearch_13 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_14() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ObservedComponents_14)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_ObservedComponents_14() const { return ___ObservedComponents_14; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_ObservedComponents_14() { return &___ObservedComponents_14; }
	inline void set_ObservedComponents_14(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___ObservedComponents_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObservedComponents_14), (void*)value);
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_15() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___RpcMonoBehaviours_15)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get_RpcMonoBehaviours_15() const { return ___RpcMonoBehaviours_15; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of_RpcMonoBehaviours_15() { return &___RpcMonoBehaviours_15; }
	inline void set_RpcMonoBehaviours_15(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		___RpcMonoBehaviours_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcMonoBehaviours_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsMineU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CIsMineU3Ek__BackingField_16)); }
	inline bool get_U3CIsMineU3Ek__BackingField_16() const { return ___U3CIsMineU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsMineU3Ek__BackingField_16() { return &___U3CIsMineU3Ek__BackingField_16; }
	inline void set_U3CIsMineU3Ek__BackingField_16(bool value)
	{
		___U3CIsMineU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CControllerU3Ek__BackingField_17)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CControllerU3Ek__BackingField_17() const { return ___U3CControllerU3Ek__BackingField_17; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CControllerU3Ek__BackingField_17() { return &___U3CControllerU3Ek__BackingField_17; }
	inline void set_U3CControllerU3Ek__BackingField_17(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CControllerU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatorActorNrU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CCreatorActorNrU3Ek__BackingField_18)); }
	inline int32_t get_U3CCreatorActorNrU3Ek__BackingField_18() const { return ___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CCreatorActorNrU3Ek__BackingField_18() { return &___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline void set_U3CCreatorActorNrU3Ek__BackingField_18(int32_t value)
	{
		___U3CCreatorActorNrU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CAmOwnerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CAmOwnerU3Ek__BackingField_19)); }
	inline bool get_U3CAmOwnerU3Ek__BackingField_19() const { return ___U3CAmOwnerU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CAmOwnerU3Ek__BackingField_19() { return &___U3CAmOwnerU3Ek__BackingField_19; }
	inline void set_U3CAmOwnerU3Ek__BackingField_19(bool value)
	{
		___U3CAmOwnerU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3COwnerU3Ek__BackingField_20)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3COwnerU3Ek__BackingField_20() const { return ___U3COwnerU3Ek__BackingField_20; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3COwnerU3Ek__BackingField_20() { return &___U3COwnerU3Ek__BackingField_20; }
	inline void set_U3COwnerU3Ek__BackingField_20(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3COwnerU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COwnerU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_ownerActorNr_21() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ownerActorNr_21)); }
	inline int32_t get_ownerActorNr_21() const { return ___ownerActorNr_21; }
	inline int32_t* get_address_of_ownerActorNr_21() { return &___ownerActorNr_21; }
	inline void set_ownerActorNr_21(int32_t value)
	{
		___ownerActorNr_21 = value;
	}

	inline static int32_t get_offset_of_controllerActorNr_22() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___controllerActorNr_22)); }
	inline int32_t get_controllerActorNr_22() const { return ___controllerActorNr_22; }
	inline int32_t* get_address_of_controllerActorNr_22() { return &___controllerActorNr_22; }
	inline void set_controllerActorNr_22(int32_t value)
	{
		___controllerActorNr_22 = value;
	}

	inline static int32_t get_offset_of_sceneViewId_23() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___sceneViewId_23)); }
	inline int32_t get_sceneViewId_23() const { return ___sceneViewId_23; }
	inline int32_t* get_address_of_sceneViewId_23() { return &___sceneViewId_23; }
	inline void set_sceneViewId_23(int32_t value)
	{
		___sceneViewId_23 = value;
	}

	inline static int32_t get_offset_of_viewIdField_24() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___viewIdField_24)); }
	inline int32_t get_viewIdField_24() const { return ___viewIdField_24; }
	inline int32_t* get_address_of_viewIdField_24() { return &___viewIdField_24; }
	inline void set_viewIdField_24(int32_t value)
	{
		___viewIdField_24 = value;
	}

	inline static int32_t get_offset_of_InstantiationId_25() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___InstantiationId_25)); }
	inline int32_t get_InstantiationId_25() const { return ___InstantiationId_25; }
	inline int32_t* get_address_of_InstantiationId_25() { return &___InstantiationId_25; }
	inline void set_InstantiationId_25(int32_t value)
	{
		___InstantiationId_25 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_26() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___isRuntimeInstantiated_26)); }
	inline bool get_isRuntimeInstantiated_26() const { return ___isRuntimeInstantiated_26; }
	inline bool* get_address_of_isRuntimeInstantiated_26() { return &___isRuntimeInstantiated_26; }
	inline void set_isRuntimeInstantiated_26(bool value)
	{
		___isRuntimeInstantiated_26 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_27() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___removedFromLocalViewList_27)); }
	inline bool get_removedFromLocalViewList_27() const { return ___removedFromLocalViewList_27; }
	inline bool* get_address_of_removedFromLocalViewList_27() { return &___removedFromLocalViewList_27; }
	inline void set_removedFromLocalViewList_27(bool value)
	{
		___removedFromLocalViewList_27 = value;
	}

	inline static int32_t get_offset_of_CallbackChangeQueue_28() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___CallbackChangeQueue_28)); }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * get_CallbackChangeQueue_28() const { return ___CallbackChangeQueue_28; }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA ** get_address_of_CallbackChangeQueue_28() { return &___CallbackChangeQueue_28; }
	inline void set_CallbackChangeQueue_28(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * value)
	{
		___CallbackChangeQueue_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackChangeQueue_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnPreNetDestroyCallbacks_29() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnPreNetDestroyCallbacks_29)); }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * get_OnPreNetDestroyCallbacks_29() const { return ___OnPreNetDestroyCallbacks_29; }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** get_address_of_OnPreNetDestroyCallbacks_29() { return &___OnPreNetDestroyCallbacks_29; }
	inline void set_OnPreNetDestroyCallbacks_29(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * value)
	{
		___OnPreNetDestroyCallbacks_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreNetDestroyCallbacks_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnerChangeCallbacks_30() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnOwnerChangeCallbacks_30)); }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * get_OnOwnerChangeCallbacks_30() const { return ___OnOwnerChangeCallbacks_30; }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** get_address_of_OnOwnerChangeCallbacks_30() { return &___OnOwnerChangeCallbacks_30; }
	inline void set_OnOwnerChangeCallbacks_30(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * value)
	{
		___OnOwnerChangeCallbacks_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnerChangeCallbacks_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerChangeCallbacks_31() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnControllerChangeCallbacks_31)); }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * get_OnControllerChangeCallbacks_31() const { return ___OnControllerChangeCallbacks_31; }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** get_address_of_OnControllerChangeCallbacks_31() { return &___OnControllerChangeCallbacks_31; }
	inline void set_OnControllerChangeCallbacks_31(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * value)
	{
		___OnControllerChangeCallbacks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerChangeCallbacks_31), (void*)value);
	}
};


// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceComponent::impl
	VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8 * ___impl_4;

public:
	inline static int32_t get_offset_of_impl_4() { return static_cast<int32_t>(offsetof(VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C, ___impl_4)); }
	inline VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8 * get_impl_4() const { return ___impl_4; }
	inline VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8 ** get_address_of_impl_4() { return &___impl_4; }
	inline void set_impl_4(VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8 * value)
	{
		___impl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_4), (void*)value);
	}
};


// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::LogLevel
	uint8_t ___LogLevel_4;

public:
	inline static int32_t get_offset_of_LogLevel_4() { return static_cast<int32_t>(offsetof(VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F, ___LogLevel_4)); }
	inline uint8_t get_LogLevel_4() const { return ___LogLevel_4; }
	inline uint8_t* get_address_of_LogLevel_4() { return &___LogLevel_4; }
	inline void set_LogLevel_4(uint8_t value)
	{
		___LogLevel_4 = value;
	}
};


// Photon.Voice.PUN.PhotonVoiceView
struct PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// Photon.Pun.PhotonView Photon.Voice.PUN.PhotonVoiceView::photonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_5;
	// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PhotonVoiceView::punVoiceClient
	PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * ___punVoiceClient_6;
	// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::<RecorderInUse>k__BackingField
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___U3CRecorderInUseU3Ek__BackingField_7;
	// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::<SpeakerInUse>k__BackingField
	Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___U3CSpeakerInUseU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_photonView_5() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___photonView_5)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_photonView_5() const { return ___photonView_5; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_photonView_5() { return &___photonView_5; }
	inline void set_photonView_5(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___photonView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonView_5), (void*)value);
	}

	inline static int32_t get_offset_of_punVoiceClient_6() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___punVoiceClient_6)); }
	inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * get_punVoiceClient_6() const { return ___punVoiceClient_6; }
	inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B ** get_address_of_punVoiceClient_6() { return &___punVoiceClient_6; }
	inline void set_punVoiceClient_6(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * value)
	{
		___punVoiceClient_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___punVoiceClient_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRecorderInUseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___U3CRecorderInUseU3Ek__BackingField_7)); }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * get_U3CRecorderInUseU3Ek__BackingField_7() const { return ___U3CRecorderInUseU3Ek__BackingField_7; }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** get_address_of_U3CRecorderInUseU3Ek__BackingField_7() { return &___U3CRecorderInUseU3Ek__BackingField_7; }
	inline void set_U3CRecorderInUseU3Ek__BackingField_7(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		___U3CRecorderInUseU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRecorderInUseU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSpeakerInUseU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722, ___U3CSpeakerInUseU3Ek__BackingField_8)); }
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * get_U3CSpeakerInUseU3Ek__BackingField_8() const { return ___U3CSpeakerInUseU3Ek__BackingField_8; }
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA ** get_address_of_U3CSpeakerInUseU3Ek__BackingField_8() { return &___U3CSpeakerInUseU3Ek__BackingField_8; }
	inline void set_U3CSpeakerInUseU3Ek__BackingField_8(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * value)
	{
		___U3CSpeakerInUseU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpeakerInUseU3Ek__BackingField_8), (void*)value);
	}
};


// Photon.Voice.Unity.Recorder
struct Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_7;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_8;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_9;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject * ___userData_10;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___voice_11;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_12;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.Recorder::voiceConnection
	VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * ___voiceConnection_13;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_14;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_15;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_16;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_17;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_18;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_19;
	// Photon.Voice.OpusCodec/FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_20;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_21;
	// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_22;
	// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_23;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip_24;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_25;
	// System.Boolean Photon.Voice.Unity.Recorder::recordingEnabled
	bool ___recordingEnabled_26;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * ___inputFactory_27;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.Unity.Recorder::audioSessionParameters
	AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  ___audioSessionParameters_28;
	// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings Photon.Voice.Unity.Recorder::androidNativeMicrophoneSettings
	NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B  ___androidNativeMicrophoneSettings_29;
	// System.Boolean Photon.Voice.Unity.Recorder::isPausedOrInBackground
	bool ___isPausedOrInBackground_30;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_31;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_32;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_33;
	// System.Boolean Photon.Voice.Unity.Recorder::recordWhenJoined
	bool ___recordWhenJoined_34;
	// Photon.Voice.DeviceInfo Photon.Voice.Unity.Recorder::microphoneDevice
	DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D  ___microphoneDevice_35;
	// System.Int32 Photon.Voice.Unity.Recorder::microphoneDeviceChangePending
	int32_t ___microphoneDeviceChangePending_36;
	// System.Int32 Photon.Voice.Unity.Recorder::restartRecordingPending
	int32_t ___restartRecordingPending_37;

public:
	inline static int32_t get_offset_of_voiceDetection_7() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetection_7)); }
	inline bool get_voiceDetection_7() const { return ___voiceDetection_7; }
	inline bool* get_address_of_voiceDetection_7() { return &___voiceDetection_7; }
	inline void set_voiceDetection_7(bool value)
	{
		___voiceDetection_7 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionThreshold_8() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetectionThreshold_8)); }
	inline float get_voiceDetectionThreshold_8() const { return ___voiceDetectionThreshold_8; }
	inline float* get_address_of_voiceDetectionThreshold_8() { return &___voiceDetectionThreshold_8; }
	inline void set_voiceDetectionThreshold_8(float value)
	{
		___voiceDetectionThreshold_8 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionDelayMs_9() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceDetectionDelayMs_9)); }
	inline int32_t get_voiceDetectionDelayMs_9() const { return ___voiceDetectionDelayMs_9; }
	inline int32_t* get_address_of_voiceDetectionDelayMs_9() { return &___voiceDetectionDelayMs_9; }
	inline void set_voiceDetectionDelayMs_9(int32_t value)
	{
		___voiceDetectionDelayMs_9 = value;
	}

	inline static int32_t get_offset_of_userData_10() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___userData_10)); }
	inline RuntimeObject * get_userData_10() const { return ___userData_10; }
	inline RuntimeObject ** get_address_of_userData_10() { return &___userData_10; }
	inline void set_userData_10(RuntimeObject * value)
	{
		___userData_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_10), (void*)value);
	}

	inline static int32_t get_offset_of_voice_11() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voice_11)); }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * get_voice_11() const { return ___voice_11; }
	inline LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 ** get_address_of_voice_11() { return &___voice_11; }
	inline void set_voice_11(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * value)
	{
		___voice_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voice_11), (void*)value);
	}

	inline static int32_t get_offset_of_inputSource_12() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___inputSource_12)); }
	inline RuntimeObject* get_inputSource_12() const { return ___inputSource_12; }
	inline RuntimeObject** get_address_of_inputSource_12() { return &___inputSource_12; }
	inline void set_inputSource_12(RuntimeObject* value)
	{
		___inputSource_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_12), (void*)value);
	}

	inline static int32_t get_offset_of_voiceConnection_13() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___voiceConnection_13)); }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * get_voiceConnection_13() const { return ___voiceConnection_13; }
	inline VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 ** get_address_of_voiceConnection_13() { return &___voiceConnection_13; }
	inline void set_voiceConnection_13(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * value)
	{
		___voiceConnection_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceConnection_13), (void*)value);
	}

	inline static int32_t get_offset_of_interestGroup_14() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___interestGroup_14)); }
	inline uint8_t get_interestGroup_14() const { return ___interestGroup_14; }
	inline uint8_t* get_address_of_interestGroup_14() { return &___interestGroup_14; }
	inline void set_interestGroup_14(uint8_t value)
	{
		___interestGroup_14 = value;
	}

	inline static int32_t get_offset_of_debugEchoMode_15() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___debugEchoMode_15)); }
	inline bool get_debugEchoMode_15() const { return ___debugEchoMode_15; }
	inline bool* get_address_of_debugEchoMode_15() { return &___debugEchoMode_15; }
	inline void set_debugEchoMode_15(bool value)
	{
		___debugEchoMode_15 = value;
	}

	inline static int32_t get_offset_of_reliableMode_16() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___reliableMode_16)); }
	inline bool get_reliableMode_16() const { return ___reliableMode_16; }
	inline bool* get_address_of_reliableMode_16() { return &___reliableMode_16; }
	inline void set_reliableMode_16(bool value)
	{
		___reliableMode_16 = value;
	}

	inline static int32_t get_offset_of_encrypt_17() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___encrypt_17)); }
	inline bool get_encrypt_17() const { return ___encrypt_17; }
	inline bool* get_address_of_encrypt_17() { return &___encrypt_17; }
	inline void set_encrypt_17(bool value)
	{
		___encrypt_17 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_18() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___transmitEnabled_18)); }
	inline bool get_transmitEnabled_18() const { return ___transmitEnabled_18; }
	inline bool* get_address_of_transmitEnabled_18() { return &___transmitEnabled_18; }
	inline void set_transmitEnabled_18(bool value)
	{
		___transmitEnabled_18 = value;
	}

	inline static int32_t get_offset_of_samplingRate_19() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___samplingRate_19)); }
	inline int32_t get_samplingRate_19() const { return ___samplingRate_19; }
	inline int32_t* get_address_of_samplingRate_19() { return &___samplingRate_19; }
	inline void set_samplingRate_19(int32_t value)
	{
		___samplingRate_19 = value;
	}

	inline static int32_t get_offset_of_frameDuration_20() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___frameDuration_20)); }
	inline int32_t get_frameDuration_20() const { return ___frameDuration_20; }
	inline int32_t* get_address_of_frameDuration_20() { return &___frameDuration_20; }
	inline void set_frameDuration_20(int32_t value)
	{
		___frameDuration_20 = value;
	}

	inline static int32_t get_offset_of_bitrate_21() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___bitrate_21)); }
	inline int32_t get_bitrate_21() const { return ___bitrate_21; }
	inline int32_t* get_address_of_bitrate_21() { return &___bitrate_21; }
	inline void set_bitrate_21(int32_t value)
	{
		___bitrate_21 = value;
	}

	inline static int32_t get_offset_of_sourceType_22() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___sourceType_22)); }
	inline int32_t get_sourceType_22() const { return ___sourceType_22; }
	inline int32_t* get_address_of_sourceType_22() { return &___sourceType_22; }
	inline void set_sourceType_22(int32_t value)
	{
		___sourceType_22 = value;
	}

	inline static int32_t get_offset_of_microphoneType_23() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___microphoneType_23)); }
	inline int32_t get_microphoneType_23() const { return ___microphoneType_23; }
	inline int32_t* get_address_of_microphoneType_23() { return &___microphoneType_23; }
	inline void set_microphoneType_23(int32_t value)
	{
		___microphoneType_23 = value;
	}

	inline static int32_t get_offset_of_audioClip_24() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___audioClip_24)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_audioClip_24() const { return ___audioClip_24; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_audioClip_24() { return &___audioClip_24; }
	inline void set_audioClip_24(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___audioClip_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_24), (void*)value);
	}

	inline static int32_t get_offset_of_loopAudioClip_25() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___loopAudioClip_25)); }
	inline bool get_loopAudioClip_25() const { return ___loopAudioClip_25; }
	inline bool* get_address_of_loopAudioClip_25() { return &___loopAudioClip_25; }
	inline void set_loopAudioClip_25(bool value)
	{
		___loopAudioClip_25 = value;
	}

	inline static int32_t get_offset_of_recordingEnabled_26() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___recordingEnabled_26)); }
	inline bool get_recordingEnabled_26() const { return ___recordingEnabled_26; }
	inline bool* get_address_of_recordingEnabled_26() { return &___recordingEnabled_26; }
	inline void set_recordingEnabled_26(bool value)
	{
		___recordingEnabled_26 = value;
	}

	inline static int32_t get_offset_of_inputFactory_27() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___inputFactory_27)); }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * get_inputFactory_27() const { return ___inputFactory_27; }
	inline Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 ** get_address_of_inputFactory_27() { return &___inputFactory_27; }
	inline void set_inputFactory_27(Func_1_t3729C27ED506C17CDE248FA4C18C6B936CAE4718 * value)
	{
		___inputFactory_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputFactory_27), (void*)value);
	}

	inline static int32_t get_offset_of_audioSessionParameters_28() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___audioSessionParameters_28)); }
	inline AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  get_audioSessionParameters_28() const { return ___audioSessionParameters_28; }
	inline AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * get_address_of_audioSessionParameters_28() { return &___audioSessionParameters_28; }
	inline void set_audioSessionParameters_28(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  value)
	{
		___audioSessionParameters_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___audioSessionParameters_28))->___CategoryOptions_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_androidNativeMicrophoneSettings_29() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___androidNativeMicrophoneSettings_29)); }
	inline NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B  get_androidNativeMicrophoneSettings_29() const { return ___androidNativeMicrophoneSettings_29; }
	inline NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B * get_address_of_androidNativeMicrophoneSettings_29() { return &___androidNativeMicrophoneSettings_29; }
	inline void set_androidNativeMicrophoneSettings_29(NativeAndroidMicrophoneSettings_tBC60E8DF1CCA8A4829D8A98EBE243F81B86DB56B  value)
	{
		___androidNativeMicrophoneSettings_29 = value;
	}

	inline static int32_t get_offset_of_isPausedOrInBackground_30() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___isPausedOrInBackground_30)); }
	inline bool get_isPausedOrInBackground_30() const { return ___isPausedOrInBackground_30; }
	inline bool* get_address_of_isPausedOrInBackground_30() { return &___isPausedOrInBackground_30; }
	inline void set_isPausedOrInBackground_30(bool value)
	{
		___isPausedOrInBackground_30 = value;
	}

	inline static int32_t get_offset_of_stopRecordingWhenPaused_31() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___stopRecordingWhenPaused_31)); }
	inline bool get_stopRecordingWhenPaused_31() const { return ___stopRecordingWhenPaused_31; }
	inline bool* get_address_of_stopRecordingWhenPaused_31() { return &___stopRecordingWhenPaused_31; }
	inline void set_stopRecordingWhenPaused_31(bool value)
	{
		___stopRecordingWhenPaused_31 = value;
	}

	inline static int32_t get_offset_of_useOnAudioFilterRead_32() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___useOnAudioFilterRead_32)); }
	inline bool get_useOnAudioFilterRead_32() const { return ___useOnAudioFilterRead_32; }
	inline bool* get_address_of_useOnAudioFilterRead_32() { return &___useOnAudioFilterRead_32; }
	inline void set_useOnAudioFilterRead_32(bool value)
	{
		___useOnAudioFilterRead_32 = value;
	}

	inline static int32_t get_offset_of_useMicrophoneTypeFallback_33() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___useMicrophoneTypeFallback_33)); }
	inline bool get_useMicrophoneTypeFallback_33() const { return ___useMicrophoneTypeFallback_33; }
	inline bool* get_address_of_useMicrophoneTypeFallback_33() { return &___useMicrophoneTypeFallback_33; }
	inline void set_useMicrophoneTypeFallback_33(bool value)
	{
		___useMicrophoneTypeFallback_33 = value;
	}

	inline static int32_t get_offset_of_recordWhenJoined_34() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___recordWhenJoined_34)); }
	inline bool get_recordWhenJoined_34() const { return ___recordWhenJoined_34; }
	inline bool* get_address_of_recordWhenJoined_34() { return &___recordWhenJoined_34; }
	inline void set_recordWhenJoined_34(bool value)
	{
		___recordWhenJoined_34 = value;
	}

	inline static int32_t get_offset_of_microphoneDevice_35() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___microphoneDevice_35)); }
	inline DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D  get_microphoneDevice_35() const { return ___microphoneDevice_35; }
	inline DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D * get_address_of_microphoneDevice_35() { return &___microphoneDevice_35; }
	inline void set_microphoneDevice_35(DeviceInfo_t750BC6F9095328BE6BC8DA22C81002FD886EAB0D  value)
	{
		___microphoneDevice_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___microphoneDevice_35))->___U3CIDStringU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___microphoneDevice_35))->___U3CNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___microphoneDevice_35))->___features_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_microphoneDeviceChangePending_36() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___microphoneDeviceChangePending_36)); }
	inline int32_t get_microphoneDeviceChangePending_36() const { return ___microphoneDeviceChangePending_36; }
	inline int32_t* get_address_of_microphoneDeviceChangePending_36() { return &___microphoneDeviceChangePending_36; }
	inline void set_microphoneDeviceChangePending_36(int32_t value)
	{
		___microphoneDeviceChangePending_36 = value;
	}

	inline static int32_t get_offset_of_restartRecordingPending_37() { return static_cast<int32_t>(offsetof(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5, ___restartRecordingPending_37)); }
	inline int32_t get_restartRecordingPending_37() const { return ___restartRecordingPending_37; }
	inline int32_t* get_address_of_restartRecordingPending_37() { return &___restartRecordingPending_37; }
	inline void set_restartRecordingPending_37(int32_t value)
	{
		___restartRecordingPending_37 = value;
	}
};


// Photon.Voice.Unity.Speaker
struct Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA  : public VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C
{
public:
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_5;
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.Unity.Speaker::playDelayConfig
	PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7  ___playDelayConfig_6;
	// System.Boolean Photon.Voice.Unity.Speaker::restartOnDeviceChange
	bool ___restartOnDeviceChange_7;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::<RemoteVoice>k__BackingField
	RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * ___U3CRemoteVoiceU3Ek__BackingField_9;
	// System.Int32 Photon.Voice.Unity.Speaker::restartPlaybackPending
	int32_t ___restartPlaybackPending_10;

public:
	inline static int32_t get_offset_of_audioOutput_5() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___audioOutput_5)); }
	inline RuntimeObject* get_audioOutput_5() const { return ___audioOutput_5; }
	inline RuntimeObject** get_address_of_audioOutput_5() { return &___audioOutput_5; }
	inline void set_audioOutput_5(RuntimeObject* value)
	{
		___audioOutput_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioOutput_5), (void*)value);
	}

	inline static int32_t get_offset_of_playDelayConfig_6() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___playDelayConfig_6)); }
	inline PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7  get_playDelayConfig_6() const { return ___playDelayConfig_6; }
	inline PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * get_address_of_playDelayConfig_6() { return &___playDelayConfig_6; }
	inline void set_playDelayConfig_6(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7  value)
	{
		___playDelayConfig_6 = value;
	}

	inline static int32_t get_offset_of_restartOnDeviceChange_7() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___restartOnDeviceChange_7)); }
	inline bool get_restartOnDeviceChange_7() const { return ___restartOnDeviceChange_7; }
	inline bool* get_address_of_restartOnDeviceChange_7() { return &___restartOnDeviceChange_7; }
	inline void set_restartOnDeviceChange_7(bool value)
	{
		___restartOnDeviceChange_7 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8)); }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8; }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8(Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRemoteVoiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___U3CRemoteVoiceU3Ek__BackingField_9)); }
	inline RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * get_U3CRemoteVoiceU3Ek__BackingField_9() const { return ___U3CRemoteVoiceU3Ek__BackingField_9; }
	inline RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC ** get_address_of_U3CRemoteVoiceU3Ek__BackingField_9() { return &___U3CRemoteVoiceU3Ek__BackingField_9; }
	inline void set_U3CRemoteVoiceU3Ek__BackingField_9(RemoteVoiceLink_tDDD70AB15B70170AF282B017A3BCE94DB80E9CBC * value)
	{
		___U3CRemoteVoiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRemoteVoiceU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_restartPlaybackPending_10() { return static_cast<int32_t>(offsetof(Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA, ___restartPlaybackPending_10)); }
	inline int32_t get_restartPlaybackPending_10() const { return ___restartPlaybackPending_10; }
	inline int32_t* get_address_of_restartPlaybackPending_10() { return &___restartPlaybackPending_10; }
	inline void set_restartPlaybackPending_10(int32_t value)
	{
		___restartPlaybackPending_10 = value;
	}
};


// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704  : public ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE
{
public:
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceConnection::voiceComponentImpl
	VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8 * ___voiceComponentImpl_13;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * ___client_15;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * ___supportLoggerComponent_16;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::runInBackground
	bool ___runInBackground_17;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_18;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_19;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_20;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_21;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_22;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___speakerPrefab_23;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * ___cachedRemoteVoices_24;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___primaryRecorder_25;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::usePrimaryRecorder
	bool ___usePrimaryRecorder_26;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * ___linkedSpeakers_27;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder> Photon.Voice.Unity.VoiceConnection::recorders
	List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * ___recorders_28;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * ___Settings_29;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * ___SpeakerLinked_30;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * ___RemoteVoiceAdded_31;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_32;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_33;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_34;

public:
	inline static int32_t get_offset_of_voiceComponentImpl_13() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___voiceComponentImpl_13)); }
	inline VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8 * get_voiceComponentImpl_13() const { return ___voiceComponentImpl_13; }
	inline VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8 ** get_address_of_voiceComponentImpl_13() { return &___voiceComponentImpl_13; }
	inline void set_voiceComponentImpl_13(VoiceComponentImpl_tA7F7996965A3E6B79D71119A5C0C3F1975FE78A8 * value)
	{
		___voiceComponentImpl_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceComponentImpl_13), (void*)value);
	}

	inline static int32_t get_offset_of_client_15() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___client_15)); }
	inline LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * get_client_15() const { return ___client_15; }
	inline LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 ** get_address_of_client_15() { return &___client_15; }
	inline void set_client_15(LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * value)
	{
		___client_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_15), (void*)value);
	}

	inline static int32_t get_offset_of_supportLoggerComponent_16() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___supportLoggerComponent_16)); }
	inline SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * get_supportLoggerComponent_16() const { return ___supportLoggerComponent_16; }
	inline SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 ** get_address_of_supportLoggerComponent_16() { return &___supportLoggerComponent_16; }
	inline void set_supportLoggerComponent_16(SupportLogger_t5DDB4975F6F861A267161FAD7E364707CFC0A002 * value)
	{
		___supportLoggerComponent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportLoggerComponent_16), (void*)value);
	}

	inline static int32_t get_offset_of_runInBackground_17() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___runInBackground_17)); }
	inline bool get_runInBackground_17() const { return ___runInBackground_17; }
	inline bool* get_address_of_runInBackground_17() { return &___runInBackground_17; }
	inline void set_runInBackground_17(bool value)
	{
		___runInBackground_17 = value;
	}

	inline static int32_t get_offset_of_statsResetInterval_18() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___statsResetInterval_18)); }
	inline int32_t get_statsResetInterval_18() const { return ___statsResetInterval_18; }
	inline int32_t* get_address_of_statsResetInterval_18() { return &___statsResetInterval_18; }
	inline void set_statsResetInterval_18(int32_t value)
	{
		___statsResetInterval_18 = value;
	}

	inline static int32_t get_offset_of_nextStatsTickCount_19() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___nextStatsTickCount_19)); }
	inline int32_t get_nextStatsTickCount_19() const { return ___nextStatsTickCount_19; }
	inline int32_t* get_address_of_nextStatsTickCount_19() { return &___nextStatsTickCount_19; }
	inline void set_nextStatsTickCount_19(int32_t value)
	{
		___nextStatsTickCount_19 = value;
	}

	inline static int32_t get_offset_of_statsReferenceTime_20() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___statsReferenceTime_20)); }
	inline float get_statsReferenceTime_20() const { return ___statsReferenceTime_20; }
	inline float* get_address_of_statsReferenceTime_20() { return &___statsReferenceTime_20; }
	inline void set_statsReferenceTime_20(float value)
	{
		___statsReferenceTime_20 = value;
	}

	inline static int32_t get_offset_of_referenceFramesLost_21() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___referenceFramesLost_21)); }
	inline int32_t get_referenceFramesLost_21() const { return ___referenceFramesLost_21; }
	inline int32_t* get_address_of_referenceFramesLost_21() { return &___referenceFramesLost_21; }
	inline void set_referenceFramesLost_21(int32_t value)
	{
		___referenceFramesLost_21 = value;
	}

	inline static int32_t get_offset_of_referenceFramesReceived_22() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___referenceFramesReceived_22)); }
	inline int32_t get_referenceFramesReceived_22() const { return ___referenceFramesReceived_22; }
	inline int32_t* get_address_of_referenceFramesReceived_22() { return &___referenceFramesReceived_22; }
	inline void set_referenceFramesReceived_22(int32_t value)
	{
		___referenceFramesReceived_22 = value;
	}

	inline static int32_t get_offset_of_speakerPrefab_23() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___speakerPrefab_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_speakerPrefab_23() const { return ___speakerPrefab_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_speakerPrefab_23() { return &___speakerPrefab_23; }
	inline void set_speakerPrefab_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___speakerPrefab_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speakerPrefab_23), (void*)value);
	}

	inline static int32_t get_offset_of_cachedRemoteVoices_24() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___cachedRemoteVoices_24)); }
	inline List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * get_cachedRemoteVoices_24() const { return ___cachedRemoteVoices_24; }
	inline List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE ** get_address_of_cachedRemoteVoices_24() { return &___cachedRemoteVoices_24; }
	inline void set_cachedRemoteVoices_24(List_1_tB0C131F9DB7AC689F5A2BA8945F3FDA7555F7CEE * value)
	{
		___cachedRemoteVoices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedRemoteVoices_24), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorder_25() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___primaryRecorder_25)); }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * get_primaryRecorder_25() const { return ___primaryRecorder_25; }
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** get_address_of_primaryRecorder_25() { return &___primaryRecorder_25; }
	inline void set_primaryRecorder_25(Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		___primaryRecorder_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryRecorder_25), (void*)value);
	}

	inline static int32_t get_offset_of_usePrimaryRecorder_26() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___usePrimaryRecorder_26)); }
	inline bool get_usePrimaryRecorder_26() const { return ___usePrimaryRecorder_26; }
	inline bool* get_address_of_usePrimaryRecorder_26() { return &___usePrimaryRecorder_26; }
	inline void set_usePrimaryRecorder_26(bool value)
	{
		___usePrimaryRecorder_26 = value;
	}

	inline static int32_t get_offset_of_linkedSpeakers_27() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___linkedSpeakers_27)); }
	inline List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * get_linkedSpeakers_27() const { return ___linkedSpeakers_27; }
	inline List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F ** get_address_of_linkedSpeakers_27() { return &___linkedSpeakers_27; }
	inline void set_linkedSpeakers_27(List_1_t89AF99FADC7E48891C45020A7D9A15E0EB1BB89F * value)
	{
		___linkedSpeakers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkedSpeakers_27), (void*)value);
	}

	inline static int32_t get_offset_of_recorders_28() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___recorders_28)); }
	inline List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * get_recorders_28() const { return ___recorders_28; }
	inline List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 ** get_address_of_recorders_28() { return &___recorders_28; }
	inline void set_recorders_28(List_1_tB80863E2156C3F175CD9C6B5B0F964F57B4A5D70 * value)
	{
		___recorders_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorders_28), (void*)value);
	}

	inline static int32_t get_offset_of_Settings_29() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___Settings_29)); }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * get_Settings_29() const { return ___Settings_29; }
	inline AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 ** get_address_of_Settings_29() { return &___Settings_29; }
	inline void set_Settings_29(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * value)
	{
		___Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerLinked_30() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___SpeakerLinked_30)); }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * get_SpeakerLinked_30() const { return ___SpeakerLinked_30; }
	inline Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 ** get_address_of_SpeakerLinked_30() { return &___SpeakerLinked_30; }
	inline void set_SpeakerLinked_30(Action_1_tED63E8DFC675CB46D15B876DE1362DA7E43672E1 * value)
	{
		___SpeakerLinked_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerLinked_30), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteVoiceAdded_31() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___RemoteVoiceAdded_31)); }
	inline Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * get_RemoteVoiceAdded_31() const { return ___RemoteVoiceAdded_31; }
	inline Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 ** get_address_of_RemoteVoiceAdded_31() { return &___RemoteVoiceAdded_31; }
	inline void set_RemoteVoiceAdded_31(Action_1_t08A534A31FEBF8D523007013F75268F7B9B74B80 * value)
	{
		___RemoteVoiceAdded_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteVoiceAdded_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFramesReceivedPerSecondU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesReceivedPerSecondU3Ek__BackingField_32)); }
	inline float get_U3CFramesReceivedPerSecondU3Ek__BackingField_32() const { return ___U3CFramesReceivedPerSecondU3Ek__BackingField_32; }
	inline float* get_address_of_U3CFramesReceivedPerSecondU3Ek__BackingField_32() { return &___U3CFramesReceivedPerSecondU3Ek__BackingField_32; }
	inline void set_U3CFramesReceivedPerSecondU3Ek__BackingField_32(float value)
	{
		___U3CFramesReceivedPerSecondU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPerSecondU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesLostPerSecondU3Ek__BackingField_33)); }
	inline float get_U3CFramesLostPerSecondU3Ek__BackingField_33() const { return ___U3CFramesLostPerSecondU3Ek__BackingField_33; }
	inline float* get_address_of_U3CFramesLostPerSecondU3Ek__BackingField_33() { return &___U3CFramesLostPerSecondU3Ek__BackingField_33; }
	inline void set_U3CFramesLostPerSecondU3Ek__BackingField_33(float value)
	{
		___U3CFramesLostPerSecondU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPercentU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704, ___U3CFramesLostPercentU3Ek__BackingField_34)); }
	inline float get_U3CFramesLostPercentU3Ek__BackingField_34() const { return ___U3CFramesLostPercentU3Ek__BackingField_34; }
	inline float* get_address_of_U3CFramesLostPercentU3Ek__BackingField_34() { return &___U3CFramesLostPercentU3Ek__BackingField_34; }
	inline void set_U3CFramesLostPercentU3Ek__BackingField_34(float value)
	{
		___U3CFramesLostPercentU3Ek__BackingField_34 = value;
	}
};


// Photon.Voice.PUN.UtilityScripts.VoiceDebugScript
struct VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// Photon.Voice.PUN.PhotonVoiceView Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::photonVoiceView
	PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * ___photonVoiceView_5;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::ForceRecordingAndTransmission
	bool ___ForceRecordingAndTransmission_6;
	// UnityEngine.AudioClip Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::TestAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___TestAudioClip_7;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::TestUsingAudioClip
	bool ___TestUsingAudioClip_8;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::DisableVad
	bool ___DisableVad_9;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::IncreaseLogLevels
	bool ___IncreaseLogLevels_10;
	// System.Boolean Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::LocalDebug
	bool ___LocalDebug_11;

public:
	inline static int32_t get_offset_of_photonVoiceView_5() { return static_cast<int32_t>(offsetof(VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1, ___photonVoiceView_5)); }
	inline PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * get_photonVoiceView_5() const { return ___photonVoiceView_5; }
	inline PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 ** get_address_of_photonVoiceView_5() { return &___photonVoiceView_5; }
	inline void set_photonVoiceView_5(PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * value)
	{
		___photonVoiceView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonVoiceView_5), (void*)value);
	}

	inline static int32_t get_offset_of_ForceRecordingAndTransmission_6() { return static_cast<int32_t>(offsetof(VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1, ___ForceRecordingAndTransmission_6)); }
	inline bool get_ForceRecordingAndTransmission_6() const { return ___ForceRecordingAndTransmission_6; }
	inline bool* get_address_of_ForceRecordingAndTransmission_6() { return &___ForceRecordingAndTransmission_6; }
	inline void set_ForceRecordingAndTransmission_6(bool value)
	{
		___ForceRecordingAndTransmission_6 = value;
	}

	inline static int32_t get_offset_of_TestAudioClip_7() { return static_cast<int32_t>(offsetof(VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1, ___TestAudioClip_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_TestAudioClip_7() const { return ___TestAudioClip_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_TestAudioClip_7() { return &___TestAudioClip_7; }
	inline void set_TestAudioClip_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___TestAudioClip_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestAudioClip_7), (void*)value);
	}

	inline static int32_t get_offset_of_TestUsingAudioClip_8() { return static_cast<int32_t>(offsetof(VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1, ___TestUsingAudioClip_8)); }
	inline bool get_TestUsingAudioClip_8() const { return ___TestUsingAudioClip_8; }
	inline bool* get_address_of_TestUsingAudioClip_8() { return &___TestUsingAudioClip_8; }
	inline void set_TestUsingAudioClip_8(bool value)
	{
		___TestUsingAudioClip_8 = value;
	}

	inline static int32_t get_offset_of_DisableVad_9() { return static_cast<int32_t>(offsetof(VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1, ___DisableVad_9)); }
	inline bool get_DisableVad_9() const { return ___DisableVad_9; }
	inline bool* get_address_of_DisableVad_9() { return &___DisableVad_9; }
	inline void set_DisableVad_9(bool value)
	{
		___DisableVad_9 = value;
	}

	inline static int32_t get_offset_of_IncreaseLogLevels_10() { return static_cast<int32_t>(offsetof(VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1, ___IncreaseLogLevels_10)); }
	inline bool get_IncreaseLogLevels_10() const { return ___IncreaseLogLevels_10; }
	inline bool* get_address_of_IncreaseLogLevels_10() { return &___IncreaseLogLevels_10; }
	inline void set_IncreaseLogLevels_10(bool value)
	{
		___IncreaseLogLevels_10 = value;
	}

	inline static int32_t get_offset_of_LocalDebug_11() { return static_cast<int32_t>(offsetof(VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1, ___LocalDebug_11)); }
	inline bool get_LocalDebug_11() const { return ___LocalDebug_11; }
	inline bool* get_address_of_LocalDebug_11() { return &___LocalDebug_11; }
	inline void set_LocalDebug_11(bool value)
	{
		___LocalDebug_11 = value;
	}
};


// Photon.Voice.PUN.PunVoiceClient
struct PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B  : public VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704
{
public:
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::AutoConnectAndJoin
	bool ___AutoConnectAndJoin_36;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::AutoLeaveAndDisconnect
	bool ___AutoLeaveAndDisconnect_37;
	// Photon.Realtime.EnterRoomParams Photon.Voice.PUN.PunVoiceClient::voiceRoomParams
	EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * ___voiceRoomParams_38;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledConnectAndJoin
	bool ___clientCalledConnectAndJoin_39;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledDisconnect
	bool ___clientCalledDisconnect_40;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::clientCalledConnectOnly
	bool ___clientCalledConnectOnly_41;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::internalDisconnect
	bool ___internalDisconnect_42;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::internalConnect
	bool ___internalConnect_43;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::usePunAppSettings
	bool ___usePunAppSettings_45;
	// System.Boolean Photon.Voice.PUN.PunVoiceClient::usePunAuthValues
	bool ___usePunAuthValues_46;

public:
	inline static int32_t get_offset_of_AutoConnectAndJoin_36() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___AutoConnectAndJoin_36)); }
	inline bool get_AutoConnectAndJoin_36() const { return ___AutoConnectAndJoin_36; }
	inline bool* get_address_of_AutoConnectAndJoin_36() { return &___AutoConnectAndJoin_36; }
	inline void set_AutoConnectAndJoin_36(bool value)
	{
		___AutoConnectAndJoin_36 = value;
	}

	inline static int32_t get_offset_of_AutoLeaveAndDisconnect_37() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___AutoLeaveAndDisconnect_37)); }
	inline bool get_AutoLeaveAndDisconnect_37() const { return ___AutoLeaveAndDisconnect_37; }
	inline bool* get_address_of_AutoLeaveAndDisconnect_37() { return &___AutoLeaveAndDisconnect_37; }
	inline void set_AutoLeaveAndDisconnect_37(bool value)
	{
		___AutoLeaveAndDisconnect_37 = value;
	}

	inline static int32_t get_offset_of_voiceRoomParams_38() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___voiceRoomParams_38)); }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * get_voiceRoomParams_38() const { return ___voiceRoomParams_38; }
	inline EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E ** get_address_of_voiceRoomParams_38() { return &___voiceRoomParams_38; }
	inline void set_voiceRoomParams_38(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * value)
	{
		___voiceRoomParams_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceRoomParams_38), (void*)value);
	}

	inline static int32_t get_offset_of_clientCalledConnectAndJoin_39() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___clientCalledConnectAndJoin_39)); }
	inline bool get_clientCalledConnectAndJoin_39() const { return ___clientCalledConnectAndJoin_39; }
	inline bool* get_address_of_clientCalledConnectAndJoin_39() { return &___clientCalledConnectAndJoin_39; }
	inline void set_clientCalledConnectAndJoin_39(bool value)
	{
		___clientCalledConnectAndJoin_39 = value;
	}

	inline static int32_t get_offset_of_clientCalledDisconnect_40() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___clientCalledDisconnect_40)); }
	inline bool get_clientCalledDisconnect_40() const { return ___clientCalledDisconnect_40; }
	inline bool* get_address_of_clientCalledDisconnect_40() { return &___clientCalledDisconnect_40; }
	inline void set_clientCalledDisconnect_40(bool value)
	{
		___clientCalledDisconnect_40 = value;
	}

	inline static int32_t get_offset_of_clientCalledConnectOnly_41() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___clientCalledConnectOnly_41)); }
	inline bool get_clientCalledConnectOnly_41() const { return ___clientCalledConnectOnly_41; }
	inline bool* get_address_of_clientCalledConnectOnly_41() { return &___clientCalledConnectOnly_41; }
	inline void set_clientCalledConnectOnly_41(bool value)
	{
		___clientCalledConnectOnly_41 = value;
	}

	inline static int32_t get_offset_of_internalDisconnect_42() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___internalDisconnect_42)); }
	inline bool get_internalDisconnect_42() const { return ___internalDisconnect_42; }
	inline bool* get_address_of_internalDisconnect_42() { return &___internalDisconnect_42; }
	inline void set_internalDisconnect_42(bool value)
	{
		___internalDisconnect_42 = value;
	}

	inline static int32_t get_offset_of_internalConnect_43() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___internalConnect_43)); }
	inline bool get_internalConnect_43() const { return ___internalConnect_43; }
	inline bool* get_address_of_internalConnect_43() { return &___internalConnect_43; }
	inline void set_internalConnect_43(bool value)
	{
		___internalConnect_43 = value;
	}

	inline static int32_t get_offset_of_usePunAppSettings_45() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___usePunAppSettings_45)); }
	inline bool get_usePunAppSettings_45() const { return ___usePunAppSettings_45; }
	inline bool* get_address_of_usePunAppSettings_45() { return &___usePunAppSettings_45; }
	inline void set_usePunAppSettings_45(bool value)
	{
		___usePunAppSettings_45 = value;
	}

	inline static int32_t get_offset_of_usePunAuthValues_46() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B, ___usePunAuthValues_46)); }
	inline bool get_usePunAuthValues_46() const { return ___usePunAuthValues_46; }
	inline bool* get_address_of_usePunAuthValues_46() { return &___usePunAuthValues_46; }
	inline void set_usePunAuthValues_46(bool value)
	{
		___usePunAuthValues_46 = value;
	}
};

struct PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields
{
public:
	// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PunVoiceClient::instance
	PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * ___instance_44;

public:
	inline static int32_t get_offset_of_instance_44() { return static_cast<int32_t>(offsetof(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields, ___instance_44)); }
	inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * get_instance_44() const { return ___instance_44; }
	inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B ** get_address_of_instance_44() { return &___instance_44; }
	inline void set_instance_44(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * value)
	{
		___instance_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_44), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.Recorder[]
struct RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * m_Items[1];

public:
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * m_Items[1];

public:
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.PUN.PunVoiceClient[]
struct PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * m_Items[1];

public:
	inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.VoiceLogger[]
struct VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * m_Items[1];

public:
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_mCA081E2FE34A8282A0EA67091EF0E1702D1030F4_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE2D0D933C072AD75AFEBE18BDEBB5B82D3D1BC27_gshared (Action_2_tD3D7B4C276C5182ACF0A4B175305DF0854686FC4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::get_SpeakerInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Speaker::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Speaker_get_IsPlaying_mB5EA5D7684CD7485A51EB1A32B1BA142174E1629 (Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::get_RecorderInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_IsCurrentlyTransmitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsCurrentlyTransmitting_m0F4FF68902D22CB8E0529BA51C12C7660B9D5253 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent_Awake_m532120EDDDE534D65DFB49F9E2024A73F081F8E8 (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method);
// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PunVoiceClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupRecorder_m7FC6EA7AFDC488C768F608F0F685886D04A0B393 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Photon.Voice.ILogger Photon.Voice.Unity.VoiceComponent::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35 (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// System.Boolean Photon.Voice.Unity.Recorder::get_TransmitEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_m8FACE0F380E6057DD99D43C1218C0DA5E39A9F87 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupSpeaker_mD3C0402F059FCEA456F0CAEC92F93E9472C64581 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonView::get_ViewID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceConnection::AddSpeaker(Photon.Voice.Unity.Speaker,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceConnection_AddSpeaker_m2D68F47853BFD2C686159EC607C043BD4FA5AF54 (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___speaker0, RuntimeObject * ___userData1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Photon.Voice.Unity.Recorder>()
inline RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC* Component_GetComponentsInChildren_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m854009113629CFF3D98C300BC7F51EAABFF89AA0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::get_PrimaryRecorder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * VoiceConnection_get_PrimaryRecorder_mB9BF2481C19705F873A4FAFEFD04E60A0D90538F_inline (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_UserData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_UserData_mAE5481C9D9AF26233A871D0FC6D4A99A8E3E1B58 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceConnection::AddRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceConnection_AddRecorder_mCE21825149E56FF4AEEF4E966DD699690EDCAAEE (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___rec0, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_RecorderInUse(Photon.Voice.Unity.Recorder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonVoiceView_set_RecorderInUse_mD90369CC33EB2AE08696A4F3403476AAE0346A10_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::RemoveRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_RemoveRecorder_m3C794E0119445A16F6747810C6432A85D4A3F43A (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___rec0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Photon.Voice.Unity.Speaker>(System.Boolean)
inline SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* Component_GetComponentsInChildren_TisSpeaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA_mCB07EED27A5529BB80A93EF8BE496089C9681814 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::get_SpeakerPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * VoiceConnection_get_SpeakerPrefab_m5EB0D60185F746C223CC611B43EAE677C61BCDD8_inline (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.Speaker Photon.Voice.Unity.VoiceConnection::InstantiateSpeakerPrefab(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * VoiceConnection_InstantiateSpeakerPrefab_m2D65047BAAC7D86ED68CED77AA4A4EB1FAA28786 (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___parent0, bool ___destroyOnRemove1, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_SpeakerInUse(Photon.Voice.Unity.Speaker)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonVoiceView_set_SpeakerInUse_mC05820A287B36934351CFCA04722681D87AA1D93_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent__ctor_m3DF5DEFE3A274DF21944E2F9EC9DE462B105E8A4 (VoiceComponent_tCE3547F23B76A6B42D3BD5158F110EFD8044E88C * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Photon.Voice.PUN.PunVoiceClient>()
inline PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* Object_FindObjectsOfType_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_m4806BA0A9AB825FBC6CBAAD1763CF166C2135856 (const RuntimeMethod* method)
{
	return ((  PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_mCA081E2FE34A8282A0EA67091EF0E1702D1030F4_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Photon.Voice.PUN.PunVoiceClient>()
inline PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * GameObject_AddComponent_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_mCFD6E771E71CFD46E1E28975E822F739F764F766 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// Photon.Voice.ILogger Photon.Voice.Unity.VoiceConnection::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7 (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_InRoom_mA74C5E318E74D78DB767C4E4012CD2D401FD189E (const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PunVoiceClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_Connect_mC6C243D519F45A48B060FB88F98BFCAC6EDBC574 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method);
// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_mAF312211E24968B1F60C9E74E53BE464B1222BB3 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::Disconnect(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Disconnect_m050900F9E7B02D30742830C58D2F205211828CB8 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, int32_t ___cause0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceConnection::get_UsePrimaryRecorder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceConnection_get_UsePrimaryRecorder_m0DF947F0D1E1486F0938D65E8FC3AB892CF368D2_inline (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125 (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE2D0D933C072AD75AFEBE18BDEBB5B82D3D1BC27_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::add_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_add_StateChanged_mC09135830AD84BE629CA0E21EDB34CC26E03B985 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PunVoiceClient::FollowPun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_FollowPun_mC7132A3F24EE3B51FCD75268696B11868F676CAC (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.ConnectionHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler_OnDisable_mFA253B6ADBBA9D02B66387ACFFA5D0143DEE5E51 (ConnectionHandler_t85A89B8EDF5CB1D550EEB28590A5E610034A06FE * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::remove_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_remove_StateChanged_mA3768479C991BF95AE892144D299ABBD1E233DE3 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_OnDestroy_m8628DF6E1B1F9FE3449FF7A2270C06A281C756B1 (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PunVoiceClient::FollowPun(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_FollowPun_mA601C1966205EF8DECE5FAB18CD7E085DB25554D (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, int32_t ___toState0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::OnVoiceStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_OnVoiceStateChanged_m7B2D28ED6C88FECFDD50A190B6D0DD0E143BE035 (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, int32_t ___fromState0, int32_t ___toState1, const RuntimeMethod* method);
// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::get_DisconnectedCause()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_DisconnectedCause_mADF0FB7F7EC7F241A9E96F60AA2B4260356701FF_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// Photon.Pun.PhotonView Photon.Pun.PhotonView::Find(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * PhotonView_Find_m3F9844722ED827DB3D54100125D76DDFC25C3EE9 (int32_t ___viewID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Voice.PUN.PhotonVoiceView>()
inline PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * Component_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m5A42D26F92580ABB4B3C3D5A5B5A48450DF5DA12 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * PhotonNetwork_get_CurrentRoom_mAF2ADEA2F85BD2E851D2B5A662219524D3BC4CF3 (const RuntimeMethod* method);
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Voice.Unity.VoiceConnection::get_ClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.String Photon.Voice.PUN.PunVoiceClient::GetVoiceRoomName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PunVoiceClient_GetVoiceRoomName_m70CBF127BD04158EF2A2A470BB587B950C98FFC2 (const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PunVoiceClient::JoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_JoinRoom_m168EF7A6528C3659B0EE50D1F94E6E048CA0A4E4 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, String_t* ___voiceRoomName0, const RuntimeMethod* method);
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_mB670183A45F50FE01570B3E4E3510A2287E76C94 (AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * __this, const RuntimeMethod* method);
// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::get_PhotonServerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * PhotonNetwork_get_PhotonServerSettings_mD4016806937CAFF23CA5DCF0E74C6A600BCA5BD7 (const RuntimeMethod* method);
// Photon.Realtime.AppSettings Photon.Realtime.AppSettings::CopyTo(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * AppSettings_CopyTo_m2E539370E7170018B24488335FF65EAB2749EDE2 (AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * __this, AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * ___d0, const RuntimeMethod* method);
// System.String Photon.Pun.PhotonNetwork::get_CloudRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonNetwork_get_CloudRegion_mBA0F10DD9DE0277AEFBC421EB58477AC98F8E5DD (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.SerializationProtocol Photon.Realtime.LoadBalancingClient::get_SerializationProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_SerializationProtocol_mEDF5EC2E0B9193A39D814F0F411823557A9E0497 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::set_SerializationProtocol(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_set_SerializationProtocol_mA630D4F67B1FCF354966E03F550925F5CD5DA7CD (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.PUN.PunVoiceClient::get_UsePunAuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_get_UsePunAuthValues_mA7D923B0DCFDF869B3EE7ACE3986D286C4A3EB63 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method);
// Photon.Realtime.AuthenticationValues Photon.Pun.PhotonNetwork::get_AuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * PhotonNetwork_get_AuthValues_m950DBB47C969C02703325254888148A5D1B3C5F2 (const RuntimeMethod* method);
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_mD18767A7F64DA21D9701F53C0E5E14755B9B7177 (AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::set_AuthValues(Photon.Realtime.AuthenticationValues)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadBalancingClient_set_AuthValues_mCE973D6B02EC68339DA652AF8D42F85E4EDB5A21_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * ___value0, const RuntimeMethod* method);
// Photon.Realtime.AuthenticationValues Photon.Realtime.AuthenticationValues::CopyTo(Photon.Realtime.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * AuthenticationValues_CopyTo_mEDE07715DA483D2EF8A1710D666494C600C1E8A8 (AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * __this, AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * ___copy0, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinOrCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinOrCreateRoom_m64C70BD278320F959BF2C008F58E651268413DEB (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * ___enterRoomParams0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::get_OfflineMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_OfflineMode_m6490BBCE632FF377E331623A0233A7FC7232B175 (const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Pun.PhotonNetwork::get_NetworkClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonNetwork_get_NetworkClientState_mD3F051004B75C0BB3E4F5C2B104EB1FE399D2B89 (const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::OpLeaveRoom(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpLeaveRoom_m0316E737300259AC1EA7EFB562D3FBB659649BF0 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, bool ___becomeInactive0, bool ___sendAuthCookie1, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.PunVoiceClient::ConnectOrJoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_ConnectOrJoin_m88D3FF3780FCFD47617EA073EDCC057A53E2BA87 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_InRoom_m8981E2A0ADCC8D2761485C6311E6728C05285ED9 (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m8037403CBED8A0BBA13FBC733606EF6E8BF7CB80 (EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m3757C5E2DFF56EEEC7F0B7A08443DD21DA88FEF7 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_mC0A95ADCF711835B0C695844D5BF19226EF0DCA6 (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection__ctor_m3FD2E5EBDDD4F9085F1CDF5B9B35FA04DF917539 (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::MaxLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_MaxLogs_mBEC3C9618E6B9C5AACF62A36A646B848C0A823F8 (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_SourceType(Photon.Voice.Unity.Recorder/InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_SourceType_mC788BB70F281F72C40981FA4FD9135DBA396B4CC (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_AudioClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_AudioClip_m606FFADC6B090D2ADD815E80AB0F771D4D0ACBA2 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_LoopAudioClip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_LoopAudioClip_mAB09E9E270289A92B2804E58AAFF765FA281BB86 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::RestartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_RestartRecording_m27A36FE774DCFE2706F74494DBFDC3E38811B45F (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_RecordingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_RecordingEnabled_m69AE55C3D11E11BFB4D75E2676F14B4ABBA9AD37 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_TransmitEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_TransmitEnabled_m2B0EDFB9B03B5ACC9696C386D52A504CA3AE502E (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_VoiceDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_VoiceDetection_m626DC6051F6D6CD9425B4026509D126779196C18 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Speaker::get_IsLinked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Speaker_get_IsLinked_m94FC25E3AF6C10EADA0D1D34B7630267C68AF8EC (Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * __this, const RuntimeMethod* method);
// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C (MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223 * __this, const RuntimeMethod* method);
// Photon.Realtime.Player Photon.Pun.PhotonView::get_Owner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_m79188C23F407B97852A4284FF9BFE53F7BEA552F (PhotonPeer_t8DBE965FC43B385B4CE257E1FB1E084D09A88BF8 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Realtime.Player,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_mEF3BDC753F512BA2B4E2A6CDC724BFCBF5621C61 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, String_t* ___methodName0, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___targetPlayer1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters2, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_RecordingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_RecordingEnabled_mEFB69C6A34AAB8B91EC0A28A3F07208C28076315 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Byte Photon.Voice.Unity.Recorder::get_InterestGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Recorder_get_InterestGroup_m4020502D9B355F980CCFFCBFD562A0248DF6D1B3 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_InterestGroup(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_InterestGroup_m4A180DB52FE33D71E47E09C22DBBC411760C3CC8 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Object Photon.Voice.Unity.Recorder::get_UserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Recorder_get_UserData_m3C6C8A5468179DE86E42D6369FD306F7947CEAE4 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_VoiceDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_VoiceDetection_m7D38C6673F7E7F8003C8F4C46F6AE700C07BBE70 (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Pun.PhotonView::get_OwnerActorNr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_OwnerActorNr_m8101EF402C54CE02531D5CA5ED77748076E67856 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3 (Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_DebugEchoMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_DebugEchoMode_m279F55AE211E7C8D6F713853B4544B8D459D8E7F (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::set_DebugEchoMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_DebugEchoMode_mB67281658E5EE43DF8567E5F04CE74EB387E547E (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::Reply(System.String,Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_Reply_m588DD63BA1F778781977063678B56271433F03EA (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, String_t* ___why0, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___player1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m92BE92B1C1EDD4B66E5D3CF9ED6480D7D3FFA0E9 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Photon.Voice.Unity.VoiceLogger>()
inline VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A* Object_FindObjectsOfType_TisVoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F_m20100E021F1FD53584C511B42CA22D6B29D46C76 (const RuntimeMethod* method)
{
	return ((  VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_mCA081E2FE34A8282A0EA67091EF0E1702D1030F4_gshared)(method);
}
// System.Void Photon.Pun.MonoBehaviourPun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPun__ctor_mCE5059964AC90D4EBEB442C9A3B67F92A966E617 (MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223 * __this, const RuntimeMethod* method);
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
// Photon.Voice.Unity.Recorder Photon.Voice.PUN.PhotonVoiceView::get_RecorderInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = __this->get_U3CRecorderInUseU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_RecorderInUse(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_set_RecorderInUse_mD90369CC33EB2AE08696A4F3403476AAE0346A10 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___value0, const RuntimeMethod* method)
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = ___value0;
		__this->set_U3CRecorderInUseU3Ek__BackingField_7(L_0);
		return;
	}
}
// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PhotonVoiceView::get_SpeakerInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_0 = __this->get_U3CSpeakerInUseU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::set_SpeakerInUse(Photon.Voice.Unity.Speaker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_set_SpeakerInUse_mC05820A287B36934351CFCA04722681D87AA1D93 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___value0, const RuntimeMethod* method)
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_0 = ___value0;
		__this->set_U3CSpeakerInUseU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsSpeaking_m07F6FEC02327FE7D1DA04D0DD2E0DA548FA84A4F (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.SpeakerInUse != null && this.SpeakerInUse.IsPlaying; }
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_0;
		L_0 = PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_2;
		L_2 = PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Speaker_get_IsPlaying_mB5EA5D7684CD7485A51EB1A32B1BA142174E1629(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// get { return this.SpeakerInUse != null && this.SpeakerInUse.IsPlaying; }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Voice.PUN.PhotonVoiceView::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonVoiceView_get_IsRecording_m2FBBB4AEF553842F98456264D13FB900EDA9AC69 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.RecorderInUse != null && this.RecorderInUse.IsCurrentlyTransmitting; }
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0;
		L_0 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_2;
		L_2 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Recorder_get_IsCurrentlyTransmitting_m0F4FF68902D22CB8E0529BA51C12C7660B9D5253(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// get { return this.RecorderInUse != null && this.RecorderInUse.IsCurrentlyTransmitting; }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Awake_mB638CBBF4BEEA54DB739FBDEDC6790C20D112A32 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		VoiceComponent_Awake_m532120EDDDE534D65DFB49F9E2024A73F081F8E8(__this, /*hidden argument*/NULL);
		// this.punVoiceClient = PunVoiceClient.Instance;
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0;
		L_0 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		__this->set_punVoiceClient_6(L_0);
		// this.photonView = this.GetComponent<PhotonView>();
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_1;
		L_1 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(__this, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		__this->set_photonView_5(L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_Start_mA3FA0418C2A88DBB54B699EA6672A70318F46B80 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral481399EB9E74D247B70B58DD3F2B8A76F6C3D695);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D151FB1D99E3E0C476B7791FA53B432E15F603F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D7CEF12F1944491ED72A13C6679D30CE07414C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82B1190104BB5B93E0E671FC52196230F07C4616);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (photonView.IsMine)
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_0 = __this->get_photonView_5();
		NullCheck(L_0);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_009c;
		}
	}
	{
		// this.SetupRecorder();
		PhotonVoiceView_SetupRecorder_m7FC6EA7AFDC488C768F608F0F685886D04A0B393(__this, /*hidden argument*/NULL);
		// if (this.RecorderInUse == null)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_3;
		L_3 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// this.Logger.LogWarning("Recorder not setup for PhotonVoiceView: playback may not work properly.");
		RuntimeObject* L_6;
		L_6 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_6, _stringLiteral6D151FB1D99E3E0C476B7791FA53B432E15F603F, L_7);
		goto IL_009b;
	}

IL_0045:
	{
		// if (!this.RecorderInUse.TransmitEnabled)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_8;
		L_8 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = Recorder_get_TransmitEnabled_m8FACE0F380E6057DD99D43C1218C0DA5E39A9F87(L_8, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		// this.Logger.LogWarning("PhotonVoiceView.RecorderInUse.TransmitEnabled is false, don't forget to set it to true to enable transmission.");
		RuntimeObject* L_11;
		L_11 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_11);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_11, _stringLiteral71D7CEF12F1944491ED72A13C6679D30CE07414C, L_12);
	}

IL_0070:
	{
		// if (!this.RecorderInUse.isActiveAndEnabled)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_13;
		L_13 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_13, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		// this.Logger.LogWarning("PhotonVoiceView.RecorderInUse may not work properly if recorder is disabled or attached to an inactive GameObject.");
		RuntimeObject* L_16;
		L_16 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_16, _stringLiteral82B1190104BB5B93E0E671FC52196230F07C4616, L_17);
	}

IL_009a:
	{
	}

IL_009b:
	{
	}

IL_009c:
	{
		// this.SetupSpeaker();
		PhotonVoiceView_SetupSpeaker_mD3C0402F059FCEA456F0CAEC92F93E9472C64581(__this, /*hidden argument*/NULL);
		// if (this.SpeakerInUse == null)
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_18;
		L_18 = PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		// this.Logger.LogWarning("Speaker not setup for PhotonVoiceView: voice chat will not work.");
		RuntimeObject* L_21;
		L_21 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22;
		L_22 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_21, _stringLiteral481399EB9E74D247B70B58DD3F2B8A76F6C3D695, L_22);
		goto IL_00f3;
	}

IL_00cf:
	{
		// punVoiceClient.AddSpeaker(this.SpeakerInUse, this.photonView.ViewID);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_23 = __this->get_punVoiceClient_6();
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_24;
		L_24 = PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline(__this, /*hidden argument*/NULL);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_25 = __this->get_photonView_5();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_23);
		bool L_29;
		L_29 = VoiceConnection_AddSpeaker_m2D68F47853BFD2C686159EC607C043BD4FA5AF54(L_23, L_24, L_28, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupRecorder_m7FC6EA7AFDC488C768F608F0F685886D04A0B393 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m854009113629CFF3D98C300BC7F51EAABFF89AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A8973A32FBEB43D1721AAF5EB33BEF26EF896C5);
		s_Il2CppMethodInitialized = true;
	}
	Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * V_0 = NULL;
	RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B7_0 = 0;
	{
		// Recorder recorder = null;
		V_0 = (Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 *)NULL;
		// Recorder[] recorders = this.GetComponentsInChildren<Recorder>();
		RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC* L_0;
		L_0 = Component_GetComponentsInChildren_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m854009113629CFF3D98C300BC7F51EAABFF89AA0(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRecorder_t13D849D3581771415EF2D39F877106A1AC72C6C5_m854009113629CFF3D98C300BC7F51EAABFF89AA0_RuntimeMethod_var);
		V_1 = L_0;
		// if (recorders.Length > 0)
		RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC* L_1 = V_1;
		NullCheck(L_1);
		V_2 = (bool)((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// if (recorders.Length > 1)
		RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC* L_3 = V_1;
		NullCheck(L_3);
		V_3 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) > ((int32_t)1))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// this.Logger.LogWarning("Multiple Recorder components found attached to the GameObject or its children.");
		RuntimeObject* L_5;
		L_5 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_5, _stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93, L_6);
	}

IL_0036:
	{
		// recorder = recorders[0];
		RecorderU5BU5D_t7FCFDC651B71A4F8AD3913BDBF3FF8D1988682CC* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
	}

IL_003b:
	{
		// if (null == recorder && null != punVoiceClient.PrimaryRecorder)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_12 = __this->get_punVoiceClient_6();
		NullCheck(L_12);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_13;
		L_13 = VoiceConnection_get_PrimaryRecorder_mB9BF2481C19705F873A4FAFEFD04E60A0D90538F_inline(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_13, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_0058;
	}

IL_0057:
	{
		G_B7_0 = 0;
	}

IL_0058:
	{
		V_4 = (bool)G_B7_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		// recorder = punVoiceClient.PrimaryRecorder;
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_16 = __this->get_punVoiceClient_6();
		NullCheck(L_16);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_17;
		L_17 = VoiceConnection_get_PrimaryRecorder_mB9BF2481C19705F873A4FAFEFD04E60A0D90538F_inline(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_006c:
	{
		// if (null == recorder)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0093;
		}
	}
	{
		// this.Logger.LogWarning("Cannot find Recorder. Assign a Recorder to PhotonVoiceView object or set up PunVoiceClient.PrimaryRecorder.");
		RuntimeObject* L_21;
		L_21 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22;
		L_22 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_21, _stringLiteral7A8973A32FBEB43D1721AAF5EB33BEF26EF896C5, L_22);
		goto IL_00b9;
	}

IL_0093:
	{
		// recorder.UserData = this.photonView.ViewID;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_23 = V_0;
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_24 = __this->get_photonView_5();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_24, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_23);
		Recorder_set_UserData_mAE5481C9D9AF26233A871D0FC6D4A99A8E3E1B58(L_23, L_27, /*hidden argument*/NULL);
		// punVoiceClient.AddRecorder(recorder);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_28 = __this->get_punVoiceClient_6();
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_29 = V_0;
		NullCheck(L_28);
		bool L_30;
		L_30 = VoiceConnection_AddRecorder_mCE21825149E56FF4AEEF4E966DD699690EDCAAEE(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// this.RecorderInUse = recorder;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_31 = V_0;
		PhotonVoiceView_set_RecorderInUse_mD90369CC33EB2AE08696A4F3403476AAE0346A10_inline(__this, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_OnDestroy_m6F96D22D52EF9C314E67323E63E1E0DF7554EC81 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	{
		// punVoiceClient.RemoveRecorder(this.RecorderInUse);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0 = __this->get_punVoiceClient_6();
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_1;
		L_1 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VoiceConnection_RemoveRecorder_m3C794E0119445A16F6747810C6432A85D4A3F43A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::SetupSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView_SetupSpeaker_mD3C0402F059FCEA456F0CAEC92F93E9472C64581 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSpeaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA_mCB07EED27A5529BB80A93EF8BE496089C9681814_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14727C2772E7388F0F563659C83865E67B93D390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ABBF4466BE09D0080DEBDE2BAB8E36F342F072B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8);
		s_Il2CppMethodInitialized = true;
	}
	Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * V_0 = NULL;
	SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B7_0 = 0;
	{
		// Speaker speaker = null;
		V_0 = (Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA *)NULL;
		// Speaker[] speakers = this.GetComponentsInChildren<Speaker>(true);
		SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* L_0;
		L_0 = Component_GetComponentsInChildren_TisSpeaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA_mCB07EED27A5529BB80A93EF8BE496089C9681814(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisSpeaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA_mCB07EED27A5529BB80A93EF8BE496089C9681814_RuntimeMethod_var);
		V_1 = L_0;
		// if (speakers.Length > 0)
		SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* L_1 = V_1;
		NullCheck(L_1);
		V_2 = (bool)((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// speaker = speakers[0];
		SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (speakers.Length > 1)
		SpeakerU5BU5D_t85DFCA149CAFF485B3CD2A61872EFE8E7158F3BC* L_6 = V_1;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) > ((int32_t)1))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		// this.Logger.LogWarning("Multiple Speaker components found attached to the GameObject or its children. Using the first one we found.");
		RuntimeObject* L_8;
		L_8 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9;
		L_9 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_8, _stringLiteral14727C2772E7388F0F563659C83865E67B93D390, L_9);
	}

IL_003b:
	{
	}

IL_003c:
	{
		// if (null == speaker && null != punVoiceClient.SpeakerPrefab)
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_12 = __this->get_punVoiceClient_6();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = VoiceConnection_get_SpeakerPrefab_m5EB0D60185F746C223CC611B43EAE677C61BCDD8_inline(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_13, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_0059;
	}

IL_0058:
	{
		G_B7_0 = 0;
	}

IL_0059:
	{
		V_4 = (bool)G_B7_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		// speaker = punVoiceClient.InstantiateSpeakerPrefab(this.gameObject, false);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_16 = __this->get_punVoiceClient_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_18;
		L_18 = VoiceConnection_InstantiateSpeakerPrefab_m2D65047BAAC7D86ED68CED77AA4A4EB1FAA28786(L_16, L_17, (bool)0, /*hidden argument*/NULL);
		V_0 = L_18;
	}

IL_0074:
	{
		// if (null == speaker)
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_009b;
		}
	}
	{
		// this.Logger.LogError("No Speaker component or prefab found. Assign a Speaker to PhotonVoiceView object or set up PunVoiceClient.SpeakerPrefab.");
		RuntimeObject* L_22;
		L_22 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23;
		L_23 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_22, _stringLiteral6ABBF4466BE09D0080DEBDE2BAB8E36F342F072B, L_23);
		goto IL_00b3;
	}

IL_009b:
	{
		// this.Logger.LogInfo("Speaker instantiated.");
		RuntimeObject* L_24;
		L_24 = VoiceComponent_get_Logger_mEC8B05EB8C10A1BB8446CB42E10ED31D5D9BBC35(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25;
		L_25 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_24, _stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8, L_25);
	}

IL_00b3:
	{
		// this.SpeakerInUse = speaker;
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_26 = V_0;
		PhotonVoiceView_set_SpeakerInUse_mC05820A287B36934351CFCA04722681D87AA1D93_inline(__this, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PhotonVoiceView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonVoiceView__ctor_mADCF811AF7E1DB88FBF0E8EF18DFEB1653792CA9 (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	{
		VoiceComponent__ctor_m3DF5DEFE3A274DF21944E2F9EC9DE462B105E8A4(__this, /*hidden argument*/NULL);
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
// Photon.Voice.PUN.PunVoiceClient Photon.Voice.PUN.PunVoiceClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_mCFD6E771E71CFD46E1E28975E822F739F764F766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_m4806BA0A9AB825FBC6CBAAD1763CF166C2135856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral179D9FE8817F214B3074543C7798DACDA20D79B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6311C62451843E33262D7C8190CB31A3FDF66A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EAA25CDEC82B11766592502AB76F8FE0EFBF3E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral849994D0F83DC8C476CF3A89C36B232187AE95A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89D07FA9289A89F82E6B227F7EDD2C8EF9F9D210);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* V_1 = NULL;
	bool V_2 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * V_6 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if (instance == null)
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0 = ((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->get_instance_44();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00e7;
		}
	}
	{
		// PunVoiceClient[] objects = FindObjectsOfType<PunVoiceClient>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* L_3;
		L_3 = Object_FindObjectsOfType_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_m4806BA0A9AB825FBC6CBAAD1763CF166C2135856(/*hidden argument*/Object_FindObjectsOfType_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_m4806BA0A9AB825FBC6CBAAD1763CF166C2135856_RuntimeMethod_var);
		V_1 = L_3;
		// if (objects == null || objects.Length < 1)
		PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* L_5 = V_1;
		NullCheck(L_5);
		G_B4_0 = ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) < ((int32_t)1))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 1;
	}

IL_0026:
	{
		V_2 = (bool)G_B4_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// GameObject singleton = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_7, /*hidden argument*/NULL);
		V_3 = L_7;
		// singleton.name = "PunVoiceClient";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_3;
		NullCheck(L_8);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, _stringLiteral4EAA25CDEC82B11766592502AB76F8FE0EFBF3E4, /*hidden argument*/NULL);
		// instance = singleton.AddComponent<PunVoiceClient>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_3;
		NullCheck(L_9);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_10;
		L_10 = GameObject_AddComponent_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_mCFD6E771E71CFD46E1E28975E822F739F764F766(L_9, /*hidden argument*/GameObject_AddComponent_TisPunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_mCFD6E771E71CFD46E1E28975E822F739F764F766_RuntimeMethod_var);
		((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->set_instance_44(L_10);
		// instance.Logger.LogError("PunVoiceClient component was not found in the scene. Creating PunVoiceClient object.");
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_11 = ((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->get_instance_44();
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(L_11, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13;
		L_13 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_12, _stringLiteral179D9FE8817F214B3074543C7798DACDA20D79B7, L_13);
		goto IL_00cc;
	}

IL_0065:
	{
		// else if (objects.Length >= 1)
		PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* L_14 = V_1;
		NullCheck(L_14);
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00cc;
		}
	}
	{
		// instance = objects[0];
		PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = 0;
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->set_instance_44(L_18);
		// instance.Logger.LogInfo("An instance of PunVoiceClient is found in the scene.");
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_19 = ((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->get_instance_44();
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(L_19, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21;
		L_21 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_20, _stringLiteral849994D0F83DC8C476CF3A89C36B232187AE95A3, L_21);
		// if (objects.Length > 1)
		PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* L_22 = V_1;
		NullCheck(L_22);
		V_5 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))) > ((int32_t)1))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00cb;
		}
	}
	{
		// instance.Logger.LogError("{0} instances of PunVoiceClient found in the scene. Using a random instance.", objects.Length);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_24 = ((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->get_instance_44();
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(L_24, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_26;
		PunVoiceClientU5BU5D_t0A3BBF5A03A7BDEC48209D3BEDCD5B28D7FC84B0* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)));
		RuntimeObject * L_30 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_25, _stringLiteral4A6311C62451843E33262D7C8190CB31A3FDF66A, L_27);
	}

IL_00cb:
	{
	}

IL_00cc:
	{
		// instance.Logger.LogInfo("PunVoiceClient singleton instance is now set.");
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_31 = ((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->get_instance_44();
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(L_31, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33;
		L_33 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_32, _stringLiteral89D07FA9289A89F82E6B227F7EDD2C8EF9F9D210, L_33);
	}

IL_00e7:
	{
		// return instance;
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_34 = ((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->get_instance_44();
		V_6 = L_34;
		goto IL_00f0;
	}

IL_00f0:
	{
		// }
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_35 = V_6;
		return L_35;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::get_UsePunAppSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_get_UsePunAppSettings_m1A0896C7C37D11E3D85776B43A8B2D1D92BB30F1 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.usePunAppSettings;
		bool L_0 = __this->get_usePunAppSettings_45();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::set_UsePunAppSettings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_set_UsePunAppSettings_m3CD17B019C2610E5D05D8A20B069DD46E2331CFB (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// this.usePunAppSettings = value;
		bool L_0 = ___value0;
		__this->set_usePunAppSettings_45(L_0);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::get_UsePunAuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_get_UsePunAuthValues_mA7D923B0DCFDF869B3EE7ACE3986D286C4A3EB63 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.usePunAuthValues;
		bool L_0 = __this->get_usePunAuthValues_46();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::set_UsePunAuthValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_set_UsePunAuthValues_mF99E88B4A5A18826A537DB0D9D1ABA2C46DE1E3B (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// this.usePunAuthValues = value;
		bool L_0 = ___value0;
		__this->set_usePunAuthValues_46(L_0);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::ConnectAndJoinRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_ConnectAndJoinRoom_mA208FD1568E6CC9CD7A10B5C98AA3E0450A61A23 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C46FC59ED4CA794BC2A3692B87AA7D0CB46837);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!PhotonNetwork.InRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_InRoom_mA74C5E318E74D78DB767C4E4012CD2D401FD189E(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// this.Logger.LogError("Cannot connect and join if PUN is not joined.");
		RuntimeObject* L_2;
		L_2 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_2, _stringLiteral24C46FC59ED4CA794BC2A3692B87AA7D0CB46837, L_3);
		// return false;
		V_1 = (bool)0;
		goto IL_005f;
	}

IL_0028:
	{
		// if (this.Connect())
		bool L_4;
		L_4 = PunVoiceClient_Connect_mC6C243D519F45A48B060FB88F98BFCAC6EDBC574(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// this.clientCalledConnectAndJoin = true;
		__this->set_clientCalledConnectAndJoin_39((bool)1);
		// this.clientCalledDisconnect = false;
		__this->set_clientCalledDisconnect_40((bool)0);
		// return true;
		V_1 = (bool)1;
		goto IL_005f;
	}

IL_0045:
	{
		// this.Logger.LogError("Connecting to server failed.");
		RuntimeObject* L_6;
		L_6 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_6, _stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55, L_7);
		// return false;
		V_1 = (bool)0;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_Disconnect_m756BD9CD4A5C1B0EB86EDE86269B40B77C136CA3 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral291D2339FDB7548402B5F73BE1A37E590E787397);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!this.Client.IsConnected)
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_0;
		L_0 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = LoadBalancingClient_get_IsConnected_mAF312211E24968B1F60C9E74E53BE464B1222BB3(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// this.Logger.LogError("Cannot Disconnect if not connected.");
		RuntimeObject* L_3;
		L_3 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_3, _stringLiteral291D2339FDB7548402B5F73BE1A37E590E787397, L_4);
		// return;
		goto IL_004f;
	}

IL_002c:
	{
		// this.clientCalledDisconnect = true;
		__this->set_clientCalledDisconnect_40((bool)1);
		// this.clientCalledConnectAndJoin = false;
		__this->set_clientCalledConnectAndJoin_39((bool)0);
		// this.clientCalledConnectOnly = false;
		__this->set_clientCalledConnectOnly_41((bool)0);
		// this.Client.Disconnect();
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_5;
		L_5 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		LoadBalancingClient_Disconnect_m050900F9E7B02D30742830C58D2F205211828CB8(L_5, ((int32_t)15), /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_Start_mF3839AC04CB52181B571DA204FD45078F0C24C17 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Instance == this)
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0;
		L_0 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		// if (this.UsePrimaryRecorder)
		bool L_3;
		L_3 = VoiceConnection_get_UsePrimaryRecorder_m0DF947F0D1E1486F0938D65E8FC3AB892CF368D2_inline(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		// if (this.PrimaryRecorder != null)
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_5;
		L_5 = VoiceConnection_get_PrimaryRecorder_mB9BF2481C19705F873A4FAFEFD04E60A0D90538F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// AddRecorder(this.PrimaryRecorder);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_8;
		L_8 = VoiceConnection_get_PrimaryRecorder_mB9BF2481C19705F873A4FAFEFD04E60A0D90538F_inline(__this, /*hidden argument*/NULL);
		bool L_9;
		L_9 = VoiceConnection_AddRecorder_mCE21825149E56FF4AEEF4E966DD699690EDCAAEE(__this, L_8, /*hidden argument*/NULL);
		goto IL_0055;
	}

IL_003d:
	{
		// this.Logger.LogError("Primary Recorder is not set.");
		RuntimeObject* L_10;
		L_10 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11;
		L_11 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_10, _stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526, L_11);
	}

IL_0055:
	{
	}

IL_0056:
	{
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnEnable_m80A549CFC20FCDB37C1E8D5C7D7B61994CC98DE5 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunVoiceClient_OnPunStateChanged_m66B6BBBA00AC0B1F19EBCEB238721E4E5F0FC0F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Instance == this)
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0;
		L_0 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// PhotonNetwork.NetworkingClient.StateChanged += this.OnPunStateChanged;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * L_4 = (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 *)il2cpp_codegen_object_new(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125(L_4, __this, (intptr_t)((intptr_t)PunVoiceClient_OnPunStateChanged_m66B6BBBA00AC0B1F19EBCEB238721E4E5F0FC0F8_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		NullCheck(L_3);
		LoadBalancingClient_add_StateChanged_mC09135830AD84BE629CA0E21EDB34CC26E03B985(L_3, L_4, /*hidden argument*/NULL);
		// this.FollowPun(); // in case this is enabled or activated late
		PunVoiceClient_FollowPun_mC7132A3F24EE3B51FCD75268696B11868F676CAC(__this, /*hidden argument*/NULL);
		// this.clientCalledConnectAndJoin = false;
		__this->set_clientCalledConnectAndJoin_39((bool)0);
		// this.clientCalledConnectOnly = false;
		__this->set_clientCalledConnectOnly_41((bool)0);
		// this.clientCalledDisconnect = false;
		__this->set_clientCalledDisconnect_40((bool)0);
		// this.internalDisconnect = false;
		__this->set_internalDisconnect_42((bool)0);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnDisable_m1BC994292F1D7AAFF7BA208481F7729D0FF42D17 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunVoiceClient_OnPunStateChanged_m66B6BBBA00AC0B1F19EBCEB238721E4E5F0FC0F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// base.OnDisable();
		ConnectionHandler_OnDisable_mFA253B6ADBBA9D02B66387ACFFA5D0143DEE5E51(__this, /*hidden argument*/NULL);
		// if (Instance == this)
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0;
		L_0 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// PhotonNetwork.NetworkingClient.StateChanged -= this.OnPunStateChanged;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_3 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 * L_4 = (Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5 *)il2cpp_codegen_object_new(Action_2_t9BAECADE7E59203F365C12486B7F2D8BAD9047D5_il2cpp_TypeInfo_var);
		Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125(L_4, __this, (intptr_t)((intptr_t)PunVoiceClient_OnPunStateChanged_m66B6BBBA00AC0B1F19EBCEB238721E4E5F0FC0F8_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD5FEDE364495E7A3BCC64B26BFAD6AC44AD82125_RuntimeMethod_var);
		NullCheck(L_3);
		LoadBalancingClient_remove_StateChanged_mA3768479C991BF95AE892144D299ABBD1E233DE3(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnDestroy_mF50D73BBCDFE77E6E82517B3133E4C37BE378476 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B5C4D03399EEA9B7DB3B2A1F30F170F7ED0E222);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// base.OnDestroy();
		VoiceConnection_OnDestroy_m8628DF6E1B1F9FE3449FF7A2270C06A281C756B1(__this, /*hidden argument*/NULL);
		// if (instance == this)
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0 = ((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->get_instance_44();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// instance.Logger.LogInfo("PunVoiceClient singleton instance is being reset because destroyed.");
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_3 = ((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->get_instance_44();
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(L_3, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_4, _stringLiteral7B5C4D03399EEA9B7DB3B2A1F30F170F7ED0E222, L_5);
		// instance = null;
		((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_StaticFields*)il2cpp_codegen_static_fields_for(PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B_il2cpp_TypeInfo_var))->set_instance_44((PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B *)NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnPunStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnPunStateChanged_m66B6BBBA00AC0B1F19EBCEB238721E4E5F0FC0F8 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, int32_t ___fromState0, int32_t ___toState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9C336C7B61757E192B024456361E39B04C988EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Logger.LogInfo("OnPunStateChanged from {0} to {1}", fromState, toState);
		RuntimeObject* L_0;
		L_0 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ___fromState0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		int32_t L_7 = ___toState1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_0, _stringLiteralF9C336C7B61757E192B024456361E39B04C988EE, L_6);
		// this.FollowPun(toState);
		int32_t L_10 = ___toState1;
		PunVoiceClient_FollowPun_mA601C1966205EF8DECE5FAB18CD7E085DB25554D(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::OnVoiceStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_OnVoiceStateChanged_mE38A822A9213F3581693451F4952A497ED3509CC (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, int32_t ___fromState0, int32_t ___toState1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B12_0 = 0;
	{
		// base.OnVoiceStateChanged(fromState, toState);
		int32_t L_0 = ___fromState0;
		int32_t L_1 = ___toState1;
		VoiceConnection_OnVoiceStateChanged_m7B2D28ED6C88FECFDD50A190B6D0DD0E143BE035(__this, L_0, L_1, /*hidden argument*/NULL);
		// if (toState == ClientState.Disconnected)
		int32_t L_2 = ___toState1;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)14)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// if (this.internalDisconnect)
		bool L_4 = __this->get_internalDisconnect_42();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// this.internalDisconnect = false;
		__this->set_internalDisconnect_42((bool)0);
		goto IL_004d;
	}

IL_0029:
	{
		// else if (!this.clientCalledDisconnect)
		bool L_6 = __this->get_clientCalledDisconnect_40();
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// this.clientCalledDisconnect = this.Client.DisconnectedCause == DisconnectCause.DisconnectByClientLogic;
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_8;
		L_8 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = LoadBalancingClient_get_DisconnectedCause_mADF0FB7F7EC7F241A9E96F60AA2B4260356701FF_inline(L_8, /*hidden argument*/NULL);
		__this->set_clientCalledDisconnect_40((bool)((((int32_t)L_9) == ((int32_t)((int32_t)15)))? 1 : 0));
	}

IL_004d:
	{
		goto IL_009c;
	}

IL_0050:
	{
		// else if (toState == ClientState.ConnectedToMasterServer)
		int32_t L_10 = ___toState1;
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		// if (this.internalConnect)
		bool L_12 = __this->get_internalConnect_43();
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		// this.internalConnect = false;
		__this->set_internalConnect_43((bool)0);
		goto IL_009b;
	}

IL_0071:
	{
		// else if (!this.clientCalledConnectOnly && !this.clientCalledConnectAndJoin)
		bool L_14 = __this->get_clientCalledConnectOnly_41();
		if (L_14)
		{
			goto IL_0084;
		}
	}
	{
		bool L_15 = __this->get_clientCalledConnectAndJoin_39();
		G_B12_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B12_0 = 0;
	}

IL_0085:
	{
		V_5 = (bool)G_B12_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_009b;
		}
	}
	{
		// this.clientCalledConnectOnly = true;
		__this->set_clientCalledConnectOnly_41((bool)1);
		// this.clientCalledDisconnect = false;
		__this->set_clientCalledDisconnect_40((bool)0);
	}

IL_009b:
	{
	}

IL_009c:
	{
		// this.FollowPun(toState);
		int32_t L_17 = ___toState1;
		PunVoiceClient_FollowPun_mA601C1966205EF8DECE5FAB18CD7E085DB25554D(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::FollowPun(Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_FollowPun_mA601C1966205EF8DECE5FAB18CD7E085DB25554D (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, int32_t ___toState0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (toState)
		int32_t L_0 = ___toState0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_0015;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)14)))) > ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		goto IL_001e;
	}

IL_0015:
	{
		// this.FollowPun();
		PunVoiceClient_FollowPun_mC7132A3F24EE3B51FCD75268696B11868F676CAC(__this, /*hidden argument*/NULL);
		// break;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		return;
	}
}
// Photon.Voice.Unity.Speaker Photon.Voice.PUN.PunVoiceClient::InstantiateSpeakerForRemoteVoice(System.Int32,System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * PunVoiceClient_InstantiateSpeakerForRemoteVoice_m92F80CE8AC6A593FFEC9FA68915696D53F1E82B4 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, int32_t ___playerId0, uint8_t ___voiceId1, RuntimeObject * ___userData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m5A42D26F92580ABB4B3C3D5A5B5A48450DF5DA12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral491DFF307155D060DE2930B3A4DACC763B9B9992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral631CCB3B38A24A985A55AD1E70ABA1395491A996);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6458CA1942CDE521844E158F0EC0CC46DFEC227B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B99C5BB86AD28992FE3EA8391C088EA95489451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96F687665AEA502398F1370CEE347C90A340B677);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * V_1 = NULL;
	PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * V_2 = NULL;
	bool V_3 = false;
	Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	RuntimeObject* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	RuntimeObject* G_B6_5 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (userData == null) // Recorder w/o PhotonVoiceView: probably created due to this.UsePrimaryRecorder = true
		RuntimeObject * L_0 = ___userData2;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// this.Logger.LogInfo("Creating Speaker for remote voice p#{0} v#{1} PunVoiceClient Primary Recorder (userData == null).", playerId, voiceId);
		RuntimeObject* L_2;
		L_2 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		int32_t L_5 = ___playerId0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		uint8_t L_9 = ___voiceId1;
		uint8_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_2, _stringLiteral491DFF307155D060DE2930B3A4DACC763B9B9992, L_8);
		// return this.InstantiateSpeakerPrefab(this.gameObject, true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_13;
		L_13 = VoiceConnection_InstantiateSpeakerPrefab_m2D65047BAAC7D86ED68CED77AA4A4EB1FAA28786(__this, L_12, (bool)1, /*hidden argument*/NULL);
		V_4 = L_13;
		goto IL_0189;
	}

IL_0047:
	{
		// if (!(userData is int))
		RuntimeObject * L_14 = ___userData2;
		V_5 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_009e;
		}
	}
	{
		// this.Logger.LogWarning("UserData ({0}) does not contain PhotonViewId. Remote voice p#{1} v#{2} not linked. Do you have a Recorder not used with a PhotonVoiceView? is this expected?",
		//     userData == null ? "null" : userData.ToString(), playerId, voiceId);
		RuntimeObject* L_16;
		L_16 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		RuntimeObject * L_19 = ___userData2;
		G_B4_0 = 0;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = _stringLiteral96F687665AEA502398F1370CEE347C90A340B677;
		G_B4_4 = L_16;
		if (!L_19)
		{
			G_B5_0 = 0;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = _stringLiteral96F687665AEA502398F1370CEE347C90A340B677;
			G_B5_4 = L_16;
			goto IL_0078;
		}
	}
	{
		RuntimeObject * L_20 = ___userData2;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_007d;
	}

IL_0078:
	{
		G_B6_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_007d:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = G_B6_3;
		int32_t L_23 = ___playerId0;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_22;
		uint8_t L_27 = ___voiceId1;
		uint8_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_29);
		NullCheck(G_B6_5);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, G_B6_5, G_B6_4, L_26);
		// return null;
		V_4 = (Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA *)NULL;
		goto IL_0189;
	}

IL_009e:
	{
		// int photonViewId = (int)userData;
		RuntimeObject * L_30 = ___userData2;
		V_0 = ((*(int32_t*)((int32_t*)UnBox(L_30, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// PhotonView photonView = PhotonView.Find(photonViewId);
		int32_t L_31 = V_0;
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_32;
		L_32 = PhotonView_Find_m3F9844722ED827DB3D54100125D76DDFC25C3EE9(L_31, /*hidden argument*/NULL);
		V_1 = L_32;
		// if (null == photonView || !photonView)
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00c0;
		}
	}
	{
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_35 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_35, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B10_0 = 1;
	}

IL_00c1:
	{
		V_6 = (bool)G_B10_0;
		bool L_37 = V_6;
		if (!L_37)
		{
			goto IL_00fd;
		}
	}
	{
		// this.Logger.LogWarning("No PhotonView with ID {0} found. Remote voice p#{1} v#{2} not linked.", userData, playerId, voiceId);
		RuntimeObject* L_38;
		L_38 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = L_39;
		RuntimeObject * L_41 = ___userData2;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_40;
		int32_t L_43 = ___playerId0;
		int32_t L_44 = L_43;
		RuntimeObject * L_45 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_45);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = L_42;
		uint8_t L_47 = ___voiceId1;
		uint8_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_49);
		NullCheck(L_38);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_38, _stringLiteral631CCB3B38A24A985A55AD1E70ABA1395491A996, L_46);
		// return null;
		V_4 = (Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA *)NULL;
		goto IL_0189;
	}

IL_00fd:
	{
		// PhotonVoiceView photonVoiceView = photonView.GetComponent<PhotonVoiceView>();
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_50 = V_1;
		NullCheck(L_50);
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_51;
		L_51 = Component_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m5A42D26F92580ABB4B3C3D5A5B5A48450DF5DA12(L_50, /*hidden argument*/Component_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m5A42D26F92580ABB4B3C3D5A5B5A48450DF5DA12_RuntimeMethod_var);
		V_2 = L_51;
		// if (null == photonVoiceView || !photonVoiceView)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_52 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0118;
		}
	}
	{
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_54 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_54, /*hidden argument*/NULL);
		G_B15_0 = ((((int32_t)L_55) == ((int32_t)0))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B15_0 = 1;
	}

IL_0119:
	{
		V_7 = (bool)G_B15_0;
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_0152;
		}
	}
	{
		// this.Logger.LogWarning("No PhotonVoiceView attached to the PhotonView with ID {0}. Remote voice p#{1} v#{2} not linked.", userData, playerId, voiceId);
		RuntimeObject* L_57;
		L_57 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_58 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = L_58;
		RuntimeObject * L_60 = ___userData2;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_60);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_59;
		int32_t L_62 = ___playerId0;
		int32_t L_63 = L_62;
		RuntimeObject * L_64 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_65 = L_61;
		uint8_t L_66 = ___voiceId1;
		uint8_t L_67 = L_66;
		RuntimeObject * L_68 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_68);
		NullCheck(L_57);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_57, _stringLiteral7B99C5BB86AD28992FE3EA8391C088EA95489451, L_65);
		// return null;
		V_4 = (Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA *)NULL;
		goto IL_0189;
	}

IL_0152:
	{
		// this.Logger.LogInfo("Using PhotonVoiceView {0} Speaker for remote voice p#{1} v#{2}.", userData, playerId, voiceId);
		RuntimeObject* L_69;
		L_69 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_70;
		RuntimeObject * L_72 = ___userData2;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_72);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_73 = L_71;
		int32_t L_74 = ___playerId0;
		int32_t L_75 = L_74;
		RuntimeObject * L_76 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_76);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_77 = L_73;
		uint8_t L_78 = ___voiceId1;
		uint8_t L_79 = L_78;
		RuntimeObject * L_80 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_80);
		NullCheck(L_69);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_69, _stringLiteral6458CA1942CDE521844E158F0EC0CC46DFEC227B, L_77);
		// return photonVoiceView.SpeakerInUse;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_81 = V_2;
		NullCheck(L_81);
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_82;
		L_82 = PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline(L_81, /*hidden argument*/NULL);
		V_4 = L_82;
		goto IL_0189;
	}

IL_0189:
	{
		// }
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_83 = V_4;
		return L_83;
	}
}
// System.String Photon.Voice.PUN.PunVoiceClient::GetVoiceRoomName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PunVoiceClient_GetVoiceRoomName_m70CBF127BD04158EF2A2A470BB587B950C98FFC2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD193818D7EE1F56481A87F5FE7594803C22FC12B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (PhotonNetwork.InRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_InRoom_mA74C5E318E74D78DB767C4E4012CD2D401FD189E(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// return string.Format("{0}{1}", PhotonNetwork.CurrentRoom.Name, VoiceRoomNameSuffix);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_2;
		L_2 = PhotonNetwork_get_CurrentRoom_mAF2ADEA2F85BD2E851D2B5A662219524D3BC4CF3(/*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_3, _stringLiteralD193818D7EE1F56481A87F5FE7594803C22FC12B, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_002b;
	}

IL_0027:
	{
		// return null;
		V_1 = (String_t*)NULL;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::ConnectOrJoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_ConnectOrJoin_m88D3FF3780FCFD47617EA073EDCC057A53E2BA87 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C7AAFC814E837F74C65B57D9FAB598FE911F039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E9D80CEFB56309B3CAD8F0BE6870DBD9792E758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A9379093D61078CD6096425E2B43AFB142C8C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * G_B11_0 = NULL;
	PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * G_B9_0 = NULL;
	PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * G_B12_1 = NULL;
	{
		// switch (this.ClientState)
		int32_t L_0;
		L_0 = VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)14))))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)15))))
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00c5;
	}

IL_0020:
	{
		// this.Logger.LogInfo("PUN joined room, now connecting Voice client");
		RuntimeObject* L_5;
		L_5 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_5, _stringLiteral42A9379093D61078CD6096425E2B43AFB142C8C4, L_6);
		// if (!this.Connect())
		bool L_7;
		L_7 = PunVoiceClient_Connect_mC6C243D519F45A48B060FB88F98BFCAC6EDBC574(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// this.Logger.LogError("Connecting to server failed.");
		RuntimeObject* L_9;
		L_9 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_9);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_9, _stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55, L_10);
		goto IL_0081;
	}

IL_005d:
	{
		// this.internalConnect = this.AutoConnectAndJoin && !this.clientCalledConnectOnly && !this.clientCalledConnectAndJoin;
		bool L_11 = __this->get_AutoConnectAndJoin_36();
		G_B9_0 = __this;
		if (!L_11)
		{
			G_B11_0 = __this;
			goto IL_007a;
		}
	}
	{
		bool L_12 = __this->get_clientCalledConnectOnly_41();
		G_B10_0 = G_B9_0;
		if (L_12)
		{
			G_B11_0 = G_B9_0;
			goto IL_007a;
		}
	}
	{
		bool L_13 = __this->get_clientCalledConnectAndJoin_39();
		G_B12_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		G_B12_1 = G_B10_0;
		goto IL_007b;
	}

IL_007a:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_007b:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_internalConnect_43((bool)G_B12_0);
	}

IL_0081:
	{
		// break;
		goto IL_00ec;
	}

IL_0083:
	{
		// this.Logger.LogInfo("PUN joined room, now joining Voice room");
		RuntimeObject* L_14;
		L_14 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15;
		L_15 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_14, _stringLiteral3E9D80CEFB56309B3CAD8F0BE6870DBD9792E758, L_15);
		// if (!this.JoinRoom(GetVoiceRoomName()))
		String_t* L_16;
		L_16 = PunVoiceClient_GetVoiceRoomName_m70CBF127BD04158EF2A2A470BB587B950C98FFC2(/*hidden argument*/NULL);
		bool L_17;
		L_17 = PunVoiceClient_JoinRoom_m168EF7A6528C3659B0EE50D1F94E6E048CA0A4E4(__this, L_16, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00c3;
		}
	}
	{
		// this.Logger.LogError("Joining a voice room failed.");
		RuntimeObject* L_19;
		L_19 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20;
		L_20 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_19, _stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A, L_20);
	}

IL_00c3:
	{
		// break;
		goto IL_00ec;
	}

IL_00c5:
	{
		// this.Logger.LogWarning("PUN joined room, Voice client is busy ({0}). Is this expected?", this.ClientState);
		RuntimeObject* L_21;
		L_21 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_22;
		int32_t L_24;
		L_24 = VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E(__this, /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(ClientState_t11533963D5C7136417FA3C78902BB507A656A3DE_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_26);
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_21, _stringLiteral0C7AAFC814E837F74C65B57D9FAB598FE911F039, L_23);
		// break;
		goto IL_00ec;
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_Connect_mC6C243D519F45A48B060FB88F98BFCAC6EDBC574 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// AppSettings settings = null;
		V_0 = (AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 *)NULL;
		// if (this.usePunAppSettings)
		bool L_0 = __this->get_usePunAppSettings_45();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// settings = new AppSettings();
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_2 = (AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 *)il2cpp_codegen_object_new(AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906_il2cpp_TypeInfo_var);
		AppSettings__ctor_mB670183A45F50FE01570B3E4E3510A2287E76C94(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// settings = PhotonNetwork.PhotonServerSettings.AppSettings.CopyTo(settings); // creates an independent copy (cause we need to modify it slightly)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		ServerSettings_t6CAAC24B8FA60FDCF2DF20491039634EE7B8BC1B * L_3;
		L_3 = PhotonNetwork_get_PhotonServerSettings_mD4016806937CAFF23CA5DCF0E74C6A600BCA5BD7(/*hidden argument*/NULL);
		NullCheck(L_3);
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_4 = L_3->get_AppSettings_4();
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_5 = V_0;
		NullCheck(L_4);
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_6;
		L_6 = AppSettings_CopyTo_m2E539370E7170018B24488335FF65EAB2749EDE2(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (!string.IsNullOrEmpty(PhotonNetwork.CloudRegion))
		String_t* L_7;
		L_7 = PhotonNetwork_get_CloudRegion_mBA0F10DD9DE0277AEFBC421EB58477AC98F8E5DD(/*hidden argument*/NULL);
		bool L_8;
		L_8 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// settings.FixedRegion = PhotonNetwork.CloudRegion; // makes sure the voice connection follows into the same cloud region (as PUN uses now).
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = PhotonNetwork_get_CloudRegion_mBA0F10DD9DE0277AEFBC421EB58477AC98F8E5DD(/*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_FixedRegion_6(L_11);
	}

IL_0043:
	{
		// this.Client.SerializationProtocol = PhotonNetwork.NetworkingClient.SerializationProtocol;
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_12;
		L_12 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_13 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = LoadBalancingClient_get_SerializationProtocol_mEDF5EC2E0B9193A39D814F0F411823557A9E0497(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		LoadBalancingClient_set_SerializationProtocol_mA630D4F67B1FCF354966E03F550925F5CD5DA7CD(L_12, L_14, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// if (this.UsePunAuthValues)
		bool L_15;
		L_15 = PunVoiceClient_get_UsePunAuthValues_mA7D923B0DCFDF869B3EE7ACE3986D286C4A3EB63(__this, /*hidden argument*/NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00eb;
		}
	}
	{
		// if (PhotonNetwork.AuthValues != null)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_17;
		L_17 = PhotonNetwork_get_AuthValues_m950DBB47C969C02703325254888148A5D1B3C5F2(/*hidden argument*/NULL);
		V_4 = (bool)((!(((RuntimeObject*)(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00c0;
		}
	}
	{
		// if (this.Client.AuthValues == null)
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_19;
		L_19 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_20;
		L_20 = LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline(L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A *)L_20) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_009e;
		}
	}
	{
		// this.Client.AuthValues = new AuthenticationValues();
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_22;
		L_22 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_23 = (AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A *)il2cpp_codegen_object_new(AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_mD18767A7F64DA21D9701F53C0E5E14755B9B7177(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		LoadBalancingClient_set_AuthValues_mCE973D6B02EC68339DA652AF8D42F85E4EDB5A21_inline(L_22, L_23, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// this.Client.AuthValues = PhotonNetwork.AuthValues.CopyTo(this.Client.AuthValues);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_24;
		L_24 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_25;
		L_25 = PhotonNetwork_get_AuthValues_m950DBB47C969C02703325254888148A5D1B3C5F2(/*hidden argument*/NULL);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_26;
		L_26 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_27;
		L_27 = LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_28;
		L_28 = AuthenticationValues_CopyTo_mEDE07715DA483D2EF8A1710D666494C600C1E8A8(L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		LoadBalancingClient_set_AuthValues_mCE973D6B02EC68339DA652AF8D42F85E4EDB5A21_inline(L_24, L_28, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// this.Client.AuthMode = PhotonNetwork.NetworkingClient.AuthMode;
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_29;
		L_29 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_30 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_AuthMode_5();
		NullCheck(L_29);
		((LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_29)->set_AuthMode_5(L_31);
		// this.Client.EncryptionMode = PhotonNetwork.NetworkingClient.EncryptionMode;
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_32;
		L_32 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * L_33 = ((PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_StaticFields*)il2cpp_codegen_static_fields_for(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var))->get_NetworkingClient_2();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_EncryptionMode_6();
		NullCheck(L_32);
		((LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A *)L_32)->set_EncryptionMode_6(L_34);
	}

IL_00eb:
	{
		// return this.ConnectUsingSettings(settings);
		AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * L_35 = V_0;
		bool L_36;
		L_36 = VirtFuncInvoker1< bool, AppSettings_tABB056AEAFF5113D2D970906784B48C42DF13906 * >::Invoke(7 /* System.Boolean Photon.Voice.Unity.VoiceConnection::ConnectUsingSettings(Photon.Realtime.AppSettings) */, __this, L_35);
		V_6 = L_36;
		goto IL_00f6;
	}

IL_00f6:
	{
		// }
		bool L_37 = V_6;
		return L_37;
	}
}
// System.Boolean Photon.Voice.PUN.PunVoiceClient::JoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PunVoiceClient_JoinRoom_m168EF7A6528C3659B0EE50D1F94E6E048CA0A4E4 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, String_t* ___voiceRoomName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (string.IsNullOrEmpty(voiceRoomName))
		String_t* L_0 = ___voiceRoomName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// this.Logger.LogError("Voice room name is null or empty.");
		RuntimeObject* L_3;
		L_3 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_3, _stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B, L_4);
		// return false;
		V_1 = (bool)0;
		goto IL_0046;
	}

IL_0026:
	{
		// this.voiceRoomParams.RoomName = voiceRoomName;
		EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * L_5 = __this->get_voiceRoomParams_38();
		String_t* L_6 = ___voiceRoomName0;
		NullCheck(L_5);
		L_5->set_RoomName_0(L_6);
		// return this.Client.OpJoinOrCreateRoom(this.voiceRoomParams);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_7;
		L_7 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * L_8 = __this->get_voiceRoomParams_38();
		NullCheck(L_7);
		bool L_9;
		L_9 = LoadBalancingClient_OpJoinOrCreateRoom_m64C70BD278320F959BF2C008F58E651268413DEB(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::FollowPun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient_FollowPun_mC7132A3F24EE3B51FCD75268696B11868F676CAC (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral233B5AC8FCFCA611B06590C6EEDDEE7245A9BB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral337A20AAFBA6AC7D9D6BFF4BC9DCE14D072BAA21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B35_0 = 0;
	{
		// if (PhotonNetwork.OfflineMode)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_OfflineMode_m6490BBCE632FF377E331623A0233A7FC7232B175(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_01ad;
	}

IL_0010:
	{
		// if (PhotonNetwork.NetworkClientState == this.ClientState)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = PhotonNetwork_get_NetworkClientState_mD3F051004B75C0BB3E4F5C2B104EB1FE399D2B89(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0114;
		}
	}
	{
		// if (PhotonNetwork.InRoom && this.AutoConnectAndJoin)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = PhotonNetwork_get_InRoom_mA74C5E318E74D78DB767C4E4012CD2D401FD189E(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		bool L_6 = __this->get_AutoConnectAndJoin_36();
		G_B6_0 = ((int32_t)(L_6));
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B6_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00b6;
		}
	}
	{
		// string expectedRoomName = GetVoiceRoomName();
		String_t* L_8;
		L_8 = PunVoiceClient_GetVoiceRoomName_m70CBF127BD04158EF2A2A470BB587B950C98FFC2(/*hidden argument*/NULL);
		V_3 = L_8;
		// string currentRoomName = this.Client.CurrentRoom.Name;
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_9;
		L_9 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_10;
		L_10 = LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// if (!currentRoomName.Equals(expectedRoomName))
		String_t* L_12 = V_4;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		bool L_14;
		L_14 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_12, L_13, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00b3;
		}
	}
	{
		// this.Logger.LogWarning(
		//     "Voice room mismatch: Expected:\"{0}\" Current:\"{1}\", leaving the second to join the first.",
		//     expectedRoomName, currentRoomName);
		RuntimeObject* L_16;
		L_16 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		String_t* L_19 = V_3;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_18;
		String_t* L_21 = V_4;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_16, _stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE, L_20);
		// if (!this.Client.OpLeaveRoom(false))
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_22;
		L_22 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23;
		L_23 = LoadBalancingClient_OpLeaveRoom_m0316E737300259AC1EA7EFB562D3FBB659649BF0(L_22, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00b2;
		}
	}
	{
		// this.Logger.LogError("Leaving the current voice room failed.");
		RuntimeObject* L_25;
		L_25 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26;
		L_26 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_25, _stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488, L_26);
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		goto IL_010f;
	}

IL_00b6:
	{
		// else if (this.ClientState == ClientState.ConnectedToMasterServer && this.AutoLeaveAndDisconnect && !this.clientCalledConnectAndJoin && !this.clientCalledConnectOnly)
		int32_t L_27;
		L_27 = VoiceConnection_get_ClientState_mFCB71525A37C72D3D2FF385276C97A9676C3366E(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_00db;
		}
	}
	{
		bool L_28 = __this->get_AutoLeaveAndDisconnect_37();
		if (!L_28)
		{
			goto IL_00db;
		}
	}
	{
		bool L_29 = __this->get_clientCalledConnectAndJoin_39();
		if (L_29)
		{
			goto IL_00db;
		}
	}
	{
		bool L_30 = __this->get_clientCalledConnectOnly_41();
		G_B17_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_00dc;
	}

IL_00db:
	{
		G_B17_0 = 0;
	}

IL_00dc:
	{
		V_7 = (bool)G_B17_0;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_010f;
		}
	}
	{
		// this.Logger.LogWarning("Unexpected: PUN and Voice clients have the same client state: ConnectedToMasterServer, Disconnecting Voice client.");
		RuntimeObject* L_32;
		L_32 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33;
		L_33 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_32, _stringLiteral233B5AC8FCFCA611B06590C6EEDDEE7245A9BB7A, L_33);
		// this.internalDisconnect = true;
		__this->set_internalDisconnect_42((bool)1);
		// this.Client.Disconnect();
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_34;
		L_34 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		LoadBalancingClient_Disconnect_m050900F9E7B02D30742830C58D2F205211828CB8(L_34, ((int32_t)15), /*hidden argument*/NULL);
	}

IL_010f:
	{
		// return;
		goto IL_01ad;
	}

IL_0114:
	{
		// if (PhotonNetwork.InRoom)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = PhotonNetwork_get_InRoom_mA74C5E318E74D78DB767C4E4012CD2D401FD189E(/*hidden argument*/NULL);
		V_8 = L_35;
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_0151;
		}
	}
	{
		// if (this.clientCalledConnectAndJoin || this.AutoConnectAndJoin && !this.clientCalledDisconnect)
		bool L_37 = __this->get_clientCalledConnectAndJoin_39();
		if (L_37)
		{
			goto IL_013e;
		}
	}
	{
		bool L_38 = __this->get_AutoConnectAndJoin_36();
		if (!L_38)
		{
			goto IL_013b;
		}
	}
	{
		bool L_39 = __this->get_clientCalledDisconnect_40();
		G_B25_0 = ((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		goto IL_013c;
	}

IL_013b:
	{
		G_B25_0 = 0;
	}

IL_013c:
	{
		G_B27_0 = G_B25_0;
		goto IL_013f;
	}

IL_013e:
	{
		G_B27_0 = 1;
	}

IL_013f:
	{
		V_9 = (bool)G_B27_0;
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_014e;
		}
	}
	{
		// this.ConnectOrJoin();
		PunVoiceClient_ConnectOrJoin_m88D3FF3780FCFD47617EA073EDCC057A53E2BA87(__this, /*hidden argument*/NULL);
	}

IL_014e:
	{
		goto IL_01ad;
	}

IL_0151:
	{
		// else if (this.Client.InRoom && this.AutoLeaveAndDisconnect && !this.clientCalledConnectAndJoin && !this.clientCalledConnectOnly)
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_41;
		L_41 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		bool L_42;
		L_42 = LoadBalancingClient_get_InRoom_m8981E2A0ADCC8D2761485C6311E6728C05285ED9(L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0179;
		}
	}
	{
		bool L_43 = __this->get_AutoLeaveAndDisconnect_37();
		if (!L_43)
		{
			goto IL_0179;
		}
	}
	{
		bool L_44 = __this->get_clientCalledConnectAndJoin_39();
		if (L_44)
		{
			goto IL_0179;
		}
	}
	{
		bool L_45 = __this->get_clientCalledConnectOnly_41();
		G_B35_0 = ((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		goto IL_017a;
	}

IL_0179:
	{
		G_B35_0 = 0;
	}

IL_017a:
	{
		V_10 = (bool)G_B35_0;
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_01ad;
		}
	}
	{
		// this.Logger.LogInfo("PUN left room, disconnecting Voice");
		RuntimeObject* L_47;
		L_47 = VoiceConnection_get_Logger_mF570445C80123BA3F089CDAD409E7282A8CEEFB7(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_48;
		L_48 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_47);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var, L_47, _stringLiteral337A20AAFBA6AC7D9D6BFF4BC9DCE14D072BAA21, L_48);
		// this.internalDisconnect = true;
		__this->set_internalDisconnect_42((bool)1);
		// this.Client.Disconnect();
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_49;
		L_49 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		LoadBalancingClient_Disconnect_m050900F9E7B02D30742830C58D2F205211828CB8(L_49, ((int32_t)15), /*hidden argument*/NULL);
	}

IL_01ad:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.PunVoiceClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PunVoiceClient__ctor_m3DA44C08F1FB83795213332AF7C129200D969663 (PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool AutoConnectAndJoin = true;
		__this->set_AutoConnectAndJoin_36((bool)1);
		// public bool AutoLeaveAndDisconnect = true;
		__this->set_AutoLeaveAndDisconnect_37((bool)1);
		// private EnterRoomParams voiceRoomParams = new EnterRoomParams
		// {
		//     RoomOptions = new RoomOptions { IsVisible = false }
		// };
		EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * L_0 = (EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E *)il2cpp_codegen_object_new(EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E_il2cpp_TypeInfo_var);
		EnterRoomParams__ctor_m8037403CBED8A0BBA13FBC733606EF6E8BF7CB80(L_0, /*hidden argument*/NULL);
		EnterRoomParams_t332FBCA3D53159524F5A58B535B05BF1E0470B3E * L_1 = L_0;
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_2 = (RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F *)il2cpp_codegen_object_new(RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F_il2cpp_TypeInfo_var);
		RoomOptions__ctor_m3757C5E2DFF56EEEC7F0B7A08443DD21DA88FEF7(L_2, /*hidden argument*/NULL);
		RoomOptions_t9923C5A201832F8328FFCA30828018311BA60A2F * L_3 = L_2;
		NullCheck(L_3);
		RoomOptions_set_IsVisible_mC0A95ADCF711835B0C695844D5BF19226EF0DCA6(L_3, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_RoomOptions_1(L_3);
		__this->set_voiceRoomParams_38(L_1);
		// private bool usePunAppSettings = true;
		__this->set_usePunAppSettings_45((bool)1);
		// private bool usePunAuthValues = true;
		__this->set_usePunAuthValues_46((bool)1);
		VoiceConnection__ctor_m3FD2E5EBDDD4F9085F1CDF5B9B35FA04DF917539(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_Awake_m704427F2307C8E32E91694FCEE55ECA242DC9D4B (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m5A42D26F92580ABB4B3C3D5A5B5A48450DF5DA12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.photonVoiceView = this.GetComponent<PhotonVoiceView>();
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_0;
		L_0 = Component_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m5A42D26F92580ABB4B3C3D5A5B5A48450DF5DA12(__this, /*hidden argument*/Component_GetComponent_TisPhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722_m5A42D26F92580ABB4B3C3D5A5B5A48450DF5DA12_RuntimeMethod_var);
		__this->set_photonVoiceView_5(L_0);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_Update_m45BB8B7B631F3E08C560C2B3FD0027387BDD9360 (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4816459EC827354ABCD3F7B7D8543A20050D2B0D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		// this.MaxLogs();
		VoiceDebugScript_MaxLogs_mBEC3C9618E6B9C5AACF62A36A646B848C0A823F8(__this, /*hidden argument*/NULL);
		// if (this.photonVoiceView.RecorderInUse != null)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_0 = __this->get_photonVoiceView_5();
		NullCheck(L_0);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_1;
		L_1 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00f8;
		}
	}
	{
		// if (this.TestUsingAudioClip)
		bool L_4 = __this->get_TestUsingAudioClip_8();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00a7;
		}
	}
	{
		// if (ReferenceEquals(null, this.TestAudioClip) || !this.TestAudioClip)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_TestAudioClip_7();
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = __this->get_TestAudioClip_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_7, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("Set an AudioClip first");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral4816459EC827354ABCD3F7B7D8543A20050D2B0D, /*hidden argument*/NULL);
		goto IL_00a6;
	}

IL_0058:
	{
		// this.photonVoiceView.RecorderInUse.SourceType = Recorder.InputSourceType.AudioClip;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_10 = __this->get_photonVoiceView_5();
		NullCheck(L_10);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_11;
		L_11 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Recorder_set_SourceType_mC788BB70F281F72C40981FA4FD9135DBA396B4CC(L_11, 1, /*hidden argument*/NULL);
		// this.photonVoiceView.RecorderInUse.AudioClip = this.TestAudioClip;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_12 = __this->get_photonVoiceView_5();
		NullCheck(L_12);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_13;
		L_13 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_12, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_14 = __this->get_TestAudioClip_7();
		NullCheck(L_13);
		Recorder_set_AudioClip_m606FFADC6B090D2ADD815E80AB0F771D4D0ACBA2(L_13, L_14, /*hidden argument*/NULL);
		// this.photonVoiceView.RecorderInUse.LoopAudioClip = true;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_15 = __this->get_photonVoiceView_5();
		NullCheck(L_15);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_16;
		L_16 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Recorder_set_LoopAudioClip_mAB09E9E270289A92B2804E58AAFF765FA281BB86(L_16, (bool)1, /*hidden argument*/NULL);
		// this.photonVoiceView.RecorderInUse.RestartRecording();
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_17 = __this->get_photonVoiceView_5();
		NullCheck(L_17);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_18;
		L_18 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = Recorder_RestartRecording_m27A36FE774DCFE2706F74494DBFDC3E38811B45F(L_18, /*hidden argument*/NULL);
	}

IL_00a6:
	{
	}

IL_00a7:
	{
		// if (this.ForceRecordingAndTransmission)
		bool L_20 = __this->get_ForceRecordingAndTransmission_6();
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00d7;
		}
	}
	{
		// this.photonVoiceView.RecorderInUse.RecordingEnabled = true;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_22 = __this->get_photonVoiceView_5();
		NullCheck(L_22);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_23;
		L_23 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Recorder_set_RecordingEnabled_m69AE55C3D11E11BFB4D75E2676F14B4ABBA9AD37(L_23, (bool)1, /*hidden argument*/NULL);
		// this.photonVoiceView.RecorderInUse.TransmitEnabled = true;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_24 = __this->get_photonVoiceView_5();
		NullCheck(L_24);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_25;
		L_25 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Recorder_set_TransmitEnabled_m2B0EDFB9B03B5ACC9696C386D52A504CA3AE502E(L_25, (bool)1, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// if (this.DisableVad)
		bool L_26 = __this->get_DisableVad_9();
		V_4 = L_26;
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_00f7;
		}
	}
	{
		// this.photonVoiceView.RecorderInUse.VoiceDetection = false;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_28 = __this->get_photonVoiceView_5();
		NullCheck(L_28);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_29;
		L_29 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Recorder_set_VoiceDetection_m626DC6051F6D6CD9425B4026509D126779196C18(L_29, (bool)0, /*hidden argument*/NULL);
	}

IL_00f7:
	{
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::CantHearYou()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_CantHearYou_mE14140E8E9F7C7F0A06ED3F2A29D0A3B3DA1EAE0 (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0992D3165D8489C42C7461FA83DBC4B3639330E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D4DA4488413E8C1FACD06BD54997CC4BCD9612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8718556EB9DCBD2575098EAB4C86419472AC7614);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!PunVoiceClient.Instance.Client.InRoom)
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0;
		L_0 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_0);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_1;
		L_1 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = LoadBalancingClient_get_InRoom_m8981E2A0ADCC8D2761485C6311E6728C05285ED9(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError("local voice client is not joined to a voice room");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral8718556EB9DCBD2575098EAB4C86419472AC7614, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0029:
	{
		// if (!this.photonVoiceView.SpeakerInUse.IsLinked)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_4 = __this->get_photonVoiceView_5();
		NullCheck(L_4);
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_5;
		L_5 = PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = Speaker_get_IsLinked_m94FC25E3AF6C10EADA0D1D34B7630267C68AF8EC(L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("locally speaker not linked, trying late linking & asking anyway");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteral0992D3165D8489C42C7461FA83DBC4B3639330E8, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// this.photonView.RPC("CantHearYou", this.photonView.Owner, PunVoiceClient.Instance.Client.CurrentRoom.Name, PunVoiceClient.Instance.Client.LoadBalancingPeer.ServerIpAddress, PunVoiceClient.Instance.Client.AppVersion);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_8;
		L_8 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_9;
		L_9 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_10;
		L_10 = PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline(L_9, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_13;
		L_13 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_13);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_14;
		L_14 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_15;
		L_15 = LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743(L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_12;
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_18;
		L_18 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_18);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_19;
		L_19 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_20;
		L_20 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = PhotonPeer_get_ServerIpAddress_m79188C23F407B97852A4284FF9BFE53F7BEA552F(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_17;
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_23;
		L_23 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_23);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_24;
		L_24 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_25);
		NullCheck(L_8);
		PhotonView_RPC_mEF3BDC753F512BA2B4E2A6CDC724BFCBF5621C61(L_8, _stringLiteral62D4DA4488413E8C1FACD06BD54997CC4BCD9612, L_10, L_22, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::CantHearYou(System.String,System.String,System.String,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_CantHearYou_mDCA64DD0FD265996AC559F0B0A4444FC183DE473 (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, String_t* ___roomName0, String_t* ___serverIp1, String_t* ___appVersion2, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___photonMessageInfo3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09AF8992981BCC4085724E4E3D0CF09319FCE9D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AAD5240183043F2AC9BF73F3688D7989AA5DD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AB9A62FEB121241DAF6E027F68F70D4A6625235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2354DE780A5B69C0FEED47C58F7AAB3C88099215);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24F5590E4C612C6C361CC9B6A7D645EEF121B6BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B2DA86F8E43CCF02C50633D307C27C7B2BBB4AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45CC5DDEA8717A99A5B870EE5DABECF5F7C7046A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5395A2F08284F5EAE81B1C322B82D7E19E4D4CF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral566067E3C1339B5F41E264C307AFED1E012B8F76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E7DA8E8875DDA9664D612DF021FC38E6BA46578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F700A67A6310E33DD094AAC545BF1871B6D467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBA0771AC72CD21EFF386416E9F6F5302398353F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0942E93D883771539D99BE72A7DDCB8AE98CDC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0C669958BFD1AB4581DA8AE8C62EA5A5074640C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD898110020367A3C85DFC02C4633ED3E8B6CE172);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	{
		// if (!PunVoiceClient.Instance.Client.InRoom)
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_0;
		L_0 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_0);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_1;
		L_1 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = LoadBalancingClient_get_InRoom_m8981E2A0ADCC8D2761485C6311E6728C05285ED9(L_1, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// why = "voice client not in a room";
		V_0 = _stringLiteral5E7DA8E8875DDA9664D612DF021FC38E6BA46578;
		goto IL_036f;
	}

IL_0024:
	{
		// else if (!PunVoiceClient.Instance.Client.CurrentRoom.Name.Equals(roomName))
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_4;
		L_4 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_4);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_5;
		L_5 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_6;
		L_6 = LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743(L_6, /*hidden argument*/NULL);
		String_t* L_8 = ___roomName0;
		NullCheck(L_7);
		bool L_9;
		L_9 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_7, L_8, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// why = string.Format("voice client is on another room {0} != {1}",
		//     PunVoiceClient.Instance.Client.CurrentRoom.Name, roomName);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_11;
		L_11 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_11);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_12;
		L_12 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_13;
		L_13 = LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743(L_13, /*hidden argument*/NULL);
		String_t* L_15 = ___roomName0;
		String_t* L_16;
		L_16 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral0AAD5240183043F2AC9BF73F3688D7989AA5DD58, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_036f;
	}

IL_006c:
	{
		// else if (!PunVoiceClient.Instance.Client.LoadBalancingPeer.ServerIpAddress.Equals(serverIp))
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_17;
		L_17 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_17);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_18;
		L_18 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_19;
		L_19 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = PhotonPeer_get_ServerIpAddress_m79188C23F407B97852A4284FF9BFE53F7BEA552F(L_19, /*hidden argument*/NULL);
		String_t* L_21 = ___serverIp1;
		NullCheck(L_20);
		bool L_22;
		L_22 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_20, L_21, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_3;
		if (!L_23)
		{
			goto IL_00b4;
		}
	}
	{
		// why = string.Format("voice client is on another server {0} != {1}, maybe different Photon Cloud regions",
		//     PunVoiceClient.Instance.Client.LoadBalancingPeer.ServerIpAddress, serverIp);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_24;
		L_24 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_24);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_25;
		L_25 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_26;
		L_26 = LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = PhotonPeer_get_ServerIpAddress_m79188C23F407B97852A4284FF9BFE53F7BEA552F(L_26, /*hidden argument*/NULL);
		String_t* L_28 = ___serverIp1;
		String_t* L_29;
		L_29 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral2B2DA86F8E43CCF02C50633D307C27C7B2BBB4AB, L_27, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		goto IL_036f;
	}

IL_00b4:
	{
		// else if (!PunVoiceClient.Instance.Client.AppVersion.Equals(appVersion))
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_30;
		L_30 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_30);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_31;
		L_31 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline(L_31, /*hidden argument*/NULL);
		String_t* L_33 = ___appVersion2;
		NullCheck(L_32);
		bool L_34;
		L_34 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_32, L_33, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_4;
		if (!L_35)
		{
			goto IL_00f4;
		}
	}
	{
		// why = string.Format("voice client uses different AppVersion {0} != {1}",
		//     PunVoiceClient.Instance.Client.AppVersion, appVersion);
		PunVoiceClient_tDC82CCBE5A73861A03E443BA81E0F4A809BD7B2B * L_36;
		L_36 = PunVoiceClient_get_Instance_m616CB048CD3666B274FDA7BB9064BB4A2B6F3707(/*hidden argument*/NULL);
		NullCheck(L_36);
		LoadBalancingTransport_tFF37FDE48C872453D316ECC7991216859F337460 * L_37;
		L_37 = VoiceConnection_get_Client_mA5D5D74620A90CC9E4109216273044CF54D9701F(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline(L_37, /*hidden argument*/NULL);
		String_t* L_39 = ___appVersion2;
		String_t* L_40;
		L_40 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteralD898110020367A3C85DFC02C4633ED3E8B6CE172, L_38, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
		goto IL_036f;
	}

IL_00f4:
	{
		// else if (this.photonVoiceView.RecorderInUse == null)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_41 = __this->get_photonVoiceView_5();
		NullCheck(L_41);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_42;
		L_42 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_42, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_43;
		bool L_44 = V_5;
		if (!L_44)
		{
			goto IL_0118;
		}
	}
	{
		// why = "recorder not setup (yet?)";
		V_0 = _stringLiteral5395A2F08284F5EAE81B1C322B82D7E19E4D4CF3;
		goto IL_036f;
	}

IL_0118:
	{
		// else if (!this.photonVoiceView.RecorderInUse.RecordingEnabled)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_45 = __this->get_photonVoiceView_5();
		NullCheck(L_45);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_46;
		L_46 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		bool L_47;
		L_47 = Recorder_get_RecordingEnabled_mEFB69C6A34AAB8B91EC0A28A3F07208C28076315(L_46, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_6;
		if (!L_48)
		{
			goto IL_0150;
		}
	}
	{
		// why = "recorder is not recording";
		V_0 = _stringLiteral2354DE780A5B69C0FEED47C58F7AAB3C88099215;
		// this.photonVoiceView.RecorderInUse.RecordingEnabled = true;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_49 = __this->get_photonVoiceView_5();
		NullCheck(L_49);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_50;
		L_50 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Recorder_set_RecordingEnabled_m69AE55C3D11E11BFB4D75E2676F14B4ABBA9AD37(L_50, (bool)1, /*hidden argument*/NULL);
		goto IL_036f;
	}

IL_0150:
	{
		// else if (!this.photonVoiceView.RecorderInUse.TransmitEnabled)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_51 = __this->get_photonVoiceView_5();
		NullCheck(L_51);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_52;
		L_52 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		bool L_53;
		L_53 = Recorder_get_TransmitEnabled_m8FACE0F380E6057DD99D43C1218C0DA5E39A9F87(L_52, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_7;
		if (!L_54)
		{
			goto IL_0188;
		}
	}
	{
		// why = "recorder is not transmitting";
		V_0 = _stringLiteral566067E3C1339B5F41E264C307AFED1E012B8F76;
		// this.photonVoiceView.RecorderInUse.TransmitEnabled = true;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_55 = __this->get_photonVoiceView_5();
		NullCheck(L_55);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_56;
		L_56 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Recorder_set_TransmitEnabled_m2B0EDFB9B03B5ACC9696C386D52A504CA3AE502E(L_56, (bool)1, /*hidden argument*/NULL);
		goto IL_036f;
	}

IL_0188:
	{
		// else if (this.photonVoiceView.RecorderInUse.InterestGroup != 0)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_57 = __this->get_photonVoiceView_5();
		NullCheck(L_57);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_58;
		L_58 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		uint8_t L_59;
		L_59 = Recorder_get_InterestGroup_m4020502D9B355F980CCFFCBFD562A0248DF6D1B3(L_58, /*hidden argument*/NULL);
		V_8 = (bool)((!(((uint32_t)L_59) <= ((uint32_t)0)))? 1 : 0);
		bool L_60 = V_8;
		if (!L_60)
		{
			goto IL_01c0;
		}
	}
	{
		// why = "recorder.InterestGroup is not zero? is this on purpose? switching it back to zero";
		V_0 = _stringLiteralD0942E93D883771539D99BE72A7DDCB8AE98CDC8;
		// this.photonVoiceView.RecorderInUse.InterestGroup = 0;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_61 = __this->get_photonVoiceView_5();
		NullCheck(L_61);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_62;
		L_62 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Recorder_set_InterestGroup_m4A180DB52FE33D71E47E09C22DBBC411760C3CC8(L_62, (uint8_t)0, /*hidden argument*/NULL);
		goto IL_036f;
	}

IL_01c0:
	{
		// else if (!(this.photonVoiceView.RecorderInUse.UserData is int) || (int)this.photonVoiceView.RecorderInUse.UserData != this.photonView.ViewID)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_63 = __this->get_photonVoiceView_5();
		NullCheck(L_63);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_64;
		L_64 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		RuntimeObject * L_65;
		L_65 = Recorder_get_UserData_m3C6C8A5468179DE86E42D6369FD306F7947CEAE4(L_64, /*hidden argument*/NULL);
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_65, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_01fe;
		}
	}
	{
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_66 = __this->get_photonVoiceView_5();
		NullCheck(L_66);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_67;
		L_67 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		RuntimeObject * L_68;
		L_68 = Recorder_get_UserData_m3C6C8A5468179DE86E42D6369FD306F7947CEAE4(L_67, /*hidden argument*/NULL);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_69;
		L_69 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		NullCheck(L_69);
		int32_t L_70;
		L_70 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_69, /*hidden argument*/NULL);
		G_B19_0 = ((((int32_t)((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_68, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))) == ((int32_t)L_70))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01ff;
	}

IL_01fe:
	{
		G_B19_0 = 1;
	}

IL_01ff:
	{
		V_9 = (bool)G_B19_0;
		bool L_71 = V_9;
		if (!L_71)
		{
			goto IL_0269;
		}
	}
	{
		// why = string.Format("recorder.UserData ({0}) != photonView.ViewID ({1}), fixing it now", this.photonVoiceView.RecorderInUse.UserData, this.photonView.ViewID);
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_72 = __this->get_photonVoiceView_5();
		NullCheck(L_72);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_73;
		L_73 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		RuntimeObject * L_74;
		L_74 = Recorder_get_UserData_m3C6C8A5468179DE86E42D6369FD306F7947CEAE4(L_73, /*hidden argument*/NULL);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_75;
		L_75 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		int32_t L_76;
		L_76 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_75, /*hidden argument*/NULL);
		int32_t L_77 = L_76;
		RuntimeObject * L_78 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_77);
		String_t* L_79;
		L_79 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral0AB9A62FEB121241DAF6E027F68F70D4A6625235, L_74, L_78, /*hidden argument*/NULL);
		V_0 = L_79;
		// this.photonVoiceView.RecorderInUse.UserData = this.photonView.ViewID;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_80 = __this->get_photonVoiceView_5();
		NullCheck(L_80);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_81;
		L_81 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_80, /*hidden argument*/NULL);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_82;
		L_82 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		int32_t L_83;
		L_83 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_82, /*hidden argument*/NULL);
		int32_t L_84 = L_83;
		RuntimeObject * L_85 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_81);
		Recorder_set_UserData_mAE5481C9D9AF26233A871D0FC6D4A99A8E3E1B58(L_81, L_85, /*hidden argument*/NULL);
		// this.photonVoiceView.RecorderInUse.RestartRecording();
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_86 = __this->get_photonVoiceView_5();
		NullCheck(L_86);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_87;
		L_87 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		bool L_88;
		L_88 = Recorder_RestartRecording_m27A36FE774DCFE2706F74494DBFDC3E38811B45F(L_87, /*hidden argument*/NULL);
		goto IL_036f;
	}

IL_0269:
	{
		// else if (this.photonVoiceView.RecorderInUse.VoiceDetection && this.DisableVad) // todo: check WebRtcAudioDsp.VAD
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_89 = __this->get_photonVoiceView_5();
		NullCheck(L_89);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_90;
		L_90 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		bool L_91;
		L_91 = Recorder_get_VoiceDetection_m7D38C6673F7E7F8003C8F4C46F6AE700C07BBE70(L_90, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_0283;
		}
	}
	{
		bool L_92 = __this->get_DisableVad_9();
		G_B24_0 = ((int32_t)(L_92));
		goto IL_0284;
	}

IL_0283:
	{
		G_B24_0 = 0;
	}

IL_0284:
	{
		V_10 = (bool)G_B24_0;
		bool L_93 = V_10;
		if (!L_93)
		{
			goto IL_02a9;
		}
	}
	{
		// why = "recorder vad is enabled, disable it for testing";
		V_0 = _stringLiteralC5F700A67A6310E33DD094AAC545BF1871B6D467;
		// this.photonVoiceView.RecorderInUse.VoiceDetection = false;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_94 = __this->get_photonVoiceView_5();
		NullCheck(L_94);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_95;
		L_95 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Recorder_set_VoiceDetection_m626DC6051F6D6CD9425B4026509D126779196C18(L_95, (bool)0, /*hidden argument*/NULL);
		goto IL_036f;
	}

IL_02a9:
	{
		// else if (this.photonView.OwnerActorNr == photonMessageInfo.Sender.ActorNumber)
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_96;
		L_96 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		NullCheck(L_96);
		int32_t L_97;
		L_97 = PhotonView_get_OwnerActorNr_m8101EF402C54CE02531D5CA5ED77748076E67856(L_96, /*hidden argument*/NULL);
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_98 = ___photonMessageInfo3;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_99 = L_98.get_Sender_1();
		NullCheck(L_99);
		int32_t L_100;
		L_100 = Player_get_ActorNumber_m8184AA7F53DD7BCE5B24382144BCD21C58D915E3(L_99, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_97) == ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_11;
		if (!L_101)
		{
			goto IL_0356;
		}
	}
	{
		// if (this.LocalDebug)
		bool L_102 = __this->get_LocalDebug_11();
		V_12 = L_102;
		bool L_103 = V_12;
		if (!L_103)
		{
			goto IL_034b;
		}
	}
	{
		// if (this.photonVoiceView.SpeakerInUse != null)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_104 = __this->get_photonVoiceView_5();
		NullCheck(L_104);
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_105;
		L_105 = PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline(L_104, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_106;
		L_106 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_105, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_13 = L_106;
		bool L_107 = V_13;
		if (!L_107)
		{
			goto IL_030b;
		}
	}
	{
		// why = "no idea why!, should be working (1)";
		V_0 = _stringLiteralD0C669958BFD1AB4581DA8AE8C62EA5A5074640C;
		// this.photonVoiceView.RecorderInUse.RestartRecording();
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_108 = __this->get_photonVoiceView_5();
		NullCheck(L_108);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_109;
		L_109 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		bool L_110;
		L_110 = Recorder_RestartRecording_m27A36FE774DCFE2706F74494DBFDC3E38811B45F(L_109, /*hidden argument*/NULL);
		goto IL_0348;
	}

IL_030b:
	{
		// else if (!this.photonVoiceView.RecorderInUse.DebugEchoMode)
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_111 = __this->get_photonVoiceView_5();
		NullCheck(L_111);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_112;
		L_112 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		bool L_113;
		L_113 = Recorder_get_DebugEchoMode_m279F55AE211E7C8D6F713853B4544B8D459D8E7F(L_112, /*hidden argument*/NULL);
		V_14 = (bool)((((int32_t)L_113) == ((int32_t)0))? 1 : 0);
		bool L_114 = V_14;
		if (!L_114)
		{
			goto IL_0340;
		}
	}
	{
		// why = "recorder debug echo mode not enabled, enabling it now";
		V_0 = _stringLiteralCBA0771AC72CD21EFF386416E9F6F5302398353F;
		// this.photonVoiceView.RecorderInUse.DebugEchoMode = true;
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_115 = __this->get_photonVoiceView_5();
		NullCheck(L_115);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_116;
		L_116 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_115, /*hidden argument*/NULL);
		NullCheck(L_116);
		Recorder_set_DebugEchoMode_mB67281658E5EE43DF8567E5F04CE74EB387E547E(L_116, (bool)1, /*hidden argument*/NULL);
		goto IL_0348;
	}

IL_0340:
	{
		// why = "locally not speaker (yet?) (2)";
		V_0 = _stringLiteral45CC5DDEA8717A99A5B870EE5DABECF5F7C7046A;
	}

IL_0348:
	{
		goto IL_0353;
	}

IL_034b:
	{
		// why = "local object, are you trying to hear yourself? (feedback DebugEcho), LocalDebug is disabled, enable it if you want to diagnose this";
		V_0 = _stringLiteral09AF8992981BCC4085724E4E3D0CF09319FCE9D9;
	}

IL_0353:
	{
		goto IL_036f;
	}

IL_0356:
	{
		// why = "no idea why!, should be working (2)";
		V_0 = _stringLiteral24F5590E4C612C6C361CC9B6A7D645EEF121B6BD;
		// this.photonVoiceView.RecorderInUse.RestartRecording();
		PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * L_117 = __this->get_photonVoiceView_5();
		NullCheck(L_117);
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_118;
		L_118 = PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline(L_117, /*hidden argument*/NULL);
		NullCheck(L_118);
		bool L_119;
		L_119 = Recorder_RestartRecording_m27A36FE774DCFE2706F74494DBFDC3E38811B45F(L_118, /*hidden argument*/NULL);
	}

IL_036f:
	{
		// this.Reply(why, photonMessageInfo.Sender);
		String_t* L_120 = V_0;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_121 = ___photonMessageInfo3;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_122 = L_121.get_Sender_1();
		VoiceDebugScript_Reply_m588DD63BA1F778781977063678B56271433F03EA(__this, L_120, L_122, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::Reply(System.String,Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_Reply_m588DD63BA1F778781977063678B56271433F03EA (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, String_t* ___why0, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___player1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F11D7FD924312A01D1434E6B6C15C14D50960BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.photonView.RPC("HeresWhy", player, why);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_0;
		L_0 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_1 = ___player1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		String_t* L_4 = ___why0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		PhotonView_RPC_mEF3BDC753F512BA2B4E2A6CDC724BFCBF5621C61(L_0, _stringLiteral1F11D7FD924312A01D1434E6B6C15C14D50960BC, L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::HeresWhy(System.String,Photon.Pun.PhotonMessageInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_HeresWhy_mD18C004A0C6B5EE5FB55E71AD221535351DBA438 (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, String_t* ___why0, PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  ___photonMessageInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ADAA9081239C97382D9F0956300A807BE35143E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogErrorFormat("Player {0} replied to my CantHearYou message with {1}", photonMessageInfo.Sender, why);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		PhotonMessageInfo_tDB354114DA260291360B7315F6540FB60B741786  L_2 = ___photonMessageInfo1;
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_3 = L_2.get_Sender_1();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		String_t* L_5 = ___why0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m92BE92B1C1EDD4B66E5D3CF9ED6480D7D3FFA0E9(_stringLiteral0ADAA9081239C97382D9F0956300A807BE35143E, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::MaxLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript_MaxLogs_mBEC3C9618E6B9C5AACF62A36A646B848C0A823F8 (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisVoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F_m20100E021F1FD53584C511B42CA22D6B29D46C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A* V_1 = NULL;
	int32_t V_2 = 0;
	VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * V_3 = NULL;
	{
		// if (this.IncreaseLogLevels)
		bool L_0 = __this->get_IncreaseLogLevels_10();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// foreach (var l in FindObjectsOfType<VoiceLogger>())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A* L_2;
		L_2 = Object_FindObjectsOfType_TisVoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F_m20100E021F1FD53584C511B42CA22D6B29D46C76(/*hidden argument*/Object_FindObjectsOfType_TisVoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F_m20100E021F1FD53584C511B42CA22D6B29D46C76_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		// foreach (var l in FindObjectsOfType<VoiceLogger>())
		VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// l.LogLevel = DebugLevel.ALL;
		VoiceLogger_tA6D71C204E3545DA66F54063A4E722EC5CF9632F * L_7 = V_3;
		NullCheck(L_7);
		L_7->set_LogLevel_4(5);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0028:
	{
		// foreach (var l in FindObjectsOfType<VoiceLogger>())
		int32_t L_9 = V_2;
		VoiceLoggerU5BU5D_t904D33402DDEE73B7FC785AD849853FC9A22BA8A* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.PUN.UtilityScripts.VoiceDebugScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDebugScript__ctor_m39AEFACE986D89CEC18B80325E941674F4EDAA20 (VoiceDebugScript_t74B12E50B98B548CE11602359049DBB7053791B1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviourPun__ctor_mCE5059964AC90D4EBEB442C9A3B67F92A966E617(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * PhotonVoiceView_get_SpeakerInUse_m36F2250E6745205B9BDC2923C50E0A69B8391AEA_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_0 = __this->get_U3CSpeakerInUseU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * PhotonVoiceView_get_RecorderInUse_mF57CDE147445618BAA68F1C61E8BD2E15880C44E_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, const RuntimeMethod* method)
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = __this->get_U3CRecorderInUseU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE15BE477AABC0A3EE31F6E5131483A548F48D823_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = __this->get_U3CIsMineU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * VoiceConnection_get_PrimaryRecorder_mB9BF2481C19705F873A4FAFEFD04E60A0D90538F_inline (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method)
{
	{
		// get => this.primaryRecorder;
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = __this->get_primaryRecorder_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonVoiceView_set_RecorderInUse_mD90369CC33EB2AE08696A4F3403476AAE0346A10_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * ___value0, const RuntimeMethod* method)
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t13D849D3581771415EF2D39F877106A1AC72C6C5 * L_0 = ___value0;
		__this->set_U3CRecorderInUseU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * VoiceConnection_get_SpeakerPrefab_m5EB0D60185F746C223CC611B43EAE677C61BCDD8_inline (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method)
{
	{
		// get => this.speakerPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_speakerPrefab_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonVoiceView_set_SpeakerInUse_mC05820A287B36934351CFCA04722681D87AA1D93_inline (PhotonVoiceView_t166ED98885509690B1E5C3AC9B08395E50EFF722 * __this, Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * ___value0, const RuntimeMethod* method)
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tDF067516E356439A1F51638A7725C56C1DF3EFEA * L_0 = ___value0;
		__this->set_U3CSpeakerInUseU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceConnection_get_UsePrimaryRecorder_m0DF947F0D1E1486F0938D65E8FC3AB892CF368D2_inline (VoiceConnection_t65A719BDA53623411E6DC2E6CC34B120E0EBA704 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePrimaryRecorder => this.usePrimaryRecorder;
		bool L_0 = __this->get_usePrimaryRecorder_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_DisconnectedCause_mADF0FB7F7EC7F241A9E96F60AA2B4260356701FF_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public DisconnectCause DisconnectedCause { get; protected set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * LoadBalancingClient_get_AuthValues_m6CFE88D5746FE66CF036F3BDEE97FD3F3B080947_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadBalancingClient_set_AuthValues_mCE973D6B02EC68339DA652AF8D42F85E4EDB5A21_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t7683D7F7269F8FEE35AC5B681CB5C74997ACF33A * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * LoadBalancingClient_get_CurrentRoom_m43837CB1E6A0BB52982A5795649FE77DD5768D73_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_0 = __this->get_U3CCurrentRoomU3Ek__BackingField_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * PhotonView_get_Owner_mF639C9E1BE7FB83ABC397658151CEF0317C517BF_inline (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method)
{
	{
		// public Player Owner { get; private set; }
		Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * L_0 = __this->get_U3COwnerU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * LoadBalancingClient_get_LoadBalancingPeer_m0338967A6F302B79366C3E8345EB89EAFACC0EC4_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t92DAE78E5D0178D632E055324F3D06C0018647F4 * L_0 = __this->get_U3CLoadBalancingPeerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mFA53FE244C2CBAD64709882193BA30826B8B69C5_inline (LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
