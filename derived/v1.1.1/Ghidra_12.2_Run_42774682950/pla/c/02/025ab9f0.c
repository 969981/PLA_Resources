/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ab9f0; name: FUN_025ab9f0
 */


void FUN_025ab9f0(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined1 uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined4 uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  long *plVar30;
  double dVar31;
  
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar15;
  plVar30 = *(long **)(lVar15 + 0x278);
  if (plVar30 != (long *)0x0) {
    lVar15 = plVar30[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = *piVar1 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  dVar31 = (double)plVar30[0x1c];
  *(double *)(param_1 + 0x70) = dVar31;
  *(char *)(param_1 + 0x7c) = (char)plVar30[0x1d];
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)((long)plVar30 + 0xec);
  if (dVar31 < 0.0) {
    dVar31 = 710.0;
    *(undefined8 *)(param_1 + 0x70) = 0x4086300000000000;
  }
  *(int *)(param_1 + 0x78) = (int)(dVar31 / 60.0);
  lVar15 = plVar30[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar10) {
      *piVar1 = iVar12 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar30 + 0x20))(plVar30);
  }
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar15;
  uVar17 = *(ulong *)(lVar15 + 0x60);
  if (uVar17 != 0) {
    uVar21 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0xeb3fbf251277e21a;
    }
    else if (uVar17 < 0xeb3fbf251277e21b) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0xeb3fbf251277e21a / uVar17;
      }
      uVar22 = 0xeb3fbf251277e21a - uVar22 * uVar17;
    }
    else {
      uVar22 = 0xeb3fbf251277e21a;
    }
    plVar30 = *(long **)(*(long *)(lVar15 + 0x58) + uVar22 * 8);
    if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
      if (uVar21 < 2) {
        do {
          if (plVar30[1] == 0xeb3fbf251277e21a) {
            if (plVar30[2] == -0x14c040daed881de6) goto LAB_025abb7c;
          }
          else if ((plVar30[1] & uVar17 - 1) != uVar22) break;
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar30[1];
          if (uVar21 == 0xeb3fbf251277e21a) {
            if (plVar30[2] == -0x14c040daed881de6) goto LAB_025abb7c;
          }
          else {
            if (uVar17 <= uVar21) {
              uVar18 = 0;
              if (uVar17 != 0) {
                uVar18 = uVar21 / uVar17;
              }
              uVar21 = uVar21 - uVar18 * uVar17;
            }
            if (uVar21 != uVar22) break;
          }
          plVar30 = (long *)*plVar30;
        } while (plVar30 != (long *)0x0);
      }
    }
  }
  goto LAB_025ac460;
