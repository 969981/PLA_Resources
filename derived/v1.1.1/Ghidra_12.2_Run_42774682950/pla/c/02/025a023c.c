/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a023c; name: FUN_025a023c
 */


void FUN_025a023c(long param_1,uint param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long *local_68;
  
  puVar7 = PTR_DAT_04379558;
  if (*(long *)(param_1 + 0xe8) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar9 = PTR_DAT_04379568;
  puVar8 = PTR_DAT_04379560;
  lVar17 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar17;
  plVar25 = *(long **)(lVar17 + 0x228);
  if (plVar25 != (long *)0x0) {
    lVar17 = plVar25[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_025a126c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar20 = ((long *)plVar25[0x37])[1];
  if (uVar20 != 0) {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar18 = *(ulong *)(param_1 + 0x68);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar20 - 1 & uVar18;
    }
    else if (uVar18 < uVar20) {
      uVar22 = uVar18;
    }
    else {
      uVar22 = 0;
      if (uVar20 != 0) {
        uVar22 = uVar18 / uVar20;
      }
      uVar22 = uVar18 - uVar22 * uVar20;
    }
    plVar23 = *(long **)(*(long *)plVar25[0x37] + uVar22 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar21 < 2) {
        do {
          if (plVar23[1] == uVar18) {
            if (plVar23[2] == uVar18) goto LAB_025a03e8;
          }
          else if ((plVar23[1] & uVar20 - 1) != uVar22) goto LAB_025a038c;
          plVar23 = (long *)*plVar23;
          bVar12 = false;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar23[1];
          if (uVar21 == uVar18) {
            if (plVar23[2] == uVar18) goto LAB_025a03e8;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar6 = 0;
              if (uVar20 != 0) {
                uVar6 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar6 * uVar20;
            }
            if (uVar21 != uVar22) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
LAB_025a038c:
        bVar12 = false;
      }
      goto joined_r0x025a03f4;
    }
  }
  bVar12 = false;
LAB_025a03f8:
  lVar17 = plVar25[0xb];
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
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
joined_r0x025a0414:
  if (!bVar12) {
    return;
  }
  iVar13 = *(int *)(param_1 + 0x70);
  if (iVar13 == 3) {
    uVar20 = *(ulong *)(param_1 + 0x98);
    if (uVar20 != 0) {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar18 = *(ulong *)(param_1 + 0x80);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar20 - 1 & uVar18;
      }
      else if (uVar18 < uVar20) {
        uVar22 = uVar18;
      }
      else {
        uVar22 = 0;
        if (uVar20 != 0) {
          uVar22 = uVar18 / uVar20;
        }
        uVar22 = uVar18 - uVar22 * uVar20;
      }
      plVar25 = *(long **)(*(long *)(param_1 + 0x90) + uVar22 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar25[1] == uVar18) {
              if (plVar25[2] == uVar18) goto LAB_025a0ccc;
            }
            else if ((plVar25[1] & uVar20 - 1) != uVar22) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar25[1];
            if (uVar21 == uVar18) {
              if (plVar25[2] == uVar18) goto LAB_025a0ccc;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar6 * uVar20;
              }
              if (uVar21 != uVar22) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
LAB_025a0cd8:
    FUN_025a1b64(param_1,param_2 & 1);
    iVar13 = 3;
joined_r0x025a0ce8:
    if ((param_2 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x130) == iVar13) {
      return;
    }
    *(int *)(param_1 + 0x130) = iVar13;
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379690), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
    FUN_0286b878(&local_68);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_90 = (long *)CONCAT71(local_90._1_7_,2);
    local_90 = (long *)CONCAT44(*(undefined4 *)(param_1 + 0x130),(undefined4)local_90);
    uStack_88 = 0;
    FUN_01468dd0(local_68,&local_90);
    if (local_68 == (long *)0x0) {
      return;
    }
    lVar17 = local_68[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
      return;
    }
    return;
  }
  iVar14 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = iVar14 + -1;
  puVar11 = PTR_DAT_0437eee0;
  puVar10 = PTR_DAT_04379660;
  if (iVar13 == 0) {
    if (iVar14 + -1 != 0 && 0 < iVar14) {
      return;
    }
    lVar17 = *(long *)(param_1 + 0x138);
    if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
      piVar1 = (int *)(lVar17 + 0xc);
      iVar13 = *(int *)(lVar17 + 0xc);
      do {
        plVar25 = *(long **)(lVar17 + 0x10);
        if (((*PTR_DAT_0437eed8 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_0437eed8), iVar14 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar14 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar15;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar11 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437eed8);
        }
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_025a0da8;
          if (plVar25 == (long *)puVar11) break;
          plVar25 = (long *)*plVar25;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar13) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar17 = *(long *)(lVar17 + 0x18);
            if (lVar17 != 0) {
              if (((*puVar7 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379558);
              }
              lVar19 = *(long *)puVar8;
              *(long *)puVar9 = lVar19;
              plVar25 = *(long **)(lVar19 + 0x228);
              if (plVar25 == (long *)0x0) goto LAB_025a11a8;
              lVar19 = plVar25[0xb];
              if (*(undefined8 **)(lVar19 + 0x18) != (undefined8 *)0x0) {
                if (*(long *)(lVar19 + 0x10) == 0) {
                  uVar15 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                  *(undefined8 *)(lVar19 + 0x10) = uVar15;
                }
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar12) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
LAB_025a11a8:
                plVar23 = (long *)(lVar17 + -0x50);
                uVar20 = ((long *)plVar25[0x37])[1];
                if (uVar20 == 0) {
LAB_025a13fc:
                  if (((8 < *(uint *)(lVar17 + 0x70)) ||
                      ((1 << (ulong)(*(uint *)(lVar17 + 0x70) & 0x1f) & 0x1a0U) == 0)) &&
                     ((uVar16 = *(uint *)(lVar17 + 100), 8 < uVar16 ||
                      ((1 << (ulong)(uVar16 & 0x1f) & 0x1a0U) == 0)))) goto LAB_025a1394;
                  FUN_02599534(plVar23,0);
                  bVar12 = false;
                }
                else {
                  uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
                  uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
                  uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar21 < 2) {
                    uVar18 = uVar20 - 1 & 0x226c40e88a0e7419;
                  }
                  else if (uVar20 < 0x226c40e88a0e741a) {
                    uVar18 = 0;
                    if (uVar20 != 0) {
                      uVar18 = 0x226c40e88a0e7419 / uVar20;
                    }
                    uVar18 = 0x226c40e88a0e7419 - uVar18 * uVar20;
                  }
                  else {
                    uVar18 = 0x226c40e88a0e7419;
                  }
                  plVar24 = *(long **)(*(long *)plVar25[0x37] + uVar18 * 8);
                  if ((plVar24 == (long *)0x0) ||
                     (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0)) goto LAB_025a13fc;
                  if (uVar21 < 2) {
                    do {
                      if (plVar24[1] == 0x226c40e88a0e7419) {
                        if (plVar24[2] == 0x226c40e88a0e7419) goto LAB_025a1384;
                      }
                      else if ((plVar24[1] & uVar20 - 1) != uVar18) break;
                      plVar24 = (long *)*plVar24;
                    } while (plVar24 != (long *)0x0);
                    goto LAB_025a13fc;
                  }
                  while( true ) {
                    uVar21 = plVar24[1];
                    if (uVar21 != 0x226c40e88a0e7419) {
                      if (uVar20 <= uVar21) {
                        uVar22 = 0;
                        if (uVar20 != 0) {
                          uVar22 = uVar21 / uVar20;
                        }
                        uVar21 = uVar21 - uVar22 * uVar20;
                      }
                      if (uVar21 == uVar18) goto LAB_025a1260;
                      goto LAB_025a13fc;
                    }
                    if (plVar24[2] == 0x226c40e88a0e7419) break;
LAB_025a1260:
                    plVar24 = (long *)*plVar24;
                    if (plVar24 == (long *)0x0) goto LAB_025a13fc;
                  }
LAB_025a1384:
                  if ((char)plVar24[3] == '\0') goto LAB_025a13fc;
                  uVar16 = 0;
LAB_025a1394:
                  FUN_02599534(plVar23,uVar16);
                  bVar12 = true;
                }
                if (plVar25 != (long *)0x0) {
                  lVar19 = plVar25[0xb];
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
                    (**(code **)(*plVar25 + 0x20))(plVar25);
                  }
                }
                lVar17 = *(long *)(lVar17 + 8);
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
                  (**(code **)(*plVar23 + 0x20))(plVar23);
                }
                if (!bVar12) break;
                uVar20 = FUN_025a1490(param_1,param_2 & 1);
                if ((uVar20 & 1) == 0) {
                  return;
                }
                iVar13 = 0;
                *(undefined4 *)(param_1 + 0x134) = 0;
                goto joined_r0x025a0ce8;
              }
              goto LAB_025a126c;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar14;
      } while (iVar14 != 0);
    }
