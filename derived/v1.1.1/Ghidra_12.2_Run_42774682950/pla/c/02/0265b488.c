/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0265b488; name: FUN_0265b488
 */


undefined1  [16] FUN_0265b488(undefined1 param_1 [16],long *param_2)

{
  long *plVar1;
  byte bVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 extraout_s0;
  float fVar23;
  undefined4 extraout_var;
  float fVar25;
  undefined4 extraout_var_00;
  undefined4 uVar24;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar22 [16];
  undefined4 extraout_var_01;
  undefined1 auVar29 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  uStack_58 = param_1._8_8_;
  local_60 = param_1._0_8_;
  pfVar3 = (float *)param_2[1];
  uVar9 = ((undefined8 *)*param_2)[1];
  uVar8 = *(undefined8 *)*param_2;
  fVar20 = (float)uVar8 * *pfVar3;
  fVar23 = (float)((ulong)uVar8 >> 0x20) * pfVar3[1];
  fVar25 = (float)uVar9 * pfVar3[2];
  fVar27 = (float)((ulong)uVar9 >> 0x20) * pfVar3[3];
  auVar29._4_4_ = fVar23;
  auVar29._0_4_ = fVar20;
  auVar29._8_4_ = fVar25;
  auVar29._12_4_ = fVar27;
  auVar7._4_4_ = fVar23;
  auVar7._0_4_ = fVar20;
  auVar7._8_4_ = fVar25;
  auVar7._12_4_ = fVar27;
  auVar29 = NEON_ext(auVar29,auVar7,8,1);
  fVar20 = auVar29._0_4_ + fVar20 + auVar29._4_4_ + fVar23;
  if (fVar20 <= -1.0) {
    fVar20 = -1.0;
  }
  if (1.0 < fVar20) {
    fVar20 = 1.0;
  }
  fVar23 = (float)FUN_0095d8f0(fVar20);
  puVar10 = PTR_DAT_04379660;
  fVar20 = -fVar23;
  if (0.0 <= fVar23) {
    fVar20 = fVar23;
  }
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar12 = PTR_DAT_04379670;
  puVar11 = PTR_DAT_04379668;
  lVar17 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar17;
  uVar14 = *(ulong *)(lVar17 + 0x60);
  fVar23 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x6a437d1436c47a27;
    }
    else {
      uVar16 = 0x6a437d1436c47a27;
      if (uVar14 < 0x6a437d1436c47a28) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x6a437d1436c47a27 / uVar14;
        }
        uVar16 = 0x6a437d1436c47a27 - uVar16 * uVar14;
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == 0x6a437d1436c47a27) {
            if (plVar18[2] == 0x6a437d1436c47a27) goto LAB_0265b5b0;
          }
          else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == 0x6a437d1436c47a27) {
            if (plVar18[2] == 0x6a437d1436c47a27) goto LAB_0265b5b0;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar6 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_0265b70c:
  bVar2 = *puVar10;
  if (fVar23 < fVar20) {
    if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar17 = *(long *)puVar11;
    *(long *)puVar12 = lVar17;
    uVar14 = *(ulong *)(lVar17 + 0x60);
    fVar20 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0x6a437d1436c47a27;
      }
      else {
        uVar16 = 0x6a437d1436c47a27;
        if (uVar14 < 0x6a437d1436c47a28) {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = 0x6a437d1436c47a27 / uVar14;
          }
          uVar16 = 0x6a437d1436c47a27 - uVar16 * uVar14;
        }
      }
      plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0x6a437d1436c47a27) {
              if (plVar18[2] == 0x6a437d1436c47a27) goto LAB_0265bb68;
            }
            else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0x6a437d1436c47a27) {
              if (plVar18[2] == 0x6a437d1436c47a27) goto LAB_0265bb68;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar6 * uVar14;
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
    if (((bVar2 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar17 = *(long *)puVar11;
    *(long *)puVar12 = lVar17;
    uVar14 = *(ulong *)(lVar17 + 0x60);
    fVar20 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0x6a437d1436c47a27;
      }
      else {
        uVar16 = 0x6a437d1436c47a27;
        if (uVar14 < 0x6a437d1436c47a28) {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = 0x6a437d1436c47a27 / uVar14;
          }
          uVar16 = 0x6a437d1436c47a27 - uVar16 * uVar14;
        }
      }
      plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0x6a437d1436c47a27) {
              if (plVar18[2] == 0x6a437d1436c47a27) goto LAB_0265b7b0;
            }
            else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0x6a437d1436c47a27) {
              if (plVar18[2] == 0x6a437d1436c47a27) goto LAB_0265b7b0;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar6 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
  }
