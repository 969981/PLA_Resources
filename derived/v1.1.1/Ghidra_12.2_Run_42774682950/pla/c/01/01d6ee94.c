/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d6ee94; name: FUN_01d6ee94
 */


void FUN_01d6ee94(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  uint *puVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *local_218;
  long *local_210;
  undefined8 local_208;
  long *local_200;
  undefined8 local_1f8;
  long *local_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined8 local_194;
  undefined1 *local_188;
  char *pcStack_180;
  undefined8 local_178;
  long *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  long *local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long local_70 [2];
  
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar22 = *(long *)(param_1 + 0x90);
  if ((lVar22 != 0) && (*(int *)(lVar22 + 0xc) != 0)) {
    piVar1 = (int *)(lVar22 + 0xc);
    iVar13 = *(int *)(lVar22 + 0xc);
    do {
      plVar14 = *(long **)(lVar22 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar16;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01d6eec0;
        if (plVar14 == (long *)puVar10) break;
        plVar14 = (long *)*plVar14;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01d6f544;
        lVar22 = *(long *)(lVar22 + 0x18);
        plVar14 = (long *)(lVar22 + -0x50);
        if (lVar22 != 0) {
          FUN_0199c1ac(&local_78,plVar14);
          if (local_78 != (long *)0x0) {
            lVar19 = *(long *)(param_1 + 0x68);
            (**(code **)(*local_78 + 0x18))(&local_210);
            local_c0 = (long *)0x0;
            pcStack_b8 = (char *)0x0;
            FUN_0198c5c0(&local_c0,&local_210);
            plVar23 = local_210;
            if (local_210 != (long *)0x0) {
              plVar18 = local_210 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_210[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar17;
                local_a0 = (long *)*plVar23;
                FUN_02a44274(lVar17 + 0xd8,&local_a0);
              }
            }
            FUN_0199ce28(&local_210,plVar14);
            FUN_0199d5ec(&local_a0,plVar14);
            FUN_0199f078(&local_88,plVar14);
            lVar19 = FUN_01cf2950(lVar19,*(undefined8 *)(lVar19 + 8),&local_c0,&local_210,&local_a0,
                                  &local_88);
            if (lVar19 != 0) {
              lVar17 = *(long *)(lVar19 + 0x58);
              if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d71158;
              if (*(long *)(lVar17 + 0x10) == 0) {
                uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                *(undefined8 *)(lVar17 + 0x10) = uVar16;
              }
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            plVar18 = *(long **)(param_1 + 0x7f8);
            *(long *)(param_1 + 0x7f8) = lVar19;
            plVar23 = local_88;
            if (plVar18 != (long *)0x0) {
              lVar19 = plVar18[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))();
                plVar23 = local_88;
              }
            }
            local_88 = plVar23;
            if (plVar23 != (long *)0x0) {
              plVar18 = plVar23 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                plVar23[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_70[0] = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,local_70);
              }
            }
            plVar23 = local_a0;
            if (local_a0 != (long *)0x0) {
              plVar18 = local_a0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_a0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_88 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_88);
              }
            }
            plVar23 = local_210;
            if (local_210 != (long *)0x0) {
              plVar18 = local_210 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_210[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_a0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_a0);
              }
            }
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_210 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_210);
              }
            }
            (**(code **)(**(long **)(param_1 + 0x7f8) + 0x10))(&local_210);
            local_c0 = (long *)0x0;
            pcStack_b8 = (char *)0x0;
            FUN_01afeab4(&local_c0,&local_210);
            plVar23 = local_210;
            if (local_210 != (long *)0x0) {
              plVar18 = local_210 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_210[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_a0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_a0);
              }
            }
            FUN_01b01b6c(param_1 + 0x440,&local_c0);
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_210 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_210);
              }
            }
            if (local_78 != (long *)0x0) {
              lVar19 = local_78[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_78 + 0x20))();
              }
            }
          }
          local_210 = (long *)0x0;
          local_1f8 = 0;
          local_1f0 = (long *)0x3f19999a3f4ccccd;
          local_1e8 = 0x3ecccccd3f000000;
          local_1e0 = (long *)0x3dcccccd3e4ccccd;
          local_208 = 0;
          local_200 = (long *)0x0;
          FUN_0199ce28(&local_c0,plVar14);
          FUN_018ff388(&local_210,&local_c0);
          plVar23 = local_c0;
          if (local_c0 != (long *)0x0) {
            plVar18 = local_c0 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_a0 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_a0);
            }
          }
          (**(code **)(**(long **)(param_1 + 0x7f8) + 0x10))(&local_c0);
          local_a0 = (long *)0x0;
          uStack_98 = 0;
          FUN_01afeab4(&local_a0,&local_c0);
          plVar23 = local_c0;
          if (local_c0 != (long *)0x0) {
            plVar18 = local_c0 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_88 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_88);
            }
          }
          FUN_01b01b6c(&local_200,&local_a0);
          plVar23 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar18 = local_a0 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_c0 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_c0);
            }
          }
          local_c0 = (long *)&DAT_817adb705f596ed9;
          pcStack_b8 = "player_controller";
          local_b0 = 0x11;
          local_a8 = (long *)0x0;
          FUN_01cb9e30(&local_a0,&local_c0);
          local_1f0 = local_a0;
          local_1e8 = uStack_98;
          local_1e0 = local_90;
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          plVar23 = (long *)FUN_01d8ad2c(*(long *)(param_1 + 0x68),
                                         *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_210);
          (**(code **)(*plVar23 + 0x10))(&local_c0);
          local_a0 = (long *)0x0;
          uStack_98 = 0;
          FUN_01d844e8(&local_a0,&local_c0);
          plVar23 = local_c0;
          if (local_c0 != (long *)0x0) {
            plVar18 = local_c0 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_88 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_88);
            }
          }
          FUN_01d8b028(param_1 + 0x480,&local_a0);
          plVar23 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar18 = local_a0 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_c0 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_c0);
            }
          }
          plVar23 = local_200;
          if (local_200 != (long *)0x0) {
            plVar18 = local_200 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_200[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_c0 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_c0);
            }
          }
          plVar23 = local_210;
          if (local_210 != (long *)0x0) {
            plVar18 = local_210 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_210[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_c0 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_c0);
            }
          }
          lVar22 = *(long *)(lVar22 + 8);
          piVar1 = (int *)(lVar22 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 != 0) break;
          *(undefined8 *)(lVar22 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          plVar14 = *(long **)(param_1 + 0x808);
          goto joined_r0x01d6fd50;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01d6f544:
      iVar13 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01d6eec0:
  plVar14 = *(long **)(param_1 + 0x808);
joined_r0x01d6fd50:
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x10))(&local_210);
    local_c0 = (long *)0x0;
    pcStack_b8 = (char *)0x0;
    FUN_01d847e8(&local_c0,&local_210);
    plVar14 = local_210;
    if (local_210 != (long *)0x0) {
      plVar23 = local_210 + 1;
      do {
        iVar13 = (int)*plVar23 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        local_210[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_a0 = (long *)*plVar14;
        FUN_02a44274(lVar22 + 0xd8,&local_a0);
      }
    }
    FUN_01b01e6c(param_1 + 0x470,&local_c0);
    plVar14 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar23 = local_c0 + 1;
      do {
        iVar13 = (int)*plVar23 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *(int *)plVar23 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_210 = (long *)*plVar14;
        FUN_02a44274(lVar22 + 0xd8,&local_210);
      }
    }
    lVar22 = *(long *)(param_1 + 0x800);
    plVar14 = (long *)FUN_01b8b3d4(&local_210,*(undefined8 *)(lVar22 + 8));
    if (plVar14 != (long *)0x0) {
      lVar19 = plVar14[0xb];
      if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01d71158;
      if (*(long *)(lVar19 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
        *(undefined8 *)(lVar19 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_88 = plVar14;
    FUN_02a4dad4(lVar22 + 0x70,&local_88);
    if (local_88 == (long *)0x0) {
LAB_01d6f000:
      lVar19 = *(long *)(lVar22 + 0x1a8);
      if (lVar19 == 0) goto LAB_01d6f2d8;
LAB_01d6f008:
      puVar20 = *(undefined8 **)(lVar19 + 0x18);
      if (puVar20 == (undefined8 *)0x0) goto LAB_01d6f2d8;
      puVar15 = (undefined8 *)(**(code **)*puVar20)(puVar20);
      puVar7 = PTR_DAT_043794b8;
      if (((*PTR_DAT_043794b0 & 1) != 0) ||
         (iVar13 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar8 = PTR_DAT_043794c8, iVar13 == 0)) {
        if (puVar15 != (undefined8 *)0x0) goto LAB_01d6f040;
        goto LAB_01d6f2d8;
      }
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar13 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar16;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      *(undefined **)puVar7 = puVar8;
      __cxa_guard_release(PTR_DAT_043794b0);
      if (puVar15 == (undefined8 *)0x0) goto LAB_01d6f2d8;
LAB_01d6f040:
      do {
        if (puVar15 == (undefined8 *)puVar7) {
          plVar23 = puVar20 + -10;
          break;
        }
        puVar15 = (undefined8 *)*puVar15;
        plVar23 = (long *)0x0;
      } while (puVar15 != (undefined8 *)0x0);
    }
    else {
      lVar19 = local_88[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 != 0) goto LAB_01d6f000;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
      lVar19 = *(long *)(lVar22 + 0x1a8);
      if (lVar19 != 0) goto LAB_01d6f008;
LAB_01d6f2d8:
      plVar23 = (long *)0x0;
    }
    (**(code **)(*plVar23 + 0x10))(&local_210);
    local_c0 = (long *)0x0;
    pcStack_b8 = (char *)0x0;
    FUN_0087f944(&local_c0,&local_210);
    plVar23 = local_210;
    if (local_210 != (long *)0x0) {
      plVar18 = local_210 + 1;
      do {
        iVar13 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        local_210[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_a0 = (long *)*plVar23;
        FUN_02a44274(lVar19 + 0xd8,&local_a0);
      }
    }
    FUN_0087fcf0(plVar14 + 0x35,&local_c0);
    plVar23 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar18 = local_c0 + 1;
      do {
        iVar13 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_210 = (long *)*plVar23;
        FUN_02a44274(lVar19 + 0xd8,&local_210);
      }
    }
    (**(code **)(*plVar14 + 0x48))(plVar14,(int)plVar14[0x3d]);
    local_210 = (long *)0x0;
    local_208 = 0;
    FUN_009ad580(&local_210,lVar22 + 0x1b8);
    FUN_0087fff0(plVar14 + 0x37,&local_210);
    plVar23 = local_210;
    if (local_210 != (long *)0x0) {
      plVar18 = local_210 + 1;
      do {
        iVar13 = (int)*plVar18 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *(int *)plVar18 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        local_210[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_c0 = (long *)*plVar23;
        FUN_02a44274(lVar19 + 0xd8,&local_c0);
      }
    }
    FUN_02a4d1f8(plVar14,*(undefined1 *)(lVar22 + 0x1ee));
    (**(code **)(*plVar14 + 0x70))(plVar14);
    local_c8 = *(long **)(param_1 + 0x840);
    if (local_c8 != (long *)0x0) {
      lVar22 = local_c8[0xb];
      if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
LAB_01d71158:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00d7e99c(plVar14,&local_c8,1);
    if (local_c8 != (long *)0x0) {
      lVar22 = local_c8[0xb];
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar22 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
        lVar22 = *(long *)(param_1 + 0x90);
        pbVar5 = PTR_DAT_043794d0;
        puVar20 = (undefined8 *)PTR_DAT_043794d8;
        pbVar6 = PTR_DAT_043796e0;
        puVar15 = (undefined8 *)PTR_DAT_043796e8;
        goto joined_r0x01d6f260;
      }
    }
  }
  lVar22 = *(long *)(param_1 + 0x90);
  pbVar5 = PTR_DAT_043794d0;
  puVar20 = (undefined8 *)PTR_DAT_043794d8;
  pbVar6 = PTR_DAT_043796e0;
  puVar15 = (undefined8 *)PTR_DAT_043796e8;
joined_r0x01d6f260:
  PTR_DAT_043794d0 = pbVar5;
  PTR_DAT_043794d8 = (undefined *)puVar20;
  PTR_DAT_043796e0 = pbVar6;
  PTR_DAT_043796e8 = (undefined *)puVar15;
  if ((lVar22 != 0) && (*(int *)(lVar22 + 0xc) != 0)) {
    piVar1 = (int *)(lVar22 + 0xc);
    iVar13 = *(int *)(lVar22 + 0xc);
    do {
      puVar24 = *(undefined8 **)(lVar22 + 0x10);
      if (((*pbVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar6), iVar12 != 0)) {
        if (((*pbVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar5), iVar12 != 0)) {
          uVar16 = FUN_0087f8f0();
          *puVar20 = uVar16;
          __cxa_guard_release(pbVar5);
        }
        *puVar15 = puVar20;
        __cxa_guard_release(pbVar6);
      }
      while( true ) {
        if (puVar24 == (undefined8 *)0x0) {
          return;
        }
        if (puVar24 == puVar15) break;
        puVar24 = (undefined8 *)*puVar24;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar22 = *(long *)(lVar22 + 0x18);
          plVar14 = (long *)(lVar22 + -0x50);
          if (lVar22 == 0) {
            return;
          }
          FUN_0199c708(&local_88,plVar14);
          (**(code **)(*local_88 + 0x10))(&local_210);
          local_a0 = (long *)0x0;
          uStack_98 = 0;
          FUN_0193d560(&local_a0,&local_210);
          plVar23 = local_210;
          if (local_210 != (long *)0x0) {
            plVar18 = local_210 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_210[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_c0 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_c0);
            }
          }
          if (local_88 == (long *)0x0) {
LAB_01d70228:
            lVar19 = *(long *)(param_1 + 0x818);
          }
          else {
            lVar19 = local_88[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 != 0) goto LAB_01d70228;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
            lVar19 = *(long *)(param_1 + 0x818);
          }
          if (lVar19 != 0) {
            if (((*PTR_DAT_0437a780 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a780);
            }
            lVar19 = *(long *)PTR_DAT_0437a788;
            *(long *)PTR_DAT_0437a790 = lVar19;
            puVar21 = *(uint **)(*(long *)(*(long *)(lVar19 + 0x78) + 400) + 0x250);
            local_210 = (long *)0x0;
            local_1d8 = 0;
            local_1d0 = 0;
            local_1c4 = 0;
            uStack_1c0 = 0;
            local_1e8 = 0;
            local_1e0 = (long *)0x0;
            local_1bc = 0;
            uStack_1b8 = 0;
            local_1f8 = 0;
            local_1f0 = (long *)0x0;
            local_1b4 = 0;
            uStack_1b0 = 0;
            local_208 = 0;
            local_200 = (long *)0x0;
            local_1ac = 0;
            uStack_1a8 = 0;
            local_1a4 = 0;
            uStack_1a0 = 0;
            local_19c = 0;
            uStack_198 = 0;
            local_194 = 0x3f80000000000000;
            local_d8 = (long *)0x0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_188 = &DAT_cbf29ce484222645;
            pcStack_180 = "";
            local_1c8 = 1;
            local_168 = 0;
            uStack_160 = 0;
            local_178 = 0;
            local_170 = (long *)0x0;
            (**(code **)(**(long **)(param_1 + 0x818) + 0x10))(&local_c0);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_00ad3450(&local_88,&local_c0);
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_70[0] = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,local_70);
              }
            }
            FUN_00ad52f4(&local_210,&local_88);
            plVar23 = local_88;
            if (local_88 != (long *)0x0) {
              plVar18 = local_88 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            (**(code **)(**(long **)(param_1 + 0x7f8) + 0x10))(&local_c0);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_01afeab4(&local_88,&local_c0);
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_70[0] = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,local_70);
              }
            }
            FUN_01b01b6c(&local_200,&local_88);
            plVar23 = local_88;
            if (local_88 != (long *)0x0) {
              plVar18 = local_88 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            FUN_01aabb3c(&local_1f0,&local_a0);
            (**(code **)(**(long **)(param_1 + 0x178) + 0x10))(&local_c0);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_01355c20(&local_88,&local_c0);
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_70[0] = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,local_70);
              }
            }
            FUN_00b67cfc(&local_1e0,&local_88);
            plVar23 = local_88;
            if (local_88 != (long *)0x0) {
              plVar18 = local_88 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            local_1d0 = (long)puVar21 + (ulong)*puVar21;
            local_c0 = (long *)&DAT_ae01e829a2f07374;
            local_218 = *(long **)(param_1 + 0x68);
            if (local_218 != (long *)0x0) {
              lVar19 = local_218[0xb];
              if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01d71158;
              if (*(long *)(lVar19 + 0x10) == 0) {
                uVar16 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                *(undefined8 *)(lVar19 + 0x10) = uVar16;
              }
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            FUN_026014a0(&local_78,&local_c0,&local_218);
            if (local_218 != (long *)0x0) {
              lVar19 = local_218[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_218 + 0x20))();
              }
            }
            if (local_78 != (long *)0x0) {
              FUN_02c90b44();
              (**(code **)(*local_78 + 0x10))(&local_c0);
              local_88 = (long *)0x0;
              uStack_80 = 0;
              FUN_00ad3450(&local_88,&local_c0);
              plVar23 = local_c0;
              if (local_c0 != (long *)0x0) {
                plVar18 = local_c0 + 1;
                do {
                  iVar13 = (int)*plVar18 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar4) {
                    *(int *)plVar18 = iVar13;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 == 0) {
                  local_c0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_70[0] = *plVar23;
                  FUN_02a44274(lVar19 + 0xd8,local_70);
                }
              }
              FUN_00ad52f4(&local_d8,&local_88);
              plVar23 = local_88;
              if (local_88 != (long *)0x0) {
                plVar18 = local_88 + 1;
                do {
                  iVar13 = (int)*plVar18 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar4) {
                    *(int *)plVar18 = iVar13;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 == 0) {
                  local_88[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_c0 = (long *)*plVar23;
                  FUN_02a44274(lVar19 + 0xd8,&local_c0);
                }
              }
              if (local_78 != (long *)0x0) {
                lVar19 = local_78[0xb];
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar13 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar13 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_78 + 0x20))();
                }
              }
            }
            (**(code **)(**(long **)(param_1 + 0x838) + 0x10))(&local_c0);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_00ad3450(&local_88,&local_c0);
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_70[0] = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,local_70);
              }
            }
            FUN_00ad52f4(&uStack_1a0,&local_88);
            plVar23 = local_88;
            if (local_88 != (long *)0x0) {
              plVar18 = local_88 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            (**(code **)(**(long **)(param_1 + 0x830) + 0x10))(&local_c0);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_00ad3450(&local_88,&local_c0);
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_70[0] = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,local_70);
              }
            }
            FUN_00ad52f4(&uStack_1b0,&local_88);
            plVar23 = local_88;
            if (local_88 != (long *)0x0) {
              plVar18 = local_88 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            (**(code **)(**(long **)(param_1 + 0x828) + 0x10))(&local_c0);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_00ad3450(&local_88,&local_c0);
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_70[0] = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,local_70);
              }
            }
            FUN_00ad52f4(&uStack_1c0,&local_88);
            plVar23 = local_88;
            if (local_88 != (long *)0x0) {
              plVar18 = local_88 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            local_188 = &DAT_7c08eae870e235e0;
            pcStack_180 = "player";
            local_178 = 6;
            lVar19 = *(long *)(param_1 + 0x68);
            plVar23 = *(long **)(lVar19 + 8);
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528,
               iVar13 != 0)) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar23;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            plVar18 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x3d0,0x10);
            if (plVar18 == (long *)0x0) {
              (**(code **)(*plVar23 + 0xb8))(plVar23);
            }
            FUN_025cf150(plVar18,&local_210);
            plVar18[1] = (long)plVar23;
            plVar18[2] = (long)plVar18;
            plVar18[3] = 0x3d0;
            plVar18[4] = 0x10;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            if (plVar18 != (long *)0x0) {
              lVar17 = plVar18[0xb];
              if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d71158;
              if (*(long *)(lVar17 + 0x10) == 0) {
                uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                *(undefined8 *)(lVar17 + 0x10) = uVar16;
              }
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            plVar23 = (long *)0x0;
            if (plVar18 != (long *)0x0) {
              plVar23 = plVar18 + 9;
            }
            (**(code **)(*plVar23 + 0xb8))(plVar23,lVar19);
            local_c0 = (long *)0x0;
            pcStack_b8 = (char *)0x0;
            FUN_009ad580(&local_c0,lVar19 + 0x318);
            (**(code **)(*plVar23 + 0xc0))(plVar23,&local_c0);
            plVar11 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar2 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar17;
                local_88 = (long *)*plVar11;
                FUN_02a44274(lVar17 + 0xd8,&local_88);
              }
            }
            (**(code **)(*plVar23 + 200))(plVar23,*(undefined1 *)(lVar19 + 0x33b));
            (**(code **)(*plVar23 + 0x90))(plVar23);
            local_88 = plVar18;
            FUN_02a4dad4(lVar19 + 0xf0,&local_88);
            if (local_88 != (long *)0x0) {
              lVar19 = local_88[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_88 + 0x20))();
              }
            }
            if (plVar18 != (long *)0x0) {
              lVar19 = plVar18[0xb];
              if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01d71158;
              if (*(long *)(lVar19 + 0x10) == 0) {
                uVar16 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                *(undefined8 *)(lVar19 + 0x10) = uVar16;
              }
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            plVar23 = *(long **)(param_1 + 0x868);
            *(long **)(param_1 + 0x868) = plVar18;
            if (plVar23 != (long *)0x0) {
              lVar19 = plVar23[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*plVar23 + 0x20))();
              }
            }
            (**(code **)(**(long **)(param_1 + 0x868) + 0x10))(&local_c0);
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_01d841e8(&local_88,&local_c0);
            plVar23 = local_c0;
            if (local_c0 != (long *)0x0) {
              plVar18 = local_c0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_c0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_70[0] = *plVar23;
                FUN_02a44274(lVar19 + 0xd8,local_70);
              }
            }
            FUN_01d8a12c(param_1 + 0x450,&local_88);
            plVar23 = local_88;
            if (local_88 != (long *)0x0) {
              plVar18 = local_88 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            plVar23 = local_d8;
            if (local_d8 != (long *)0x0) {
              plVar18 = local_d8 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_d8[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            FUN_01d84ae8(&local_168);
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x20))();
            }
            puVar20 = (undefined8 *)CONCAT44(local_19c,uStack_1a0);
            if (puVar20 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar20 + 1);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                puVar20[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*puVar20;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            puVar20 = (undefined8 *)CONCAT44(local_1ac,uStack_1b0);
            if (puVar20 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar20 + 1);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                puVar20[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*puVar20;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            puVar20 = (undefined8 *)CONCAT44(local_1bc,uStack_1c0);
            if (puVar20 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar20 + 1);
              do {
                iVar13 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar13 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 + -1 == 0) {
                puVar20[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*puVar20;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            plVar23 = local_1e0;
            if (local_1e0 != (long *)0x0) {
              plVar18 = local_1e0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_1e0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            plVar23 = local_1f0;
            if (local_1f0 != (long *)0x0) {
              plVar18 = local_1f0 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_1f0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            plVar23 = local_200;
            if (local_200 != (long *)0x0) {
              plVar18 = local_200 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_200[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
            plVar23 = local_210;
            if (local_210 != (long *)0x0) {
              plVar18 = local_210 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar4) {
                  *(int *)plVar18 = iVar13;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar13 == 0) {
                local_210[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar19 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar19;
                local_c0 = (long *)*plVar23;
                FUN_02a44274(lVar19 + 0xd8,&local_c0);
              }
            }
          }
          plVar23 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar18 = local_a0 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar4) {
                *(int *)plVar18 = iVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 0) {
              local_a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar19 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar19;
              local_210 = (long *)*plVar23;
              FUN_02a44274(lVar19 + 0xd8,&local_210);
            }
          }
          lVar22 = *(long *)(lVar22 + 8);
          piVar1 = (int *)(lVar22 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar22 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar12;
    } while (iVar12 != 0);
  }
  return;
}


