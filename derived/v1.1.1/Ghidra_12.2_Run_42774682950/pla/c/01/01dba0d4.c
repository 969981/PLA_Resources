/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dba0d4; name: FUN_01dba0d4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01dba0d4(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long *local_260;
  undefined8 *puStack_258;
  undefined8 local_250;
  undefined8 *puStack_248;
  long *local_240;
  undefined4 local_238;
  long *local_230;
  undefined8 *local_228;
  undefined1 *local_220;
  undefined8 *local_218;
  long *local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  ulong local_1e0;
  code *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  puVar10 = PTR_DAT_0437a0f0;
  puVar9 = PTR_DAT_0437a0e8;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x80);
  if (lVar15 != 0) {
    lVar20 = *(long *)(param_1 + 0x120);
    if (*(int *)(lVar15 + 0xc) != 0) {
      piVar1 = (int *)(lVar15 + 0xc);
      iVar13 = *(int *)(lVar15 + 0xc);
      do {
        puVar21 = *(undefined8 **)(lVar15 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            uVar19 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar19;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        if (puVar21 == (undefined8 *)0x0) {
          return 0;
        }
        while (puVar21 != (undefined8 *)puVar10) {
          puVar21 = (undefined8 *)*puVar21;
          if (puVar21 == (undefined8 *)0x0) {
            return 0;
          }
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
            lVar15 = *(long *)(lVar15 + 0x18);
            plVar18 = (long *)(lVar15 + -0x50);
            if (lVar15 == 0) {
              return 0;
            }
            pcVar16 = *(char **)(lVar20 + 0xd8);
            uVar19 = *(undefined8 *)(lVar20 + 0xb8);
            if (*pcVar16 == '\0') {
              FUN_02a4754c(&local_a0,&DAT_04250928);
            }
            else {
              local_a0 = *(undefined8 *)(lVar20 + 0xd0);
              local_90 = *(undefined8 *)(lVar20 + 0xe0);
              local_88 = *(long **)(lVar20 + 0xe8);
              pcStack_98 = pcVar16;
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x18))();
              }
            }
            FUN_01845684(&local_230,plVar18,uVar19,&local_a0);
            plVar14 = *(long **)(param_1 + 0x68);
            *(undefined8 *)(param_1 + 0x68) = 0;
            if (plVar14 != (long *)0x0) {
              lVar17 = plVar14[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
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
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar14 + 0x20))();
              }
            }
            plVar14 = local_230;
            local_230 = (long *)0x0;
            *(long **)(param_1 + 0x68) = plVar14;
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
              plVar14 = *(long **)(param_1 + 0x68);
            }
            plVar14[0x1b] = *(long *)(lVar20 + 0x108);
            plVar14[0x1a] = *(long *)(lVar20 + 0x100);
            *(undefined1 *)(plVar14 + 0x1c) = 1;
            if ((*(char *)(lVar20 + 0x220) == '\0') || (*(int *)(lVar20 + 0x224) == 0)) {
LAB_01dba260:
              cVar3 = *(char *)(lVar20 + 0x230);
            }
            else {
              uVar19 = FUN_01dbb19c(*(undefined8 *)(param_1 + 0x68),uVar19,lVar20 + 0x224);
              FUN_01dbcbb8((long *)(param_1 + 0x130),uVar19);
              if (*(char *)(lVar20 + 0x228) == '\0') goto LAB_01dba260;
              *(undefined1 *)(*(long *)(param_1 + 0x130) + 0x1f5) = 0;
              cVar3 = *(char *)(lVar20 + 0x230);
            }
            if (cVar3 != '\0') {
              if (*(char *)(lVar20 + 0x250) == '\0') {
                if (*(char *)(lVar20 + 0x310) == '\0') {
                  if (*(char *)(lVar20 + 0x3e0) == '\0') goto LAB_01dba268;
                  local_b8 = *(long **)(param_1 + 0x68);
                  if (local_b8 != (long *)0x0) {
                    lVar17 = local_b8[0xb];
                    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01dbace0;
                    if (*(long *)(lVar17 + 0x10) == 0) {
                      uVar19 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                      *(undefined8 *)(lVar17 + 0x10) = uVar19;
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
                  FUN_01c6cebc(&local_230,param_1,&local_b8,lVar20 + 0x3f0);
                  plVar14 = *(long **)(param_1 + 0x138);
                  *(undefined8 *)(param_1 + 0x138) = 0;
                  if (plVar14 != (long *)0x0) {
                    lVar17 = plVar14[0xb];
                    piVar1 = (int *)(lVar17 + 0xc);
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
                      *(undefined8 *)(lVar17 + 0x18) = 0;
                      (**(code **)(*plVar14 + 0x20))();
                    }
                  }
                  plVar14 = local_230;
                  local_230 = (long *)0x0;
                  *(long **)(param_1 + 0x138) = plVar14;
                  if (local_b8 != (long *)0x0) {
                    lVar17 = local_b8[0xb];
                    piVar1 = (int *)(lVar17 + 0xc);
                    do {
                      bVar11 = *piVar1 + -1 == 0;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = *piVar1 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      plVar14 = local_b8;
                    } while (cVar3 != '\0');
                    goto LAB_01dba69c;
                  }
                }
                else {
                  local_b0 = *(long **)(param_1 + 0x68);
                  if (local_b0 != (long *)0x0) {
                    lVar17 = local_b0[0xb];
                    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01dbace0;
                    if (*(long *)(lVar17 + 0x10) == 0) {
                      uVar19 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                      *(undefined8 *)(lVar17 + 0x10) = uVar19;
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
                  FUN_01ca7348(&local_230,param_1,&local_b0,lVar20 + 800);
                  plVar14 = *(long **)(param_1 + 0x138);
                  *(undefined8 *)(param_1 + 0x138) = 0;
                  if (plVar14 != (long *)0x0) {
                    lVar17 = plVar14[0xb];
                    piVar1 = (int *)(lVar17 + 0xc);
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
                      *(undefined8 *)(lVar17 + 0x18) = 0;
                      (**(code **)(*plVar14 + 0x20))();
                    }
                  }
                  plVar14 = local_230;
                  local_230 = (long *)0x0;
                  *(long **)(param_1 + 0x138) = plVar14;
                  if (local_b0 != (long *)0x0) {
                    lVar17 = local_b0[0xb];
                    piVar1 = (int *)(lVar17 + 0xc);
                    do {
                      bVar11 = *piVar1 + -1 == 0;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = *piVar1 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      plVar14 = local_b0;
                    } while (cVar3 != '\0');
                    goto LAB_01dba69c;
                  }
                }
              }
              else {
                local_a8 = *(long **)(param_1 + 0x68);
                if (local_a8 != (long *)0x0) {
                  lVar17 = local_a8[0xb];
                  if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01dbace0;
                  if (*(long *)(lVar17 + 0x10) == 0) {
                    uVar19 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                    *(undefined8 *)(lVar17 + 0x10) = uVar19;
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
                FUN_01c6ba38(&local_230,param_1,&local_a8,lVar20 + 0x260);
                plVar14 = *(long **)(param_1 + 0x138);
                *(undefined8 *)(param_1 + 0x138) = 0;
                if (plVar14 != (long *)0x0) {
                  lVar17 = plVar14[0xb];
                  piVar1 = (int *)(lVar17 + 0xc);
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
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    (**(code **)(*plVar14 + 0x20))();
                  }
                }
                plVar14 = local_230;
                local_230 = (long *)0x0;
                *(long **)(param_1 + 0x138) = plVar14;
                if (local_a8 != (long *)0x0) {
                  lVar17 = local_a8[0xb];
                  piVar1 = (int *)(lVar17 + 0xc);
                  do {
                    bVar11 = *piVar1 + -1 == 0;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    plVar14 = local_a8;
                  } while (cVar3 != '\0');
LAB_01dba69c:
                  local_230 = (long *)0x0;
                  if (bVar11) {
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    (**(code **)(*plVar14 + 0x20))();
                  }
                }
              }
              plVar14 = *(long **)(param_1 + 0x138);
              if (plVar14 != (long *)0x0) {
                local_1e0 = local_1e0 & 0xffffffffffffff00;
                local_228 = (undefined8 *)0x0;
                local_1f0 = (undefined8 *)0x0;
                uStack_1e8 = 0;
                local_200 = 0;
                uStack_1f8 = 0;
                local_210 = (long *)0x0;
                local_208 = (undefined8 *)0x0;
                local_220 = (undefined1 *)0x0;
                local_218 = (undefined8 *)0x0;
                local_230 = (long *)CONCAT44(local_230._4_4_,*(undefined4 *)(lVar20 + 0x240));
                lVar17 = plVar14[0xb];
                local_c0 = plVar14;
                if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_01dbace0:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar17 + 0x10) == 0) {
                  uVar19 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
                  *(undefined8 *)(lVar17 + 0x10) = uVar19;
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
                FUN_01e4b6a0(&local_c0,&local_230);
                puVar21 = local_1f0;
                if (local_c0 != (long *)0x0) {
                  lVar17 = local_c0[0xb];
                  piVar1 = (int *)(lVar17 + 0xc);
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
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    (**(code **)(*local_c0 + 0x20))();
                    puVar21 = local_1f0;
                  }
                }
                local_1f0 = puVar21;
                if (puVar21 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar21 + 1);
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
                    puVar21[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar17 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar17;
                    local_260 = (long *)*puVar21;
                    FUN_02a44274(lVar17 + 0xd8,&local_260);
                  }
                }
                puVar21 = local_208;
                if (local_208 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_208 + 1);
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
                    local_208[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar17 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar17;
                    local_260 = (long *)*puVar21;
                    FUN_02a44274(lVar17 + 0xd8,&local_260);
                  }
                }
                puVar21 = local_218;
                if (local_218 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_218 + 1);
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
                    local_218[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar17 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar17;
                    local_260 = (long *)*puVar21;
                    FUN_02a44274(lVar17 + 0xd8,&local_260);
                  }
                }
                puVar21 = local_228;
                if (local_228 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_228 + 1);
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
                    local_228[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar17 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar17;
                    local_260 = (long *)*puVar21;
                    FUN_02a44274(lVar17 + 0xd8,&local_260);
                    cVar3 = *(char *)(lVar20 + 0x4b0);
                    goto joined_r0x01dba8bc;
                  }
                }
              }
            }
