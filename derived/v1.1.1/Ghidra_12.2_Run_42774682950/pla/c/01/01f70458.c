/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f70458; name: FUN_01f70458
 */


/* WARNING: Removing unreachable block (ram,0x01f712c4) */

void FUN_01f70458(long param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *extraout_x10;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *local_198;
  long *local_190;
  long *local_188;
  long *local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 auStack_160 [96];
  long *local_100;
  undefined8 uStack_f8;
  long *local_70;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  FUN_017e9e98(&local_188);
  if (local_188 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    plVar23 = (long *)0x0;
    local_190 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_190);
    if (local_190 == (long *)0x0) {
      plVar23 = (long *)0x0;
    }
    else {
      if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
         (uVar17 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar17 == 0)) {
        uVar14 = 0;
        if (*(long *)(param_1 + 0x68) != 0) goto LAB_01f706c8;
LAB_01f70674:
        plVar23 = (long *)0x0;
        local_198 = (long *)0x0;
      }
      else {
        uVar14 = *(undefined8 *)((long)param_3 + uVar17);
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_01f70674;
LAB_01f706c8:
        FUN_009acf14(&local_198);
        if (local_198 == (long *)0x0) {
          plVar23 = (long *)0x0;
        }
        else {
          local_100 = (long *)0x0;
          uStack_f8 = 0;
          FUN_00b645bc(&local_100,local_198 + 0xd);
          plVar23 = local_100;
          puVar8 = PTR_DAT_0437a0f0;
          if (local_100 == (long *)0x0) {
            plVar23 = (long *)0x0;
          }
          else {
            if (*(int *)((long)local_100 + 0xc) != 0) {
              piVar1 = (int *)((long)local_100 + 0xc);
              iVar13 = *(int *)((long)local_100 + 0xc);
              do {
                puVar20 = (undefined8 *)plVar23[2];
                if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar12 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                    uVar15 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)puVar8 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a0e8);
                }
                plVar21 = (long *)0x0;
                if (puVar20 == (undefined8 *)0x0) goto LAB_01f70844;
                while (puVar20 != (undefined8 *)puVar8) {
                  puVar20 = (undefined8 *)*puVar20;
                  if (puVar20 == (undefined8 *)0x0) {
                    plVar21 = (long *)0x0;
                    goto LAB_01f70844;
                  }
                }
                iVar12 = *piVar1;
                if (iVar12 == iVar13) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar13 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    lVar16 = plVar23[3];
                    plVar21 = (long *)0x0;
                    if (lVar16 != 0) {
                      plVar21 = (long *)(lVar16 + -0x50);
                    }
                    goto LAB_01f70844;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar13 = iVar12;
              } while (iVar12 != 0);
            }
            plVar21 = (long *)0x0;
LAB_01f70844:
            plVar23 = local_100;
            puVar8 = PTR_DAT_04379498;
            if (local_100 != (long *)0x0) {
              plVar22 = local_100 + 1;
              do {
                iVar13 = (int)*plVar22 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar5) {
                  *(int *)plVar22 = iVar13;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 == 0) {
                local_100[2] = 0;
                if (((*puVar8 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_180 = (long *)*plVar23;
                FUN_02a44274(lVar16 + 0xd8,&local_180);
              }
            }
            if (plVar21 == (long *)0x0) {
              plVar23 = (long *)0x0;
            }
            else {
              uVar17 = FUN_01845504(plVar21,uVar14);
              puVar9 = PTR_DAT_04379528;
              puVar8 = PTR_DAT_04379520;
              if ((uVar17 & 1) == 0) {
                plVar22 = (long *)*param_4;
                if (plVar22 == (long *)0x0) {
                  if ((*PTR_DAT_04379520 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
                    puVar10 = PTR_DAT_04379528;
                    if (iVar13 != 0) {
                      FUN_008a62a4(PTR_DAT_04379528);
                      FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379520);
                    }
                  }
                  lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
                  if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_01f71348:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = param_2;
                  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
                  plVar22 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x100,0x10);
                  if (plVar22 == (long *)0x0) {
                    (**(code **)(*param_2 + 0xb8))(param_2);
                  }
                  FUN_01c93b44(plVar22,param_3,param_2);
                  plVar22[1] = (long)param_2;
                  plVar22[2] = (long)plVar22;
                  plVar22[3] = 0x100;
                  plVar22[4] = 0x10;
                  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
                  if (plVar22 != (long *)0x0) goto LAB_01f70a20;
                }
                else {
LAB_01f70a20:
                  lVar16 = plVar22[0xb];
                  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f711c0;
                  if (*(long *)(lVar16 + 0x10) == 0) {
                    uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                    *(undefined8 *)(lVar16 + 0x10) = uVar14;
                  }
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                if ((char)plVar22[0x16] == '\0') {
                  plVar23 = (long *)0x0;
                }
                else {
                  lVar16 = local_198[0xf];
                  local_170 = 0;
                  local_168 = 0;
                  local_180 = (long *)0x0;
                  local_178 = (code *)0x0;
                  if (*(char *)(lVar16 + 0x162) == '\0') {
                    uVar17 = *(ulong *)(lVar16 + 0x70);
                    if (uVar17 != 0) {
                      uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
                      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
                      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38;
                      if (uVar18 < 2) {
                        uVar19 = (ulong)((uint)uVar17 - 1) & 0x13;
                      }
                      else {
                        uVar19 = 0x13;
                        if (uVar17 < 0x14) {
                          uVar3 = (uint)uVar17 & 0xff;
                          uVar6 = 0;
                          if ((uVar17 & 0xff) != 0) {
                            uVar6 = 0x13 / uVar3;
                          }
                          uVar19 = (ulong)(0x13 - uVar6 * uVar3);
                        }
                      }
                      plVar23 = *(long **)(*(long *)(lVar16 + 0x68) + uVar19 * 8);
                      if ((plVar23 != (long *)0x0) &&
                         (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
                        if (uVar18 < 2) {
                          do {
                            if (plVar23[1] == 0x13) {
                              if ((int)plVar23[2] == 0x13) goto LAB_01f70e04;
                            }
                            else if ((plVar23[1] & uVar17 - 1) != uVar19) break;
                            plVar23 = (long *)*plVar23;
                          } while (plVar23 != (long *)0x0);
                        }
                        else {
                          do {
                            uVar18 = plVar23[1];
                            if (uVar18 == 0x13) {
                              if ((int)plVar23[2] == 0x13) goto LAB_01f70e04;
                            }
                            else {
                              if (uVar17 <= uVar18) {
                                uVar7 = 0;
                                if (uVar17 != 0) {
                                  uVar7 = uVar18 / uVar17;
                                }
                                uVar18 = uVar18 - uVar7 * uVar17;
                              }
                              if (uVar18 != uVar19) break;
                            }
                            plVar23 = (long *)*plVar23;
                          } while (plVar23 != (long *)0x0);
                        }
                      }
                    }
                    FUN_01f7c2e0();
                    plVar23 = extraout_x10;
LAB_01f70e04:
                    lVar16 = plVar23[7];
                    puVar20 = (undefined8 *)(lVar16 + 0x50);
                    plVar23 = (long *)(**(code **)*puVar20)(puVar20);
                    puVar10 = PTR_DAT_04382cb0;
                    if (((*PTR_DAT_04382ca8 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04382ca8), iVar13 != 0)) {
                      uVar14 = FUN_01e389e0();
                      *(undefined8 *)puVar10 = uVar14;
                      __cxa_guard_release(PTR_DAT_04382ca8);
                    }
                    for (; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
                      if (plVar23 == (long *)puVar10) {
                        plVar23 = *(long **)(lVar16 + 0x68);
                        if ((*puVar8 & 1) == 0) {
                          iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
                          puVar8 = PTR_DAT_04379528;
                          if (iVar13 != 0) {
                            FUN_008a62a4(PTR_DAT_04379528);
                            FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379520);
                          }
                        }
                        lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
                        if (*(ulong *)(lVar16 + 0x80) < 0x10) {
                          *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar23;
                          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
                          lVar16 = (**(code **)(*plVar23 + 0x10))(plVar23,0x140,8);
                          if (lVar16 == 0) {
                            (**(code **)(*plVar23 + 0xb8))(plVar23);
                    /* WARNING: Subroutine does not return */
                            FUN_00bd32e0(0);
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_00bd32e0();
                        }
                        goto LAB_01f71348;
                      }
                    }
                  }
                  pcVar11 = local_178;
                  local_70 = (long *)0x0;
                  if (local_178 != (code *)0x0) {
                    local_170 = 0;
                    local_168 = 0;
                    local_180 = (long *)0x0;
                    local_178 = (code *)0x0;
                    (*pcVar11)(auStack_160);
                  }
                  plVar23 = local_70;
                  local_70 = (long *)0x0;
                }
                if (plVar22 != (long *)0x0) {
                  lVar16 = plVar22[0xb];
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    iVar13 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar13 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar16 + 0x18) = 0;
                    (**(code **)(*plVar22 + 0x20))(plVar22);
                  }
                }
              }
              else {
                if (*(ushort *)((long)param_3 - (long)*param_3) < 9) {
                  local_100 = (long *)0x0;
                }
                else {
                  uVar17 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4];
                  local_100 = (long *)0x0;
                  if (uVar17 != 0) {
                    puVar2 = (uint *)((long)param_3 + uVar17);
                    local_100 = (long *)((long)puVar2 + (ulong)*puVar2);
                  }
                }
                FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
                (**(code **)(*local_180 + 0x18))(&local_100);
                if ((char)local_100 == '\0') {
                  FUN_01847304(plVar21,uVar14);
                  if ((char)local_100 != '\0') goto LAB_01f70ab0;
                }
                else {
LAB_01f70ab0:
                  local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
                }
                plVar23 = local_180;
                local_180 = (long *)0x0;
                if (plVar23 != (long *)0x0) {
                  FUN_02bcbe58(&local_100,0);
                  (**(code **)(*plVar23 + 8))(plVar23);
                  uVar15 = local_168;
                  uVar14 = local_170;
                  pcVar11 = local_178;
                  uVar17 = (**(code **)(*(long *)local_178 + 0xc0))(local_178);
                  lVar16 = tpidr_el0;
                  if ((uVar17 & 1) == 0) {
LAB_01f70c20:
                    (**(code **)(*(long *)pcVar11 + 0x18))(pcVar11,plVar23,uVar14,uVar15);
                  }
                  else {
                    if (*(char *)(lVar16 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar16 + 0x38d488) = 1;
                      *(undefined8 *)(lVar16 + 0x38d478) = 0;
                      *(undefined8 *)(lVar16 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_01f70c20;
                    FUN_02bcc824(pcVar11,plVar23,uVar14,uVar15);
                  }
                  if (*(char *)(lVar16 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar16 + 0x38d488) = 1;
                    *(undefined8 *)(lVar16 + 0x38d478) = 0;
                    *(undefined8 *)(lVar16 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  iVar13 = *(int *)(lVar16 + 0x38d480) + -1;
                  *(int *)(lVar16 + 0x38d480) = iVar13;
                  if (iVar13 == 0) {
                    FUN_02bcc320();
                    if (*(char *)(lVar16 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar16 + 0x38d488) = 1;
                      *(undefined8 *)(lVar16 + 0x38d478) = 0;
                      *(undefined8 *)(lVar16 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    *(undefined4 *)(lVar16 + 0x38d484) = 0;
                  }
                }
                plVar23 = (long *)0x0;
              }
              lVar16 = plVar21[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*plVar21 + 0x20))(plVar21);
              }
            }
          }
          if (local_198 != (long *)0x0) {
            lVar16 = local_198[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_198 + 0x20))();
            }
          }
        }
      }
      if (local_190 != (long *)0x0) {
        lVar16 = local_190[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_190 + 0x20))();
        }
      }
    }
  }
  if (local_188 != (long *)0x0) {
    lVar16 = local_188[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
    }
  }
  if (plVar23 == (long *)0x0) {
    return;
  }
  lVar16 = plVar23[0xb];
  if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar14 = *(undefined8 *)(param_1 + 0x98);
    lVar16 = plVar23[0xb];
    local_100 = plVar23;
    if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar15;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_01cbc9e0(uVar14,&local_100,0);
      if (local_100 != (long *)0x0) {
        lVar16 = local_100[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
      }
      lVar16 = plVar23[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
      lVar16 = plVar23[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar23 + 0x20))(plVar23);
        return;
      }
      return;
    }
  }
LAB_01f711c0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


