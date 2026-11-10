/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a9b44; name: FUN_026a9b44
 */


void FUN_026a9b44(long param_1,undefined1 (*param_2) [12])

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong local_50;
  float fStack_48;
  float fStack_44;
  long *local_38;
  
  fStack_48 = (float)*(undefined8 *)(*param_2 + 8);
  fStack_44 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  local_50 = *(ulong *)*param_2;
  auVar9 = *param_2;
  auVar8 = *param_2;
  fVar21 = (float)local_50;
  fVar22 = (float)(local_50 >> 0x20);
  if (*(long *)(param_1 + 0xcb0) != 0) {
    FUN_026b1c3c(&local_38,*(long *)(param_1 + 0xcb0));
    puVar10 = PTR_DAT_04379660;
    if (local_38 != (long *)0x0) {
      if (*(char *)((long)local_38 + 0xc6b) != '\0') {
        if (*(char *)(param_1 + 0xd1e) == '\0') {
          if (*(char *)(param_1 + 0xd1d) == '\0') {
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar17 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar17;
            uVar14 = *(ulong *)(lVar17 + 0x60);
            fVar21 = 0.0;
            if (uVar14 != 0) {
              uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
              uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
              uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar15 < 2) {
                uVar16 = uVar14 - 1 & 0xd37b7a2603d7ef69;
              }
              else if (uVar14 < 0xd37b7a2603d7ef6a) {
                uVar16 = 0;
                if (uVar14 != 0) {
                  uVar16 = 0xd37b7a2603d7ef69 / uVar14;
                }
                uVar16 = 0xd37b7a2603d7ef69 - uVar16 * uVar14;
              }
              else {
                uVar16 = 0xd37b7a2603d7ef69;
              }
              plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
              if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0))
              {
                if (uVar15 < 2) {
                  do {
                    if (plVar18[1] == 0xd37b7a2603d7ef69) {
                      if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026aa7f4;
                    }
                    else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
                else {
                  do {
                    uVar15 = plVar18[1];
                    if (uVar15 == 0xd37b7a2603d7ef69) {
                      if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026aa7f4;
                    }
                    else {
                      if (uVar14 <= uVar15) {
                        uVar5 = 0;
                        if (uVar14 != 0) {
                          uVar5 = uVar15 / uVar14;
                        }
                        uVar15 = uVar15 - uVar5 * uVar14;
                      }
                      if (uVar15 != uVar16) break;
                    }
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
              }
            }
          }
          else {
            if (((*PTR_DAT_04379660 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            lVar17 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar17;
            uVar14 = *(ulong *)(lVar17 + 0x60);
            fVar21 = 0.0;
            if (uVar14 != 0) {
              uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
              uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
              uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar15 < 2) {
                uVar16 = uVar14 - 1 & 0xd37b7a2603d7ef69;
              }
              else if (uVar14 < 0xd37b7a2603d7ef6a) {
                uVar16 = 0;
                if (uVar14 != 0) {
                  uVar16 = 0xd37b7a2603d7ef69 / uVar14;
                }
                uVar16 = 0xd37b7a2603d7ef69 - uVar16 * uVar14;
              }
              else {
                uVar16 = 0xd37b7a2603d7ef69;
              }
              plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
              if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0))
              {
                if (uVar15 < 2) {
                  do {
                    if (plVar18[1] == 0xd37b7a2603d7ef69) {
                      if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026aa02c;
                    }
                    else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
                else {
                  do {
                    uVar15 = plVar18[1];
                    if (uVar15 == 0xd37b7a2603d7ef69) {
                      if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026aa02c;
                    }
                    else {
                      if (uVar14 <= uVar15) {
                        uVar5 = 0;
                        if (uVar14 != 0) {
                          uVar5 = uVar15 / uVar14;
                        }
                        uVar15 = uVar15 - uVar5 * uVar14;
                      }
                      if (uVar15 != uVar16) break;
                    }
                    plVar18 = (long *)*plVar18;
                  } while (plVar18 != (long *)0x0);
                }
              }
            }
          }
        }
        else {
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar17 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar17;
          uVar14 = *(ulong *)(lVar17 + 0x60);
          fVar21 = 0.0;
          if (uVar14 != 0) {
            uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
            uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
            uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar15 < 2) {
              uVar16 = uVar14 - 1 & 0xd37b7a2603d7ef69;
            }
            else if (uVar14 < 0xd37b7a2603d7ef6a) {
              uVar16 = 0;
              if (uVar14 != 0) {
                uVar16 = 0xd37b7a2603d7ef69 / uVar14;
              }
              uVar16 = 0xd37b7a2603d7ef69 - uVar16 * uVar14;
            }
            else {
              uVar16 = 0xd37b7a2603d7ef69;
            }
            plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
            if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
              if (uVar15 < 2) {
                do {
                  if (plVar18[1] == 0xd37b7a2603d7ef69) {
                    if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026aa540;
                  }
                  else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
                  plVar18 = (long *)*plVar18;
                } while (plVar18 != (long *)0x0);
              }
              else {
                do {
                  uVar15 = plVar18[1];
                  if (uVar15 == 0xd37b7a2603d7ef69) {
                    if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026aa540;
                  }
                  else {
                    if (uVar14 <= uVar15) {
                      uVar5 = 0;
                      if (uVar14 != 0) {
                        uVar5 = uVar15 / uVar14;
                      }
                      uVar15 = uVar15 - uVar5 * uVar14;
                    }
                    if (uVar15 != uVar16) break;
                  }
                  plVar18 = (long *)*plVar18;
                } while (plVar18 != (long *)0x0);
              }
            }
          }
        }
        goto LAB_026aa258;
      }
      iVar20 = -(uint)(0.0 < fVar22);
      auVar23._4_4_ = iVar20;
      auVar23._0_4_ = iVar20;
      auVar23._8_4_ = iVar20;
      auVar23._12_4_ = iVar20;
      auVar6._8_4_ = fStack_48;
      auVar6._0_8_ = local_50 & 0xffffffff;
      auVar6._12_4_ = fStack_44;
      auVar7._12_4_ = fStack_44;
      auVar7._0_12_ = auVar8;
      auVar24._12_4_ = fStack_44;
      auVar24._0_12_ = auVar9;
      auVar24 = auVar24 ^ (auVar7 ^ auVar6) & auVar23;
      fVar21 = 0.0;
      fStack_48 = auVar24._8_4_;
      fStack_44 = auVar24._12_4_;
      local_50 = auVar24._0_8_;
      if (*(char *)((long)local_38 + 0xc6d) != '\0') {
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        puVar12 = PTR_DAT_04379670;
        puVar11 = PTR_DAT_04379668;
        lVar17 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar17;
        uVar14 = *(ulong *)(lVar17 + 0x60);
        if (uVar14 != 0) {
          uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
          uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar15 < 2) {
            uVar16 = uVar14 - 1 & 0xd37b7a2603d7ef69;
          }
          else {
            uVar16 = 0xd37b7a2603d7ef69;
            if (uVar14 < 0xd37b7a2603d7ef6a) {
              uVar16 = 0;
              if (uVar14 != 0) {
                uVar16 = 0xd37b7a2603d7ef69 / uVar14;
              }
              uVar16 = 0xd37b7a2603d7ef69 - uVar16 * uVar14;
            }
          }
          plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            if (uVar15 < 2) {
              do {
                if (plVar18[1] == 0xd37b7a2603d7ef69) {
                  if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026a9ca0;
                }
                else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                uVar15 = plVar18[1];
                if (uVar15 == 0xd37b7a2603d7ef69) {
                  if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026a9ca0;
                }
                else {
                  if (uVar14 <= uVar15) {
                    uVar5 = 0;
                    if (uVar14 != 0) {
                      uVar5 = uVar15 / uVar14;
                    }
                    uVar15 = uVar15 - uVar5 * uVar14;
                  }
                  if (uVar15 != uVar16) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
        goto LAB_026aa16c;
      }
      if (*(char *)((long)local_38 + 0xc69) != '\0') {
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar17 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar17;
        uVar14 = *(ulong *)(lVar17 + 0x60);
        fVar21 = 0.0;
        if (uVar14 != 0) {
          uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
          uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar15 < 2) {
            uVar16 = uVar14 - 1 & 0xd37b7a2603d7ef69;
          }
          else if (uVar14 < 0xd37b7a2603d7ef6a) {
            uVar16 = 0;
            if (uVar14 != 0) {
              uVar16 = 0xd37b7a2603d7ef69 / uVar14;
            }
            uVar16 = 0xd37b7a2603d7ef69 - uVar16 * uVar14;
          }
          else {
            uVar16 = 0xd37b7a2603d7ef69;
          }
          plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            if (uVar15 < 2) {
              do {
                if (plVar18[1] == 0xd37b7a2603d7ef69) {
                  if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026a9e4c;
                }
                else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                uVar15 = plVar18[1];
                if (uVar15 == 0xd37b7a2603d7ef69) {
                  if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026a9e4c;
                }
                else {
                  if (uVar14 <= uVar15) {
                    uVar5 = 0;
                    if (uVar14 != 0) {
                      uVar5 = uVar15 / uVar14;
                    }
                    uVar15 = uVar15 - uVar5 * uVar14;
                  }
                  if (uVar15 != uVar16) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
        goto LAB_026aa258;
      }
      goto joined_r0x026aa184;
    }
    goto LAB_026aa1a4;
  }
  if (*(char *)(param_1 + 0xcd0) != '\0') goto LAB_026aa1b4;
  goto LAB_026a9b70;
LAB_026aa540:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_026aa258;
  plVar1 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar14 = plVar18[0x21];
  fVar21 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x73a2272f9f002815;
    }
    else if (uVar14 < 0x73a2272f9f002816) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = 0x73a2272f9f002815 / uVar14;
      }
      uVar16 = 0x73a2272f9f002815 - uVar16 * uVar14;
    }
    else {
      uVar16 = 0x73a2272f9f002815;
    }
    plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x73a2272f9f002815) {
            if (plVar19[2] == 0x73a2272f9f002815) goto LAB_026aa720;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x73a2272f9f002815) {
            if (plVar19[2] == 0x73a2272f9f002815) goto LAB_026aa720;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_026aa728;
LAB_026aa720:
  fVar21 = *(float *)(plVar19 + 6);
LAB_026aa728:
  do {
    iVar20 = (int)*plVar1 + -1;
    bVar13 = iVar20 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar20;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_026aa254;
LAB_026aa7f4:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_026aa258;
  plVar1 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar14 = plVar18[0x21];
  fVar21 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x50d4d270ab089624;
    }
    else if (uVar14 < 0x50d4d270ab089625) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = 0x50d4d270ab089624 / uVar14;
      }
      uVar16 = 0x50d4d270ab089624 - uVar16 * uVar14;
    }
    else {
      uVar16 = 0x50d4d270ab089624;
    }
    plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x50d4d270ab089624) {
            if (plVar19[2] == 0x50d4d270ab089624) goto LAB_026aa93c;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x50d4d270ab089624) {
            if (plVar19[2] == 0x50d4d270ab089624) goto LAB_026aa93c;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_026aa944;
LAB_026aa93c:
  fVar21 = *(float *)(plVar19 + 6);
LAB_026aa944:
  do {
    iVar20 = (int)*plVar1 + -1;
    bVar13 = iVar20 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar20;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_026aa254;
LAB_026aa02c:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_026aa258;
  plVar1 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar14 = plVar18[0x21];
  fVar21 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x2984193eac045165;
    }
    else if (uVar14 < 0x2984193eac045166) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = 0x2984193eac045165 / uVar14;
      }
      uVar16 = 0x2984193eac045165 - uVar16 * uVar14;
    }
    else {
      uVar16 = 0x2984193eac045165;
    }
    plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x2984193eac045165) {
            if (plVar19[2] == 0x2984193eac045165) goto LAB_026aa2d8;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x2984193eac045165) {
            if (plVar19[2] == 0x2984193eac045165) goto LAB_026aa2d8;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_026aa2e0;
LAB_026aa2d8:
  fVar21 = *(float *)(plVar19 + 6);
LAB_026aa2e0:
  do {
    iVar20 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar20;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar20 == 0) goto LAB_026aa2f4;
  goto LAB_026aa258;
LAB_026a9ca0:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar14 = plVar18[0x21];
    fVar21 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0xf17f3f6b8f009a4b;
      }
      else if (uVar14 < 0xf17f3f6b8f009a4c) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0xf17f3f6b8f009a4b / uVar14;
        }
        uVar16 = 0xf17f3f6b8f009a4b - uVar16 * uVar14;
      }
      else {
        uVar16 = 0xf17f3f6b8f009a4b;
      }
      plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar19[1] == 0xf17f3f6b8f009a4b) {
              if (plVar19[2] == -0xe80c09470ff65b5) goto LAB_026aa150;
            }
            else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar19[1];
            if (uVar15 == 0xf17f3f6b8f009a4b) {
              if (plVar19[2] == -0xe80c09470ff65b5) goto LAB_026aa150;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar5 = 0;
                if (uVar14 != 0) {
                  uVar5 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar5 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_026aa158;
  }
  goto LAB_026aa16c;
LAB_026aa150:
  fVar21 = *(float *)(plVar19 + 6);
LAB_026aa158:
  do {
    iVar20 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar20;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_026aa16c:
  fStack_48 = fStack_48 * fVar21;
  fStack_44 = fStack_44 * fVar21;
  local_50 = CONCAT44(auVar24._4_4_ * fVar21,auVar24._0_4_ * fVar21);
  if (*(char *)((long)local_38 + 0xc6f) != '\0') {
    if (((*puVar10 & 1) == 0) && (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar17 = *(long *)puVar11;
    *(long *)puVar12 = lVar17;
    uVar14 = *(ulong *)(lVar17 + 0x60);
    fVar21 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0xd37b7a2603d7ef69;
      }
      else {
        uVar16 = 0xd37b7a2603d7ef69;
        if (uVar14 < 0xd37b7a2603d7ef6a) {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = 0xd37b7a2603d7ef69 / uVar14;
          }
          uVar16 = 0xd37b7a2603d7ef69 - uVar16 * uVar14;
        }
      }
      plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0xd37b7a2603d7ef69) {
              if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026aa3a4;
            }
            else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0xd37b7a2603d7ef69) {
              if (plVar18[2] == -0x2c8485d9fc281097) goto LAB_026aa3a4;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar5 = 0;
                if (uVar14 != 0) {
                  uVar5 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar5 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    goto LAB_026aa258;
  }
  goto joined_r0x026aa184;
LAB_026aa3a4:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_026aa258;
  plVar1 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar14 = plVar18[0x21];
  fVar21 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x28a7857faf2f2fa5;
    }
    else if (uVar14 < 0x28a7857faf2f2fa6) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = 0x28a7857faf2f2fa5 / uVar14;
      }
      uVar16 = 0x28a7857faf2f2fa5 - uVar16 * uVar14;
    }
    else {
      uVar16 = 0x28a7857faf2f2fa5;
    }
    plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x28a7857faf2f2fa5) {
            if (plVar19[2] == 0x28a7857faf2f2fa5) goto LAB_026aa6c0;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x28a7857faf2f2fa5) {
            if (plVar19[2] == 0x28a7857faf2f2fa5) goto LAB_026aa6c0;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_026aa6c8;
LAB_026a9e4c:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar14 = plVar18[0x21];
    fVar21 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0xd43b13840b9b3878;
      }
      else if (uVar14 < 0xd43b13840b9b3879) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0xd43b13840b9b3878 / uVar14;
        }
        uVar16 = 0xd43b13840b9b3878 - uVar16 * uVar14;
      }
      else {
        uVar16 = 0xd43b13840b9b3878;
      }
      plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar19[1] == 0xd43b13840b9b3878) {
              if (plVar19[2] == -0x2bc4ec7bf464c788) goto LAB_026aa23c;
            }
            else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar19[1];
            if (uVar15 == 0xd43b13840b9b3878) {
              if (plVar19[2] == -0x2bc4ec7bf464c788) goto LAB_026aa23c;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar5 = 0;
                if (uVar14 != 0) {
                  uVar5 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar5 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_026aa244;
  }
  goto LAB_026aa258;
LAB_026aa23c:
  fVar21 = *(float *)(plVar19 + 6);
LAB_026aa244:
  do {
    iVar20 = (int)*plVar1 + -1;
    bVar13 = iVar20 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar20;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_026aa254;
LAB_026aa6c0:
  fVar21 = *(float *)(plVar19 + 6);
LAB_026aa6c8:
  do {
    iVar20 = (int)*plVar1 + -1;
    bVar13 = iVar20 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar20;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_026aa254:
  if (bVar13) {
LAB_026aa2f4:
    (**(code **)(*plVar18 + 0x10))();
  }
LAB_026aa258:
  fStack_48 = fStack_48 * fVar21;
  fStack_44 = fStack_44 * fVar21;
  local_50 = CONCAT44((float)(local_50 >> 0x20) * fVar21,(float)local_50 * fVar21);
joined_r0x026aa184:
  if (local_38 != (long *)0x0) {
    lVar17 = local_38[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar20 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
LAB_026aa1a4:
  fVar21 = (float)local_50;
  fVar22 = (float)(local_50 >> 0x20);
  if (*(char *)(param_1 + 0xcd0) == '\0') {
LAB_026a9b70:
    *(undefined1 *)(param_1 + 0xcd0) = 1;
    *(ulong *)(param_1 + 0xce8) = CONCAT44(fStack_44,fStack_48);
    *(ulong *)(param_1 + 0xce0) = CONCAT44(fVar22,fVar21);
  }
  else {
LAB_026aa1b4:
    *(ulong *)(param_1 + 0xce8) =
         CONCAT44(fStack_44 + (float)((ulong)*(undefined8 *)(param_1 + 0xce8) >> 0x20),
                  fStack_48 + (float)*(undefined8 *)(param_1 + 0xce8));
    *(ulong *)(param_1 + 0xce0) =
         CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)(param_1 + 0xce0) >> 0x20),
                  fVar21 + (float)*(undefined8 *)(param_1 + 0xce0));
  }
  return;
}