LAB_01dba268:
            cVar3 = *(char *)(lVar20 + 0x4b0);
joined_r0x01dba8bc:
            if ((cVar3 != '\0') && (**(char **)(lVar20 + 0x4c0) != '\0')) {
              local_210 = (long *)0x0;
              local_208 = (undefined8 *)((ulong)local_208 & 0xffffffff00000000);
              local_220 = &DAT_03996322;
              local_218 = (undefined8 *)0x0;
              uVar6 = (ulong)local_200 >> 0x10;
              local_200 = CONCAT62((int6)uVar6,0x101);
              local_1f0 = (undefined8 *)0x0;
              local_d0 = (long *)0x0;
              local_230 = (long *)0x0;
              local_228 = (undefined8 *)&DAT_cbf29ce484222645;
              local_1e0 = 0;
              local_1d8 = (code *)0x0;
              local_1d0 = 0;
              uStack_1c8 = 0;
              local_160 = 0;
              local_158 = (code *)0x0;
              local_150 = 0;
              uStack_148 = 0;
              local_e0 = 0;
              uStack_d8 = 0;
              FUN_00adcc04(&local_260,lVar20 + 0x4b8);
              plVar14 = local_230;
              local_230 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x20))();
              }
              plVar14 = local_210;
              local_230 = local_260;
              local_260 = (long *)0x0;
              local_228 = puStack_258;
              local_220 = (undefined1 *)local_250;
              local_218 = puStack_248;
              local_210 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x20))();
              }
              local_210 = local_240;
              local_240 = (long *)0x0;
              local_208 = (undefined8 *)CONCAT44(local_208._4_4_,local_238);
              if (local_260 != (long *)0x0) {
                (**(code **)(*local_260 + 0x20))();
              }
              local_e0 = *(undefined8 *)(lVar20 + 0x4d8);
              lVar20 = FUN_00b07bcc(*(long *)(param_1 + 0x68),
                                    *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_230);
              local_260 = (long *)0x0;
              puStack_258 = (undefined8 *)0x0;
              FUN_008802f0(&local_260,lVar20 + 0x58);
              local_80 = (long *)0x0;
              uStack_78 = 0;
              FUN_00880560(&local_80,&local_260);
              plVar14 = local_260;
              if (local_260 != (long *)0x0) {
                plVar2 = local_260 + 1;
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
                  local_260[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar20 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar20;
                  local_70[0] = *plVar14;
                  FUN_02a44274(lVar20 + 0xd8,local_70);
                }
              }
              local_260 = (long *)0x0;
              puStack_258 = (undefined8 *)0x0;
              FUN_00ab3c84(&local_260,&local_80);
              plVar14 = local_80;
              if (local_80 != (long *)0x0) {
                plVar2 = local_80 + 1;
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
                  local_80[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar20 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar20;
                  local_70[0] = *plVar14;
                  FUN_02a44274(lVar20 + 0xd8,local_70);
                }
              }
              FUN_00ab196c(param_1 + 0x140,&local_260);
              plVar14 = local_260;
              if (local_260 != (long *)0x0) {
                plVar2 = local_260 + 1;
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
                  local_260[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar20 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar20;
                  local_80 = (long *)*plVar14;
                  FUN_02a44274(lVar20 + 0xd8,&local_80);
                }
              }
              if (local_d0 != (long *)0x0) {
                plVar14 = local_d0 + 10;
                do {
                  iVar13 = (int)*plVar14 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar4) {
                    *(int *)plVar14 = iVar13;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar13 == 0) {
                  (**(code **)(*local_d0 + 0x10))();
                }
              }
              pcVar5 = local_158;
              if (local_158 == (code *)0x0) {
                local_158 = (code *)0x0;
                pcVar5 = local_1d8;
              }
              else {
                local_150 = 0;
                uStack_148 = 0;
                local_160 = 0;
                local_158 = (code *)0x0;
                (*pcVar5)(auStack_140);
                pcVar5 = local_1d8;
              }
              local_1d8 = (code *)0x0;
              if (pcVar5 != (code *)0x0) {
                local_1d0 = 0;
                uStack_1c8 = 0;
                local_1e0 = 0;
                local_1d8 = (code *)0x0;
                (*pcVar5)(auStack_1c0);
              }
              if (local_210 != (long *)0x0) {
                (**(code **)(*local_210 + 0x20))();
              }
              if (local_230 != (long *)0x0) {
                (**(code **)(*local_230 + 0x20))();
              }
            }
            lVar15 = *(long *)(lVar15 + 8);
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 == 1) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
            return 1;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar12;
        if (iVar12 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


