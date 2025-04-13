// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2021.2.0+

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;

DO_APP_FUNC(0x0088C600, void, GameFrameWork_Update, (void/*GameFrameWork*/* __this, MethodInfo* method));

DO_APP_FUNC(0x033A5DD0, String*, Marshal_PtrToStringAnsi, (void* ptr, MethodInfo* method));
DO_APP_FUNC(0x033A5DF0, String*, Marshal_PtrToStringUni, (void* ptr, MethodInfo* method));

// FovChanger
DO_APP_FUNC(0x044C1E90, void, Camera_set_fieldOfView, (void* __this, float value, MethodInfo* method));

// C# methods
DO_APP_FUNC(0x034E3620, Type*, Type_GetType_3, (String* typeName, MethodInfo* method));
DO_APP_FUNC(0x033B9E10, Type*, Assembly_GetType, (Assembly* __this, String* name, MethodInfo* method));
DO_APP_FUNC(0x033BA330, Assembly*, Assembly_LoadWithPartialName, (String* partialName, MethodInfo* method));
// Unity methods
DO_APP_FUNC(0x044BAD20, int32_t, Application_get_targetFrameRate, (MethodInfo* method));
DO_APP_FUNC(0x044BB440, void, Application_set_targetFrameRate, (int32_t value, MethodInfo* method));
DO_APP_FUNC(0x0451BA60, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo* method));
DO_APP_FUNC(0x0451B800, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo* method));
DO_APP_FUNC(0x04506710, Transform*, GameObject_get_transform, (GameObject* __this, MethodInfo* method));
DO_APP_FUNC(0x045056C0, GameObject*, GameObject_Find, (String* name, MethodInfo* method));
DO_APP_FUNC(0x0450B360, String*, Object_1_get_name, (Object_1* __this, MethodInfo* method));
DO_APP_FUNC(0x045137E0, void, Time_4_set_timeScale, (float value, MethodInfo* method));
DO_APP_FUNC(0x04517AF0, Vector3, Transform_get_position, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x045186D0, void, Transform_set_position, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x04517B40, Vector3, Transform_get_right, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x04518720, void, Transform_set_right, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x04517E10, Vector3, Transform_get_up, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x045188A0, void, Transform_set_up, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x04517360, Vector3, Transform_get_forward, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x045181F0, void, Transform_set_forward, (Transform* __this, Vector3 value, MethodInfo* method));
DO_APP_FUNC(0x04517200, int32_t, Transform_get_childCount, (Transform* __this, MethodInfo* method));
DO_APP_FUNC(0x04531B70, String*, Scene_GetNameInternal, (int32_t sceneHandle, MethodInfo* method));
DO_APP_FUNC(0x04530540, Scene, SceneManager_GetActiveScene, (MethodInfo* method));

// No Cooldown
DO_APP_FUNC(0x01023B40, void/*KAAIFMKPKAG*/*, KAAIFMKPKAG_IOFMGMJCCFO, (KAAIFMKPKAG* __this, bool DEJNILEHENL, MethodInfo* method));
// Damage Hack
DO_APP_FUNC(0x00FD5A50, void, PIPHNBOBFEF_KBCIIEFLPGB, (PIPHNBOBFEF* __this, ESpecialState__Enum OCKAHFDGNEL, int64_t MGFPJFANLBG, int64_t DIACKALMMKH, int64_t PBAPBJGDAPJ, String* DLOACPLHGMP, MethodInfo* method));
// God Mode
DO_APP_FUNC(0x01564430, int32_t, GHINOEFFMPN_EKHGIHBHEPL, (SkillIdentity* EKPKPIJBPKE, void/*IEnumerable_1_UnityEngine_Component_*/* FKJDKGJBGOD, TargetHitData* COFCDKGCOGJ, MethodInfo* method));
// Dumb Enemies
DO_APP_FUNC(0x01607140, void, EvadeProxy_Init, (EvadeProxy* __this, ENNEJEPMJLJ* IGBKKNODEGM, EvadePenetration* DHPMEMDBDMC, MethodInfo* method));

// EntityManager
DO_APP_FUNC(0x01027C00, void, ENHPKNIEKMI_MIFDFEHDDDD, (ENHPKNIEKMI* __this, MethodInfo* method));
DO_APP_FUNC(0x00C200B0, ENHPKNIEKMI*, ENNEJEPMJLJ_FIGHFBNIDJA, (ENNEJEPMJLJ* __this, MethodInfo* method));
DO_APP_FUNC(0x015B7CF0, bool, PCILGJOEPJM_PPAKPBOJLIP, (ENNEJEPMJLJ* IGBKKNODEGM, MethodInfo* method)); // Check if Entity is alive????

// Mission Time
DO_APP_FUNC(0x00AA51C0, void, StageReadyPage_EnterUI, (StageReadyPage* __this, MethodInfo* method));
DO_APP_FUNC(0x00AAECC0, void, StoryQuestChapterPage_EnterUI, (StoryQuestChapterPage* __this, MethodInfo* method));
// Intro Movie
DO_APP_FUNC(0x0054E750, void, IntroMovie_Update, (IntroMovie* __this, MethodInfo* method));
// Disable Web View
DO_APP_FUNC(0x03672FE0, void, WebViewDialog_Show, (void* __this, MethodInfo* method));
DO_APP_FUNC(0x03688DA0, void, WebViewUI_RefreshSize, (void* __this, MethodInfo* method));

//DO_APP_FUNC(0x00430040, EGLGAPIAANF__Enum, JIBDAHKJHOG_PCLINKFFGNE, (JIBDAHKJHOG* __this, MethodInfo* method));
//DO_APP_FUNC(0x00837FE0, void, JIBDAHKJHOG_KPDGECAFJKA, (JIBDAHKJHOG* __this, MethodInfo* method));
//DO_APP_FUNC(0x00837510, void, JIBDAHKJHOG_HLLNLMAECBD, (JIBDAHKJHOG* __this, void* JONOLJGMLBE, void* BHMPNNCBFGN, MethodInfo* method)); // EnterBattleReq
//DO_APP_FUNC(0x00836650, void, JIBDAHKJHOG_EJLDBPGJGPN, (JIBDAHKJHOG* __this, MethodInfo* method)); // NextStageBattle
//DO_APP_FUNC(0x00836410, void, JIBDAHKJHOG_COLDHPFDOHG, (JIBDAHKJHOG* __this, MethodInfo* method)); // StageStart

// Shadow Cooldown And Limit
DO_APP_FUNC(0x015E31D0, void, JLLMICINIDA_LFCGJLAFFOM, (JLLMICINIDA* __this, MethodInfo* method));

// Singletons
// DO_APP_FUNC(0x00384E60, void*, TSingleton_GetInstance, (MethodInfo* method)); // Search for this in IDA. Seems to be Singleton<T> class
DO_APP_FUNC(0x004A6C80, Object*, TSingleton_1_System_Object__get_Instance, (MethodInfo* method)); // Get the instance of the singleton
// DO_APP_FUNC_METHODINFO(0x04038380, TSingleton_1_JIBDAHKJHOG__get_Instance__MethodInfo);
// DO_APP_FUNC_METHODINFO(0x0403AC70, TSingleton_1_PJKMAOEINNH__get_Instance__MethodInfo); // Probably EntityManager or something similar