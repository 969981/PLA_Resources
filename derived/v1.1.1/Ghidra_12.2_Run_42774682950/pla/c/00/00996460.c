/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00996460; name: FUN_00996460
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00996460(undefined1 param_1 [16],undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,ulong param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined4 uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *local_1b8;
  undefined8 uStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  undefined8 uStack_190;
  long *local_188;
  long *local_180 [2];
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined2 local_138;
  undefined8 local_136;
  undefined4 local_12e;
  undefined8 local_12a;
  undefined8 local_122;
  undefined8 local_11a;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_10a;
  undefined1 local_100 [8];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b0;
  undefined2 local_ac;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78 [3];
  
  puVar8 = PTR_DAT_04379578;
  uStack_88 = param_1._8_8_;
  local_90 = param_1._0_8_;
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379578), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar10 = PTR_DAT_04379588;
  puVar9 = PTR_DAT_04379580;
  lVar20 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar20;
  FUN_0098f80c(&local_98,lVar20 + 0xd8);
  if (local_98 != (long *)0x0) {
    plVar21 = (long *)local_98[0x13];
    if (plVar21 != (long *)0x0) {
      lVar20 = plVar21[0xb];
      if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar20 + 0x10) == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
        *(undefined8 *)(lVar20 + 0x10) = uVar17;
      }
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_f0 = 0;
      local_e8 = (undefined8 *)0x0;
      local_d0 = local_90;
      uStack_c8 = uStack_88;
      local_ac = 0x101;
      local_160 = 0xffffffffffffffff;
      local_158 = 0x3ffffffff;
      local_148 = 0x38a;
      local_144 = 0xff000100000000;
      local_13c = 0xffffffff;
      local_138 = 0x1ff;
      local_110 = 0xffff;
      local_f8 = (undefined8 *)0x0;
      local_e0 = 0;
      local_b0 = 0;
      local_170 = 0;
      local_168 = 0;
      local_150 = 0xffffffffffffffff;
      local_10c = 0;
      local_10a = 0xffff01000100;
      local_12e = 0xffffffff;
      local_136 = 0xffffffffffffffff;
      local_12a = 0;
      local_122 = 0;
      local_11a = 0;
      local_100[0] = (char)param_4;
      local_c0 = param_2;
      local_148 = FUN_02c5be48(param_5);
      uVar13 = FUN_02c5be50(param_5);
      local_144 = CONCAT62(local_144._2_6_,uVar13);
      uVar13 = FUN_02c624c8(param_5);
      local_144 = CONCAT26(uVar13,(undefined6)local_144);
      local_158 = 0x1ffffffff;
      uVar12 = FUN_02c628e4(param_5);
      local_10a = CONCAT17(uVar12,(undefined7)local_10a) & 0x1ffffffffffffff;
      uVar12 = FUN_02c628dc(param_5);
      local_10a = CONCAT17(local_10a._7_1_,CONCAT16(uVar12,(undefined6)local_10a)) &
                  0xff01ffffffffffff;
      uVar19 = 0;
      if ((param_6 & 1) == 0) {
        uVar19 = 8;
      }
      FUN_0199cf64(local_180,local_98);
      plVar2 = local_180[0];
      puVar11 = PTR_DAT_0437a108;
      puVar5 = local_e8;
      if (local_180[0] != (long *)0x0) {
        if (*(int *)((long)local_180[0] + 0xc) != 0) {
          piVar1 = (int *)((long)local_180[0] + 0xc);
          iVar14 = *(int *)((long)local_180[0] + 0xc);
          do {
            plVar22 = (long *)plVar2[2];
            if (((*PTR_DAT_0437a110 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a110), iVar16 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar16 != 0)) {
                uVar17 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar17;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar11 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a110);
            }
            plVar6 = (long *)0x0;
            plVar7 = local_180[0];
            if (plVar22 == (long *)0x0) goto joined_r0x009968b8;
            while (plVar22 != (long *)puVar11) {
              plVar22 = (long *)*plVar22;
              if (plVar22 == (long *)0x0) {
                plVar6 = (long *)0x0;
                goto joined_r0x009968b8;
              }
            }
            iVar16 = *piVar1;
            if (iVar16 == iVar14) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar14 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar20 = plVar2[3];
                plVar6 = (long *)0x0;
                if (lVar20 != 0) {
                  plVar6 = (long *)(lVar20 + -0x50);
                }
                goto joined_r0x009968b8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar14 = iVar16;
          } while (iVar16 != 0);
        }
        plVar6 = (long *)0x0;
        plVar7 = local_180[0];
