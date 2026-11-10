/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00620838; name: FUN_00620838
 */


undefined8 FUN_00620838(long param_1)

{
  long **pplVar1;
  long *plVar2;
  long ******pppppplVar3;
  long *****ppppplVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long ****pppplVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long ****pppplVar18;
  long *plVar19;
  long lVar20;
  undefined4 local_610 [2];
  ulong local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  long *plStack_5f0;
  char local_5e8;
  undefined8 *local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  long local_5c8;
  long **local_5c0;
  long *plStack_5b8;
  long *****local_5b0;
  long *plStack_5a8;
  long local_5a0;
  long lStack_598;
  undefined1 auStack_590 [32];
  long *local_570;
  long *plStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  long local_4e0;
  long *plStack_4d8;
  long local_4d0;
  long *local_4c8;
  char local_4c0 [8];
  undefined1 auStack_4b8 [72];
  long *local_470;
  long *plStack_468;
  undefined1 auStack_460 [136];
  undefined1 auStack_3d8 [32];
  int local_3b8 [2];
  byte local_3b0;
  undefined7 uStack_3af;
  undefined8 local_3a0;
  long *local_398;
  char local_390;
  undefined1 auStack_388 [8];
  undefined8 local_380;
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [32];
  long **local_330;
  long *plStack_328;
  long *****local_320;
  long *local_318;
  long local_310;
  long lStack_308;
  undefined1 auStack_300 [32];
  long *local_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  long local_250;
  long *plStack_248;
  long **local_240;
  long *plStack_238;
  long *****local_230;
  long *plStack_228;
  long local_220;
  long lStack_218;
  undefined1 auStack_210 [32];
  long *local_1f0;
  long *plStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_160;
  long *plStack_158;
  long **local_150;
  long *plStack_148;
  long ******local_140;
  long ******pppppplStack_138;
  long local_130;
  long lStack_128;
  undefined1 auStack_120 [32];
  long *local_100;
  long *plStack_f8;
  undefined8 local_f0;
  long **pplStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_70;
  long *plStack_68;
  
  lVar20 = *(long *)(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xd0) == 0) {
    plVar9 = (long *)0x0;
LAB_00620a38:
    FUN_002a4eb0(&local_150,0x290541);
    FUN_002a3b60(local_610,0xe,"Already destroyed",&local_150);
    FUN_02767254(&local_150,plStack_148);
    if (plVar9 == (long *)0x0) goto LAB_00620aa0;
  }
  else {
    plVar9 = (long *)std::__shared_weak_count::lock();
    if ((plVar9 == (long *)0x0) || (lVar15 = *(long *)(param_1 + 200), lVar15 == 0))
    goto LAB_00620a38;
    lVar13 = *(long *)(*(long *)(lVar15 + 0x30) + 8);
    ppppplVar4 = *(long ******)(lVar13 + 0x48);
    plVar5 = *(long **)(lVar13 + 0x50);
    if (plVar5 != (long *)0x0) {
      plVar10 = plVar5 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = *plVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
                    /* try { // try from 0062089c to 006208a7 has its CatchHandler @ 00621640 */
    FUN_0062c3fc(auStack_350,0);
    FUN_002a85f0(&local_150);
    pppppplVar3 = (long ******)((ulong)&local_150 | 1);
    if (((ulong)local_150 & 1) != 0) {
      pppppplVar3 = local_140;
    }
                    /* try { // try from 006208c8 to 006208cf has its CatchHandler @ 00621604 */
    FUN_00621724(auStack_350,pppppplVar3);
    lVar13 = lVar15 + 0x40;
    if (((ulong)local_150 & 1) != 0) {
      (*(code *)(*pppppplStack_138)[3])
                (pppppplStack_138,local_140,(ulong)local_150 & 0xfffffffffffffffe,1);
    }
    lVar16 = *(long *)(lVar15 + 0x30);
    FUN_00783fac(&local_330,lVar13);
    FUN_00621e8c(&local_240,*(undefined8 *)(lVar16 + 8),auStack_350,&local_330);
    local_e0 = 0;
    pplStack_e8 = (long **)0x0;
    pplVar1 = (long **)(PTR_DAT_04373168 + 0x10);
    plStack_148 = (long *)(PTR_DAT_04373170 + 0x10);
    local_140 = (long ******)&local_140;
    local_150 = pplVar1;
    pppppplStack_138 = local_140;
    (*(code *)(*local_240)[2])(local_240,&lStack_128);
    pplStack_e8 = &plStack_148;
    thunk_FUN_00783af0(&local_150);
    local_150 = pplVar1;
    FUN_00782f18(&plStack_148);
    plVar10 = plStack_238;
    pplVar1 = local_240;
    local_240 = (long **)0x0;
    plStack_238 = (long *)0x0;
    (*(code *)(*pplVar1)[6])(local_3b8);
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
      do {
        lVar16 = *plVar11;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = lVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_238 == (long *)0x0) {
LAB_006209fc:
      if (plStack_328 == (long *)0x0) goto LAB_00620a1c;
LAB_00620a04:
      plVar10 = plStack_328 + 1;
      do {
        lVar16 = *plVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = lVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar16 != 0) goto LAB_00620a1c;
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      std::__shared_weak_count::__release_weak();
      if (local_3b8[0] != 0) goto LAB_00620a24;
LAB_00620bd0:
                    /* try { // try from 00620bd0 to 00620bdb has its CatchHandler @ 006215c8 */
      FUN_0062d26c(auStack_3d8,0);
      FUN_002a85f0(&local_150);
      pppppplVar3 = (long ******)((ulong)&local_150 | 1);
      if (((ulong)local_150 & 1) != 0) {
        pppppplVar3 = local_140;
      }
                    /* try { // try from 00620bfc to 00620c03 has its CatchHandler @ 00621590 */
      FUN_00621a60(auStack_3d8,pppppplVar3);
      if (((ulong)local_150 & 1) != 0) {
        (*(code *)(*pppppplStack_138)[3])
                  (pppppplStack_138,local_140,(ulong)local_150 & 0xfffffffffffffffe,1);
      }
      lVar16 = *(long *)(lVar15 + 0x30);
      FUN_00783fac(&local_240,lVar13);
      uVar17 = *(undefined8 *)(lVar16 + 8);
      FUN_006dd558(&local_150);
      FUN_006dd564(&local_150,&local_240);
      FUN_006236e4(&local_470,uVar17,auStack_3d8,&local_150);
      if (plStack_148 != (long *)0x0) {
        plVar10 = plStack_148 + 1;
        do {
          lVar16 = *plVar10;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_238 != (long *)0x0) {
        plVar10 = plStack_238 + 1;
        do {
          lVar16 = *plVar10;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_238 + 0x10))(plStack_238);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_00621c04(local_4c0,auStack_460);
      plVar11 = plStack_468;
      plVar10 = local_470;
      if (local_4c0[0] == '\0') {
        local_470 = (long *)0x0;
        plStack_468 = (long *)0x0;
        (**(code **)(*plVar10 + 0x30))(local_610);
        if (plVar11 != (long *)0x0) {
          plVar10 = plVar11 + 1;
          do {
            lVar15 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            local_4c8 = plVar11;
          } while (cVar6 != '\0');
          goto LAB_00621370;
        }
      }
      else {
        FUN_0061e488(lVar15,auStack_4b8,1);
        FUN_00783fac(&local_4d0,lVar13);
        local_5c0 = *(long ***)(param_1 + 200);
        plStack_5b8 = *(long **)(param_1 + 0xd0);
        if (plStack_5b8 != (long *)0x0) {
          plVar10 = plStack_5b8 + 2;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (plVar5 != (long *)0x0) {
          plVar10 = plVar5 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        local_5a0 = *(long *)(lVar15 + 0x30);
        lStack_598 = *(long *)(lVar15 + 0x38);
        if (lStack_598 != 0) {
          plVar10 = (long *)(lStack_598 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
                    /* try { // try from 00620d8c to 00620d97 has its CatchHandler @ 0062148c */
        local_5b0 = ppppplVar4;
        plStack_5a8 = plVar5;
        FUN_0062d2c0(auStack_590,auStack_3d8);
        plStack_568 = plStack_468;
        local_570 = local_470;
        uStack_548 = 0;
        local_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        local_470 = (long *)0x0;
        plStack_468 = (long *)0x0;
        local_520 = 0;
        uStack_518 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        uStack_500 = 0;
        local_508 = 0;
        uStack_4f0 = 0;
        local_4f8 = 0;
        FUN_0061f57c(&uStack_560,auStack_460);
        local_4e0 = local_4d0;
        plStack_4d8 = local_4c8;
        if (local_4c8 != (long *)0x0) {
          plVar10 = local_4c8 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = *plVar10 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        pppplVar18 = ppppplVar4[0x33];
        pppplVar14 = ppppplVar4[0x69];
        plVar10 = (long *)(*(code *)(*pppplVar18)[2])(pppplVar18,0xd0,8);
        plVar10[2] = 0;
        plVar12 = plVar10 + 1;
        *plVar12 = 0;
        puVar8 = PTR_DAT_04375438;
        plVar10[3] = (long)pppplVar18;
        plVar11 = plVar10 + 4;
        *plVar10 = (long)(puVar8 + 0x10);
        FUN_00782ef8();
        plVar10[4] = (long)(PTR_DAT_04375448 + 0x10);
        nn::os::InitializeEvent(plVar10 + 6,0,0);
        plVar10[4] = (long)(PTR_DAT_04375440 + 0x10);
        nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
        *(undefined1 *)(plVar10 + 0x19) = 0;
        if (plVar10 != (long *)0x0) {
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *plVar12 = *plVar12 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        plVar12 = (long *)(*(code *)(*pppplVar18)[2])(pppplVar18,0x230,8);
        plVar12[2] = 0;
        plVar19 = plVar12 + 1;
        *plVar19 = 0;
        *plVar12 = (long)&PTR_LAB_04191ee8;
        plVar12[3] = (long)pppplVar18;
        FUN_007840dc();
        plVar12[4] = (long)&PTR_LAB_04191f38;
        lVar13 = (*(code *)(*pppplVar18)[2])(pppplVar18,0x10000,0x10);
        if (lVar13 == 0) {
          local_150 = (long **)CONCAT44(local_150._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0,(Result *)&local_150,"");
        }
        FUN_00782cfc(plVar12 + 10,plVar11,0,lVar13,0x10000,1);
        lStack_308 = lStack_598;
        local_310 = local_5a0;
        local_318 = plStack_5a8;
        local_320 = local_5b0;
        plStack_328 = plStack_5b8;
        local_330 = local_5c0;
        plVar12[0x42] = 0x10000;
        plVar12[0x41] = (long)pppplVar18;
        plVar12[0x43] = (long)plVar11;
        plVar12[0x44] = (long)plVar10;
        *(undefined1 *)((long)plVar12 + 0x229) = 1;
        plVar12[10] = (long)&PTR_LAB_04191f80;
        local_5c0 = (long **)0x0;
        plStack_5b8 = (long *)0x0;
        local_5b0 = (long *****)0x0;
        plStack_5a8 = (long *)0x0;
        local_5a0 = 0;
        lStack_598 = 0;
        FUN_00626f94(auStack_300,auStack_590);
        plStack_2d8 = plStack_568;
        local_2e0 = local_570;
        uStack_2b8 = 0;
        local_2c0 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        local_288 = 0;
        local_290 = 0;
        local_570 = (long *)0x0;
        plStack_568 = (long *)0x0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        uStack_270 = 0;
        local_278 = 0;
        uStack_260 = 0;
        local_268 = 0;
        FUN_0061f57c(&uStack_2d0,&uStack_560);
        lStack_218 = lStack_308;
        local_220 = local_310;
        plStack_238 = plStack_328;
        plStack_248 = plStack_4d8;
        local_250 = local_4e0;
        plStack_328 = (long *)0x0;
        plStack_228 = local_318;
        local_230 = local_320;
        local_4e0 = 0;
        plStack_4d8 = (long *)0x0;
        local_240 = local_330;
        local_330 = (long **)0x0;
        local_318 = (long *)0x0;
        local_320 = (long *****)0x0;
        lStack_308 = 0;
        local_310 = 0;
        FUN_00626f94(auStack_210,auStack_300);
        uStack_1d8 = 0;
        local_1e0 = 0;
        uStack_1b8 = 0;
        local_1c0 = 0;
        plStack_1e8 = plStack_2d8;
        local_1f0 = local_2e0;
        plStack_2d8 = (long *)0x0;
        local_2e0 = (long *)0x0;
        local_198 = 0;
        local_1a0 = 0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_180 = 0;
        local_188 = 0;
        uStack_170 = 0;
        local_178 = 0;
        FUN_0061f57c(&local_1e0,&uStack_2d0);
        lStack_128 = lStack_218;
        local_130 = local_220;
        plStack_158 = plStack_248;
        local_160 = local_250;
        pppppplStack_138 = (long ******)plStack_228;
        local_140 = (long ******)local_230;
        plStack_148 = plStack_238;
        local_150 = local_240;
        plStack_248 = (long *)0x0;
        local_250 = 0;
        plStack_238 = (long *)0x0;
        local_240 = (long **)0x0;
        plStack_228 = (long *)0x0;
        local_230 = (long *****)0x0;
        lStack_218 = 0;
        local_220 = 0;
        FUN_00626f94(auStack_120,auStack_210);
        pplStack_e8 = (long **)0x0;
        local_f0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        plStack_f8 = plStack_1e8;
        local_100 = local_1f0;
        plStack_1e8 = (long *)0x0;
        local_1f0 = (long *)0x0;
        local_a8 = 0;
        local_b0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_80 = 0;
        local_88 = 0;
        FUN_0061f57c(&local_f0,&local_1e0);
        plStack_68 = plStack_158;
        local_70 = local_160;
        plStack_158 = (long *)0x0;
        local_160 = 0;
        plVar12[0x24] = (long)plStack_148;
        plVar12[0x23] = (long)local_150;
        plStack_148 = (long *)0x0;
        local_150 = (long **)0x0;
        plVar12[0x26] = (long)pppppplStack_138;
        plVar12[0x25] = (long)local_140;
        pppppplStack_138 = (long ******)0x0;
        local_140 = (long ******)0x0;
        plVar12[0x28] = lStack_128;
        plVar12[0x27] = local_130;
        lStack_128 = 0;
        local_130 = 0;
        FUN_00626f94(plVar12 + 0x29,auStack_120);
        plVar12[0x2e] = (long)plStack_f8;
        plVar12[0x2d] = (long)local_100;
        plStack_f8 = (long *)0x0;
        local_100 = (long *)0x0;
        plVar12[0x37] = 0;
        plVar12[0x38] = 0;
        plVar12[0x34] = 0;
        plVar12[0x33] = 0;
        plVar12[0x30] = 0;
        plVar12[0x2f] = 0;
        plVar12[0x32] = 0;
        plVar12[0x31] = 0;
        plVar12[0x3b] = 0;
        plVar12[0x3a] = 0;
        plVar12[0x3d] = 0;
        plVar12[0x3c] = 0;
        FUN_0061f57c(plVar12 + 0x2f,&local_f0);
        plVar12[0x40] = (long)plStack_68;
        plVar12[0x3f] = local_70;
        plStack_68 = (long *)0x0;
        local_70 = 0;
        FUN_00621d38(&local_150);
        FUN_00621d38(&local_240);
        FUN_00621d38(&local_330);
        plStack_238 = (long *)0x0;
        local_240 = (long **)0x0;
        if (plVar12 != (long *)0x0) {
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *plVar19 = *plVar19 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        local_150 = (long **)(plVar12 + 4);
        plStack_148 = plVar12;
        (*(code *)**pppplVar14)(pppplVar14,&local_150,&local_240);
        if (plStack_148 != (long *)0x0) {
          plVar2 = plStack_148 + 1;
          do {
            lVar13 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plStack_238 != (long *)0x0) {
          plVar2 = plStack_238 + 1;
          do {
            lVar13 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_238 + 0x10))(plStack_238);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar12 != (long *)0x0) {
          do {
            lVar13 = *plVar19;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *plVar19 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_00621d38(&local_5c0);
        *(undefined1 *)(plVar10 + 5) = 1;
        plVar12 = *(long **)(lVar15 + 0x68);
        *(long **)(lVar15 + 0x60) = plVar11;
        *(long **)(lVar15 + 0x68) = plVar10;
        if (plVar12 != (long *)0x0) {
          plVar10 = plVar12 + 1;
          do {
            lVar15 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            std::__shared_weak_count::__release_weak();
          }
        }
        plStack_148 = (long *)0x0;
        local_140 = (long ******)FUN_00612290();
        pppppplStack_138 = (long ******)0x0;
        local_150 = &plStack_148;
        FUN_002a3b60(local_610,0,&DAT_03996322,&local_150);
        FUN_02767254(&local_150,plStack_148);
        if (local_4c8 != (long *)0x0) {
          plVar10 = local_4c8 + 1;
          do {
            lVar15 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_00621370:
          if (lVar15 == 0) {
            (**(code **)(*local_4c8 + 0x10))(local_4c8);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      FUN_0062f340(auStack_4b8);
      FUN_0061f3dc(auStack_460);
      if (plStack_468 != (long *)0x0) {
        plVar10 = plStack_468 + 1;
        do {
          lVar15 = *plVar10;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_468 + 0x10))(plStack_468);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_0062d384(auStack_3d8);
    }
    else {
      plVar10 = plStack_238 + 1;
      do {
        lVar16 = *plVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = lVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar16 != 0) goto LAB_006209fc;
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      std::__shared_weak_count::__release_weak();
      if (plStack_328 != (long *)0x0) goto LAB_00620a04;
LAB_00620a1c:
      if (local_3b8[0] == 0) goto LAB_00620bd0;
LAB_00620a24:
      FUN_006218c8(local_610,local_3b8);
    }
    FUN_0062cc10(auStack_368);
    if (local_390 != '\0') {
      FUN_02767254(auStack_388,local_380);
    }
    if ((local_3b0 & 1) != 0) {
      (**(code **)(*local_398 + 0x18))
                (local_398,local_3a0,CONCAT71(uStack_3af,local_3b0) & 0xfffffffffffffffe,1);
    }
    FUN_0062c450(auStack_350);
    if (plVar5 != (long *)0x0) {
      plVar10 = plVar5 + 1;
      do {
        lVar15 = *plVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  plVar5 = plVar9 + 1;
  do {
    lVar15 = *plVar5;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar7) {
      *plVar5 = lVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
  }
LAB_00620aa0:
  nn::os::LockMutex((MutexType *)(lVar20 + 0x38));
  *(undefined4 *)(lVar20 + 0x58) = local_610[0];
  *(undefined8 *)(lVar20 + 0x68) = uStack_600;
  *(ulong *)(lVar20 + 0x60) = local_608;
  *(long **)(lVar20 + 0x78) = plStack_5f0;
  *(undefined8 *)(lVar20 + 0x70) = local_5f8;
  local_608 = 0;
  uStack_600 = 0;
  local_5f8 = 0;
  *(undefined1 *)(lVar20 + 0x80) = 0;
  if (local_5e8 != '\0') {
    *(undefined8 **)(lVar20 + 0x88) = local_5e0;
    *(undefined8 *)(lVar20 + 0x98) = uStack_5d0;
    *(undefined8 *)(lVar20 + 0x90) = local_5d8;
    plVar9 = (long *)(lVar20 + 0x90);
    *(long *)(lVar20 + 0xa0) = local_5c8;
    if (local_5c8 == 0) {
      *(long **)(lVar20 + 0x88) = plVar9;
    }
    else {
      *(long **)(*plVar9 + 0x10) = plVar9;
      local_5e0 = &local_5d8;
      local_5d8 = 0;
      local_5c8 = 0;
    }
    *(undefined1 *)(lVar20 + 0x80) = 1;
  }
  *(undefined1 *)(lVar20 + 0xa8) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar20 + 0x38));
  if (local_5e8 != '\0') {
    FUN_02767254(&local_5e0,local_5d8);
  }
  if ((local_608 & 1) != 0) {
    (**(code **)(*plStack_5f0 + 0x18))(plStack_5f0,local_5f8,local_608 & 0xfffffffffffffffe,1);
  }
  return 1;
}


