/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a3fb90; name: FUN_01a3fb90
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01a3fb90(char *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  ulong local_e00;
  ulong uStack_df8;
  ulong local_df0;
  ulong local_de8;
  ulong local_de0;
  ulong local_dd8;
  ulong local_dd0 [2];
  ulong local_dc0;
  ulong uStack_db8;
  ulong local_db0;
  ulong uStack_da8;
  ulong local_da0;
  ulong local_d98;
  ulong local_d90;
  ulong local_d88;
  undefined2 local_d80;
  undefined2 uStack_d7e;
  undefined4 uStack_d7c;
  undefined4 local_d78;
  undefined4 uStack_d74;
  ulong local_d70;
  ulong local_d68;
  ulong local_d60;
  undefined2 local_d58;
  undefined2 uStack_d56;
  undefined4 uStack_d54;
  undefined4 local_d50;
  undefined4 uStack_d4c;
  ulong local_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined4 local_d20;
  ulong local_d10 [6];
  undefined4 local_ce0 [2];
  undefined8 local_cd8;
  undefined4 local_cd0 [3];
  undefined1 local_cc4 [4];
  undefined2 local_cc0 [2];
  undefined4 uStack_cbc;
  undefined8 local_cb8 [2];
  undefined4 local_ca8 [3];
  undefined1 auStack_c9c [4];
  undefined2 local_c98 [2];
  undefined4 local_c94;
  undefined8 local_c90 [6];
  undefined4 local_c60;
  ulong local_c50;
  undefined8 local_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined4 local_ba0;
  ulong local_b90;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined4 local_ae0;
  ulong local_ad0;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined4 local_a20;
  ulong local_a10;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined4 local_960;
  ulong local_950;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined4 local_8a0;
  ulong local_890;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined4 local_7e0;
  ulong local_7d0;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined4 local_720;
  ulong local_710;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined4 local_660;
  ulong local_650;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  ulong local_590;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  ulong local_4d0;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined4 local_420;
  ulong local_410;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  ulong local_350;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  ulong local_290;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  ulong local_1d0;
  char local_140 [16];
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  undefined8 local_100 [2];
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined2 local_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulong local_78;
  
  puVar7 = PTR_DAT_0437a668;
  puVar6 = PTR_DAT_0437a660;
  puVar5 = PTR_DAT_043794d0;
  pcVar13 = param_1;
  if (((((uint)*param_3 & 0x7fffffff) < 0x7f800001) &&
      (((uint)((ulong)*param_3 >> 0x20) & 0x7fffffff) < 0x7f800001)) &&
     (((uint)param_3[1] & 0x7fffffff) < 0x7f800001)) {
    if (((((uint)*param_4 & 0x7fffffff) < 0x7f800001) &&
        (((uint)((ulong)*param_4 >> 0x20) & 0x7fffffff) < 0x7f800001)) &&
       (((uint)param_4[1] & 0x7fffffff) < 0x7f800001)) {
      local_140[0] = '\0';
      lVar18 = *(long *)(param_2 + 0xe2f0);
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0xc) != 0) {
          piVar1 = (int *)(lVar18 + 0xc);
          iVar20 = *(int *)(lVar18 + 0xc);
          do {
            plVar19 = *(long **)(lVar18 + 0x10);
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar6 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar19 == (long *)0x0) goto LAB_01a3ff40;
              if (plVar19 == (long *)puVar6) break;
              plVar19 = (long *)*plVar19;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar20) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar20 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_01a3fc90;
              lVar18 = *(long *)(lVar18 + 0x18);
              if (lVar18 != 0) {
                plVar19 = (long *)(lVar18 + -0x50);
                lVar14 = 0;
                do {
                  lVar15 = lVar14 + 0xc0;
                  *(undefined8 *)((long)local_d10 + lVar14) = 0;
                  *(undefined8 *)((long)local_d10 + lVar14 + 0x10) = 0;
                  *(undefined8 *)((long)local_d10 + lVar14 + 0x18) = 0;
                  *(undefined4 *)((long)local_ce0 + lVar14) = 0x7f7fffee;
                  *(undefined8 *)((long)local_ce0 + lVar14 + 8) = 0xffffffffffffffff;
                  *(undefined4 *)((long)local_cd0 + lVar14) = 0xffffff;
                  *(undefined4 *)((long)local_cd0 + lVar14 + 8) = 0xffffffff;
                  local_cc4[lVar14] = 0xf;
                  *(undefined2 *)((long)local_cc0 + lVar14) = 0xffff;
                  *(undefined4 *)((long)local_cc0 + lVar14 + 4) = 0;
                  *(undefined4 *)((long)local_ca8 + lVar14) = 0xffffff;
                  *(undefined4 *)((long)local_ca8 + lVar14 + 8) = 0xffffffff;
                  auStack_c9c[lVar14] = 0xf;
                  *(undefined2 *)((long)local_c98 + lVar14) = 0xffff;
                  *(undefined4 *)((long)local_c98 + lVar14 + 4) = 0;
                  *(undefined8 *)((long)local_d10 + lVar14 + 0x20) = 0;
                  *(undefined8 *)((long)local_d10 + lVar14 + 0x28) = 0;
                  *(undefined8 *)((long)local_c90 + lVar14) = 0;
                  *(undefined8 *)((long)local_c90 + lVar14 + 8) = 0;
                  *(undefined8 *)((long)local_cb8 + lVar14) = 0;
                  *(undefined8 *)((long)local_cb8 + lVar14 + 8) = 0xffffffffffffffff;
                  lVar14 = lVar15;
                } while (lVar15 != 0xc00);
                local_d20 = 0;
                local_c60 = 0;
                local_bb8 = 0;
                local_d30 = 0;
                uStack_d28 = 0;
                local_bc0 = 0;
                local_ba8 = 0;
                local_bb0 = 0;
                local_ba0 = 0;
                local_b00 = 0;
                local_af8 = 0;
                local_af0 = 0;
                local_ae8 = 0;
                local_ae0 = 0;
                local_a20 = 0;
                local_a28 = 0;
                local_a30 = 0;
                local_a38 = 0;
                local_a40 = 0;
                local_960 = 0;
                local_968 = 0;
                local_970 = 0;
                local_978 = 0;
                local_980 = 0;
                local_8a0 = 0;
                local_8a8 = 0;
                local_8b0 = 0;
                local_8b8 = 0;
                local_8c0 = 0;
                local_7e0 = 0;
                local_7e8 = 0;
                local_7f0 = 0;
                local_7f8 = 0;
                local_800 = 0;
                local_720 = 0;
                local_728 = 0;
                local_730 = 0;
                local_738 = 0;
                local_740 = 0;
                local_660 = 0;
                local_668 = 0;
                local_670 = 0;
                local_678 = 0;
                local_680 = 0;
                local_5a0 = 0;
                local_5a8 = 0;
                local_5b0 = 0;
                local_5b8 = 0;
                local_5c0 = 0;
                local_4e0 = 0;
                local_4e8 = 0;
                local_4f0 = 0;
                local_4f8 = 0;
                local_500 = 0;
                local_420 = 0;
                local_428 = 0;
                local_430 = 0;
                local_438 = 0;
                local_440 = 0;
                local_360 = 0;
                local_368 = 0;
                local_370 = 0;
                local_378 = 0;
                local_380 = 0;
                local_2a0 = 0;
                local_2a8 = 0;
                local_2b0 = 0;
                local_2b8 = 0;
                local_2c0 = 0;
                local_1e0 = 0;
                local_1e8 = 0;
                local_1f0 = 0;
                local_1f8 = 0;
                local_200 = 0;
                local_d40 = 0;
                uStack_d38 = 0;
                local_c90[2] = 0;
                local_c90[3] = 0;
                local_c90[4] = 0;
                local_c90[5] = 0;
                uVar8 = FUN_01e4359c(plVar19,param_3,param_4,param_5,&local_d40,0x10);
                if (uVar8 < 0x10) {
                  if (uVar8 != 0) goto LAB_01a404d0;
                }
                else {
                  uVar8 = 0x10;
LAB_01a404d0:
                  uVar17 = 0;
                  puVar16 = local_d10;
                  lVar14 = tpidr_el0;
                  do {
                    local_de0 = puVar16[-2];
                    local_dd8 = puVar16[-1];
                    local_df0 = puVar16[-4];
                    local_de8 = puVar16[-3];
                    local_e00 = puVar16[-6];
                    uStack_df8 = puVar16[-5];
                    FUN_032c7b0c(local_dd0,puVar16);
                    local_d60 = puVar16[0xe];
                    uVar2 = puVar16[0xf];
                    local_d58 = (undefined2)uVar2;
                    uStack_d56 = (undefined2)(uVar2 >> 0x10);
                    uStack_d54 = (undefined4)(uVar2 >> 0x20);
                    local_d48 = puVar16[0x11];
                    uVar2 = puVar16[10];
                    local_d78 = (undefined4)puVar16[0xb];
                    uStack_d74 = (undefined4)(puVar16[0xb] >> 0x20);
                    local_d70 = puVar16[0xc];
                    local_d68 = puVar16[0xd];
                    local_da0 = puVar16[6];
                    local_d98 = puVar16[7];
                    local_d90 = puVar16[8];
                    local_d88 = puVar16[9];
                    local_dc0 = puVar16[2];
                    uStack_db8 = puVar16[3];
                    local_db0 = puVar16[4];
                    uStack_da8 = puVar16[5];
                    local_d80 = (undefined2)uVar2;
                    uStack_d7e = (undefined2)(uVar2 >> 0x10);
                    uStack_d7c = (undefined4)(uVar2 >> 0x20);
                    local_d50 = (undefined4)puVar16[0x10];
                    uStack_d4c = (undefined4)(puVar16[0x10] >> 0x20);
                    uVar11 = (*(code *)*param_6)(param_6 + 4,&local_e00);
                    uVar2 = local_dd0[0];
                    if ((uVar11 & 1) != 0) {
                      local_120 = local_df0;
                      local_118 = local_de8;
                      local_110 = local_de0;
                      local_108 = local_dd8;
                      local_130 = local_e00;
                      local_128 = uStack_df8;
                      if (local_140[0] == '\0') {
                        FUN_032c7b0c(local_100,local_dd0);
                        local_88 = local_d58;
                        uStack_86 = uStack_d56;
                        uStack_84 = uStack_d54;
                        local_78 = local_d48;
                        local_a8 = local_d78;
                        uStack_a4 = uStack_d74;
                        local_90 = local_d60;
                        local_a0 = local_d70;
                        local_98 = local_d68;
                        local_b0 = local_d80;
                        uStack_ae = uStack_d7e;
                        uStack_ac = uStack_d7c;
                        local_d0 = local_da0;
                        local_c8 = local_d98;
                        local_80 = local_d50;
                        uStack_7c = uStack_d4c;
                        local_c0 = local_d90;
                        local_b8 = local_d88;
                        local_f0 = local_dc0;
                        uStack_e8 = uStack_db8;
                        local_e0 = local_db0;
                        uStack_d8 = uStack_da8;
                        local_140[0] = '\x01';
                        uVar2 = local_dd0[0];
                      }
                      else {
                        FUN_032c7e9c(local_100,local_dd0);
                        local_d0 = CONCAT44(local_d0._4_4_,(undefined4)local_da0);
                        uStack_d8 = uStack_da8;
                        local_e0 = local_db0;
                        uStack_e8 = uStack_db8;
                        local_f0 = local_dc0;
                        local_b8._0_5_ = (undefined5)local_d88;
                        local_c8 = local_d98;
                        local_c0 = CONCAT44(local_c0._4_4_,(undefined4)local_d90);
                        uStack_a4 = uStack_d74;
                        local_b0 = local_d80;
                        uStack_ac = uStack_d7c;
                        local_a8 = local_d78;
                        local_a0 = local_d70;
                        local_90._0_5_ = (undefined5)local_d60;
                        local_88 = local_d58;
                        local_98 = CONCAT44(local_98._4_4_,(undefined4)local_d68);
                        uStack_84 = uStack_d54;
                        local_80 = local_d50;
                        uStack_7c = uStack_d4c;
                        local_78 = local_d48;
                        uVar2 = local_dd0[0];
                      }
                    }
                    local_dd0[0] = uVar2;
                    if ((uVar2 & 1) != 0) {
                      lVar15 = *(long *)(lVar14 + 0x38d490);
                      if (lVar15 == 0) {
                        lVar15 = FUN_0333d16c(0,1);
                        *(long *)(lVar14 + 0x38d490) = lVar15;
                      }
                      plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                      *(undefined8 *)(uVar2 - 0x11) = 0;
                      (**(code **)(*plVar10 + 0x18))
                                (plVar10,(undefined8 *)(uVar2 - 0x11),
                                 (long)*(int *)(uVar2 - 9) + 0x10);
                    }
                    uVar17 = uVar17 + 1;
                    puVar16 = puVar16 + 0x18;
                  } while (uVar17 < uVar8);
                }
                if ((local_1d0 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_1d0 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_1d0 - 0x11),
                             (long)*(int *)(local_1d0 - 9) + 0x10);
                }
                if ((local_290 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_290 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_290 - 0x11),
                             (long)*(int *)(local_290 - 9) + 0x10);
                }
                if ((local_350 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_350 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_350 - 0x11),
                             (long)*(int *)(local_350 - 9) + 0x10);
                }
                if ((local_410 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_410 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_410 - 0x11),
                             (long)*(int *)(local_410 - 9) + 0x10);
                }
                if ((local_4d0 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_4d0 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_4d0 - 0x11),
                             (long)*(int *)(local_4d0 - 9) + 0x10);
                }
                if ((local_590 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_590 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_590 - 0x11),
                             (long)*(int *)(local_590 - 9) + 0x10);
                }
                if ((local_650 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_650 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_650 - 0x11),
                             (long)*(int *)(local_650 - 9) + 0x10);
                }
                if ((local_710 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_710 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_710 - 0x11),
                             (long)*(int *)(local_710 - 9) + 0x10);
                }
                if ((local_7d0 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_7d0 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_7d0 - 0x11),
                             (long)*(int *)(local_7d0 - 9) + 0x10);
                }
                if ((local_890 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_890 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_890 - 0x11),
                             (long)*(int *)(local_890 - 9) + 0x10);
                }
                if ((local_950 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_950 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_950 - 0x11),
                             (long)*(int *)(local_950 - 9) + 0x10);
                }
                if ((local_a10 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_a10 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_a10 - 0x11),
                             (long)*(int *)(local_a10 - 9) + 0x10);
                }
                if ((local_ad0 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_ad0 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_ad0 - 0x11),
                             (long)*(int *)(local_ad0 - 9) + 0x10);
                }
                if ((local_b90 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_b90 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_b90 - 0x11),
                             (long)*(int *)(local_b90 - 9) + 0x10);
                }
                if ((local_c50 & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_c50 - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_c50 - 0x11),
                             (long)*(int *)(local_c50 - 9) + 0x10);
                }
                if ((local_d10[0] & 1) != 0) {
                  lVar14 = tpidr_el0;
                  lVar15 = *(long *)(lVar14 + 0x38d490);
                  if (lVar15 == 0) {
                    lVar15 = FUN_0333d16c(0,1);
                    *(long *)(lVar14 + 0x38d490) = lVar15;
                  }
                  plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
                  *(undefined8 *)(local_d10[0] - 0x11) = 0;
                  (**(code **)(*plVar10 + 0x18))
                            (plVar10,(undefined8 *)(local_d10[0] - 0x11),
                             (long)*(int *)(local_d10[0] - 9) + 0x10);
                }
                lVar18 = *(long *)(lVar18 + 8);
                piVar1 = (int *)(lVar18 + 0xc);
                do {
                  iVar20 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar20 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar20 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*plVar19 + 0x20))(plVar19);
                }
              }
              break;
            }
            ClearExclusiveLocal();