LAB_025abb7c:
  plVar30 = (long *)plVar30[3];
  if (plVar30 == (long *)0x0) goto LAB_025ac460;
  plVar2 = plVar30 + 10;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  uVar17 = plVar30[0x14];
  dVar31 = 0.0;
  if (uVar17 != 0) {
    uVar21 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0xaa200206d9aeca87;
    }
    else if (uVar17 < 0xaa200206d9aeca88) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0xaa200206d9aeca87 / uVar17;
      }
      uVar22 = 0xaa200206d9aeca87 - uVar22 * uVar17;
    }
    else {
      uVar22 = 0xaa200206d9aeca87;
    }
    plVar23 = *(long **)(plVar30[0x13] + uVar22 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar21 < 2) {
        do {
          if (plVar23[1] == 0xaa200206d9aeca87) {
            if (plVar23[2] == -0x55dffdf926513579) goto LAB_025abcc0;
          }
          else if ((plVar23[1] & uVar17 - 1) != uVar22) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar23[1];
          if (uVar21 == 0xaa200206d9aeca87) {
            if (plVar23[2] == -0x55dffdf926513579) goto LAB_025abcc0;
          }
          else {
            if (uVar17 <= uVar21) {
              uVar18 = 0;
              if (uVar17 != 0) {
                uVar18 = uVar21 / uVar17;
              }
              uVar21 = uVar21 - uVar18 * uVar17;
            }
            if (uVar21 != uVar22) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  goto LAB_025abd48;
LAB_025abe54:
  uVar14 = (undefined4)plVar23[6];
  goto LAB_025abe58;
LAB_025abf2c:
  uVar24 = (undefined4)plVar23[6];
  goto LAB_025abf30;
LAB_025ac004:
  uVar25 = (undefined4)plVar23[6];
  goto LAB_025ac008;
LAB_025ac0dc:
  uVar26 = (undefined4)plVar23[6];
  goto LAB_025ac0e0;
LAB_025ac1b4:
  uVar27 = (undefined4)plVar23[6];
  goto LAB_025ac1b8;
LAB_025ac28c:
  uVar28 = (undefined4)plVar23[6];
  goto LAB_025ac290;
LAB_025ac364:
  uVar29 = (undefined4)plVar23[6];
  goto LAB_025ac368;
LAB_025ac438:
  uVar20 = (undefined4)plVar23[6];
  goto LAB_025ac43c;
LAB_025abcc0:
  iVar3 = (int)plVar23[6];
  iVar12 = iVar3 / 100;
  iVar19 = iVar3 % 100;
  if (0x16 < iVar12) {
    iVar12 = 0x17;
  }
  iVar4 = 0;
  if (-100 < iVar3) {
    iVar4 = iVar12;
  }
  if (iVar19 < 0x3b) {
    if (iVar19 < 1) {
      if (iVar4 < 1) goto LAB_025abd48;
      iVar19 = 0;
    }
  }
  else {
    iVar19 = 0x3b;
  }
  dVar31 = ((double)iVar19 / 60.0) * 60.0 + (double)(uint)(iVar4 * 0x3c) + 0.0;
LAB_025abd48:
  *(double *)(param_1 + 0xb0) = dVar31;
  uVar17 = plVar30[0x14];
  if (uVar17 == 0) {
    uVar29 = 0;
    uVar27 = 0;
    uVar25 = 0;
    uVar14 = 0;
    uVar24 = 0;
    uVar26 = 0;
    uVar28 = 0;
    uVar20 = 0;
  }
  else {
    uVar21 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0x14dfc14a2038076d;
    }
    else if (uVar17 < 0x14dfc14a2038076e) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0x14dfc14a2038076d / uVar17;
      }
      uVar22 = 0x14dfc14a2038076d - uVar22 * uVar17;
    }
    else {
      uVar22 = 0x14dfc14a2038076d;
    }
    lVar15 = plVar30[0x13];
    plVar23 = *(long **)(lVar15 + uVar22 * 8);
    uVar14 = 0;
    if (plVar23 != (long *)0x0) {
      plVar23 = (long *)*plVar23;
      if (plVar23 != (long *)0x0) {
        if (uVar21 < 2) {
          do {
            if (plVar23[1] == 0x14dfc14a2038076d) {
              if (plVar23[2] == 0x14dfc14a2038076d) goto LAB_025abe54;
            }
            else if ((plVar23[1] & uVar17 - 1) != uVar22) goto LAB_025abe04;
            plVar23 = (long *)*plVar23;
            uVar14 = 0;
          } while (plVar23 != (long *)0x0);
          goto LAB_025abe58;
        }
        do {
          uVar18 = plVar23[1];
          if (uVar18 == 0x14dfc14a2038076d) {
            if (plVar23[2] == 0x14dfc14a2038076d) goto LAB_025abe54;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar11 = 0;
              if (uVar17 != 0) {
                uVar11 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar11 * uVar17;
            }
            if (uVar18 != uVar22) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
LAB_025abe04:
      uVar14 = 0;
    }
LAB_025abe58:
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0x14dfbe4a20380254;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      if (plVar23 != (long *)0x0) goto LAB_025abe88;
      uVar24 = 0;
    }
    else if (uVar17 < 0x14dfbe4a20380255) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0x14dfbe4a20380254 / uVar17;
      }
      uVar22 = 0x14dfbe4a20380254 - uVar22 * uVar17;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      uVar24 = 0;
      if (plVar23 != (long *)0x0) {
LAB_025abe88:
        plVar23 = (long *)*plVar23;
        if (plVar23 != (long *)0x0) {
          if (uVar21 < 2) {
            do {
              if (plVar23[1] == 0x14dfbe4a20380254) {
                if (plVar23[2] == 0x14dfbe4a20380254) goto LAB_025abf2c;
              }
              else if ((plVar23[1] & uVar17 - 1) != uVar22) goto LAB_025abed4;
              plVar23 = (long *)*plVar23;
              uVar24 = 0;
            } while (plVar23 != (long *)0x0);
            goto LAB_025abf30;
          }
          do {
            uVar18 = plVar23[1];
            if (uVar18 == 0x14dfbe4a20380254) {
              if (plVar23[2] == 0x14dfbe4a20380254) goto LAB_025abf2c;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar11 * uVar17;
              }
              if (uVar18 != uVar22) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
LAB_025abed4:
        uVar24 = 0;
      }
    }
    else {
      uVar22 = 0x14dfbe4a20380254;
      plVar23 = *(long **)(lVar15 + -0x59020daefe3fed60);
      if (plVar23 != (long *)0x0) goto LAB_025abe88;
      uVar24 = 0;
    }
LAB_025abf30:
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0x14dfbf4a20380407;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      if (plVar23 != (long *)0x0) goto LAB_025abf60;
      uVar25 = 0;
    }
    else if (uVar17 < 0x14dfbf4a20380408) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0x14dfbf4a20380407 / uVar17;
      }
      uVar22 = 0x14dfbf4a20380407 - uVar22 * uVar17;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      uVar25 = 0;
      if (plVar23 != (long *)0x0) {
LAB_025abf60:
        plVar23 = (long *)*plVar23;
        if (plVar23 != (long *)0x0) {
          if (uVar21 < 2) {
            do {
              if (plVar23[1] == 0x14dfbf4a20380407) {
                if (plVar23[2] == 0x14dfbf4a20380407) goto LAB_025ac004;
              }
              else if ((plVar23[1] & uVar17 - 1) != uVar22) goto LAB_025abfac;
              plVar23 = (long *)*plVar23;
              uVar25 = 0;
            } while (plVar23 != (long *)0x0);
            goto LAB_025ac008;
          }
          do {
            uVar18 = plVar23[1];
            if (uVar18 == 0x14dfbf4a20380407) {
              if (plVar23[2] == 0x14dfbf4a20380407) goto LAB_025ac004;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar11 * uVar17;
              }
              if (uVar18 != uVar22) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
LAB_025abfac:
        uVar25 = 0;
      }
    }
    else {
      uVar22 = 0x14dfbf4a20380407;
      plVar23 = *(long **)(lVar15 + -0x590205aefe3fdfc8);
      if (plVar23 != (long *)0x0) goto LAB_025abf60;
      uVar25 = 0;
    }
LAB_025ac008:
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0x14dfbc4a2037feee;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      if (plVar23 != (long *)0x0) goto LAB_025ac038;
      uVar26 = 0;
    }
    else if (uVar17 < 0x14dfbc4a2037feef) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0x14dfbc4a2037feee / uVar17;
      }
      uVar22 = 0x14dfbc4a2037feee - uVar22 * uVar17;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      uVar26 = 0;
      if (plVar23 != (long *)0x0) {
LAB_025ac038:
        plVar23 = (long *)*plVar23;
        if (plVar23 != (long *)0x0) {
          if (uVar21 < 2) {
            do {
              if (plVar23[1] == 0x14dfbc4a2037feee) {
                if (plVar23[2] == 0x14dfbc4a2037feee) goto LAB_025ac0dc;
              }
              else if ((plVar23[1] & uVar17 - 1) != uVar22) goto LAB_025ac084;
              plVar23 = (long *)*plVar23;
              uVar26 = 0;
            } while (plVar23 != (long *)0x0);
            goto LAB_025ac0e0;
          }
          do {
            uVar18 = plVar23[1];
            if (uVar18 == 0x14dfbc4a2037feee) {
              if (plVar23[2] == 0x14dfbc4a2037feee) goto LAB_025ac0dc;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar11 * uVar17;
              }
              if (uVar18 != uVar22) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
LAB_025ac084:
        uVar26 = 0;
      }
    }
    else {
      uVar22 = 0x14dfbc4a2037feee;
      plVar23 = *(long **)(lVar15 + -0x59021daefe400890);
      if (plVar23 != (long *)0x0) goto LAB_025ac038;
      uVar26 = 0;
    }
LAB_025ac0e0:
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0x14dfbd4a203800a1;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      if (plVar23 != (long *)0x0) goto LAB_025ac110;
      uVar27 = 0;
    }
    else if (uVar17 < 0x14dfbd4a203800a2) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0x14dfbd4a203800a1 / uVar17;
      }
      uVar22 = 0x14dfbd4a203800a1 - uVar22 * uVar17;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      uVar27 = 0;
      if (plVar23 != (long *)0x0) {
LAB_025ac110:
        plVar23 = (long *)*plVar23;
        if (plVar23 != (long *)0x0) {
          if (uVar21 < 2) {
            do {
              if (plVar23[1] == 0x14dfbd4a203800a1) {
                if (plVar23[2] == 0x14dfbd4a203800a1) goto LAB_025ac1b4;
              }
              else if ((plVar23[1] & uVar17 - 1) != uVar22) goto LAB_025ac15c;
              plVar23 = (long *)*plVar23;
              uVar27 = 0;
            } while (plVar23 != (long *)0x0);
            goto LAB_025ac1b8;
          }
          do {
            uVar18 = plVar23[1];
            if (uVar18 == 0x14dfbd4a203800a1) {
              if (plVar23[2] == 0x14dfbd4a203800a1) goto LAB_025ac1b4;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar11 * uVar17;
              }
              if (uVar18 != uVar22) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
LAB_025ac15c:
        uVar27 = 0;
      }
    }
    else {
      uVar22 = 0x14dfbd4a203800a1;
      plVar23 = *(long **)(lVar15 + -0x590215aefe3ffaf8);
      if (plVar23 != (long *)0x0) goto LAB_025ac110;
      uVar27 = 0;
    }
LAB_025ac1b8:
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0x14dfba4a2037fb88;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      if (plVar23 != (long *)0x0) goto LAB_025ac1e8;
      uVar28 = 0;
    }
    else if (uVar17 < 0x14dfba4a2037fb89) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0x14dfba4a2037fb88 / uVar17;
      }
      uVar22 = 0x14dfba4a2037fb88 - uVar22 * uVar17;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      uVar28 = 0;
      if (plVar23 != (long *)0x0) {
LAB_025ac1e8:
        plVar23 = (long *)*plVar23;
        if (plVar23 != (long *)0x0) {
          if (uVar21 < 2) {
            do {
              if (plVar23[1] == 0x14dfba4a2037fb88) {
                if (plVar23[2] == 0x14dfba4a2037fb88) goto LAB_025ac28c;
              }
              else if ((plVar23[1] & uVar17 - 1) != uVar22) goto LAB_025ac234;
              plVar23 = (long *)*plVar23;
              uVar28 = 0;
            } while (plVar23 != (long *)0x0);
            goto LAB_025ac290;
          }
          do {
            uVar18 = plVar23[1];
            if (uVar18 == 0x14dfba4a2037fb88) {
              if (plVar23[2] == 0x14dfba4a2037fb88) goto LAB_025ac28c;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar11 * uVar17;
              }
              if (uVar18 != uVar22) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
LAB_025ac234:
        uVar28 = 0;
      }
    }
    else {
      uVar22 = 0x14dfba4a2037fb88;
      plVar23 = *(long **)(lVar15 + -0x59022daefe4023c0);
      if (plVar23 != (long *)0x0) goto LAB_025ac1e8;
      uVar28 = 0;
    }
LAB_025ac290:
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0x14dfbb4a2037fd3b;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      if (plVar23 != (long *)0x0) goto LAB_025ac2c0;
      uVar29 = 0;
    }
    else if (uVar17 < 0x14dfbb4a2037fd3c) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0x14dfbb4a2037fd3b / uVar17;
      }
      uVar22 = 0x14dfbb4a2037fd3b - uVar22 * uVar17;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
      uVar29 = 0;
      if (plVar23 != (long *)0x0) {
LAB_025ac2c0:
        plVar23 = (long *)*plVar23;
        if (plVar23 != (long *)0x0) {
          if (uVar21 < 2) {
            do {
              if (plVar23[1] == 0x14dfbb4a2037fd3b) {
                if (plVar23[2] == 0x14dfbb4a2037fd3b) goto LAB_025ac364;
              }
              else if ((plVar23[1] & uVar17 - 1) != uVar22) goto LAB_025ac30c;
              plVar23 = (long *)*plVar23;
              uVar29 = 0;
            } while (plVar23 != (long *)0x0);
            goto LAB_025ac368;
          }
          do {
            uVar18 = plVar23[1];
            if (uVar18 == 0x14dfbb4a2037fd3b) {
              if (plVar23[2] == 0x14dfbb4a2037fd3b) goto LAB_025ac364;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar11 * uVar17;
              }
              if (uVar18 != uVar22) break;
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
LAB_025ac30c:
        uVar29 = 0;
      }
    }
    else {
      uVar22 = 0x14dfbb4a2037fd3b;
      plVar23 = *(long **)(lVar15 + -0x590225aefe401628);
      if (plVar23 != (long *)0x0) goto LAB_025ac2c0;
      uVar29 = 0;
    }
LAB_025ac368:
    if (uVar21 < 2) {
      uVar22 = uVar17 - 1 & 0x14dfb84a2037f822;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
    }
    else if (uVar17 < 0x14dfb84a2037f823) {
      uVar22 = 0;
      if (uVar17 != 0) {
        uVar22 = 0x14dfb84a2037f822 / uVar17;
      }
      uVar22 = 0x14dfb84a2037f822 - uVar22 * uVar17;
      plVar23 = *(long **)(lVar15 + uVar22 * 8);
    }
    else {
      uVar22 = 0x14dfb84a2037f822;
      plVar23 = *(long **)(lVar15 + -0x59023daefe403ef0);
    }
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar21 < 2) {
        do {
          if (plVar23[1] == 0x14dfb84a2037f822) {
            if (plVar23[2] == 0x14dfb84a2037f822) goto LAB_025ac438;
          }
          else if ((plVar23[1] & uVar17 - 1) != uVar22) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar23[1];
          if (uVar21 == 0x14dfb84a2037f822) {
            if (plVar23[2] == 0x14dfb84a2037f822) goto LAB_025ac438;
          }
          else {
            if (uVar17 <= uVar21) {
              uVar18 = 0;
              if (uVar17 != 0) {
                uVar18 = uVar21 / uVar17;
              }
              uVar21 = uVar21 - uVar18 * uVar17;
            }
            if (uVar21 != uVar22) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
    uVar20 = 0;
  }
LAB_025ac43c:
  *(undefined4 *)(param_1 + 0x80) = uVar14;
  *(undefined4 *)(param_1 + 0x84) = uVar24;
  *(undefined4 *)(param_1 + 0x88) = uVar25;
  *(undefined4 *)(param_1 + 0x8c) = uVar26;
  *(undefined4 *)(param_1 + 0x90) = uVar27;
  *(undefined4 *)(param_1 + 0x94) = uVar28;
  *(undefined4 *)(param_1 + 0x98) = uVar29;
  *(undefined4 *)(param_1 + 0x9c) = uVar20;
  do {
    iVar12 = (int)*plVar2 + -1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *(int *)plVar2 = iVar12;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar30 + 0x10))();
  }
