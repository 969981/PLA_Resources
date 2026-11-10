/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010431e0; name: FUN_010431e0
 */


void FUN_010431e0(code *param_1)

{
  code *local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_98;
  code *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 uStack_78;
  code *local_70 [2];
  
  local_80 = (code *)&LAB_01043f1c;
  uStack_78 = 0;
  local_90 = param_1;
  FUN_00ed17c4(&local_90,"Uint64",&DAT_038ca815,&DAT_03a78878,"Equals",&local_80);
  local_90 = (code *)&LAB_01085cd8;
  local_a0 = (code *)&LAB_01085cf4;
  local_b0 = (code *)&LAB_01085d08;
  local_c0 = (code *)&LAB_01085d2c;
  local_d0 = (code *)&LAB_01085d50;
  local_80 = param_1;
  FUN_00ec79e0(&local_80,"Utility","clamp",&local_90,"clampInt",&local_a0,"RadianToDegree",&local_b0
               ,"DegreeToRadian",&local_c0,"GetFloatEpsilon",&local_d0);
  FUN_00ed98e0(param_1);
  FUN_00eb4280(param_1);
  FUN_00f11df0(param_1);
  local_90 = (code *)&LAB_00e944d4;
  local_a0 = (code *)&LAB_00e946c0;
  local_b0 = (code *)&LAB_00e94764;
  local_c0 = (code *)&LAB_00e947f8;
  local_d0 = (code *)&LAB_00e94ab8;
  local_e0 = (code *)&LAB_00e94cb0;
  local_f0 = &LAB_00e94e90;
  local_100 = &LAB_00e9510c;
  local_110 = (code *)&LAB_00e95110;
  local_80 = param_1;
  FUN_00f25170(&local_80,"SoundCommand","PostEvent",&local_90,"IsPlaying",&local_a0,&DAT_039b3942,
               &local_b0,"SetSwitch",&local_c0,"SetRTPC",&local_d0,"PostTrigger",&local_e0,
               "SetState",&local_f0,"PlayPokeVoice",&local_100,"PlayPokeVoice2d",&local_110);
  FUN_00e080c0(param_1);
  local_a0 = (code *)0x4;
  local_90 = (code *)0x0;
  local_b0 = (code *)0x8;
  local_80 = param_1;
  FUN_00e070fc(&local_80,"NsRematchDispResult","minute",&local_90,"second",&local_a0,"milli",
               &local_b0);
  FUN_00e95120(param_1);
  FUN_00f51a60(param_1);
  FUN_00def410(param_1);
  FUN_00ea9710(param_1);
  FUN_00e62390(param_1);
  FUN_00de4c20(param_1);
  local_80 = FUN_010da868;
  uStack_78 = 0;
  local_90 = FUN_010daa64;
  uStack_88 = 0;
  local_a0 = FUN_010db1d8;
  uStack_98 = 0;
  local_c0 = FUN_010db41c;
  uStack_b8 = 0;
  local_b0 = FUN_010db350;
  uStack_a8 = 0;
  local_d0 = FUN_010db560;
  uStack_c8 = 0;
  local_e0 = param_1;
  FUN_00dcd2a4(&local_e0,&DAT_039b3c66,"GetItemNum",&local_80,"HaveNeverAdded",&local_90,"AddItem",
               &local_a0,"AddItemToLimit",&local_b0,"IsAddItem",&local_c0,"SubItem",&local_d0);
  local_80 = FUN_0111e624;
  uStack_78 = 0;
  local_90 = FUN_0111d778;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00f42148(&local_a0,"MyItem",&DAT_039b4184,&local_80,"GetItemNum",&local_90);
  FUN_00e4faf0(param_1);
  FUN_0217e7b0(param_1);
  local_80 = FUN_02582a00;
  uStack_78 = 0;
  local_90 = (code *)&LAB_02582d10;
  uStack_88 = 0;
  local_a0 = FUN_02583190;
  uStack_98 = 0;
  local_c0 = FUN_025837e8;
  uStack_b8 = 0;
  local_b0 = (code *)&LAB_025836c0;
  uStack_a8 = 0;
  local_d0 = (code *)&LAB_02583808;
  uStack_c8 = 0;
  local_e0 = param_1;
  FUN_02117bc0(&local_e0,"FieldContextMenu","SetContextMenuItem",&local_80,
               "__haxe_export_SetContextMenuItemExternalResource",&local_90,"ShowContextMenu",
               &local_a0,"CloseContextMenu",&local_b0,"GetContextMenuResult",&local_c0,
               "IsEndContextMenu",&local_d0);
  FUN_02175c50(param_1);
  local_80 = FUN_00b1e19c;
  uStack_78 = 0;
  local_90 = (code *)&LAB_00b1e25c;
  uStack_88 = 0;
  local_b0 = (code *)&LAB_00b1e4ec;
  uStack_a8 = 0;
  local_a0 = (code *)&LAB_00b1e3bc;
  uStack_98 = 0;
  local_c0 = (code *)&LAB_00b1e57c;
  uStack_b8 = 0;
  local_d0 = param_1;
  FUN_00b3f374(&local_d0,"DressUpData","GetAppendDataCount",&local_80,
               "GetPartsNameByApeendLocalDataIndex",&local_90,"GetDataIndexByName",&local_a0,
               "GetNameByDataIndex",&local_b0,"GetApeendLocalDataIndexByDataIndex",&local_c0);
  FUN_00b49940(param_1);
  FUN_01591f10(param_1);
  FUN_027e05c0(param_1);
  local_c0 = (code *)0xc;
  local_d0 = (code *)0x10;
  local_90 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_80 = param_1;
  FUN_027df14c(&local_80,"PokedexUpdateInfo","researchPointAfterUpdate",&local_90,
               "remainResearchPointBeforeUpdate",&local_a0,"remainResearchPointAfterUpdate",
               &local_b0,"researchPointRateAfterUpdate",&local_c0,"progressPokeNum",&local_d0);
  local_80 = FUN_013d056c;
  uStack_78 = 0;
  local_90 = FUN_013d0968;
  uStack_88 = 0;
  local_a0 = FUN_013d08e0;
  uStack_98 = 0;
  local_b0 = (code *)&LAB_013d0a08;
  uStack_a8 = 0;
  local_c0 = param_1;
  FUN_012bae04(&local_c0,"ProcOneShot","ShowRequest",&local_80,"CloseRequest",&local_90,"IsClosed",
               &local_a0,"IsAnimation",&local_b0);
  FUN_012dc020(param_1);
  local_90 = (code *)0x0;
  local_80 = param_1;
  FUN_00e7a534(&local_80,&DAT_038a3bc2,"notify",&local_90);
  local_90 = (code *)&LAB_014e5a7c;
  local_80 = param_1;
  FUN_00e7b008(&local_80,"EventURankUp","CallEvent",&local_90);
  local_90 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_80 = param_1;
  FUN_00f30d14(&local_80,&DAT_038a3bc2,"notify",&local_90,&DAT_039a01c1,&local_a0,"questId",
               &local_b0);
  local_90 = FUN_0138250c;
  local_80 = param_1;
  FUN_00f31cb4(&local_80,"EventMssnNotify","CallEvent",&local_90);
  local_90 = FUN_014a8208;
  local_80 = param_1;
  FUN_00e727cc(&local_80,"EventShowTip","CallEvent",&local_90);
  local_80 = FUN_011171a4;
  uStack_78 = 0;
  local_90 = (code *)&LAB_011171ac;
  uStack_88 = 0;
  local_a0 = FUN_011171c8;
  uStack_98 = 0;
  local_b0 = FUN_011171f4;
  uStack_a8 = 0;
  local_c0 = param_1;
  FUN_00e23be4(&local_c0,&DAT_038a3adc,"GetGold",&local_80,"SetGold",&local_90,"AddGold",&local_a0,
               "SubGold",&local_b0);
  local_80 = FUN_0111b748;
  uStack_78 = 0;
  local_90 = FUN_0111b7c0;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00e2d2b4(&local_a0,"MyDressup","SetPartsHash",&local_80,"GetPartsHash",&local_90);
  local_80 = FUN_01123ce8;
  uStack_78 = 0;
  local_90 = param_1;
  FUN_00e36784(&local_90,"MyStatus","GetSex",&local_80);
  local_80 = (code *)&LAB_00f49ff0;
  uStack_78 = 0;
  local_90 = (code *)&LAB_00f49ff8;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00f48e34(&local_a0,"SimpleParam","__haxe_export_GetMonsNo",&local_80,"__haxe_export_GetFormNo"
               ,&local_90);
  local_90 = (code *)0x0;
  local_80 = param_1;
  FUN_011fbcfc(&local_80,"BoxParam","callMode",&local_90);
  local_90 = (code *)0x0;
  local_80 = param_1;
  FUN_0116b9b4(&local_80,"Param","callMode",&local_90);
  local_90 = FUN_0115c8fc;
  local_80 = param_1;
  FUN_01163884(&local_80,"EventAdvresult","CallEvent",&local_90);
  local_80 = FUN_010d7334;
  uStack_78 = 0;
  local_90 = (code *)&LAB_010d7344;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00dc45ec(&local_a0,"Advresult","IsPokemon",&local_80,"GetPokemonCount",&local_90);
  local_90 = (code *)0x0;
  local_80 = param_1;
  FUN_012e6dd0(&local_80,"Param","callMode",&local_90);
  local_80 = (code *)&LAB_010f101c;
  uStack_78 = 0;
  local_90 = (code *)&LAB_010f1080;
  uStack_88 = 0;
  local_a0 = param_1;
  FUN_00dd7954(&local_a0,"EventRandomSeedSave","GetRandom",&local_80,"RandomSeedInit",&local_90);
  local_80 = (code *)&LAB_00e5d184;
  uStack_78 = 0;
  local_90 = param_1;
  FUN_00e5c270(&local_90,"Random","__haxe_export_GetRand",&local_80);
  local_80 = FUN_0192c050;
  uStack_78 = 0;
  local_a0 = (code *)&LAB_0192c094;
  uStack_98 = 0;
  local_b0 = (code *)&LAB_0192c0b4;
  uStack_a8 = 0;
  local_d0 = FUN_0192c0d0;
  uStack_c8 = 0;
  local_e0 = FUN_0192c0d8;
  uStack_d8 = 0;
  local_90 = FUN_0192c058;
  uStack_88 = 0;
  local_100 = &LAB_0192c14c;
  uStack_f8 = 0;
  local_c0 = FUN_0192c0c8;
  uStack_b8 = 0;
  local_110 = FUN_0192c178;
  uStack_108 = 0;
  local_f0 = &LAB_0192c118;
  uStack_e8 = 0;
  local_70[0] = param_1;
  FUN_0225cb04(local_70,"FieldPostEffect","RequestRadialBlur",&local_80,"StopRadialBlur",&local_90,
               "GetRadialBlurParam",&local_a0,"GetRadialBlurCurrentParam",&local_b0,
               "IsEasingRadialBlur",&local_c0,"RequestFeedbackEffect",&local_d0,"StopFeedbackEffect"
               ,&local_e0,"GetFeedbackEffectParam",&local_f0,"GetFeedbackEffectCurrentParam",
               &local_100,"IsEasingFeedbackEffect",&local_110);
  local_90 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_c0 = (code *)0xc;
  local_d0 = (code *)0x10;
  local_80 = param_1;
  FUN_02270bd0(&local_80,"RadialBlurParam","enable",&local_90,&DAT_03977319,&local_a0,&DAT_038bde25,
               &local_b0,"strength",&local_c0,"radius",&local_d0);
  local_e0 = (code *)0x14;
  local_f0 = (undefined1 *)0x18;
  local_100 = (undefined1 *)0x1c;
  local_90 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_c0 = (code *)0xc;
  local_d0 = (code *)0x10;
  local_80 = param_1;
  FUN_0227203c(&local_80,"FeedbackEffectParam","enable",&local_90,"blendWeight",&local_a0,"rotation"
               ,&local_b0,"scale",&local_c0,&DAT_039b6c37,&local_d0,"saturation",&local_e0,
               "brightness",&local_f0,"contrast",&local_100);
  FUN_012aa980(param_1);
  FUN_012d42a0(param_1);
  FUN_012c3ba0(param_1);
  FUN_012b2720(param_1);
  FUN_0159d1c0(param_1);
  FUN_012a2c30(param_1);
  FUN_012cc130(param_1);
  FUN_00dfdd60(param_1);
  local_90 = FUN_00dac4e4;
  local_a0 = FUN_00dac5ac;
  local_80 = param_1;
  FUN_00e47a54(&local_80,"PlayReportEventRecord","SetValue",&local_90,"AddValue",&local_a0);
  FUN_00e3ee30(param_1);
  return;
}