LAB_01a3fc90:
            iVar20 = iVar9;
          } while (iVar9 != 0);
        }
LAB_01a3ff40:
        *param_1 = '\0';
        if (local_140[0] == '\0') {
          return;
        }
        *(ulong *)(param_1 + 0x28) = local_118;
        *(ulong *)(param_1 + 0x30) = local_110;
        *(ulong *)(param_1 + 0x18) = local_128;
        *(ulong *)(param_1 + 0x20) = local_120;
        *(ulong *)(param_1 + 0x38) = local_108;
        *(undefined8 *)(param_1 + 0x40) = local_100[0];
        *(ulong *)(param_1 + 0x10) = local_130;
        *(ulong *)(param_1 + 0xb0) = local_90;
        *(ulong *)(param_1 + 0x60) = local_e0;
        *(ulong *)(param_1 + 0x68) = uStack_d8;
        *(ulong *)(param_1 + 0x50) = local_f0;
        *(ulong *)(param_1 + 0x58) = uStack_e8;
        *(ulong *)(param_1 + 0x80) = local_c0;
        *(ulong *)(param_1 + 0x88) = local_b8;
        *(ulong *)(param_1 + 0x70) = local_d0;
        *(ulong *)(param_1 + 0x78) = local_c8;
        *(ulong *)(param_1 + 0xa0) = local_a0;
        *(ulong *)(param_1 + 0xa8) = local_98;
        *(ulong *)(param_1 + 0xb8) = CONCAT44(uStack_84,CONCAT22(uStack_86,local_88));
        *param_1 = '\x01';
        pcVar13 = local_140;
        *(ulong *)(param_1 + 0x90) = CONCAT44(uStack_ac,CONCAT22(uStack_ae,local_b0));
        *(ulong *)(param_1 + 0x98) = CONCAT44(uStack_a4,local_a8);
        *(ulong *)(param_1 + 0xc0) = CONCAT44(uStack_7c,local_80);
        *(ulong *)(param_1 + 200) = local_78;
      }
    }
  }
  *pcVar13 = '\0';
  return;
}