LAB_025a0da8:
    FUN_025a00b4(param_1);
    return;
  }
  if (iVar13 != 2) {
    if (iVar13 != 1) {
      return;
    }
    if (iVar14 < 2) {
      FUN_025a14d8(param_1,param_2 & 1);
      iVar13 = 1;
      goto joined_r0x025a0ce8;
    }
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar17 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar17;
    uVar20 = *(ulong *)(lVar17 + 0x60);
    if (uVar20 != 0) {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar18 = uVar20 - 1 & 0xe61d0118e24b8e78;
      }
      else if (uVar20 < 0xe61d0118e24b8e79) {
        uVar18 = 0;
        if (uVar20 != 0) {
          uVar18 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar18 = 0xe61d0118e24b8e78 - uVar18 * uVar20;
      }
      else {
        uVar18 = 0xe61d0118e24b8e78;
      }
      plVar25 = *(long **)(*(long *)(lVar17 + 0x58) + uVar18 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar25[1] == 0xe61d0118e24b8e78) {
              if (plVar25[2] == -0x19e2fee71db47188) goto LAB_025a06d0;
            }
            else if ((plVar25[1] & uVar20 - 1) != uVar18) goto LAB_025a07fc;
            plVar25 = (long *)*plVar25;
            iVar13 = 0;
          } while (plVar25 != (long *)0x0);
LAB_025a0b3c:
          iVar14 = *(int *)(param_1 + 0x134);
          goto joined_r0x025a0804;
        }
        do {
          uVar21 = plVar25[1];
          if (uVar21 == 0xe61d0118e24b8e78) {
            if (plVar25[2] == -0x19e2fee71db47188) goto LAB_025a06d0;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar22 = 0;
              if (uVar20 != 0) {
                uVar22 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar22 * uVar20;
            }
            if (uVar21 != uVar18) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
LAB_025a07fc:
    iVar13 = 0;
    iVar14 = *(int *)(param_1 + 0x134);
joined_r0x025a0804:
    if (iVar14 != 0) {
      return;
    }
    if (iVar13 < *(int *)(param_1 + 0x74)) {
      return;
    }
    FUN_025a1828(param_1,*(undefined8 *)(param_1 + 0x80),param_2 & 1);
    *(undefined4 *)(param_1 + 0x134) = 1;
    return;
  }
  if (iVar14 < 2) {
    if (*(undefined1 **)(param_1 + 0x80) != &DAT_cbf29ce484222645) {
      FUN_025a6678(param_1,*(undefined1 **)(param_1 + 0x80),param_2 & 1);
    }
    *(undefined4 *)(param_1 + 0x70) = 3;
    return;
  }
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar17 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar17;
  uVar20 = *(ulong *)(lVar17 + 0x60);
  if (uVar20 == 0) {
LAB_025a07cc:
    iVar13 = 0;
    bVar2 = *puVar10;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar18 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar18 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar18 = 0;
        if (uVar20 != 0) {
          uVar18 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar18 = 0xe61d0118e24b8e78 - uVar18 * uVar20;
      }
    }
    plVar25 = *(long **)(*(long *)(lVar17 + 0x58) + uVar18 * 8);
    if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0))
    goto LAB_025a07cc;
    if (1 < uVar21) {
      do {
        uVar21 = plVar25[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar25[2] == -0x19e2fee71db47188) goto LAB_025a0528;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar22 = 0;
            if (uVar20 != 0) {
              uVar22 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar22 * uVar20;
          }
          if (uVar21 != uVar18) break;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
      goto LAB_025a07cc;
    }
    do {
      if (plVar25[1] == 0xe61d0118e24b8e78) {
        if (plVar25[2] == -0x19e2fee71db47188) goto LAB_025a0528;
      }
      else if ((plVar25[1] & uVar20 - 1) != uVar18) goto LAB_025a07cc;
      plVar25 = (long *)*plVar25;
      iVar13 = 0;
    } while (plVar25 != (long *)0x0);
LAB_025a0874:
    bVar2 = *puVar10;
  }
  if (((bVar2 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar7;
  *(long *)puVar8 = lVar17;
  uVar20 = *(ulong *)(lVar17 + 0x60);
  if (uVar20 != 0) {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar18 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar18 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar18 = 0;
        if (uVar20 != 0) {
          uVar18 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar18 = 0xe61d0118e24b8e78 - uVar18 * uVar20;
      }
    }
    plVar25 = *(long **)(*(long *)(lVar17 + 0x58) + uVar18 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar21 < 2) {
        do {
          if (plVar25[1] == 0xe61d0118e24b8e78) {
            if (plVar25[2] == -0x19e2fee71db47188) goto LAB_025a090c;
          }
          else if ((plVar25[1] & uVar20 - 1) != uVar18) goto LAB_025a0a08;
          plVar25 = (long *)*plVar25;
          iVar14 = 0;
        } while (plVar25 != (long *)0x0);
        goto LAB_025a0a78;
      }
      do {
        uVar21 = plVar25[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar25[2] == -0x19e2fee71db47188) goto LAB_025a090c;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar22 = 0;
            if (uVar20 != 0) {
              uVar22 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar22 * uVar20;
          }
          if (uVar21 != uVar18) break;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
  }
LAB_025a0a08:
  iVar14 = 0;
LAB_025a0a78:
  if (*(int *)(param_1 + 0x134) == 1) {
    if (*(int *)(param_1 + 0x74) <= iVar13) {
      FUN_025a18b8(param_1,*(undefined8 *)(param_1 + 0x80),param_2 & 1);
      *(undefined4 *)(param_1 + 0x134) = 2;
    }
  }
  else if ((*(int *)(param_1 + 0x134) == 2) && (*(int *)(param_1 + 0x74) <= iVar14)) {
    FUN_025a1a44(param_2 & 1);
    *(undefined4 *)(param_1 + 0x134) = 3;
  }
  return;
LAB_025a03e8:
  bVar12 = (char)plVar23[3] != '\0';
joined_r0x025a03f4:
  if (plVar25 != (long *)0x0) goto LAB_025a03f8;
  goto joined_r0x025a0414;
LAB_025a0ccc:
  if (plVar25[3] == 0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_025a8344(&local_90);
    plVar25 = local_90;
    if (local_90 != (long *)0x0) {
      uVar20 = FUN_01c61740(local_90);
      lVar17 = plVar25[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
      if ((uVar20 & 1) == 0) {
        return;
      }
    }
  }
  goto LAB_025a0cd8;
LAB_025a06d0:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar23 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = plVar25[0x14];
    if (uVar20 == 0) {
      iVar13 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar18 = uVar20 - 1 & 0xb864f46d56e4917e;
      }
      else if (uVar20 < 0xb864f46d56e4917f) {
        uVar18 = 0;
        if (uVar20 != 0) {
          uVar18 = 0xb864f46d56e4917e / uVar20;
        }
        uVar18 = 0xb864f46d56e4917e - uVar18 * uVar20;
      }
      else {
        uVar18 = 0xb864f46d56e4917e;
      }
      plVar24 = *(long **)(plVar25[0x13] + uVar18 * 8);
      if (plVar24 == (long *)0x0) {
        iVar13 = 0;
      }
      else {
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) {
          iVar13 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar24[1] == 0xb864f46d56e4917e) {
              if (plVar24[2] == -0x479b0b92a91b6e82) goto LAB_025a0b1c;
            }
            else if ((plVar24[1] & uVar20 - 1) != uVar18) {
              iVar13 = 0;
              break;
            }
            plVar24 = (long *)*plVar24;
            iVar13 = 0;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar24[1];
            if (uVar21 == 0xb864f46d56e4917e) {
              if (plVar24[2] == -0x479b0b92a91b6e82) goto LAB_025a0b1c;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar22 = 0;
                if (uVar20 != 0) {
                  uVar22 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar22 * uVar20;
              }
              if (uVar21 != uVar18) {
                iVar13 = 0;
                goto LAB_025a0b28;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
          iVar13 = 0;
        }
      }
    }
    goto LAB_025a0b28;
  }
  goto LAB_025a07fc;
LAB_025a0b1c:
  iVar13 = (int)plVar24[6] * 0x1e;
LAB_025a0b28:
  do {
    iVar14 = (int)*plVar23 + -1;
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar12) {
      *(int *)plVar23 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar25 + 0x10))();
    iVar14 = *(int *)(param_1 + 0x134);
    goto joined_r0x025a0804;
  }
  goto LAB_025a0b3c;