LAB_025ac460:
  iVar12 = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x80);
  iVar3 = iVar12 + *(int *)(param_1 + 0x88);
  iVar19 = iVar3 + *(int *)(param_1 + 0x8c);
  iVar4 = iVar19 + *(int *)(param_1 + 0x90);
  iVar5 = iVar4 + *(int *)(param_1 + 0x94);
  iVar6 = iVar5 + *(int *)(param_1 + 0x98);
  iVar7 = iVar6 + *(int *)(param_1 + 0x9c);
  iVar8 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa4) = iVar7;
  if (iVar8 < iVar7) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if ((((*(int *)(param_1 + 0x80) <= iVar8) &&
         (*(undefined4 *)(param_1 + 0xa8) = 1, iVar12 <= iVar8)) &&
        (*(undefined4 *)(param_1 + 0xa8) = 2, iVar3 <= iVar8)) &&
       (((*(undefined4 *)(param_1 + 0xa8) = 3, iVar19 <= iVar8 &&
         (*(undefined4 *)(param_1 + 0xa8) = 4, iVar4 <= iVar8)) &&
        (*(undefined4 *)(param_1 + 0xa8) = 5, iVar5 <= iVar8)))) {
      uVar14 = 6;
      if (iVar6 <= iVar8) {
        uVar14 = 7;
      }
      *(undefined4 *)(param_1 + 0xa8) = uVar14;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_2 + 0x20) == -0x1c4411fb859ba796) {
    uVar16 = 1;
  }
  else {
    uVar16 = 1;
    if (*(long *)(param_2 + 0x20) != -0x1c4417fb859bb1c8) {
      uVar16 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x7d) = uVar16;
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}


