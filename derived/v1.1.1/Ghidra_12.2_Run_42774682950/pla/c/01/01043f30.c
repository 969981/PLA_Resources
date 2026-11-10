/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01043f30; name: FUN_01043f30
 */


void FUN_01043f30(code *param_1)

{
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  code *local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 local_70;
  
  FUN_0172d0e0();
  FUN_0170edb0(param_1);
  local_78 = (code *)&LAB_0177ad88;
  local_70 = 0;
  local_88 = param_1;
  FUN_017511c8(&local_88,"PresetCamera","GetPresetCameraParameter",&local_78);
  local_78 = (code *)&LAB_0177d2a8;
  local_70 = 0;
  local_88 = param_1;
  FUN_0175a864(&local_88,"PresetTransform","FindPresetParam",&local_78);
  local_88 = (code *)0x0;
  local_98 = (code *)0x10;
  local_b0 = (code *)0x14;
  local_78 = param_1;
  FUN_01763ec4(&local_78,"PresetTransformParam",&DAT_03933ed9,&local_88,&DAT_038e0136,&local_98,
               "valid",&local_b0);
  local_78 = (code *)&LAB_016b80e0;
  local_70 = 0;
  local_88 = (code *)&LAB_016b80e8;
  uStack_80 = 0;
  local_98 = param_1;
  FUN_015dd660(&local_98,"EventScriptObject","GetTargetID",&local_78,"IsSkip",&local_88);
  FUN_015ae3c0(param_1);
  FUN_015d42e0(param_1);
  FUN_01748610(param_1);
  local_d0 = (code *)0xa0;
  local_e0 = (code *)0xa4;
  local_f0 = (undefined1 *)0xa8;
  local_a0 = (code *)0xa9;
  local_78 = (code *)&LAB_01697d7c;
  local_70 = 0;
  local_88 = (code *)&LAB_01740274;
  uStack_80 = 0;
  local_b0 = (code *)0x58;
  local_c0 = (code *)0x78;
  local_98 = param_1;
  FUN_0173e2c4(&local_98,"NPCTalkData","commonData",&local_b0,"isRandomTalkMotion",&local_c0,
               "motionType",&local_d0,"motionIndex",&local_e0,"isAddOneAction",&local_f0,
               "isAddLoopAction",&local_a0,"CheckActivation",&local_78,"__haxe_export_GetFaceID",
               &local_88);
  local_98 = (code *)0x8;
  local_b0 = (code *)0xc;
  local_d0 = (code *)0x18;
  local_e0 = (code *)0x19;
  local_88 = (code *)0x0;
  local_c0 = (code *)0x10;
  local_78 = param_1;
  FUN_015f3ef0(&local_78,"NPCTalkCommonData","uniqueID",&local_88,"talkType",&local_98,&DAT_038ea8fd
               ,&local_b0,"messageID",&local_c0,"isRotationToPlayer",&local_d0,"isLookAtPlayer",
               &local_e0);
  local_c0 = (code *)0x7c;
  local_d0 = (code *)0x80;
  local_e0 = (code *)0x84;
  local_f0 = (undefined1 *)0x88;
  local_a0 = (code *)0x8c;
  local_98 = (code *)0x58;
  local_f8 = 0x90;
  local_100 = 0x94;
  local_108 = 0x95;
  local_110 = 0x96;
  local_b0 = (code *)0x78;
  local_78 = (code *)&LAB_016936b8;
  local_70 = 0;
  local_88 = param_1;
  FUN_015e585c(&local_88,"NPCPokemonTalkData","commonData",&local_98,"pokeVoice",&local_b0,
               "isBattleWait",&local_c0,"loopEmotion",&local_d0,"oneEmotion",&local_e0,"oneAttack",
               &local_f0,"loopAttack",&local_a0,"aerialMotion",&local_f8,"isDamageMotion",&local_100
               ,"isStunMotion",&local_108,"isDownMotion",&local_110,"CheckActivation",&local_78);
  local_88 = FUN_01669d90;
  FUN_01734cf8(&local_78,param_1 + 8,"EventTriggerCall","ExistPushedTriggerCommand_MapChange",
               &local_88);
  if ((local_78 != (code *)0x0) && ((int)local_70 != -2)) {
    FUN_00155150(local_78,0xfff0b9d8);
  }
  local_98 = (code *)0x1;
  local_88 = (code *)0x0;
  local_b0 = (code *)0x8;
  local_78 = param_1;
  FUN_01737974(&local_78,"ExistCommandResultForMapChange","result",&local_88,"noFadeIn",&local_98,
               "lockLayerName",&local_b0);
  FUN_015fb540(param_1);
  FUN_01773380(param_1);
  local_78 = FUN_016abc60;
  local_70 = 0;
  local_88 = FUN_016ac110;
  uStack_80 = 0;
  local_98 = param_1;
  FUN_0176a438(&local_98,"QuestList","SetProgress",&local_78,"GetProgress",&local_88);
  local_78 = FUN_01617470;
  local_70 = 0;
  local_88 = param_1;
  FUN_016ef900(&local_88,"EventListManager","FindEventData",&local_78);
  local_98 = (code *)0x60;
  local_b0 = (code *)0x61;
  local_c0 = (code *)0x62;
  local_d0 = (code *)0x63;
  local_e0 = (code *)0x64;
  local_f0 = (undefined1 *)0x68;
  local_a0 = (code *)0x6c;
  local_f8 = 0x6e;
  local_100 = 0x6f;
  local_108 = 0x70;
  local_110 = 0x71;
  local_78 = (code *)&LAB_016ef8f8;
  local_70 = 0;
  local_88 = param_1;
  FUN_016ed378(&local_88,"EventCommonData","useFade",&local_98,"isRide",&local_b0,"isSkip",&local_c0
               ,"isValid",&local_d0,"isFadeIn",&local_e0,"waitMotionType",&local_f0,"isDemoSound",
               &local_a0,"isResetPlayerLookAt",&local_f8,"itemFadeOut",&local_100,"statusReset",
               &local_108,"standUp",&local_110,"__haxe_export_GetFlag",&local_78);
  local_78 = FUN_0161663c;
  local_70 = 0;
  local_88 = (code *)&LAB_01616864;
  uStack_80 = 0;
  local_98 = (code *)&LAB_016e0460;
  uStack_90 = 0;
  local_b0 = (code *)&LAB_016e0470;
  uStack_a8 = 0;
  local_c0 = param_1;
  FUN_016df1ac(&local_c0,"EventItemOverflowManager","AddIboxOverflowItem",&local_78,
               "GetOverflowItem",&local_88,"GetItemNum",&local_98,"OverflowItemClear",&local_b0);
  local_88 = (code *)0x0;
  local_98 = (code *)0x4;
  local_78 = param_1;
  FUN_016de5e4(&local_78,"ItemOverflowInfo",&DAT_038cb993,&local_88,&DAT_03962433,&local_98);
  local_78 = FUN_01618d84;
  local_70 = 0;
  local_88 = (code *)&LAB_01618de8;
  uStack_80 = 0;
  local_b0 = FUN_01619af0;
  uStack_a8 = 0;
  local_98 = FUN_01619180;
  uStack_90 = 0;
  local_c0 = (code *)&LAB_0161a01c;
  uStack_b8 = 0;
  local_d0 = param_1;
  FUN_016fee60(&local_d0,"EventPokePassShowManager","GetPassShowPokeInfo",&local_78,
               "__haxe_export_NpcPokeCreate",&local_88,"NpcPokeRelease",&local_98,"NpcPokeIsRelease"
               ,&local_b0,"NickNameSet",&local_c0);
  local_78 = (code *)&LAB_016fee1c;
  local_70 = 0;
  local_88 = (code *)&LAB_016fee24;
  uStack_80 = 0;
  local_98 = (code *)&LAB_016fee40;
  uStack_90 = 0;
  local_c0 = (code *)&LAB_016fee50;
  uStack_b8 = 0;
  local_b0 = (code *)&LAB_016fee48;
  uStack_a8 = 0;
  local_d0 = (code *)&LAB_016fee58;
  uStack_c8 = 0;
  local_e0 = param_1;
  FUN_016fd698(&local_e0,"PassShowPokeInfo","__haxe_export_GetMonsNo",&local_78,
               "__haxe_export_GetFormNo",&local_88,"__haxe_export_GetSex",&local_98,
               "__haxe_export_GetTalentHeight",&local_b0,"__haxe_export_IsRare",&local_c0,
               "__haxe_export_IsOybn",&local_d0);
  local_78 = FUN_01662d20;
  local_70 = 0;
  local_88 = (code *)&LAB_016641b0;
  uStack_80 = 0;
  local_98 = (code *)&LAB_016648c4;
  uStack_90 = 0;
  local_b0 = param_1;
  FUN_017260d4(&local_b0,"EventRanchManager","RandomPokeSelect",&local_78,"IsRelease",&local_88,
               "ReleasePoke",&local_98);
  local_78 = (code *)&LAB_01613ae8;
  local_70 = 0;
  local_88 = (code *)&LAB_01613e4c;
  uStack_80 = 0;
  local_b0 = (code *)&LAB_016142a4;
  uStack_a8 = 0;
  local_c0 = (code *)&LAB_01614310;
  uStack_b8 = 0;
  local_e0 = (code *)&LAB_016143cc;
  uStack_d8 = 0;
  local_98 = (code *)&LAB_0161425c;
  uStack_90 = 0;
  local_f0 = &LAB_01614474;
  uStack_e8 = 0;
  local_d0 = (code *)&LAB_01614368;
  uStack_c8 = 0;
  local_a0 = param_1;
  FUN_016c54d0(&local_a0,"EventGinkgoManager","IsActivation",&local_78,"GetProductInfo",&local_88,
               "GetProductNum",&local_98,"GetProductName",&local_b0,"GetPrice",&local_c0,
               "GetBuyFlag",&local_d0,"GetItemInfo",&local_e0,"GetItemListNum",&local_f0);
  local_88 = (code *)0x0;
  local_98 = (code *)0x4;
  local_78 = param_1;
  FUN_016c4798(&local_78,"GinkgoItemInfo","itemId",&local_88,"itemNum",&local_98);
  local_88 = (code *)0x0;
  local_98 = (code *)0x8;
  local_78 = param_1;
  FUN_016c3a60(&local_78,"GinkgoProductInfo","productHash",&local_88,"weight",&local_98);
  local_88 = FUN_0165afd8;
  local_78 = param_1;
  FUN_015a5d38(&local_78,"FieldUtility","IsCreateCompletedFieldObject",&local_88);
  local_78 = FUN_0165fc7c;
  local_70 = 0;
  local_88 = (code *)&LAB_0165fdd8;
  uStack_80 = 0;
  local_98 = (code *)&LAB_0165fe04;
  uStack_90 = 0;
  local_b0 = param_1;
  FUN_0171f468(&local_b0,"EventProgressTimeManager","Start",&local_78,"Reset",&local_88,
               "GetProgressTimeSecond",&local_98);
  return;
}


