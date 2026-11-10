/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00657bbc; name: FUN_00657bbc
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00657bbc(long param_1)

{
  long *plVar1;
  long **pplVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 local_3f0 [2];
  ulong local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  long *plStack_3d0;
  char local_3c8;
  undefined8 *local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long local_3a8;
  undefined8 local_3a0;
  long *plStack_398;
  long **local_390;
  long *local_388;
  undefined8 *******pppppppuStack_380;
  undefined8 *******local_378;
  long *plStack_370;
  undefined1 local_368;
  long *local_360;
  long local_358;
  undefined8 uStack_350;
  long *local_348;
  byte local_340 [8];
  ulong local_338;
  undefined8 uStack_330;
  long **local_328;
  long *plStack_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  ulong local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined **local_2a0;
  ulong local_298;
  long **local_290;
  undefined8 local_288;
  undefined ***local_280;
  undefined4 local_278;
  ulong local_270;
  undefined8 local_268;
  undefined8 local_260;
  long *plStack_258;
  undefined1 auStack_250 [8];
  ulong local_248;
  undefined8 local_240;
  undefined8 local_238;
  long *local_230;
  ulong local_228;
  undefined8 local_220;
  undefined8 local_218;
  long *plStack_210;
  undefined8 local_208;
  long **local_200;
  long *plStack_1f8;
  undefined8 *******local_1f0;
  undefined8 *******local_1e8;
  long *plStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  long *local_1d0;
  long local_1c8;
  undefined8 uStack_1c0;
  long *local_1b8;
  byte local_1b0;
  undefined7 uStack_1af;
  ulong local_1a8;
  undefined8 uStack_1a0;
  long **local_198;
  long *plStack_190;
  ulong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long *local_170;
  undefined8 local_168;
  undefined1 auStack_160 [8];
  undefined8 local_158;
  undefined8 uStack_150;
  ulong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  byte local_110;
  undefined7 uStack_10f;
  long *local_108;
  ulong local_100;
  long *local_f8;
  undefined1 auStack_f0 [8];
  long local_e8;
  char local_dc;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  char local_b8;
  MutexType aMStack_b0 [32];
  undefined **local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined ***local_70;
  
  lVar16 = *(long *)(param_1 + 0x140);
  plVar1 = (long *)(param_1 + 0xe0);
  plVar8 = (long *)FUN_00612290();
  plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x170,8);
  plVar9[2] = 0;
  plVar13 = plVar9 + 1;
  *plVar13 = 0;
  puVar5 = PTR_DAT_043758e8;
  plVar9[3] = (long)plVar8;
  plVar8 = plVar9 + 4;
  *plVar9 = (long)(puVar5 + 0x10);
  FUN_00782ef8(plVar8);
  plVar9[4] = (long)(PTR_DAT_043758f0 + 0x10);
  nn::os::InitializeEvent(plVar9 + 6,0,0);
  plVar9[4] = (long)(PTR_DAT_043758f8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
  *(undefined1 *)(plVar9 + 0x2d) = 0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_b8 = '\0';
  local_d8 = plVar8;
  local_d0 = plVar9;
  local_c8 = plVar8;
  local_c0 = plVar9;
  nn::os::InitializeMutex(aMStack_b0,false,0);
  plVar8 = local_c0;
  plVar9 = local_c8;
  local_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  lVar14 = *plVar1;
  lVar11 = *(long *)(lVar14 + 0x20);
  if ((*(byte *)(lVar11 + 0x68) & 1) == 0) {
    lVar11 = lVar11 + 0x69;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x78);
  }
  FUN_0067d3b8(&local_110,lVar11);
  uVar15 = (ulong)&local_110 | 1;
  if ((local_110 & 1) != 0) {
    uVar15 = local_100;
  }
  FUN_0064f808(&local_200,lVar14 + 0x10,uVar15);
  local_298 = FUN_006511d0(&local_200);
  local_290 = &local_d8;
  local_2a0 = &PTR_LAB_04194e28;
  local_280 = &local_2a0;
  local_88 = (undefined *)FUN_006511d0(&local_200);
  local_90 = &PTR_LAB_04194ea0;
  local_70 = &local_90;
  FUN_00651100(auStack_f0,&local_200,&local_2a0,&local_90);
  if (local_70 != (undefined ***)0x0) {
    if (local_70 == &local_90) {
      pcVar12 = (code *)(*local_70)[2];
    }
    else {
      pcVar12 = (code *)(*local_70)[3];
    }
    (*pcVar12)();
  }
  if (local_280 != (undefined ***)0x0) {
    if (local_280 == &local_2a0) {
      pcVar12 = (code *)(*local_280)[2];
    }
    else {
      pcVar12 = (code *)(*local_280)[3];
    }
    (*pcVar12)();
  }
  if ((local_1b0 & 1) != 0) {
    (**(code **)((long)*local_198 + 0x18))
              (local_198,uStack_1a0,CONCAT71(uStack_1af,local_1b0) & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_1d0 & 1) != 0) {
    (**(code **)(*local_1b8 + 0x18))(local_1b8,uStack_1c0,(ulong)local_1d0 & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_1f0 & 1) != 0) {
    (**(code **)(*(long *)CONCAT44(uStack_1d4,local_1d8) + 0x18))
              ((long *)CONCAT44(uStack_1d4,local_1d8),plStack_1e0,
               (ulong)local_1f0 & 0xfffffffffffffffe,1);
  }
  if (plStack_1f8 != (long *)0x0) {
    plVar13 = plStack_1f8 + 1;
    do {
      lVar11 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_110 & 1) != 0) {
    (**(code **)(*local_f8 + 0x18))
              (local_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
  }
  FUN_00667354(auStack_f0);
  FUN_0064bcc4(&local_110,*plVar1);
  pplVar2 = (long **)(PTR_DAT_04375900 + 0x10);
  plStack_190 = (long *)0x0;
  local_198 = (long **)0x0;
  uStack_140 = 0;
  local_148 = 0;
  plVar13 = (long *)(PTR_DAT_04375908 + 0x10);
  local_1f0 = &local_1f0;
  uVar15 = (ulong)&local_200 | 8;
  local_200 = pplVar2;
  plStack_1f8 = plVar13;
  local_1e8 = local_1f0;
  (**(code **)(*plVar9 + 0x10))(plVar9,&local_1d8);
  local_198 = (long **)uVar15;
  (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x10))
            ((long *)CONCAT71(uStack_10f,local_110),&local_188);
  local_148 = uVar15;
  FUN_00783af0(&local_200);
  local_200 = pplVar2;
  plStack_1f8 = plVar13;
  FUN_0065a6ac(uVar15);
  nn::os::LockMutex(aMStack_b0);
  cVar3 = local_b8;
  nn::os::UnlockMutex(aMStack_b0);
  if (cVar3 == '\0') {
    local_2a0 = (undefined **)((ulong)local_2a0 & 0xffffffffffffff00);
    local_288 = 0;
    local_298 = 0;
    local_290 = (long **)0x0;
    local_280 = (undefined ***)FUN_00612290();
    local_298 = 0;
    local_290 = (long **)0x0;
    local_278 = 0;
    local_260 = 0;
    local_288 = 0;
    local_270 = 0;
    local_268 = 0;
    plStack_258 = (long *)FUN_00612290();
    local_260 = 0;
    local_270 = 0;
    local_268 = 0;
    FUN_006d99d8(auStack_250);
    local_240 = 0;
    local_238 = 0;
    local_248 = 0;
    local_230 = (long *)FUN_00612290();
    local_228 = 0;
    local_238 = 0;
    local_248 = 0;
    local_240 = 0;
    local_220 = 0;
    local_218 = 0;
    plStack_210 = (long *)FUN_00612290();
    local_228 = 0;
    local_220 = 0;
    local_208 = 0;
    local_88 = (undefined *)0x0;
    local_218 = 0;
    local_80 = FUN_00612290();
    local_78 = 0;
    local_90 = &local_88;
    FUN_00659504(&local_200,&local_2a0,0xe,"Timed out to get my UserSession.",&local_90);
    nn::os::LockMutex(aMStack_b0);
    if (local_b8 == '\0') {
      FUN_0065a734(local_d8,&local_200);
      local_b8 = '\x01';
    }
    nn::os::UnlockMutex(aMStack_b0);
    FUN_006593f4(&local_200);
    FUN_02767254(&local_90,local_88);
    if ((local_228 & 1) == 0) {
      if ((local_248 & 1) == 0) goto LAB_00658048;
LAB_006584fc:
      (**(code **)(*local_230 + 0x18))(local_230,local_238,local_248 & 0xfffffffffffffffe,1);
      FUN_006d9cd8(auStack_250);
    }
    else {
      (**(code **)(*plStack_210 + 0x18))(plStack_210,local_218,local_228 & 0xfffffffffffffffe,1);
      if ((local_248 & 1) != 0) goto LAB_006584fc;
LAB_00658048:
      FUN_006d9cd8(auStack_250);
    }
    if ((local_270 & 1) != 0) {
      (**(code **)(*plStack_258 + 0x18))(plStack_258,local_260,local_270 & 0xfffffffffffffffe,1);
    }
    if ((local_298 & 1) != 0) {
      (*(code *)(*local_280)[3])(local_280,local_288,local_298 & 0xfffffffffffffffe,1);
    }
  }
  uVar15 = (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x20))();
  puVar6 = PTR_DAT_04373170;
  puVar5 = PTR_DAT_04373168;
  if ((uVar15 & 1) == 0) {
    if (local_108 != (long *)0x0) {
      plVar13 = local_108 + 1;
      do {
        lVar11 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
        std::__shared_weak_count::__release_weak();
      }
    }
    plStack_1f8 = (long *)(puVar6 + 0x10);
    pplVar2 = (long **)(puVar5 + 0x10);
    local_1f0 = &local_1f0;
    plStack_190 = (long *)0x0;
    local_198 = (long **)0x0;
    local_200 = pplVar2;
    local_1e8 = local_1f0;
    (**(code **)(*plVar9 + 0x10))(plVar9,&local_1d8);
    local_198 = &plStack_1f8;
    thunk_FUN_00783af0(&local_200);
    local_200 = pplVar2;
    FUN_00782f18(&plStack_1f8);
    (**(code **)(*plVar9 + 0x30))(&local_200,plVar9);
    if (plVar8 == (long *)0x0) {
LAB_00658324:
      if ((int)local_200 != 0) goto LAB_0065832c;
LAB_00658604:
      plStack_300 = local_170;
      uStack_308 = uStack_178;
      local_310 = local_180;
      local_328 = local_198;
      uStack_330 = uStack_1a0;
      local_338 = local_1a8;
      local_378 = local_1e8;
      pppppppuStack_380 = local_1f0;
      local_388 = plStack_1f8;
      local_390 = (long **)((ulong)local_390 & 0xffffffff00000000);
      local_368 = 0;
      local_1f0 = (undefined8 *******)0x0;
      plStack_1f8 = (long *)0x0;
      local_1e8 = (undefined8 *******)0x0;
      plStack_370 = plStack_1e0;
      if ((char)local_1d8 != '\0') {
        local_360 = local_1d0;
        uStack_350 = uStack_1c0;
        local_358 = local_1c8;
        local_348 = local_1b8;
        if (local_1b8 == (long *)0x0) {
          local_360 = &local_358;
        }
        else {
          *(long **)(local_1c8 + 0x10) = &local_358;
          local_1d0 = &local_1c8;
          local_1b8 = (long *)0x0;
          local_1c8 = 0;
        }
        local_368 = 1;
      }
      uStack_1a0 = 0;
      local_1a8 = 0;
      local_340[0] = local_1b0;
      local_198 = (long **)0x0;
      plStack_320 = plStack_190;
      local_318 = (undefined4)local_188;
      local_170 = (long *)0x0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_2f8 = local_168;
      FUN_006d9e70(auStack_2f0,auStack_160);
      local_2b8 = local_128;
      uStack_2c0 = uStack_130;
      local_2c8 = local_138;
      local_2d8 = local_148;
      uStack_2e0 = uStack_150;
      local_2e8 = local_158;
      uStack_150 = 0;
      local_158 = 0;
      local_148 = 0;
      uStack_2d0 = uStack_140;
      uStack_130 = 0;
      local_138 = 0;
      local_128 = 0;
      uStack_2b0 = uStack_120;
      local_2a8 = local_118;
    }
    else {
      plVar9 = plVar8 + 1;
      do {
        lVar11 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 != 0) goto LAB_00658324;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
      if ((int)local_200 == 0) goto LAB_00658604;
LAB_0065832c:
      local_2a0 = (undefined **)((ulong)local_2a0 & 0xffffffffffffff00);
      local_288 = 0;
      local_298 = 0;
      local_290 = (long **)0x0;
      local_280 = (undefined ***)FUN_00612290();
      local_298 = 0;
      local_290 = (long **)0x0;
      local_278 = 0;
      local_260 = 0;
      local_288 = 0;
      local_270 = 0;
      local_268 = 0;
      plStack_258 = (long *)FUN_00612290();
      local_260 = 0;
      local_270 = 0;
      local_268 = 0;
      FUN_006d99d8(auStack_250);
      local_240 = 0;
      local_238 = 0;
      local_248 = 0;
      local_230 = (long *)FUN_00612290();
      local_228 = 0;
      local_238 = 0;
      local_248 = 0;
      local_240 = 0;
      local_220 = 0;
      local_218 = 0;
      plStack_210 = (long *)FUN_00612290();
      local_228 = 0;
      local_220 = 0;
      local_208 = 0;
      local_88 = (undefined *)0x0;
      local_218 = 0;
      local_80 = FUN_00612290();
      local_78 = 0;
      local_90 = &local_88;
      FUN_00659504(&local_390,&local_2a0,0xe,"Failed to get my UserSession.",&local_90);
      FUN_02767254(&local_90,local_88);
      if ((local_228 & 1) == 0) {
        if ((local_248 & 1) == 0) goto LAB_006583ec;
LAB_00658574:
        (**(code **)(*local_230 + 0x18))(local_230,local_238,local_248 & 0xfffffffffffffffe,1);
        FUN_006d9cd8(auStack_250);
      }
      else {
        (**(code **)(*plStack_210 + 0x18))(plStack_210,local_218,local_228 & 0xfffffffffffffffe,1);
        if ((local_248 & 1) != 0) goto LAB_00658574;
LAB_006583ec:
        FUN_006d9cd8(auStack_250);
      }
      if ((local_270 & 1) != 0) {
        (**(code **)(*plStack_258 + 0x18))(plStack_258,local_260,local_270 & 0xfffffffffffffffe,1);
      }
      if ((local_298 & 1) != 0) {
        (*(code *)(*local_280)[3])(local_280,local_288,local_298 & 0xfffffffffffffffe,1);
      }
    }
    FUN_006593f4(&local_200);
    plVar8 = (long *)0x0;
  }
  else {
    plStack_1f8 = (long *)(PTR_DAT_04373170 + 0x10);
    pplVar2 = (long **)(PTR_DAT_04373168 + 0x10);
    local_1f0 = &local_1f0;
    plStack_190 = (long *)0x0;
    local_198 = (long **)0x0;
    local_200 = pplVar2;
    local_1e8 = local_1f0;
    (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x10))
              ((long *)CONCAT71(uStack_10f,local_110),&local_1d8);
    local_198 = &plStack_1f8;
    thunk_FUN_00783af0(&local_200);
    local_200 = pplVar2;
    FUN_00782f18(&plStack_1f8);
    uVar10 = (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x38))();
                    /* try { // try from 0065810c to 00658113 has its CatchHandler @ 00658cbc */
    FUN_006596a0(&local_2a0,uVar10);
    local_200 = (long **)((ulong)local_200 & 0xffffffffffffff00);
    plStack_1f8 = (long *)0x0;
    local_1e8 = (undefined8 *******)0x0;
    local_1f0 = (undefined8 *******)0x0;
    plStack_1e0 = (long *)FUN_00612290();
    local_1f0 = (undefined8 *******)0x0;
    plStack_1f8 = (long *)0x0;
    local_1e8 = (undefined8 *******)0x0;
    local_1d8 = 0;
    local_1d0 = (long *)0x0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    local_1b8 = (long *)FUN_00612290();
    local_1c8 = 0;
    local_1d0 = (long *)0x0;
    uStack_1c0 = 0;
    FUN_006d99d8(&local_1b0);
    local_198 = (long **)0x0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    plStack_190 = (long *)FUN_00612290();
    local_188 = 0;
    local_1a8 = 0;
    local_198 = (long **)0x0;
    uStack_1a0 = 0;
    uStack_178 = 0;
    local_180 = 0;
    local_170 = (long *)FUN_00612290();
    local_180 = 0;
    local_188 = 0;
    uStack_178 = 0;
    local_168 = 0;
    FUN_00659810(&local_390,&local_2a0,&local_200);
    if ((local_188 & 1) == 0) {
      if ((local_1a8 & 1) == 0) goto LAB_006581cc;
LAB_00658430:
      (**(code **)(*plStack_190 + 0x18))(plStack_190,local_198,local_1a8 & 0xfffffffffffffffe,1);
      FUN_006d9cd8(&local_1b0);
      if (((ulong)local_1d0 & 1) != 0) goto LAB_00658460;
LAB_006581dc:
      if (((ulong)plStack_1f8 & 1) == 0) goto LAB_006581e4;
LAB_00658488:
      (**(code **)(*plStack_1e0 + 0x18))
                (plStack_1e0,local_1e8,(ulong)plStack_1f8 & 0xfffffffffffffffe,1);
    }
    else {
      (**(code **)(*local_170 + 0x18))(local_170,uStack_178,local_188 & 0xfffffffffffffffe,1);
      if ((local_1a8 & 1) != 0) goto LAB_00658430;
LAB_006581cc:
      FUN_006d9cd8(&local_1b0);
      if (((ulong)local_1d0 & 1) == 0) goto LAB_006581dc;
LAB_00658460:
      (**(code **)(*local_1b8 + 0x18))(local_1b8,uStack_1c0,(ulong)local_1d0 & 0xfffffffffffffffe,1)
      ;
      if (((ulong)plStack_1f8 & 1) != 0) goto LAB_00658488;
LAB_006581e4:
    }
    if ((char)local_278 != '\0') {
      FUN_02767254(&local_270,local_268);
    }
    if ((local_298 & 1) != 0) {
      (*(code *)(*local_280)[3])(local_280,local_288,local_298 & 0xfffffffffffffffe,1);
    }
    if (local_108 != (long *)0x0) {
      plVar9 = local_108 + 1;
      do {
        lVar11 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_dc != '\0') {
    FUN_0066724c(auStack_f0);
  }
  if (local_e8 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 1;
    do {
      lVar11 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::FinalizeMutex(aMStack_b0);
  if (local_c0 == (long *)0x0) {
LAB_006587a0:
    if (local_d0 == (long *)0x0) goto LAB_006587c0;
LAB_006587a8:
    plVar8 = local_d0 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) goto LAB_006587c0;
    (**(code **)(*local_d0 + 0x10))(local_d0);
    std::__shared_weak_count::__release_weak();
  }
  else {
    plVar8 = local_c0 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) goto LAB_006587a0;
    (**(code **)(*local_c0 + 0x10))(local_c0);
    std::__shared_weak_count::__release_weak();
    if (local_d0 != (long *)0x0) goto LAB_006587a8;
LAB_006587c0:
  }
  if ((int)local_390 != 0) {
    plStack_1f8 = (long *)0x0;
    local_200 = (long **)0x0;
    FUN_00658e38(local_3f0,&local_390,&local_200);
    if (plStack_1f8 != (long *)0x0) {
      plVar1 = plStack_1f8 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_006593f4(&local_390);
    goto LAB_00658820;
  }
                    /* try { // try from 006588dc to 006588e3 has its CatchHandler @ 00658ca8 */
  FUN_0065902c(&local_200,local_340);
  *(undefined8 *)(*plVar1 + 0xa0) = local_168;
  if ((local_188 & 1) != 0) {
    (**(code **)(*local_170 + 0x18))(local_170,uStack_178,local_188 & 0xfffffffffffffffe,1);
  }
  if ((local_1a8 & 1) != 0) {
    (**(code **)(*plStack_190 + 0x18))(plStack_190,local_198,local_1a8 & 0xfffffffffffffffe,1);
  }
  FUN_006d9cd8(&local_1b0);
  if (((ulong)local_1d0 & 1) != 0) {
    (**(code **)(*local_1b8 + 0x18))(local_1b8,uStack_1c0,(ulong)local_1d0 & 0xfffffffffffffffe,1);
  }
  if (((ulong)plStack_1f8 & 1) != 0) {
    (**(code **)(*plStack_1e0 + 0x18))
              (plStack_1e0,local_1e8,(ulong)plStack_1f8 & 0xfffffffffffffffe,1);
  }
  FUN_006593f4(&local_390);
  if (*(long *)(param_1 + 0xf0) == 0) {
    plStack_1f8 = (long *)0x0;
    local_1f0 = (undefined8 *******)FUN_00612290();
    local_1e8 = (undefined8 *******)0x0;
    local_200 = &plStack_1f8;
    FUN_00657584(local_3f0,plVar1,0,&DAT_03996322,&local_200);
    FUN_02767254(&local_200,plStack_1f8);
    goto LAB_00658820;
  }
  FUN_006561e8(&local_390,plVar1,(long *)(param_1 + 0xf0),param_1 + 0x100,0);
  pplVar7 = local_390;
  plStack_1f8 = (long *)(puVar6 + 0x10);
  plStack_190 = (long *)0x0;
  pplVar2 = (long **)(puVar5 + 0x10);
  local_1f0 = &local_1f0;
  local_198 = (long **)0x0;
  local_200 = pplVar2;
  local_1e8 = local_1f0;
  (*(code *)(*local_390)[2])(local_390,&local_1d8);
  local_198 = &plStack_1f8;
  thunk_FUN_00783af0(&local_200);
  local_200 = pplVar2;
  FUN_00782f18(&plStack_1f8);
  plVar8 = local_388;
  local_390 = (long **)0x0;
  local_388 = (long *)0x0;
  (*(code *)(*pplVar7)[6])(&local_200,pplVar7);
  if (plVar8 == (long *)0x0) {
LAB_00658a58:
    if (local_388 == (long *)0x0) goto LAB_00658a78;
LAB_00658a60:
    plVar8 = local_388 + 1;
    do {
      lVar11 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) goto LAB_00658a78;
    (**(code **)(*local_388 + 0x10))(local_388);
    std::__shared_weak_count::__release_weak();
    if ((int)local_200 == 0) goto LAB_00658c24;
LAB_00658a80:
    local_390 = (long **)0x0;
    local_388 = (long *)0x0;
    FUN_006576b0(local_3f0,&local_200,&local_390);
    if (local_388 == (long *)0x0) goto LAB_00658c64;
    plVar1 = local_388 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) goto LAB_00658c64;
    (**(code **)(*local_388 + 0x10))(local_388);
    std::__shared_weak_count::__release_weak();
  }
  else {
    plVar9 = plVar8 + 1;
    do {
      lVar11 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) goto LAB_00658a58;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    if (local_388 != (long *)0x0) goto LAB_00658a60;
LAB_00658a78:
    if ((int)local_200 != 0) goto LAB_00658a80;
LAB_00658c24:
    local_388 = (long *)0x0;
    pppppppuStack_380 = (undefined8 *******)FUN_00612290();
    local_378 = (undefined8 *******)0x0;
    local_390 = &local_388;
    FUN_00657584(local_3f0,plVar1,0,&DAT_03996322,&local_390);
    FUN_02767254(&local_390,local_388);
LAB_00658c64:
  }
  if ((char)local_1d8 != '\0') {
    FUN_02767254(&local_1d0,local_1c8);
  }
  if (((ulong)plStack_1f8 & 1) != 0) {
    (**(code **)(*plStack_1e0 + 0x18))
              (plStack_1e0,local_1e8,(ulong)plStack_1f8 & 0xfffffffffffffffe,1);
  }
LAB_00658820:
  nn::os::LockMutex((MutexType *)(lVar16 + 0x38));
  *(undefined4 *)(lVar16 + 0x58) = local_3f0[0];
  *(undefined8 *)(lVar16 + 0x68) = uStack_3e0;
  *(ulong *)(lVar16 + 0x60) = local_3e8;
  *(long **)(lVar16 + 0x78) = plStack_3d0;
  *(undefined8 *)(lVar16 + 0x70) = local_3d8;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  *(undefined1 *)(lVar16 + 0x80) = 0;
  if (local_3c8 != '\0') {
    *(undefined8 **)(lVar16 + 0x88) = local_3c0;
    *(undefined8 *)(lVar16 + 0x98) = uStack_3b0;
    *(undefined8 *)(lVar16 + 0x90) = local_3b8;
    plVar1 = (long *)(lVar16 + 0x90);
    *(long *)(lVar16 + 0xa0) = local_3a8;
    if (local_3a8 == 0) {
      *(long **)(lVar16 + 0x88) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_3c0 = &local_3b8;
      local_3b8 = 0;
      local_3a8 = 0;
    }
    *(undefined1 *)(lVar16 + 0x80) = 1;
  }
  *(long **)(lVar16 + 0xb0) = plStack_398;
  *(undefined8 *)(lVar16 + 0xa8) = local_3a0;
  local_3a0 = 0;
  plStack_398 = (long *)0x0;
  *(undefined1 *)(lVar16 + 0xb8) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar16 + 0x38));
  if (plStack_398 != (long *)0x0) {
    plVar1 = plStack_398 + 1;
    do {
      lVar16 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_398 + 0x10))(plStack_398);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_3c8 != '\0') {
    FUN_02767254(&local_3c0,local_3b8);
  }
  if ((local_3e8 & 1) != 0) {
    (**(code **)(*plStack_3d0 + 0x18))(plStack_3d0,local_3d8,local_3e8 & 0xfffffffffffffffe,1);
  }
  return 1;
}


