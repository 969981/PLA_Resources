/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01044920; name: FUN_01044920
 */


void FUN_01044920(code *param_1)

{
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  code *local_f0;
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
  code *local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  
  local_78 = (code *)&LAB_0256ab40;
  uStack_70 = 0;
  local_88 = FUN_0256f91c;
  uStack_80 = 0;
  local_a0 = (code *)&LAB_0256fcf8;
  uStack_98 = 0;
  local_b0 = FUN_025700e4;
  uStack_a8 = 0;
  local_c0 = param_1;
  FUN_02533f78(&local_c0,"TerrainManager","WaitLoadTerrainFirst",&local_78,"SetDetailDistanceNear",
               &local_88,"ResetDetailDistanceNear",&local_a0,"SetTerrainFrustumCullingEnable",
               &local_b0);
  local_78 = FUN_01839e08;
  uStack_70 = 0;
  local_88 = FUN_01839f2c;
  uStack_80 = 0;
  local_a0 = FUN_0183d4c8;
  uStack_98 = 0;
  local_b0 = param_1;
  FUN_021ad980(&local_b0,"FieldObjectComponent","IsLoaded",&local_78,"IsLoading",&local_88,
               "UpdateGameObjectPos",&local_a0);
  FUN_020ca380(param_1);
  FUN_021ecb20(param_1);
  FUN_022128b0(param_1);
  FUN_02348350(param_1);
  local_78 = param_1;
  FUN_0219ef60(&local_78,"NpcControllerComponent",&DAT_03a7d388,&local_88);
  FUN_0235f5a0(param_1);
  FUN_020d9cd0(param_1);
  FUN_020b1670(param_1);
  local_78 = FUN_01827904;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_02012884(&local_88,"CharacterRotationController",&DAT_03a7d2c0,&local_a0,
               "CancelDesiredDirection",&local_78);
  FUN_02513060(param_1);
  local_78 = FUN_01831870;
  uStack_70 = 0;
  local_a0 = FUN_01832100;
  uStack_98 = 0;
  local_d0 = (code *)0x10;
  local_e0 = (code *)0x20;
  local_f0 = (code *)0x24;
  local_100 = (undefined1 *)0x28;
  local_90 = (code *)0x2c;
  local_88 = FUN_01831d04;
  uStack_80 = 0;
  local_108 = 0x30;
  local_c0 = (code *)0x0;
  local_b0 = param_1;
  FUN_01fe2674(&local_b0,"CameraParameter","ToWorldCoordinate",&local_78,"ToOffsetCoordinate",
               &local_88,"ConvertOffsetCoordinate",&local_a0,"lookAtPos",&local_c0,"cameraPos",
               &local_d0,&DAT_0397610a,&local_e0,"pitch",&local_f0,&DAT_039587d5,&local_100,
               &DAT_038c36ce,&local_90,"isWorldCoordinate",&local_108);
  local_a0 = (code *)0x40;
  local_b0 = (code *)0xc0;
  local_c0 = (code *)0xc4;
  local_d0 = (code *)0xc8;
  local_e0 = (code *)0xcc;
  local_88 = (code *)0x0;
  local_78 = param_1;
  FUN_01fe472c(&local_78,"CameraInterpolationParameter","start",&local_88,&DAT_039a7d21,&local_a0,
               &DAT_039a01c1,&local_b0,"addRate",&local_c0,"frame",&local_d0,&DAT_03962b86,&local_e0
              );
  FUN_020a3ce0(param_1);
  FUN_0228c070(param_1);
  FUN_02099950(param_1);
  FUN_01fd0eb0(param_1);
  local_78 = (code *)&LAB_02293d14;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_02292e00(&local_88,"FieldScriptObject","__haxe_export_Dummy",&local_78);
  local_78 = (code *)&LAB_01ab563c;
  uStack_70 = 0;
  local_88 = FUN_01ab566c;
  uStack_80 = 0;
  local_a0 = param_1;
  FUN_02152e98(&local_a0,"FieldHearingTargetComponent","PlayAdd",&local_78,&DAT_039b3942,&local_88);
  FUN_02158e70(param_1);
  FUN_0210f840(param_1);
  local_78 = (code *)0x30;
  uStack_70 = 1;
  local_88 = (code *)0x38;
  uStack_80 = 1;
  local_a0 = (code *)0x40;
  uStack_98 = 1;
  local_b0 = param_1;
  FUN_023578a0(&local_b0,"IPlayerInputInfoHandler","IsEnable",&local_78,"IsUpdateJobExist",&local_88
               ,"ClearBuffer",&local_a0);
  local_78 = (code *)&LAB_02605408;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_02350290(&local_88,"PlayerInputInfoHandler",&DAT_03a7d4c8,&local_a0,"SetEnable",&local_78);
  local_78 = (code *)&LAB_017ee9f8;
  uStack_70 = 0;
  local_88 = (code *)&LAB_017eea54;
  uStack_80 = 0;
  local_a0 = param_1;
  FUN_01fc8250(&local_a0,"CameraInputInfoHandler","SetEnable",&local_78,"IsEnable",&local_88);
  FUN_02050ca0(param_1);
  FUN_02285130(param_1);
  FUN_0227d780(param_1);
  local_b0 = (code *)&LAB_018b45fc;
  local_c0 = (code *)&LAB_018b46a4;
  local_d0 = (code *)&LAB_018b4730;
  local_e0 = (code *)&LAB_018b47d8;
  local_78 = (code *)&LAB_01fb2a7c;
  uStack_70 = 0;
  local_88 = (code *)&LAB_018ba3f8;
  uStack_80 = 0;
  local_a0 = param_1;
  FUN_01fb0ec8(&local_a0,"AreaSettingData","__haxe_export_GetAreaNameByIndex",&local_b0,
               "GetAreaCount",&local_c0,"__haxe_export_GetDoorName",&local_d0,"GetDoorCount",
               &local_e0,"__haxe_export_GetAreaName",&local_78,"__haxe_export_GetParentAreaName",
               &local_88);
  FUN_02327d00(param_1);
  FUN_020479e0(param_1);
  FUN_02222cc0(param_1);
  FUN_021b5fc0(param_1);
  FUN_02121ac0(param_1);
  local_78 = FUN_01bde2e8;
  uStack_70 = 0;
  local_88 = FUN_01bde330;
  uStack_80 = 0;
  local_a0 = FUN_01bde340;
  uStack_98 = 0;
  local_c0 = (code *)&LAB_01bde5d4;
  uStack_b8 = 0;
  local_d0 = FUN_01bde5e4;
  uStack_c8 = 0;
  local_b0 = FUN_01bde3b8;
  uStack_a8 = 0;
  local_f0 = FUN_01be12e4;
  uStack_e8 = 0;
  local_e0 = (code *)&LAB_01bde5f4;
  uStack_d8 = 0;
  local_100 = &LAB_01be153c;
  uStack_f8 = 0;
  local_90 = param_1;
  FUN_02309eb0(&local_90,"NpcAnimationController",&DAT_03a7d488,&local_108,"PlayLoopActionAddMotion"
               ,&local_78,"EndLoopActionAddMotion",&local_88,"PlayOneActionAddMotion",&local_a0,
               "PlayMotion",&local_b0,"PlayUniqueLoopActionMotion",&local_c0,"EndLoopActionMotion",
               &local_d0,"EndUniqueLoopActionMotion",&local_e0,"ResetAddIdlingMotion",&local_f0,
               "CancelMotionTalkOneAction",&local_100);
  FUN_02391470(param_1);
  FUN_0218eb00(param_1);
  FUN_021df070(param_1);
  FUN_02402090(param_1);
  FUN_024eaf60(param_1);
  local_a0 = (code *)0x4;
  local_88 = (code *)0x0;
  local_b0 = (code *)0x8;
  local_78 = param_1;
  FUN_023d7fcc(&local_78,"ChangeWhooguruSettingParam","canChangeHeight",&local_88,
               "forwardCheckLength",&local_a0,"forwardCheckHight",&local_b0);
  local_a0 = (code *)0xc;
  local_88 = (code *)0x0;
  local_b0 = (code *)0x14;
  local_78 = param_1;
  FUN_023d9c98(&local_78,"ChangeSettingParam","whooguru",&local_88,"nyuura",&local_a0,"basurao",
               &local_b0);
  local_78 = (code *)&LAB_023db9c8;
  uStack_70 = 0;
  local_a0 = (code *)&LAB_023db9d0;
  local_88 = param_1;
  FUN_023dac38(&local_88,"ChangeSetting","GetSetting",&local_78,"__haxe_export_GetInstance",
               &local_a0);
  local_78 = (code *)&LAB_024a33c4;
  uStack_70 = 0;
  local_a0 = (code *)&LAB_024a33cc;
  local_88 = param_1;
  FUN_024a2630(&local_88,"Setting","GetSetting",&local_78,"__haxe_export_GetInstance",&local_a0);
  local_a0 = (code *)0x80;
  local_b0 = (code *)0x90;
  local_c0 = (code *)0x170;
  local_88 = (code *)0x0;
  local_78 = param_1;
  FUN_024a1408(&local_78,"SettingParam","ringuma",&local_88,"whooguru",&local_a0,"nyuura",&local_b0,
               "common",&local_c0);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_78 = param_1;
  FUN_02498d1c(&local_78,"CameraaInterpolationParam","easeFunc",&local_88,"frame",&local_a0,
               "orbitRate",&local_b0);
  local_88 = (code *)0x0;
  local_a0 = (code *)0xc;
  local_b0 = (code *)0x18;
  local_78 = param_1;
  FUN_024a0468(&local_78,"CommonSettingParam","startCamaeraInterpolation",&local_88,
               "endCamaeraInterpolation",&local_a0,"airRideChangeSpeedRate",&local_b0);
  local_88 = (code *)0x0;
  local_78 = param_1;
  FUN_0249f9a0(&local_78,"WhooguruSettingParam","startCamaeraInterpolation",&local_88);
  FUN_02499cc0(param_1);
  FUN_0249cb80(param_1);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_78 = param_1;
  FUN_023d8f6c(&local_78,"ChangeNyuuraSettingParam","oshikomiCheckFrame",&local_88,
               "isSeamlessOdoshishiChange",&local_a0);
  local_78 = (code *)&LAB_0245ea58;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_0245db34(&local_88,"RidePokemonControllerComponent",&DAT_03a7d580,&local_a0,"Dummy",&local_78)
  ;
  FUN_024114e0(param_1);
  FUN_024f4f60(param_1);
  FUN_02437cf0(param_1);
  local_78 = param_1;
  FUN_0222a770(&local_78,"FieldPokemonComponent",&DAT_03a7d3d8,&local_88);
  FUN_02081910(param_1);
  local_c0 = (code *)0x24;
  local_e0 = (code *)0x2c;
  local_100 = (undefined1 *)0x34;
  local_90 = (code *)0x38;
  local_88 = (code *)0x0;
  local_108 = 0x3c;
  local_110 = 0x40;
  local_118 = 0x44;
  local_120 = 0x48;
  local_128 = 0x4c;
  local_130 = 0x50;
  local_138 = 0x54;
  local_f0 = (code *)0x30;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x20;
  local_d0 = (code *)0x28;
  local_78 = param_1;
  FUN_01788a54(&local_78,"SearchBallOutPointDescription","ballHitPos",&local_88,"hitTargetPos",
               &local_a0,"ballOutStateType",&local_b0,"targetWidth",&local_c0,"baseDistance",
               &local_d0,"checkDistance",&local_e0,"checkCount",&local_f0,"divisionCount",&local_100
               ,"checkRangeUpper",&local_90,"checkRangeLower",&local_108,"playerToBuddyDistanceRate"
               ,&local_110,"checkStartAngleMin",&local_118,"checkStartAngleMax",&local_120,
               "isBehindCheck",&local_128,"behindPlayerNgAngle",&local_130,"behindPlayerGeta",
               &local_138);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x20;
  local_78 = param_1;
  FUN_0178b97c(&local_78,"SearchBallOutPointResult","isHit",&local_88,&DAT_03933ed9,&local_a0,
               "isSwimming",&local_b0);
  FUN_017b1500(param_1);
  FUN_0179d630(param_1);
  FUN_02254670(param_1);
  local_78 = (code *)&LAB_026419bc;
  uStack_70 = 0;
  local_88 = (code *)&LAB_026419c4;
  uStack_80 = 0;
  local_a0 = (code *)&LAB_026419d0;
  uStack_98 = 0;
  local_b0 = param_1;
  FUN_023cf978(&local_b0,"RideChangeObserverComponent","DisableWhooguru",&local_78,
               "ShowNyuuraKabeInfoRequest",&local_88,"ShowNyuuraDownStartInfoRequest",&local_a0);
  FUN_02465a10(param_1);
  FUN_02476000(param_1);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0xc;
  local_78 = param_1;
  FUN_0248391c(&local_78,"SearchResult","state",&local_88,"isQuest",&local_a0,"distanceRate",
               &local_b0);
  FUN_02167b10(param_1);
  FUN_021a4c50(param_1);
  FUN_022b6a20(param_1);
  FUN_0232dab0(param_1);
  local_78 = (code *)0x140;
  uStack_70 = 1;
  local_88 = (code *)0x148;
  uStack_80 = 1;
  local_a0 = (code *)0x150;
  uStack_98 = 1;
  local_b0 = param_1;
  FUN_022ad82c(&local_b0,"FieldWildPokemonComponent",&DAT_03a7d440,&local_c0,"StartWildPokemonAi",
               &local_78,"IsWildPokemonAiStarted",&local_88,"AbortWildPokemonAi",&local_a0);
  FUN_02078c60(param_1);
  local_d0 = (code *)0x1c;
  local_88 = (code *)0x0;
  local_a0 = (code *)0x8;
  local_b0 = (code *)0x10;
  local_c0 = (code *)0x18;
  local_78 = param_1;
  FUN_0201ab20(&local_78,"BattleStartDescription","pPlayerController",&local_88,
               "pBuddyPokemonController",&local_a0,"pTargetPokemonController",&local_b0,
               "battleStartPattern",&local_c0,"battleStartType",&local_d0);
  FUN_02026440(param_1);
  local_100 = (undefined1 *)0x40;
  local_a0 = (code *)0x8;
  local_c0 = (code *)0x18;
  local_88 = (code *)0x0;
  local_b0 = (code *)0x10;
  local_d0 = (code *)0x20;
  local_e0 = (code *)0x28;
  local_f0 = (code *)0x30;
  local_78 = param_1;
  FUN_020248a8(&local_78,"EventLandmarkCoroutineParam","eventType",&local_88,
               "pPlayerInputInfoHandler",&local_a0,"pPlayerController",&local_b0,
               "pBuddyPokemonController",&local_c0,"pLandmark",&local_d0,"pPlayerComponent",
               &local_e0,"pBuddyComponent",&local_f0,"ballHitPos",&local_100);
  FUN_022cbe30(param_1);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x20;
  local_78 = param_1;
  FUN_02436d20(&local_78,"StartClimingResult","canStart",&local_88,&DAT_03933ed9,&local_a0,"normal",
               &local_b0);
  local_78 = (code *)&LAB_01bd12f8;
  uStack_70 = 0;
  local_88 = (code *)&LAB_01bd143c;
  uStack_80 = 0;
  local_a0 = (code *)&LAB_01bd1668;
  uStack_98 = 0;
  local_c0 = (code *)&LAB_01bd1840;
  uStack_b8 = 0;
  local_b0 = (code *)&LAB_01bd1748;
  uStack_a8 = 0;
  local_d0 = (code *)&LAB_01bd19dc;
  uStack_c8 = 0;
  local_e0 = param_1;
  FUN_02301cf8(&local_e0,"MkrgComponent","StartMove",&local_78,"IsMoveEnd",&local_88,"SetFlag",
               &local_a0,"CheckFlag",&local_b0,"DeleteObject",&local_c0,"GetPos",&local_d0);
  local_78 = FUN_01f1f0b4;
  uStack_70 = 0;
  local_88 = FUN_01f1f340;
  uStack_80 = 0;
  local_b0 = (code *)&LAB_01f212bc;
  uStack_a8 = 0;
  local_a0 = (code *)&LAB_01f21268;
  uStack_98 = 0;
  local_c0 = (code *)&LAB_01f20edc;
  uStack_b8 = 0;
  local_d0 = param_1;
  FUN_0215fbd0(&local_d0,"FieldLight","ChangeProductionLight",&local_78,"EndProductionLight",
               &local_88,"IsChangingProductionLight",&local_a0,
               "__haxe_export_IsChangingProductionLightAny",&local_b0,"__haxe_export_ResetLight",
               &local_c0);
  local_78 = (code *)&LAB_02672e54;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_0245799c(&local_88,"RidePokemonComponent",&DAT_03a7d570,&local_a0,"__haxe_export_GetPlayer",
               &local_78);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x10;
  local_78 = param_1;
  FUN_02132508(&local_78,"DoorExitCameraData",&DAT_039a01c1,&local_88,"fieldCameraData",&local_a0,
               "eventCameraData",&local_b0);
  local_d0 = (code *)0x34;
  local_e0 = (code *)0x38;
  local_88 = (code *)0x0;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x20;
  local_c0 = (code *)0x30;
  local_78 = param_1;
  FUN_02130e44(&local_78,"DoorExitEventCameraData","fixFrame",&local_88,&DAT_03933ed9,&local_a0,
               "lookAt",&local_b0,&DAT_0389c845,&local_c0,"interpolationType",&local_d0,
               "interpolationFrame",&local_e0);
  local_88 = (code *)0x0;
  local_a0 = (code *)0x4;
  local_78 = param_1;
  FUN_02130110(&local_78,"DoorExitFieldCameraData",&DAT_0397610a,&local_88,"pitch",&local_a0);
  local_a0 = (code *)0xa0;
  local_78 = (code *)&LAB_021341e0;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_021334ac(&local_88,"DoorData","m_uniqueId",&local_a0,"GetAreaNameHash",&local_78);
  FUN_021d6780(param_1);
  local_e0 = (code *)0x170;
  local_f0 = (code *)0x174;
  local_100 = (undefined1 *)0x178;
  local_90 = (code *)0x17c;
  local_108 = 0x180;
  local_110 = 400;
  local_78 = (code *)&LAB_022348a4;
  uStack_70 = 0;
  local_a0 = (code *)0x0;
  local_b0 = (code *)0x10;
  local_c0 = (code *)0x14;
  local_d0 = (code *)0x18;
  local_88 = param_1;
  FUN_022325d4(&local_88,"BallInWarpDesc","destination",&local_a0,"scalingTime",&local_b0,
               "warpTimeSec",&local_c0,&DAT_038b42e3,&local_d0,"ballInEaseFunc",&local_e0,
               "warpEaseFunc",&local_f0,"ballOutEaseFunc",&local_100,"isCurve",&local_90,
               "startCurvePotionOffset",&local_108,"goalCurvePotionOffset",&local_110,
               "__haxe_export_SetTargetObjectByCharacter",&local_78);
  local_88 = (code *)0x8;
  local_78 = param_1;
  FUN_02231b0c(&local_78,"BallWarpParam","sequence",&local_88);
  FUN_01ffc370(param_1);
  local_88 = (code *)0x48;
  uStack_80 = 1;
  local_a0 = (code *)0x50;
  uStack_98 = 1;
  local_78 = (code *)0x40;
  uStack_70 = 1;
  local_b0 = FUN_025a8668;
  uStack_a8 = 0;
  local_c0 = FUN_025a8a54;
  uStack_b8 = 0;
  local_d0 = FUN_025a8e84;
  uStack_c8 = 0;
  local_e0 = param_1;
  FUN_02071530(&local_e0,"FieldAreaSpeedManager","GetPhysicsSimulationSpeed",&local_78,
               "GetParticleSpeedRate",&local_88,"GetCharacterAnimationMasterSpeed",&local_a0,
               "SetPhysicsSimulationSpeed",&local_b0,"SetParticleSpeedRate",&local_c0,
               "SetCharacterAnimationMasterSpeed",&local_d0);
  FUN_022e6900(param_1);
  local_78 = FUN_01f26438;
  uStack_70 = 0;
  local_88 = param_1;
  FUN_022d6b14(&local_88,"LocationManager","GetRootDataHash",&local_78);
  FUN_025188a0(param_1);
  local_f0 = (code *)0x30;
  local_90 = (code *)0x44;
  local_88 = (code *)0x0;
  local_c0 = (code *)0x18;
  local_100 = (undefined1 *)0x40;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x14;
  local_d0 = (code *)0x1c;
  local_e0 = (code *)0x20;
  local_78 = param_1;
  FUN_02523a54(&local_78,"AxisShakeInfo","direction",&local_88,"amplitude",&local_a0,"period",
               &local_b0,"endFrame",&local_c0,"isLoop",&local_d0,"interpolationType",&local_e0,
               "randomRange",&local_f0,"cameraPosWeight",&local_100,"blendRate",&local_90);
  local_c0 = (code *)0x18;
  local_88 = (code *)0x0;
  local_a0 = (code *)0x10;
  local_b0 = (code *)0x14;
  local_d0 = (code *)0x1c;
  local_e0 = (code *)0x20;
  local_78 = param_1;
  FUN_02525878(&local_78,"RandomShakeInfo","randomRange",&local_88,"minInterval",&local_a0,
               "maxInterval",&local_b0,"interpolationType",&local_c0,"cameraPosWeight",&local_d0,
               "blendRate",&local_e0);
  local_a0 = (code *)0x60;
  local_b0 = (code *)0x70;
  local_c0 = (code *)0x80;
  local_d0 = (code *)0x84;
  local_e0 = (code *)0x88;
  local_88 = (code *)0x0;
  local_78 = param_1;
  FUN_01fbafc4(&local_78,"AreaShakeInfo","shakeInfo",&local_88,"pShakeTarget",&local_a0,"shakePos",
               &local_b0,"frame",&local_c0,"distanceMax",&local_d0,"distanceMin",&local_e0);
  local_78 = (code *)&LAB_01bea5ec;
  uStack_70 = 0;
  local_88 = (code *)&LAB_01beab64;
  uStack_80 = 0;
  local_a0 = (code *)&LAB_01beac24;
  uStack_98 = 0;
  local_b0 = (code *)&LAB_01beacac;
  uStack_a8 = 0;
  local_c0 = param_1;
  FUN_02314450(&local_c0,"PathMoveComponent","MoveStart",&local_78,"CreateWaypoint",&local_88,
               "IsPathMoving",&local_a0,"MoveStop",&local_b0);
  local_a0 = (code *)0x4;
  local_b0 = (code *)0x8;
  local_c0 = (code *)0xc;
  local_88 = (code *)0x0;
  local_78 = param_1;
  FUN_02313234(&local_78,"PathMoveSetting","pathSpeedInputMode",&local_88,"speed",&local_a0,
               "moveState",&local_b0,"isLoop",&local_c0);
  local_78 = (code *)&LAB_025fe20c;
  uStack_70 = 0;
  local_88 = (code *)&LAB_025fe214;
  uStack_80 = 0;
  local_a0 = (code *)&LAB_025fe5a8;
  uStack_98 = 0;
  local_c0 = FUN_025fe5c8;
  uStack_b8 = 0;
  local_d0 = FUN_025fd3ac;
  uStack_c8 = 0;
  local_b0 = (code *)&LAB_025fe5b8;
  uStack_a8 = 0;
  local_f0 = (code *)&LAB_025ff7f0;
  uStack_e8 = 0;
  local_e0 = FUN_025ff7c0;
  uStack_d8 = 0;
  local_100 = &LAB_025ff3fc;
  uStack_f8 = 0;
  local_90 = param_1;
  FUN_02388588(&local_90,"PlayerStatusComponent","IsEnable",&local_78,"Enable",&local_88,
               "IsChangedAnyStatus",&local_a0,"IsThrowStartable",&local_b0,"IsChangedStatus",
               &local_c0,"ResetAllStatus",&local_d0,"SetInvincible",&local_e0,"ResetInvincible",
               &local_f0,"IsInvincible",&local_100);
  local_78 = FUN_018d0e7c;
  uStack_70 = 0;
  local_88 = (code *)&LAB_018d12fc;
  uStack_80 = 0;
  local_a0 = param_1;
  FUN_0253b8e4(&local_a0,"VigilanceBgmChanger","StopBgm",&local_78,"IsVigilanceBgmAny",&local_88);
  return;
}


