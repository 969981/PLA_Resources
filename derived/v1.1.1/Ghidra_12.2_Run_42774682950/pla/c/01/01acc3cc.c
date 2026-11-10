/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01acc3cc; name: FUN_01acc3cc
 */


void FUN_01acc3cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 in_q3 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float local_60;
  float fStack_5c;
  long *local_38;
  long *local_28;
  
  uVar22 = in_q3._8_8_;
  uVar20 = in_q3._0_8_;
  if (*(int *)(param_1 + 0x760) != 0) {
    switch(*(int *)(param_1 + 0x760)) {
    case 1:
      *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + 1;
      FUN_01accc58(param_1);
      uVar11 = FUN_01acd64c(param_1);
      if ((uVar11 & 1) == 0) goto LAB_01acc6c4;
      iVar9 = *(int *)(param_1 + 0x7e8);
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_DAT_04379660,PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar15 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar15;
      uVar11 = *(ulong *)(lVar15 + 0x60);
      if (uVar11 != 0) {
        uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          uVar14 = uVar11 - 1 & 0x4e9fd5f8e749f8e3;
        }
        else if (uVar11 < 0x4e9fd5f8e749f8e4) {
          uVar14 = 0;
          if (uVar11 != 0) {
            uVar14 = 0x4e9fd5f8e749f8e3 / uVar11;
          }
          uVar14 = 0x4e9fd5f8e749f8e3 - uVar14 * uVar11;
        }
        else {
          uVar14 = 0x4e9fd5f8e749f8e3;
        }
        plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
        if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
        goto LAB_01acc614;
        if (1 < uVar13) {
          do {
            uVar13 = plVar16[1];
            if (uVar13 == 0x4e9fd5f8e749f8e3) {
              if (plVar16[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acc518;
            }
            else {
              if (uVar11 <= uVar13) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar6 * uVar11;
              }
              if (uVar13 != uVar14) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
          goto LAB_01acc614;
        }
        do {
          if (plVar16[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar16[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acc518;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar14) goto LAB_01acc614;
          plVar16 = (long *)*plVar16;
          iVar10 = 0;
        } while (plVar16 != (long *)0x0);
        goto LAB_01acc684;
      }
LAB_01acc614:
      if (iVar9 < 0) goto LAB_01acc68c;
      goto LAB_01acc7a0;
    case 2:
      goto switchD_01acc434_caseD_2;
    case 3:
      goto switchD_01acc434_caseD_3;
    case 4:
      goto switchD_01acc434_caseD_4;
    default:
      goto switchD_01acc434_default;
    }
  }
LAB_01acc3f0:
  FUN_01accc58(param_1);
  goto switchD_01acc434_default;
switchD_01acc434_caseD_2:
  FUN_01b74a58(param_1,param_1 + 0x5d0);
  FUN_01b75374(param_1);
  FUN_01accc58(param_1);
  *(undefined4 *)(param_1 + 0x760) = 3;
switchD_01acc434_caseD_3:
  uVar11 = FUN_01accef0(param_1);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_01acd64c(param_1);
    if ((uVar11 & 1) == 0) goto LAB_01acc3f0;
    iVar9 = FUN_01acd854(param_1);
    if (iVar9 == 1) {
      *(undefined4 *)(param_1 + 0x760) = 4;
      goto switchD_01acc434_default;
    }
    goto LAB_01acc7a8;
  }
  FUN_01acd104(param_1);
  *(undefined2 *)(param_1 + 0x7ec) = 0x101;
  *(undefined4 *)(param_1 + 0x760) = 5;
switchD_01acc434_caseD_4:
  if (*(char *)(param_1 + 0x7ef) != '\0') goto LAB_01acc7a0;
  if (*(char *)(param_1 + 0x7ed) == '\0') {
    iVar9 = *(int *)(param_1 + 0x7e0);
    *(int *)(param_1 + 0x7e0) = iVar9 + 1;
    if (iVar9 < 10) goto switchD_01acc434_default;
    goto LAB_01acc7a0;
  }
  goto LAB_01acc7b0;
LAB_01acc518:
  plVar16 = (long *)plVar16[3];
  if (plVar16 == (long *)0x0) goto LAB_01acc614;
  plVar1 = plVar16 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar16[0x14];
  if (uVar11 == 0) {
    iVar10 = 0;
  }
  else {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar11 - 1 & 0xe87f6b1613afaa30;
    }
    else if (uVar11 < 0xe87f6b1613afaa31) {
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = 0xe87f6b1613afaa30 / uVar11;
      }
      uVar14 = 0xe87f6b1613afaa30 - uVar14 * uVar11;
    }
    else {
      uVar14 = 0xe87f6b1613afaa30;
    }
    plVar12 = *(long **)(plVar16[0x13] + uVar14 * 8);
    if (plVar12 == (long *)0x0) {
      iVar10 = 0;
    }
    else {
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        iVar10 = 0;
      }
      else if (uVar13 < 2) {
        do {
          if (plVar12[1] == 0xe87f6b1613afaa30) {
            if (plVar12[2] == -0x178094e9ec5055d0) goto LAB_01acc66c;
          }
          else if ((plVar12[1] & uVar11 - 1) != uVar14) {
            iVar10 = 0;
            break;
          }
          plVar12 = (long *)*plVar12;
          iVar10 = 0;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar12[1];
          if (uVar13 == 0xe87f6b1613afaa30) {
            if (plVar12[2] == -0x178094e9ec5055d0) goto LAB_01acc66c;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar6 * uVar11;
            }
            if (uVar13 != uVar14) {
              iVar10 = 0;
              goto LAB_01acc670;
            }
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
        iVar10 = 0;
      }
    }
  }
  goto LAB_01acc670;
LAB_01acc66c:
  iVar10 = (int)plVar12[6];
LAB_01acc670:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 != 0) {
LAB_01acc684:
    if (iVar10 <= iVar9) goto LAB_01acc7a0;
LAB_01acc68c:
    if (*(long *)(param_1 + 0x820) == 0) {
      local_28 = (long *)0x0;
    }
    else {
      FUN_00cfac20(&local_28);
      if (local_28 != (long *)0x0) {
        FUN_009c69bc(&local_38);
        (**(code **)(*local_38 + 0x40))();
        uVar21 = uVar20;
        uVar23 = uVar22;
        if (local_38 != (long *)0x0) {
          lVar15 = local_38[0xb];
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            iVar9 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
        FUN_009c69bc(&local_38,param_1);
        (**(code **)(*local_38 + 0x40))();
        local_60 = (float)uVar21;
        fStack_5c = (float)((ulong)uVar21 >> 0x20);
        if (local_38 != (long *)0x0) {
          lVar15 = local_38[0xb];
          piVar2 = (int *)(lVar15 + 0xc);
          do {
            iVar9 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        local_60 = (float)uVar20 - local_60;
        fStack_5c = (float)((ulong)uVar20 >> 0x20) - fStack_5c;
        fVar17 = (float)uVar22 - (float)uVar23;
        fVar18 = (float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar23 >> 0x20);
        lVar15 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar15;
        uVar11 = *(ulong *)(lVar15 + 0x60);
        fVar24 = 0.0;
        if (uVar11 != 0) {
          uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            uVar14 = uVar11 - 1 & 0x4e9fd5f8e749f8e3;
          }
          else if (uVar11 < 0x4e9fd5f8e749f8e4) {
            uVar14 = 0;
            if (uVar11 != 0) {
              uVar14 = 0x4e9fd5f8e749f8e3 / uVar11;
            }
            uVar14 = 0x4e9fd5f8e749f8e3 - uVar14 * uVar11;
          }
          else {
            uVar14 = 0x4e9fd5f8e749f8e3;
          }
          plVar16 = *(long **)(*(long *)(lVar15 + 0x58) + uVar14 * 8);
          if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
            if (uVar13 < 2) {
              do {
                if (plVar16[1] == 0x4e9fd5f8e749f8e3) {
                  if (plVar16[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acc9f4;
                }
                else if ((plVar16[1] & uVar11 - 1) != uVar14) break;
                plVar16 = (long *)*plVar16;
              } while (plVar16 != (long *)0x0);
            }
            else {
              do {
                uVar13 = plVar16[1];
                if (uVar13 == 0x4e9fd5f8e749f8e3) {
                  if (plVar16[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acc9f4;
                }
                else {
                  if (uVar11 <= uVar13) {
                    uVar6 = 0;
                    if (uVar11 != 0) {
                      uVar6 = uVar13 / uVar11;
                    }
                    uVar13 = uVar13 - uVar6 * uVar11;
                  }
                  if (uVar13 != uVar14) break;
                }
                plVar16 = (long *)*plVar16;
              } while (plVar16 != (long *)0x0);
            }
          }
        }
        goto LAB_01accb60;
      }
    }
    goto LAB_01acc698;
  }
  (**(code **)(*plVar16 + 0x10))();
  if (iVar9 < iVar10) goto LAB_01acc68c;
  goto LAB_01acc7a0;
LAB_01acc9f4:
  plVar16 = (long *)plVar16[3];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar16[0x21];
    fVar24 = 0.0;
    if (uVar11 != 0) {
      uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar11 - 1 & 0xda018a7f17994024;
      }
      else if (uVar11 < 0xda018a7f17994025) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = 0xda018a7f17994024 / uVar11;
        }
        uVar14 = 0xda018a7f17994024 - uVar14 * uVar11;
      }
      else {
        uVar14 = 0xda018a7f17994024;
      }
      plVar12 = *(long **)(plVar16[0x20] + uVar14 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if (plVar12[1] == 0xda018a7f17994024) {
              if (plVar12[2] == -0x25fe7580e866bfdc) goto LAB_01accb48;
            }
            else if ((plVar12[1] & uVar11 - 1) != uVar14) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar12[1];
            if (uVar13 == 0xda018a7f17994024) {
              if (plVar12[2] == -0x25fe7580e866bfdc) goto LAB_01accb48;
            }
            else {
              if (uVar11 <= uVar13) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar13 / uVar11;
                }
                uVar13 = uVar13 - uVar6 * uVar11;
              }
              if (uVar13 != uVar14) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    goto LAB_01accb4c;
  }
  goto LAB_01accb60;
LAB_01accb48:
  fVar24 = *(float *)(plVar12 + 6);
LAB_01accb4c:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_01accb60:
  local_60 = local_60 * local_60;
  fStack_5c = fStack_5c * fStack_5c;
  fVar17 = fVar17 * fVar17;
  fVar18 = fVar18 * fVar18;
  auVar19._4_4_ = fStack_5c;
  auVar19._0_4_ = local_60;
  auVar19._8_4_ = fVar17;
  auVar19._12_4_ = fVar18;
  auVar7._4_4_ = fStack_5c;
  auVar7._0_4_ = local_60;
  auVar7._8_4_ = fVar17;
  auVar7._12_4_ = fVar18;
  auVar19 = NEON_ext(auVar19,auVar7,8,1);
  if (auVar19._0_4_ + local_60 + auVar19._4_4_ + fStack_5c < fVar24 * fVar24) {
LAB_01acc698:
    bVar8 = false;
    bVar4 = false;
  }
  else {
    bVar8 = true;
    bVar4 = true;
  }
  if (local_28 != (long *)0x0) {
    lVar15 = local_28[0xb];
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = bVar8;
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (!bVar4) {
LAB_01acc6c4:
    uVar11 = FUN_01accef0(param_1);
    if ((uVar11 & 1) == 0) goto switchD_01acc434_default;
  }
LAB_01acc7a0:
  FUN_01acd104(param_1);
LAB_01acc7a8:
  *(undefined2 *)(param_1 + 0x7ec) = 0x101;
LAB_01acc7b0:
  *(undefined4 *)(param_1 + 0x760) = 5;
switchD_01acc434_default:
  FUN_01b724a0(param_1,param_2);
  return;
}