LAB_025a0528:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar23 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = plVar25[0x14];
    if (uVar20 == 0) {
      iVar13 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar18 = uVar20 - 1 & 0x5f236a0de3ca62f4;
      }
      else if (uVar20 < 0x5f236a0de3ca62f5) {
        uVar18 = 0;
        if (uVar20 != 0) {
          uVar18 = 0x5f236a0de3ca62f4 / uVar20;
        }
        uVar18 = 0x5f236a0de3ca62f4 - uVar18 * uVar20;
      }
      else {
        uVar18 = 0x5f236a0de3ca62f4;
      }
      plVar24 = *(long **)(plVar25[0x13] + uVar18 * 8);
      if (plVar24 == (long *)0x0) {
        iVar13 = 0;
      }
      else {
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) {
          iVar13 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar24[1] == 0x5f236a0de3ca62f4) {
              if (plVar24[2] == 0x5f236a0de3ca62f4) goto LAB_025a0854;
            }
            else if ((plVar24[1] & uVar20 - 1) != uVar18) {
              iVar13 = 0;
              break;
            }
            plVar24 = (long *)*plVar24;
            iVar13 = 0;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar24[1];
            if (uVar21 == 0x5f236a0de3ca62f4) {
              if (plVar24[2] == 0x5f236a0de3ca62f4) goto LAB_025a0854;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar22 = 0;
                if (uVar20 != 0) {
                  uVar22 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar22 * uVar20;
              }
              if (uVar21 != uVar18) {
                iVar13 = 0;
                goto LAB_025a0858;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
          iVar13 = 0;
        }
      }
    }
    goto LAB_025a0858;
  }
  goto LAB_025a07cc;