joined_r0x009968b8:
        local_180[0] = plVar7;
        if (plVar7 != (long *)0x0) {
          plVar2 = plVar7 + 1;
          do {
            iVar14 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar14;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar14 == 0) {
            plVar7[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_198 = (undefined8 *)*plVar7;
            FUN_02a44274(lVar20 + 0xd8,&local_198);
          }
        }
        puVar5 = local_e8;
        if (plVar6 != (long *)0x0) {
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379578), iVar14 != 0))
          {
            FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379578);
          }
          *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
          FUN_00954898(local_180);
          if (local_180[0] == (long *)0x0) {
            local_188 = (long *)0x0;
          }
          else {
            FUN_009b3e90(&local_188);
            if (local_188 != (long *)0x0) {
              local_198 = (undefined8 *)0x0;
              uStack_190 = 0;
              FUN_009ab200(&local_198,local_188 + 0x68);
              puVar5 = local_198;
              if (local_198 != (undefined8 *)0x0) {
                if (*(int *)((long)local_198 + 0xc) != 0) {
                  piVar1 = (int *)((long)local_198 + 0xc);
                  iVar14 = *(int *)((long)local_198 + 0xc);
                  while (uVar18 = FUN_009b4090(puVar5[2]), (uVar18 & 1) != 0) {
                    iVar16 = *piVar1;
                    if (iVar16 == iVar14) {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar14 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') {
                        lVar20 = puVar5[3];
                        plVar2 = (long *)0x0;
                        puVar5 = local_198;
                        if (lVar20 != 0) {
                          plVar2 = (long *)(lVar20 + -0x50);
                        }
                        goto joined_r0x00996ec0;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar14 = iVar16;
                    if (iVar16 == 0) break;
                  }
                }
                plVar2 = (long *)0x0;
                puVar5 = local_198;
joined_r0x00996ec0:
                local_198 = puVar5;
                if (puVar5 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar5 + 1);
                  do {
                    iVar14 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar14 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar14 + -1 == 0) {
                    puVar5[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar20 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar20;
                    local_78[0] = *puVar5;
                    FUN_02a44274(lVar20 + 0xd8,local_78);
                  }
                }
                if (plVar2 != (long *)0x0) {
                  FUN_018dcf2c(plVar2);
                  lVar20 = plVar2[0xb];
                  piVar1 = (int *)(lVar20 + 0xc);
                  do {
                    iVar14 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar14 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar14 + -1 == 0) {
                    *(undefined8 *)(lVar20 + 0x18) = 0;
                    (**(code **)(*plVar2 + 0x20))(plVar2);
                  }
                }
              }
              local_1a8 = (long *)0x0;
              uStack_1a0 = 0;
              FUN_0095e070(&local_1a8,local_180);
              FUN_017e4c08(plVar6,&local_1a8);
              plVar2 = local_1a8;
              if (local_1a8 != (long *)0x0) {
                plVar22 = local_1a8 + 1;
                do {
                  iVar14 = (int)*plVar22 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar4) {
                    *(int *)plVar22 = iVar14;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar14 == 0) {
                  local_1a8[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar20 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar20;
                  local_198 = (undefined8 *)*plVar2;
                  FUN_02a44274(lVar20 + 0xd8,&local_198);
                }
              }
              if (local_188 != (long *)0x0) {
                lVar20 = local_188[0xb];
                piVar1 = (int *)(lVar20 + 0xc);
                do {
                  iVar14 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar14 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar20 + 0x18) = 0;
                  (**(code **)(*local_188 + 0x20))();
                }
              }
            }
          }
          uVar12 = *(undefined1 *)(param_3 + 0x568);
          uVar17 = FUN_00923c80(*(undefined8 *)(param_3 + 0x330));
          uVar15 = FUN_009270c4(uVar17,param_4);
          FUN_017e4070(&local_198,plVar6,uVar15,param_5,&local_170,&local_90,uVar19,uVar12,1);
          FUN_0095a500(&local_e8,&local_198);
          puVar5 = local_198;
          if (local_198 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_198 + 1);
            do {
              iVar14 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar14 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 + -1 == 0) {
              local_198[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar20 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar20;
              local_78[0] = *puVar5;
              FUN_02a44274(lVar20 + 0xd8,local_78);
            }
          }
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379578), iVar14 != 0))
          {
            FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379578);
          }
          uVar17 = *(undefined8 *)puVar9;
          local_1b8 = (long *)0x0;
          uStack_1b0 = 0;
          *(undefined8 *)puVar10 = uVar17;
          FUN_0095e070(&local_1b8,&local_e8);
          FUN_00956f0c(uVar17,&local_1b8);
          plVar2 = local_1b8;
          if (local_1b8 != (long *)0x0) {
            plVar22 = local_1b8 + 1;
            do {
              iVar14 = (int)*plVar22 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar4) {
                *(int *)plVar22 = iVar14;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 == 0) {
              local_1b8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar20 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar20;
              local_198 = (undefined8 *)*plVar2;
              FUN_02a44274(lVar20 + 0xd8,&local_198);
            }
          }
          if (*(ulong *)(param_3 + 0x140) < *(ulong *)(param_3 + 0x148)) {
            FUN_009b8a48(param_3 + 0x150,*(ulong *)(param_3 + 0x140),local_100);
            *(long *)(param_3 + 0x140) = *(long *)(param_3 + 0x140) + 0x60;
            plVar2 = local_180[0];
          }
          else {
            FUN_009b89a4(param_3 + 0x138,local_100);
            plVar2 = local_180[0];
          }
          if (plVar2 != (long *)0x0) {
            plVar22 = plVar2 + 1;
            do {
              iVar14 = (int)*plVar22 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar4) {
                *(int *)plVar22 = iVar14;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar14 == 0) {
              plVar2[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar20 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar20;
              local_198 = (undefined8 *)*plVar2;
              FUN_02a44274(lVar20 + 0xd8,&local_198);
            }
          }
          lVar20 = plVar6[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar14 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar5 = local_e8;
          if (iVar14 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
            puVar5 = local_e8;
          }
        }
      }
      local_e8 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_170 = *puVar5;
          FUN_02a44274(lVar20 + 0xd8,&local_170);
        }
      }
      puVar5 = local_f8;
      if (local_f8 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_f8 + 1);
        do {
          iVar14 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          local_f8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_170 = *puVar5;
          FUN_02a44274(lVar20 + 0xd8,&local_170);
        }
      }
      lVar20 = plVar21[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
    }
    if (local_98 != (long *)0x0) {
      lVar20 = local_98[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar14 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
  }
  return;
}