LAB_0265b90c:
  fVar23 = (float)FUN_026cc74c(param_2[2],&local_60);
  if (fVar20 < fVar23) {
    if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar17 = *(long *)puVar11;
    *(long *)puVar12 = lVar17;
    uVar14 = *(ulong *)(lVar17 + 0x60);
    fVar25 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0x6a437d1436c47a27;
      }
      else {
        uVar16 = 0x6a437d1436c47a27;
        if (uVar14 < 0x6a437d1436c47a28) {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = 0x6a437d1436c47a27 / uVar14;
          }
          uVar16 = 0x6a437d1436c47a27 - uVar16 * uVar14;
        }
      }
      plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + uVar16 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar18[1] == 0x6a437d1436c47a27) {
              if (plVar18[2] == 0x6a437d1436c47a27) goto LAB_0265b9f4;
            }
            else if ((plVar18[1] & uVar14 - 1) != uVar16) break;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar18[1];
            if (uVar15 == 0x6a437d1436c47a27) {
              if (plVar18[2] == 0x6a437d1436c47a27) goto LAB_0265b9f4;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar6 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
LAB_0265bce8:
    fVar27 = fVar23 - fVar25;
    if (fVar23 <= fVar20 + fVar25) {
      fVar27 = fVar20;
    }
    FUN_009c6b1c(fVar27 / fVar23,param_2[2],&local_60);
    uVar21 = extraout_s0;
    uVar24 = extraout_var;
    uVar26 = extraout_var_00;
    uVar28 = extraout_var_01;
  }
  else {
    uVar26 = (undefined4)uStack_58;
    uVar28 = (undefined4)((ulong)uStack_58 >> 0x20);
    uVar21 = (undefined4)local_60;
    uVar24 = (undefined4)((ulong)local_60 >> 0x20);
  }
  auVar22._4_4_ = uVar24;
  auVar22._0_4_ = uVar21;
  auVar22._8_4_ = uVar26;
  auVar22._12_4_ = uVar28;
  return auVar22;
LAB_0265b5b0:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar14 = plVar18[0x21];
    fVar23 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0x61aed7392ea1d91;
      }
      else if (uVar14 < 0x61aed7392ea1d92) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0x61aed7392ea1d91 / uVar14;
        }
        uVar16 = 0x61aed7392ea1d91 - uVar16 * uVar14;
      }
      else {
        uVar16 = 0x61aed7392ea1d91;
      }
      plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar19[1] == 0x61aed7392ea1d91) {
              if (plVar19[2] == 0x61aed7392ea1d91) goto LAB_0265b6f4;
            }
            else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar19[1];
            if (uVar15 == 0x61aed7392ea1d91) {
              if (plVar19[2] == 0x61aed7392ea1d91) goto LAB_0265b6f4;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar6 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_0265b6f8;
  }
  goto LAB_0265b70c;
LAB_0265b6f4:
  fVar23 = *(float *)(plVar19 + 6);
LAB_0265b6f8:
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
  goto LAB_0265b70c;
LAB_0265bb68:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_0265b90c;
  plVar1 = plVar18 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar14 = plVar18[0x21];
  fVar20 = 0.0;
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & 0x99adb6f16ad97377;
    }
    else if (uVar14 < 0x99adb6f16ad97378) {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = 0x99adb6f16ad97377 / uVar14;
      }
      uVar16 = 0x99adb6f16ad97377 - uVar16 * uVar14;
    }
    else {
      uVar16 = 0x99adb6f16ad97377;
    }
    plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x99adb6f16ad97377) {
            if (plVar19[2] == -0x6652490e95268c89) goto LAB_0265bd54;
          }
          else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x99adb6f16ad97377) {
            if (plVar19[2] == -0x6652490e95268c89) goto LAB_0265bd54;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar6 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_0265bd58;
LAB_0265bd54:
  fVar20 = *(float *)(plVar19 + 6);
LAB_0265bd58:
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
LAB_0265bd6c:
    (**(code **)(*plVar18 + 0x10))();
  }
  goto LAB_0265b90c;
LAB_0265b7b0:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar14 = plVar18[0x21];
    fVar20 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0xd133bea1e53e92f0;
      }
      else if (uVar14 < 0xd133bea1e53e92f1) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0xd133bea1e53e92f0 / uVar14;
        }
        uVar16 = 0xd133bea1e53e92f0 - uVar16 * uVar14;
      }
      else {
        uVar16 = 0xd133bea1e53e92f0;
      }
      plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar19[1] == 0xd133bea1e53e92f0) {
              if (plVar19[2] == -0x2ecc415e1ac16d10) goto LAB_0265b8f4;
            }
            else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar19[1];
            if (uVar15 == 0xd133bea1e53e92f0) {
              if (plVar19[2] == -0x2ecc415e1ac16d10) goto LAB_0265b8f4;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar6 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_0265b8f8;
  }
  goto LAB_0265b90c;
LAB_0265b8f4:
  fVar20 = *(float *)(plVar19 + 6);
LAB_0265b8f8:
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 != 0) goto LAB_0265b90c;
  goto LAB_0265bd6c;
LAB_0265b9f4:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar14 = plVar18[0x21];
    fVar25 = 0.0;
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & 0xc8f4cf8946198ddf;
      }
      else if (uVar14 < 0xc8f4cf8946198de0) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = 0xc8f4cf8946198ddf / uVar14;
        }
        uVar16 = 0xc8f4cf8946198ddf - uVar16 * uVar14;
      }
      else {
        uVar16 = 0xc8f4cf8946198ddf;
      }
      plVar19 = *(long **)(plVar18[0x20] + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar19[1] == 0xc8f4cf8946198ddf) {
              if (plVar19[2] == -0x370b3076b9e67221) goto LAB_0265bcd0;
            }
            else if ((plVar19[1] & uVar14 - 1) != uVar16) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar19[1];
            if (uVar15 == 0xc8f4cf8946198ddf) {
              if (plVar19[2] == -0x370b3076b9e67221) goto LAB_0265bcd0;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar6 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_0265bcd4;
  }
  goto LAB_0265bce8;
LAB_0265bcd0:
  fVar25 = *(float *)(plVar19 + 6);
LAB_0265bcd4:
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
  goto LAB_0265bce8;
}