LAB_025a0854:
  iVar13 = (int)plVar24[6];
LAB_025a0858:
  do {
    iVar14 = (int)*plVar23 + -1;
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar12) {
      *(int *)plVar23 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar25 + 0x10))();
  }
  iVar13 = iVar13 * 0x1e;
  goto LAB_025a0874;
LAB_025a090c:
  plVar25 = (long *)plVar25[3];
  if (plVar25 != (long *)0x0) {
    plVar23 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar12) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar20 = plVar25[0x14];
    if (uVar20 == 0) {
      iVar14 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar18 = uVar20 - 1 & 0xf847143c0fdbe0eb;
      }
      else if (uVar20 < 0xf847143c0fdbe0ec) {
        uVar18 = 0;
        if (uVar20 != 0) {
          uVar18 = 0xf847143c0fdbe0eb / uVar20;
        }
        uVar18 = 0xf847143c0fdbe0eb - uVar18 * uVar20;
      }
      else {
        uVar18 = 0xf847143c0fdbe0eb;
      }
      plVar24 = *(long **)(plVar25[0x13] + uVar18 * 8);
      if (plVar24 == (long *)0x0) {
        iVar14 = 0;
      }
      else {
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) {
          iVar14 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar24[1] == 0xf847143c0fdbe0eb) {
              if (plVar24[2] == -0x7b8ebc3f0241f15) goto LAB_025a0a58;
            }
            else if ((plVar24[1] & uVar20 - 1) != uVar18) {
              iVar14 = 0;
              break;
            }
            plVar24 = (long *)*plVar24;
            iVar14 = 0;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar24[1];
            if (uVar21 == 0xf847143c0fdbe0eb) {
              if (plVar24[2] == -0x7b8ebc3f0241f15) goto LAB_025a0a58;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar22 = 0;
                if (uVar20 != 0) {
                  uVar22 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar22 * uVar20;
              }
              if (uVar21 != uVar18) {
                iVar14 = 0;
                goto LAB_025a0a64;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
          iVar14 = 0;
        }
      }
    }
    goto LAB_025a0a64;
  }
  goto LAB_025a0a08;
LAB_025a0a58:
  iVar14 = (int)plVar24[6] * 0x1e;
LAB_025a0a64:
  do {
    iVar5 = (int)*plVar23 + -1;
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar23,0x10);
    if (bVar12) {
      *(int *)plVar23 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar25 + 0x10))();
  }
  goto LAB_025a0a78;
}


