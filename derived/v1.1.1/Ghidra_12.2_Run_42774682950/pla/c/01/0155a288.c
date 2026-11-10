/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0155a288; name: FUN_0155a288
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0155a288(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *extraout_x8;
  ulong extraout_x9;
  long lVar21;
  ulong uVar22;
  ulong extraout_x10;
  ulong uVar23;
  ulong extraout_x11;
  long *plVar24;
  ulong uVar25;
  ulong extraout_x12;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long *unaff_x19;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  if ((char)param_2[4] != '\0') {
    return;
  }
  local_80 = 0;
  local_90 = (long *)0x0;
  local_88 = 0;
  plVar20 = (long *)param_2[3];
  uVar22 = plVar20[1];
  if (uVar22 != 0) {
    uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar26 = uVar22 - 1 & 0xb4642176e7fe47f5;
    }
    else {
      uVar26 = 0xb4642176e7fe47f5;
      if (uVar22 < 0xb4642176e7fe47f6) {
        uVar26 = 0;
        if (uVar22 != 0) {
          uVar26 = 0xb4642176e7fe47f5 / uVar22;
        }
        uVar26 = 0xb4642176e7fe47f5 - uVar26 * uVar22;
      }
    }
    plVar24 = *(long **)(*plVar20 + uVar26 * 8);
    unaff_x19 = param_1;
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      uVar25 = uVar22 - 1;
      if (uVar23 < 2) {
        do {
          if (plVar24[1] == 0xb4642176e7fe47f5) {
            if (plVar24[2] == -0x4b9bde891801b80b) goto LAB_0155a3c0;
          }
          else if ((plVar24[1] & uVar25) != uVar26) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar27 = plVar24[1];
          if (uVar27 == 0xb4642176e7fe47f5) {
            if (plVar24[2] == -0x4b9bde891801b80b) goto LAB_0155a3c0;
          }
          else {
            if (uVar22 <= uVar27) {
              uVar28 = 0;
              if (uVar22 != 0) {
                uVar28 = uVar27 / uVar22;
              }
              uVar27 = uVar27 - uVar28 * uVar22;
            }
            if (uVar27 != uVar26) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  goto LAB_0155a618;
LAB_0155a3c0:
  uVar5 = *(uint *)(plVar24 + 3);
  uVar26 = (ulong)uVar5;
  local_90 = (long *)(ulong)uVar5;
  if (uVar23 < 2) {
    uVar27 = uVar25 & 0x594a94886f7f651d;
  }
  else {
    uVar27 = 0x594a94886f7f651d;
    if (uVar22 < 0x594a94886f7f651e) {
      uVar27 = 0;
      if (uVar22 != 0) {
        uVar27 = 0x594a94886f7f651d / uVar22;
      }
      uVar27 = 0x594a94886f7f651d - uVar27 * uVar22;
    }
  }
  plVar24 = *(long **)(*plVar20 + uVar27 * 8);
  if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
    if (uVar23 < 2) {
      do {
        if (plVar24[1] == 0x594a94886f7f651d) {
          if (plVar24[2] == 0x594a94886f7f651d) goto LAB_0155a484;
        }
        else if ((plVar24[1] & uVar25) != uVar27) break;
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
    else {
      do {
        uVar28 = plVar24[1];
        if (uVar28 == 0x594a94886f7f651d) {
          if (plVar24[2] == 0x594a94886f7f651d) goto LAB_0155a484;
        }
        else {
          if (uVar22 <= uVar28) {
            uVar8 = 0;
            if (uVar22 != 0) {
              uVar8 = uVar28 / uVar22;
            }
            uVar28 = uVar28 - uVar8 * uVar22;
          }
          if (uVar28 != uVar27) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
  }
  goto LAB_0155a618;
LAB_0155a484:
  local_90 = (long *)CONCAT44((int)plVar24[3],uVar5);
  if (uVar23 < 2) {
    uVar27 = uVar25 & 0xdd6f3eaad6c1c49f;
  }
  else {
    uVar27 = 0xdd6f3eaad6c1c49f;
    if (uVar22 < 0xdd6f3eaad6c1c4a0) {
      uVar27 = 0;
      if (uVar22 != 0) {
        uVar27 = 0xdd6f3eaad6c1c49f / uVar22;
      }
      uVar27 = 0xdd6f3eaad6c1c49f - uVar27 * uVar22;
    }
  }
  plVar24 = *(long **)(*plVar20 + uVar27 * 8);
  if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
    if (uVar23 < 2) {
      do {
        if (plVar24[1] == 0xdd6f3eaad6c1c49f) {
          if (plVar24[2] == -0x2290c155293e3b61) goto LAB_0155a548;
        }
        else if ((plVar24[1] & uVar25) != uVar27) break;
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
    else {
      do {
        uVar23 = plVar24[1];
        if (uVar23 == 0xdd6f3eaad6c1c49f) {
          if (plVar24[2] == -0x2290c155293e3b61) goto LAB_0155a548;
        }
        else {
          if (uVar22 <= uVar23) {
            uVar25 = 0;
            if (uVar22 != 0) {
              uVar25 = uVar23 / uVar22;
            }
            uVar23 = uVar23 - uVar25 * uVar22;
          }
          if (uVar23 != uVar27) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
  }
  goto LAB_0155a618;
LAB_0155a548:
  local_88 = (ulong)*(uint *)(plVar24 + 3);
  uVar22 = plVar20[1];
  if (uVar22 != 0) {
    uVar23 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    uVar25 = 0x1bf997af3ad6bee5;
    uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar23 < 2) {
      uVar27 = uVar22 - 1 & 0x1bf997af3ad6bee5;
    }
    else {
      uVar27 = 0x1bf997af3ad6bee5;
      if (uVar22 < 0x1bf997af3ad6bee6) {
        uVar27 = 0;
        if (uVar22 != 0) {
          uVar27 = 0x1bf997af3ad6bee5 / uVar22;
        }
        uVar27 = 0x1bf997af3ad6bee5 - uVar27 * uVar22;
      }
    }
    plVar20 = *(long **)(*plVar20 + uVar27 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar23 < 2) goto LAB_0155a61c;
      do {
        uVar23 = plVar20[1];
        if (uVar23 == 0x1bf997af3ad6bee5) {
          if (plVar20[2] == 0x1bf997af3ad6bee5) goto LAB_0155a654;
        }
        else {
          if (uVar22 <= uVar23) {
            uVar25 = 0;
            if (uVar22 != 0) {
              uVar25 = uVar23 / uVar22;
            }
            uVar23 = uVar23 - uVar25 * uVar22;
          }
          if (uVar23 != uVar27) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
    }
  }
LAB_0155a618:
  do {
    FUN_0156b610();
    plVar20 = extraout_x8;
    uVar26 = extraout_x9;
    uVar25 = extraout_x10;
    uVar22 = extraout_x11;
    uVar27 = extraout_x12;
LAB_0155a61c:
    do {
      if (plVar20[1] == uVar25) {
        param_1 = unaff_x19;
        if (plVar20[2] == uVar25) goto LAB_0155a654;
      }
      else if ((plVar20[1] & uVar22 - 1) != uVar27) break;
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  } while( true );
LAB_0155a654:
  lVar29 = 0;
  local_88 = CONCAT44((int)plVar20[3],(undefined4)local_88);
  do {
    uVar23 = param_1[0x79];
    iVar13 = (int)uVar26;
    uVar22 = (ulong)iVar13;
    if (uVar23 != 0) {
      uVar26 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar26 < 2) {
        uVar25 = uVar23 - 1 & uVar22;
      }
      else {
        uVar25 = uVar22;
        if (uVar23 <= uVar22) {
          uVar25 = 0;
          if (uVar23 != 0) {
            uVar25 = uVar22 / uVar23;
          }
          uVar25 = uVar22 - uVar25 * uVar23;
        }
      }
      plVar20 = *(long **)(param_1[0x78] + uVar25 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar26 < 2) {
          do {
            if (plVar20[1] == uVar22) {
              if ((int)plVar20[2] == iVar13) goto LAB_0155a764;
            }
            else if ((plVar20[1] & uVar23 - 1) != uVar25) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar26 = plVar20[1];
            if (uVar26 == uVar22) {
              if ((int)plVar20[2] == iVar13) goto LAB_0155a764;
            }
            else {
              if (uVar23 <= uVar26) {
                uVar27 = 0;
                if (uVar23 != 0) {
                  uVar27 = uVar26 / uVar23;
                }
                uVar26 = uVar26 - uVar27 * uVar23;
              }
              if (uVar26 != uVar25) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    if (iVar13 < 2000) {
      return;
    }
LAB_0155a764:
    pcVar15 = (char *)FUN_0155db30(param_1 + 0x78,(long)&local_90 + lVar29 * 4);
    puVar11 = PTR_DAT_043794b8;
    puVar2 = PTR_DAT_043794b0;
    puVar10 = PTR_DAT_043794a8;
    puVar9 = PTR_DAT_043794a0;
    if (*pcVar15 == '\0') {
      return;
    }
    lVar29 = lVar29 + 1;
    if (lVar29 == 5) goto LAB_0155a78c;
    uVar26 = (ulong)*(uint *)((long)&local_90 + lVar29 * 4);
  } while( true );
  while( true ) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar7) {
      *plVar24 = lVar29;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') break;
LAB_0155ae8c:
    if (*plVar24 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar31 + 0x154));
        while (*plVar24 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *plVar24 = lVar29;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0155aedc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_0155aedc:
  bVar7 = true;
LAB_0155aeec:
  plVar24 = *(long **)(lVar31 + 0x1d8);
  plVar18 = *(long **)(lVar31 + 0x1e0);
  if (plVar24 != plVar18) {
    do {
      if (*plVar24 != 0) {
        puVar30 = (undefined8 *)(*(code *)**(undefined8 **)(*plVar24 + 8))();
        FUN_0156b028();
        for (; puVar30 != (undefined8 *)0x0; puVar30 = (undefined8 *)*puVar30) {
          if (puVar30 == &DAT_043c9948) goto LAB_0155af48;
        }
      }
      plVar24 = plVar24 + 1;
    } while (plVar24 != plVar18);
    plVar24 = plVar18;
  }
LAB_0155af48:
  if (plVar24 == *(long **)(lVar31 + 0x1e0)) {
    lVar29 = 0;
  }
  else {
    lVar29 = 0;
    if (*plVar24 != 0) {
      lVar29 = *plVar24 + -0x48;
    }
  }
  if (bVar7) {
    *(undefined8 *)(lVar31 + 0x160) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar31 + 0x154));
  }
  do {
    lVar32 = *plVar20;
    lVar21 = *(long *)(lVar31 + 0x148);
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar7) {
      *plVar20 = lVar32;
      *(long *)(lVar31 + 0x148) = lVar21;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0155afa4:
  if (*plVar20 == lVar32 && *(long *)(lVar31 + 0x148) == lVar21) goto code_r0x0155afb8;
  ClearExclusiveLocal();
  lVar32 = *plVar20;
  lVar21 = *(long *)(lVar31 + 0x148);
  do {
    do {
      lVar4 = *plVar20;
      if (lVar4 != lVar32 || *(long *)(lVar31 + 0x148) != lVar21) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_0155aff8;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar32;
        *(long *)(lVar31 + 0x144) = lVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar7 = true;
LAB_0155aff8:
    lVar32 = lVar4;
    lVar21 = *(long *)(lVar31 + 0x148);
  } while (!bVar7);
LAB_0155b014:
  nn::os::SignalLightEvent((LightEventType *)(lVar31 + 0x134));
  goto LAB_0155b01c;
code_r0x0155afb8:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar7) {
    *plVar20 = lVar32;
    *(long *)(lVar31 + 0x144) = lVar21 + -1;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0155b014;
  goto LAB_0155afa4;
LAB_0155a78c:
  lVar29 = param_1[0x76];
  plVar20 = param_2 + 2;
  iVar13 = (int)*plVar20;
  uVar22 = (ulong)iVar13;
  uVar23 = *(ulong *)(lVar29 + 200);
  if (uVar23 != 0) {
    uVar26 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
    uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar26 < 2) {
      uVar25 = uVar23 - 1 & uVar22;
    }
    else {
      uVar25 = uVar22;
      if (uVar23 <= uVar22) {
        uVar25 = 0;
        if (uVar23 != 0) {
          uVar25 = uVar22 / uVar23;
        }
        uVar25 = uVar22 - uVar25 * uVar23;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar29 + 0xc0) + uVar25 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar26 < 2) {
        do {
          if (plVar24[1] == uVar22) {
            if ((int)plVar24[2] == iVar13) goto LAB_0155ac1c;
          }
          else if ((plVar24[1] & uVar23 - 1) != uVar25) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar26 = plVar24[1];
          if (uVar26 == uVar22) {
            if ((int)plVar24[2] == iVar13) goto LAB_0155ac1c;
          }
          else {
            if (uVar23 <= uVar26) {
              uVar27 = 0;
              if (uVar23 != 0) {
                uVar27 = uVar26 / uVar23;
              }
              uVar26 = uVar26 - uVar27 * uVar23;
            }
            if (uVar26 != uVar25) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  if ((iVar13 < 0x14) && ((char)param_1[0x87] != '\0')) {
    lVar29 = *(long *)(lVar29 + uVar22 * 0x10 + 0x560);
    if (lVar29 == 0) {
      return;
    }
    if (*(int *)(lVar29 + 0xc) == 0) {
      return;
    }
    lVar29 = *(long *)(param_1[0x76] + (long)(int)*plVar20 * 0x10 + 0x560);
    if ((lVar29 == 0) || (*(int *)(lVar29 + 0xc) == 0)) {
LAB_0155d354:
      lVar32 = 0;
    }
    else {
      piVar3 = (int *)(lVar29 + 0xc);
      iVar13 = *(int *)(lVar29 + 0xc);
      do {
        puVar30 = *(undefined8 **)(lVar29 + 0x10);
        if (((*puVar2 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar2), iVar14 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar14 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar14 != 0)) {
              uVar17 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar17;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar11 = PTR_DAT_043794c8;
          __cxa_guard_release(puVar2);
        }
        if (puVar30 == (undefined8 *)0x0) goto LAB_0155d354;
        while (puVar30 != (undefined8 *)puVar11) {
          puVar30 = (undefined8 *)*puVar30;
          lVar32 = 0;
          if (puVar30 == (undefined8 *)0x0) goto LAB_0155d358;
        }
        iVar14 = *piVar3;
        if (iVar14 == iVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            lVar32 = 0;
            if (*(long *)(lVar29 + 0x18) != 0) {
              lVar32 = *(long *)(lVar29 + 0x18) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar32 = 0;
        iVar13 = iVar14;
      } while (iVar14 != 0);
    }
LAB_0155d358:
    plVar24 = (long *)FUN_01510d68(param_1[0x76] + 0xc0,plVar20);
    plVar18 = (long *)*plVar24;
    *plVar24 = 0;
    if (plVar18 != (long *)0x0) {
      lVar29 = plVar18[0xb];
      piVar3 = (int *)(lVar29 + 0xc);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar29 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))();
      }
    }
    *plVar24 = lVar32;
  }
  else {
    local_90 = *(long **)(lVar29 + 0xa8);
    plVar24 = (long *)FUN_00ad752c(&local_78,*(undefined8 *)(lVar29 + 0xb0),&local_90);
    if (plVar24 != (long *)0x0) {
      lVar29 = plVar24[0xb];
      if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
      if (*(long *)(lVar29 + 0x10) == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
        *(undefined8 *)(lVar29 + 0x10) = uVar17;
      }
      piVar3 = (int *)(lVar29 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar29 = plVar24[0xb];
      local_98 = plVar24;
      if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
      if (*(long *)(lVar29 + 0x10) == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
        *(undefined8 *)(lVar29 + 0x10) = uVar17;
      }
      piVar3 = (int *)(lVar29 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_90 = *(long **)(param_1[0x76] + 0x98);
      local_88 = *(undefined8 *)(param_1[0x76] + 0xa0);
      FUN_00da9be0(&local_98,&local_90);
      if (local_98 != (long *)0x0) {
        lVar29 = local_98[0xb];
        piVar3 = (int *)(lVar29 + 0xc);
        do {
          iVar13 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
      plVar18 = (long *)FUN_01510d68(param_1[0x76] + 0xc0,plVar20);
      lVar29 = plVar24[0xb];
      if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
      if (*(long *)(lVar29 + 0x10) == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
        *(undefined8 *)(lVar29 + 0x10) = uVar17;
      }
      piVar3 = (int *)(lVar29 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar19 = (long *)*plVar18;
      *plVar18 = (long)plVar24;
      if (plVar19 != (long *)0x0) {
        lVar29 = plVar19[0xb];
        piVar3 = (int *)(lVar29 + 0xc);
        do {
          iVar13 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))();
        }
      }
      lVar29 = plVar24[0xb];
      piVar3 = (int *)(lVar29 + 0xc);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar29 + 0x18) = 0;
        (**(code **)(*plVar24 + 0x20))(plVar24);
      }
    }
  }
  plVar20 = (long *)FUN_01510d68(param_1[0x76] + 0xc0,plVar20);
  plVar20 = *(long **)(*plVar20 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar9 = PTR_DAT_04379528;
    if (iVar13 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar29 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar29 + 0x80) < 0x10) {
    *(long **)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = plVar20;
    *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
    lVar29 = (**(code **)(*plVar20 + 0x10))(plVar20,0x2e0,0x10);
    if (lVar29 == 0) {
      (**(code **)(*plVar20 + 0xb8))(plVar20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02a4c0f4(lVar29,0xff);
  }
LAB_0155da04:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_0155ac1c:
  plVar20 = (long *)FUN_01510d68(lVar29 + 0xc0,plVar20);
  lVar31 = *plVar20;
  plVar20 = (long *)(lVar31 + 0x108);
  lVar32 = *plVar20;
  lVar29 = nn::os::GetCurrentThread();
  if (lVar29 == lVar32) {
    bVar7 = false;
  }
  else {
    lVar29 = nn::os::GetCurrentThread();
    do {
      if (*plVar20 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar31 + 0xfc));
          while (*plVar20 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar7) {
              *plVar20 = lVar29;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0155ac84;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar29;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0155ac84:
    bVar7 = true;
  }
  lVar29 = nn::os::GetCurrentThread();
  plVar20 = (long *)(lVar31 + 0x120);
  do {
    if (*plVar20 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar31 + 0x114));
        while (*plVar20 == 0) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar12) {
            *plVar20 = lVar29;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0155acd0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar12) {
      *plVar20 = lVar29;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0155acd0:
  plVar20 = *(long **)(lVar31 + 0x1a0);
  plVar24 = *(long **)(lVar31 + 0x1a8);
  if (plVar20 != plVar24) {
    do {
      if (*plVar20 != 0) {
        puVar30 = (undefined8 *)(*(code *)**(undefined8 **)(*plVar20 + 8))();
        FUN_0156b028();
        for (; puVar30 != (undefined8 *)0x0; puVar30 = (undefined8 *)*puVar30) {
          if (puVar30 == &DAT_043c9948) goto LAB_0155acdc;
        }
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar24);
    plVar20 = plVar24;
  }
LAB_0155acdc:
  if ((plVar20 == *(long **)(lVar31 + 0x1a8)) || (*plVar20 == 0)) {
    plVar20 = *(long **)(lVar31 + 0x168);
    plVar24 = *(long **)(lVar31 + 0x170);
    if (plVar20 != plVar24) {
      do {
        if (*plVar20 != 0) {
          puVar30 = (undefined8 *)(*(code *)**(undefined8 **)(*plVar20 + 8))();
          FUN_0156b028();
          for (; puVar30 != (undefined8 *)0x0; puVar30 = (undefined8 *)*puVar30) {
            if (puVar30 == &DAT_043c9948) goto LAB_0155acf4;
          }
        }
        plVar20 = plVar20 + 1;
      } while (plVar20 != plVar24);
      plVar20 = plVar24;
    }
LAB_0155acf4:
    if (plVar20 == *(long **)(lVar31 + 0x170)) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      if (*plVar20 != 0) {
        lVar29 = *plVar20 + -0x48;
      }
    }
    bVar12 = lVar29 == 0;
  }
  else {
    bVar12 = false;
    lVar29 = *plVar20 + -0x48;
  }
  *(undefined8 *)(lVar31 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar31 + 0x114));
  if (bVar7) {
    *(undefined8 *)(lVar31 + 0x108) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar31 + 0xfc));
  }
  if (bVar12) {
    lVar29 = nn::os::GetCurrentThread();
    plVar20 = (long *)(lVar31 + 0x140);
    do {
      lVar32 = *plVar20;
      lVar21 = *(long *)(lVar31 + 0x148);
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar32;
        *(long *)(lVar31 + 0x148) = lVar21;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      while ((lVar32 != 0 && (lVar29 != lVar32))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar31 + 0x134));
        do {
          lVar32 = *plVar20;
          lVar21 = *(long *)(lVar31 + 0x148);
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = lVar32;
            *(long *)(lVar31 + 0x148) = lVar21;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      while( true ) {
        if (*plVar20 != lVar32 || *(long *)(lVar31 + 0x148) != lVar21) break;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = lVar32;
          *(long *)(lVar31 + 0x144) = lVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          plVar24 = (long *)(lVar31 + 0x160);
          lVar32 = *plVar24;
          lVar29 = nn::os::GetCurrentThread();
          if (lVar29 != lVar32) {
            lVar29 = nn::os::GetCurrentThread();
            goto LAB_0155ae8c;
          }
          bVar7 = false;
          goto LAB_0155aeec;
        }
      }
      ClearExclusiveLocal();
      lVar32 = *plVar20;
      lVar21 = *(long *)(lVar31 + 0x148);
    } while( true );
  }
LAB_0155b01c:
  (**(code **)(*param_1 + 0x10))(&local_90,param_1);
  do {
    uVar17 = local_88;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(&local_88,0x10);
    if (bVar7) {
      local_88 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar16 = *(undefined8 *)puVar9;
  *(undefined8 *)puVar10 = uVar16;
  FUN_02a44e0c(&local_68,uVar16,uVar17);
  plVar20 = local_90;
  local_90 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar24 = plVar20 + 1;
    do {
      iVar13 = (int)*plVar24 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar7) {
        *(int *)plVar24 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      plVar20[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar32 = *(long *)puVar9;
      *(long *)puVar10 = lVar32;
      local_78 = (long *)*plVar20;
      FUN_02a44274(lVar32 + 0xd8,&local_78);
    }
  }
  plVar24 = local_68;
  plVar20 = local_90;
  if (local_68 != (long *)0x0) {
    local_68 = (long *)0x0;
  }
  if (local_90 != (long *)0x0) {
    plVar18 = local_90 + 1;
    do {
      iVar13 = (int)*plVar18 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar32 = *(long *)puVar9;
      *(long *)puVar10 = lVar32;
      local_78 = (long *)*plVar20;
      FUN_02a44274(lVar32 + 0xd8,&local_78);
    }
  }
  lVar32 = *param_2;
  if (lVar32 < 0x201e0032d8a70b27) {
    if (lVar32 < -0x32f4148976dff224) {
      if (lVar32 < -0x4fe8cc386be717ee) {
        if (lVar32 < -0x532919bfe36d35fc) {
          if (lVar32 < -0x63f8f6dc2cbf4c07) {
            if (lVar32 < -0x72e6d0ff82b33ff0) {
              if (lVar32 < -0x78f56886de46e77d) {
                if (lVar32 != -0x7f434c680037274a) goto LAB_0155d3cc;
                FUN_01563c60(&local_90,param_1,param_2);
                local_68 = local_90;
              }
              else if (lVar32 == -0x78f56886de46e77d) {
                FUN_0155f780(&local_90,param_1,param_2);
                local_68 = local_90;
              }
              else if (lVar32 == -0x7756bb3673b8732a) {
                FUN_0155fec0(&local_90,param_1,param_2);
                local_68 = local_90;
              }
              else {
                if (lVar32 != -0x7868ec2a77f92cf0) goto LAB_0155d3cc;
                FUN_01568140(&local_90,param_1,param_2);
                local_68 = local_90;
              }
            }
            else if (lVar32 < -0x6e5cfc4793fffe4b) {
              if (lVar32 == -0x72e6d0ff82b33ff0) {
                FUN_01562870(&local_90,param_1,param_2);
                local_68 = local_90;
              }
              else if (lVar32 == -0x721b96d7531c3893) {
                FUN_01566610(&local_90,param_1,param_2);
                local_68 = local_90;
              }
              else {
                if (lVar32 != -0x72061a5720f1b8fa) goto LAB_0155d3cc;
                FUN_015607d0(&local_90,param_1,param_2);
                local_68 = local_90;
              }
            }
            else if (lVar32 < -0x656531d4c11e962b) {
              if (lVar32 == -0x6bf3c522adc64b88) {
                FUN_01560600(&local_90,param_1,param_2);
                local_68 = local_90;
              }
              else if (lVar32 == -0x6e5cfc4793fffe4b) {
                FUN_01565d00(&local_90,param_1,param_2);
                local_68 = local_90;
              }
              else {
                if (lVar32 != -0x66c6a2e893975b0b) goto LAB_0155d3cc;
                FUN_01568310(&local_90,param_1,param_2);
                local_68 = local_90;
              }
            }
            else {
              if (lVar32 != -0x656531d4c11e962b) goto LAB_0155d3cc;
              FUN_0155f5b0(&local_90,param_1,param_2);
              local_68 = local_90;
            }
          }
          else if (lVar32 == -0x63f8f6dc2cbf4c07) {
            FUN_01568a50(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else if (lVar32 == -0x5481e33981418a6e) {
            FUN_015612b0(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else {
            if (lVar32 != -0x62606750105a1baf) goto LAB_0155d3cc;
            FUN_01566f20(&local_90,param_1,param_2);
            local_68 = local_90;
          }
        }
        else if (lVar32 < -0x532633bfe36b2c53) {
          if (lVar32 != -0x532919bfe36d35fc) goto LAB_0155d3cc;
          FUN_01564cb0(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else if (lVar32 == -0x50726c097a3d00e4) {
          FUN_01563e30(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else if (lVar32 == -0x532633bfe36b2c53) {
          FUN_01564e80(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else {
          if (lVar32 != -0x516dd6a53948e4b5) goto LAB_0155d3cc;
          FUN_01565220(&local_90,param_1,param_2);
          local_68 = local_90;
        }
      }
      else if (lVar32 < -0x43094f76cf9bf792) {
        if (lVar32 < -0x49a0ae74c21408ed) {
          if (lVar32 != -0x4fe8cc386be717ee) goto LAB_0155d3cc;
          FUN_01564910(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else if (lVar32 == -0x49a0ae74c21408ed) {
          FUN_01569190(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else if (lVar32 == -0x46ddde57620a0450) {
          FUN_01561650(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else {
          if (lVar32 != -0x4795320fc4ae0955) goto LAB_0155d3cc;
          FUN_0155fb20(&local_90,param_1,param_2);
          local_68 = local_90;
        }
      }
      else if (lVar32 < -0x38501a6e7fafc94c) {
        if (lVar32 < -0x41e9026f326c42ec) {
          if (lVar32 != -0x43094f76cf9bf792) goto LAB_0155d3cc;
          FUN_01564000(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else if (lVar32 == -0x3ac181bbf0cad314) {
          FUN_015655c0(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else if (lVar32 == -0x41e9026f326c42ec) {
          FUN_01563180(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else {
          if (lVar32 != -0x3f6151d9e427afd9) goto LAB_0155d3cc;
          FUN_015669b0(&local_90,param_1,param_2);
          local_68 = local_90;
        }
      }
      else if (lVar32 == -0x332f88889f97b6a5) {
        FUN_01567f70(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == -0x34b4e0d8fe7b8336) {
        FUN_01568c20(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != -0x38501a6e7fafc94c) goto LAB_0155d3cc;
        FUN_01565b30(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 < -0x1509d36784058113) {
      if (-0x15ea0309058970a7 < lVar32) {
        if (lVar32 == -0x15ea0309058970a6) {
          plVar18 = (long *)param_1[1];
          (**(code **)(*(long *)param_1[0x76] + 0x10))(&local_90);
          local_78 = (long *)0x0;
          uStack_70 = 0;
          FUN_0156d288(&local_78,&local_90);
          plVar20 = local_90;
          if (local_90 != (long *)0x0) {
            plVar19 = local_90 + 1;
            do {
              iVar13 = (int)*plVar19 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar7) {
                *(int *)plVar19 = iVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 == 0) {
              local_90[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar32 = *(long *)puVar9;
              *(long *)puVar10 = lVar32;
              local_68 = (long *)*plVar20;
              FUN_02a44274(lVar32 + 0xd8,&local_68);
            }
          }
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar2 = PTR_DAT_04379528;
            if (iVar13 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_0155da04;
          *(long **)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = plVar18;
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
          plVar20 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x500,0x10);
          if (plVar20 == (long *)0x0) {
            (**(code **)(*plVar18 + 0xb8))(plVar18);
          }
          local_90 = (long *)0x0;
          local_88 = 0;
          FUN_0156cf88(&local_90,&local_78);
          FUN_01513474(plVar20,&local_90,param_2);
          plVar19 = local_90;
          *plVar20 = (long)&PTR_LAB_04219c50;
          plVar20[0x90] = 0;
          plVar20[9] = (long)&PTR_LAB_04219cb0;
          plVar20[10] = (long)&PTR_LAB_04219cf8;
          plVar20[0x91] = (long)&DAT_cbf29ce484222645;
          plVar20[0x92] = (long)&DAT_03996322;
          plVar20[0x93] = 0;
          plVar20[0x94] = 0;
          *(undefined4 *)(plVar20 + 0x95) = 0;
          *(undefined1 *)(plVar20 + 0x96) = 0;
          plVar20[0x97] = 0;
          plVar20[0x9d] = 0;
          plVar20[0x9c] = 0;
          plVar20[0x9b] = 0;
          plVar20[0x9a] = 0;
          puVar2 = PTR_DAT_0437a6d0 + 0x10;
          plVar20[0x99] = 0;
          *(undefined4 *)(plVar20 + 0x9e) = 0xffffffff;
          plVar20[0x98] = (long)puVar2;
          if (local_90 != (long *)0x0) {
            plVar1 = local_90 + 1;
            do {
              iVar13 = (int)*plVar1 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *(int *)plVar1 = iVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 == 0) {
              local_90[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar31 = *(long *)puVar9;
              *(long *)puVar10 = lVar31;
              local_68 = (long *)*plVar19;
              FUN_02a44274(lVar31 + 0xd8,&local_68);
            }
          }
          plVar20[1] = (long)plVar18;
          plVar20[2] = (long)plVar20;
          plVar20[3] = 0x500;
          plVar20[4] = 0x10;
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
          lVar32 = plVar20[0xb];
          if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar17;
          }
          piVar3 = (int *)(lVar32 + 0xc);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = *piVar3 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (local_78 != (long *)0x0) {
            plVar18 = local_78 + 1;
            do {
              iVar13 = (int)*plVar18 + -1;
              bVar12 = iVar13 == 0;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar7) {
                *(int *)plVar18 = iVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            goto LAB_0155bf74;
          }
          goto LAB_0155bfa8;
        }
        goto LAB_0155d3cc;
      }
      if (lVar32 < -0x1ed89422de7ef913) {
        if (lVar32 < -0x2fc4cc3c09854bfe) {
          if (lVar32 == -0x32f4148976dff224) {
            FUN_01562fb0(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else {
            if (lVar32 != -0x3053b7b1828d3647) goto LAB_0155d3cc;
            FUN_01563520(&local_90,param_1,param_2);
            local_68 = local_90;
          }
        }
        else if (lVar32 == -0x28dcec2315709cee) {
          FUN_0155f210(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else if (lVar32 == -0x2bcb0c0ec84f23ee) {
          FUN_01567660(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else {
          if (lVar32 != -0x2fc4cc3c09854bfe) goto LAB_0155d3cc;
          FUN_015660a0(&local_90,param_1,param_2);
          local_68 = local_90;
        }
      }
      else if (lVar32 == -0x18c8a48ae31357c5) {
        FUN_01560260(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == -0x1ed89422de7ef913) {
        FUN_01567a00(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != -0x1ece30abc147e2c9) goto LAB_0155d3cc;
        FUN_015619f0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 < 0x78d1cec44c33a3f) {
      if (lVar32 < -0x6f3a704d1decc7a) {
        if (lVar32 < -0x89f16227ae3e084) {
          if (lVar32 == -0x1509d36784058113) {
            FUN_01561d90(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else if (lVar32 == -0xf8070d498a4df14) {
            FUN_01562a40(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else {
            if (lVar32 != -0x14ec23c46f6970e9) goto LAB_0155d3cc;
            FUN_01564570(&local_90,param_1,param_2);
            local_68 = local_90;
          }
        }
        else if (lVar32 == -0x878bb31c5268320) {
          FUN_01560090(&local_90,param_1,param_2);
          local_68 = local_90;
        }
        else {
          if (lVar32 != -0x89f16227ae3e084) goto LAB_0155d3cc;
          FUN_01562300(&local_90,param_1,param_2);
          local_68 = local_90;
        }
      }
      else if (lVar32 == -0x6f3a704d1decc7a) {
        FUN_015610e0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != 0x772e6a81f50ef59) goto LAB_0155d3cc;
        FUN_015684e0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 < 0x14a0b245caf4db02) {
      if (lVar32 == 0x11abc55da747c1b4) {
        FUN_01560f10(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != 0x78d1cec44c33a3f) goto LAB_0155d3cc;
        FUN_015609a0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 == 0x1f832cf7eb248088) {
      FUN_01562130(&local_90,param_1,param_2);
      local_68 = local_90;
    }
    else if (lVar32 == 0x14a0b245caf4db02) {
      FUN_015643a0(&local_90,param_1,param_2);
      local_68 = local_90;
    }
    else {
      if (lVar32 != 0x1bafdf25420a5018) goto LAB_0155d3cc;
      FUN_01563a90(&local_90,param_1,param_2);
      local_68 = local_90;
    }
  }
  else if (lVar32 < 0x4938ee1ef8c2a2a8) {
    if (lVar32 < 0x31dbb046f173da3e) {
      if (lVar32 < 0x2d4f4bc40511b560) {
        if (lVar32 < 0x291af527363d4181) {
          if (lVar32 == 0x218e2a14a790d265) {
            FUN_01567bd0(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else if (lVar32 == 0x25bfb99353cef039) {
            FUN_015686b0(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else {
            if (lVar32 != 0x201e0032d8a70b27) goto LAB_0155d3cc;
            FUN_01566d50(&local_90,param_1,param_2);
            local_68 = local_90;
          }
        }
        else {
          if (lVar32 == 0x2c19f3517dbe93ee) {
            plVar18 = (long *)param_1[1];
            (**(code **)(*(long *)param_1[0x76] + 0x10))(&local_90);
            local_78 = (long *)0x0;
            uStack_70 = 0;
            FUN_0156d288(&local_78,&local_90);
            plVar20 = local_90;
            if (local_90 != (long *)0x0) {
              plVar19 = local_90 + 1;
              do {
                iVar13 = (int)*plVar19 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar7) {
                  *(int *)plVar19 = iVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar13 == 0) {
                local_90[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar32 = *(long *)puVar9;
                *(long *)puVar10 = lVar32;
                local_68 = (long *)*plVar20;
                FUN_02a44274(lVar32 + 0xd8,&local_68);
              }
            }
            if ((*PTR_DAT_04379520 & 1) == 0) {
              iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
              puVar2 = PTR_DAT_04379528;
              if (iVar13 != 0) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
            }
            lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_0155da04;
            *(long **)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = plVar18;
            *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
            plVar20 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x4b0,0x10);
            if (plVar20 == (long *)0x0) {
              (**(code **)(*plVar18 + 0xb8))(plVar18);
            }
            local_90 = (long *)0x0;
            local_88 = 0;
            FUN_0156cf88(&local_90,&local_78);
            FUN_01513474(plVar20,&local_90,param_2);
            plVar19 = local_90;
            lVar21 = _UNK_03888fc8;
            lVar31 = _DAT_03888fc0;
            *plVar20 = (long)&PTR_FUN_0421d4d8;
            plVar20[9] = (long)&PTR_LAB_0421d538;
            plVar20[10] = (long)&PTR_LAB_0421d580;
            plVar20[0x91] = lVar21;
            plVar20[0x90] = lVar31;
            plVar20[0x92] = 0;
            plVar20[0x93] = 0;
            *(undefined1 *)(plVar20 + 0x94) = 0;
            if (local_90 != (long *)0x0) {
              plVar1 = local_90 + 1;
              do {
                iVar13 = (int)*plVar1 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *(int *)plVar1 = iVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar13 == 0) {
                local_90[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar31 = *(long *)puVar9;
                *(long *)puVar10 = lVar31;
                local_68 = (long *)*plVar19;
                FUN_02a44274(lVar31 + 0xd8,&local_68);
              }
            }
            plVar20[1] = (long)plVar18;
            plVar20[2] = (long)plVar20;
            plVar20[3] = 0x4b0;
            plVar20[4] = 0x10;
            *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
            lVar32 = plVar20[0xb];
            if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
            if (*(long *)(lVar32 + 0x10) == 0) {
              uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
              *(undefined8 *)(lVar32 + 0x10) = uVar17;
            }
            piVar3 = (int *)(lVar32 + 0xc);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = *piVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (local_78 != (long *)0x0) {
              plVar18 = local_78 + 1;
              do {
                iVar13 = (int)*plVar18 + -1;
                bVar12 = iVar13 == 0;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar7) {
                  *(int *)plVar18 = iVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              goto LAB_0155bf74;
            }
            goto LAB_0155bfa8;
          }
          if (lVar32 != 0x291af527363d4181) goto LAB_0155d3cc;
          FUN_01568df0(&local_90,param_1,param_2);
          local_68 = local_90;
        }
      }
      else if (lVar32 == 0x30cbde131fb4d938) {
        FUN_01562de0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == 0x2d4f4bc40511b560) {
        FUN_01567da0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != 0x2e4206d37439b192) goto LAB_0155d3cc;
        FUN_01561bc0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 < 0x41a66bb6768fe328) {
      if (lVar32 == 0x3b0833239bd408b2) {
        FUN_01568880(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == 0x3cf62fbd0e831d65) {
        FUN_0155f3e0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != 0x31dbb046f173da3e) goto LAB_0155d3cc;
        FUN_015672c0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 == 0x46e4dbd918b9f143) {
      plVar18 = (long *)param_1[1];
      (**(code **)(*(long *)param_1[0x76] + 0x10))(&local_90);
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_0156d288(&local_78,&local_90);
      plVar20 = local_90;
      if (local_90 != (long *)0x0) {
        plVar19 = local_90 + 1;
        do {
          iVar13 = (int)*plVar19 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar7) {
            *(int *)plVar19 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          local_90[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar32 = *(long *)puVar9;
          *(long *)puVar10 = lVar32;
          local_68 = (long *)*plVar20;
          FUN_02a44274(lVar32 + 0xd8,&local_68);
        }
      }
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar2 = PTR_DAT_04379528;
        if (iVar13 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_0155da04;
      *(long **)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = plVar18;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
      plVar20 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x4b0,0x10);
      if (plVar20 == (long *)0x0) {
        (**(code **)(*plVar18 + 0xb8))(plVar18);
      }
      local_90 = (long *)0x0;
      local_88 = 0;
      FUN_0156cf88(&local_90,&local_78);
      FUN_01513474(plVar20,&local_90,param_2);
      plVar19 = local_90;
      *plVar20 = (long)&PTR_FUN_0421d338;
      *(undefined1 *)(plVar20 + 0x94) = 0;
      plVar20[9] = (long)&PTR_LAB_0421d398;
      plVar20[10] = (long)&PTR_LAB_0421d3e0;
      if (local_90 != (long *)0x0) {
        plVar1 = local_90 + 1;
        do {
          iVar13 = (int)*plVar1 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          local_90[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar31 = *(long *)puVar9;
          *(long *)puVar10 = lVar31;
          local_68 = (long *)*plVar19;
          FUN_02a44274(lVar31 + 0xd8,&local_68);
        }
      }
      plVar20[1] = (long)plVar18;
      plVar20[2] = (long)plVar20;
      plVar20[3] = 0x4b0;
      plVar20[4] = 0x10;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
      lVar32 = plVar20[0xb];
      if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
      if (*(long *)(lVar32 + 0x10) == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
        *(undefined8 *)(lVar32 + 0x10) = uVar17;
      }
      piVar3 = (int *)(lVar32 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (local_78 != (long *)0x0) {
        plVar18 = local_78 + 1;
        do {
          iVar13 = (int)*plVar18 + -1;
          bVar12 = iVar13 == 0;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar7) {
            *(int *)plVar18 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_0155bf74:
        plVar18 = local_78;
        if (bVar12) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar32 = *(long *)puVar9;
          *(long *)puVar10 = lVar32;
          local_90 = (long *)*plVar18;
          FUN_02a44274(lVar32 + 0xd8,&local_90);
        }
      }
LAB_0155bfa8:
      (**(code **)(*plVar20 + 0x40))(plVar20,*(undefined8 *)(param_1[0x76] + 0xb8),param_2);
      local_68 = plVar20;
    }
    else {
      if (lVar32 != 0x41a66bb6768fe328) goto LAB_0155d3cc;
      FUN_01563350(&local_90,param_1,param_2);
      local_68 = local_90;
    }
  }
  else if (lVar32 < 0x6a24ce22aedd1315) {
    if (lVar32 < 0x56a2a958745e7f77) {
      if (lVar32 < 0x53255eded44c1d3d) {
        if (lVar32 < 0x50d6452fe94d41c4) {
          if (lVar32 == 0x4e45a2bb2ff975a5) {
            FUN_0155f950(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else if (lVar32 == 0x49f5cb5061a72f87) {
            FUN_015636f0(&local_90,param_1,param_2);
            local_68 = local_90;
          }
          else {
            if (lVar32 != 0x4938ee1ef8c2a2a8) goto LAB_0155d3cc;
            FUN_015653f0(&local_90,param_1,param_2);
            local_68 = local_90;
          }
        }
        else {
          if (lVar32 != 0x50d6452fe94d41c4) goto LAB_0155d3cc;
          FUN_015638c0(&local_90,param_1,param_2);
          local_68 = local_90;
        }
      }
      else if (lVar32 == 0x5471f773aeed6e74) {
        FUN_01561f60(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == 0x54bad945bc6b9693) {
        FUN_01560430(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != 0x53255eded44c1d3d) goto LAB_0155d3cc;
        FUN_01566270(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 < 0x651f1864c614c174) {
      if (lVar32 < 0x5dc653c8aca8f882) {
        if (lVar32 != 0x56a2a958745e7f77) goto LAB_0155d3cc;
        FUN_01567830(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == 0x64c366b8637c6290) {
        FUN_0155fcf0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == 0x5dc653c8aca8f882) {
        FUN_015624d0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != 0x60bd82b224135b00) goto LAB_0155d3cc;
        FUN_01566b80(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 == 0x67b8cdd06d2ec6c1) {
      FUN_01560d40(&local_90,param_1,param_2);
      local_68 = local_90;
    }
    else if (lVar32 == 0x651f1864c614c174) {
      FUN_01565960(&local_90,param_1,param_2);
      local_68 = local_90;
    }
    else {
      if (lVar32 != 0x667b1e2161a161e4) goto LAB_0155d3cc;
      FUN_015626a0(&local_90,param_1,param_2);
      local_68 = local_90;
    }
  }
  else if (lVar32 < 0x726e76e4b0b929be) {
    if (lVar32 < 0x70f59b81a3a46621) {
      if (lVar32 < 0x6c1783fb3cc8ded6) {
        if (lVar32 != 0x6a24ce22aedd1315) goto LAB_0155d3cc;
        FUN_01564ae0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == 0x6d422a58ffd64be7) {
        FUN_01560b70(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == 0x6c1783fb3cc8ded6) {
        FUN_01568fc0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != 0x6d7fcecdae772c70) goto LAB_0155d3cc;
        FUN_01562c10(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 < 0x72528376e768826e) {
      if (lVar32 == 0x70f59b81a3a46621) {
        FUN_015641d0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else if (lVar32 == 0x720b31386a169978) {
        FUN_015670f0(&local_90,param_1,param_2);
        local_68 = local_90;
      }
      else {
        if (lVar32 != 0x71c977da7dad7dce) goto LAB_0155d3cc;
        FUN_01566440(&local_90,param_1,param_2);
        local_68 = local_90;
      }
    }
    else if (lVar32 == 0x72528376e768826e) {
      FUN_01565050(&local_90,param_1,param_2);
      local_68 = local_90;
    }
    else {
LAB_0155d3cc:
      FUN_01569360(&local_68,param_1,param_2);
    }
  }
  else if (lVar32 < 0x788e360afc008647) {
    if (lVar32 == 0x7288a28ca8ed44dc) {
      FUN_01561820(&local_90,param_1,param_2);
      local_68 = local_90;
    }
    else if (lVar32 == 0x726e76e4b0b929be) {
      FUN_01565790(&local_90,param_1,param_2);
      local_68 = local_90;
    }
    else {
      if (lVar32 != 0x783aaef142841df9) goto LAB_0155d3cc;
      FUN_015667e0(&local_90,param_1,param_2);
      local_68 = local_90;
    }
  }
  else if (lVar32 < 0x7b1090484f0bc45a) {
    if (lVar32 != 0x788e360afc008647) goto LAB_0155d3cc;
    FUN_01561480(&local_90,param_1,param_2);
    local_68 = local_90;
  }
  else if (lVar32 == 0x7b1090484f0bc45a) {
    FUN_01567490(&local_90,param_1,param_2);
    local_68 = local_90;
  }
  else if (lVar32 == 0x7f0b02f69d239342) {
    FUN_01564740(&local_90,param_1,param_2);
    local_68 = local_90;
  }
  else {
    if (lVar32 != 0x7ff7d2284d22450f) goto LAB_0155d3cc;
    FUN_01565ed0(&local_90,param_1,param_2);
    local_68 = local_90;
  }
  if (plVar24 != (long *)0x0) {
    plVar20 = plVar24 + 1;
    do {
      iVar13 = (int)*plVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *(int *)plVar20 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      plVar24[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar32 = *(long *)puVar9;
      *(long *)puVar10 = lVar32;
      local_90 = (long *)*plVar24;
      FUN_02a44274(lVar32 + 0xd8,&local_90);
    }
  }
  local_a0 = local_68;
  lVar32 = local_68[0xb];
  if (*(undefined8 **)(lVar32 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar32 + 0x10) == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
      *(undefined8 *)(lVar32 + 0x10) = uVar17;
    }
    piVar3 = (int *)(lVar32 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = *piVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar20 = (long *)local_a0[0x11];
    if (plVar20 != (long *)0x0) {
      lVar32 = plVar20[0xb];
      if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
      if (*(long *)(lVar32 + 0x10) == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
        *(undefined8 *)(lVar32 + 0x10) = uVar17;
      }
      piVar3 = (int *)(lVar32 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lVar32 = nn::os::GetCurrentThread();
    plVar24 = plVar20 + 0x41;
    do {
      if (*plVar24 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar20 + 0x1fc));
          while (*plVar24 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar7) {
              *plVar24 = lVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0155b8bc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar7) {
        *plVar24 = lVar32;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0155b8bc:
    if (plVar20 != (long *)0x0) {
      lVar32 = plVar20[0xb];
      piVar3 = (int *)(lVar32 + 0xc);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar32 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
    }
    lVar31 = *(long *)(param_1[0x76] + 0x88);
    lVar32 = lVar31;
    if (*(long *)(lVar31 + 0x1d0) != 0) {
      lVar32 = *(long *)(lVar31 + 0x1d0);
    }
    if (*(long *)(lVar31 + 0x1d8) != 0) {
      lVar31 = *(long *)(lVar31 + 0x1d8);
    }
    if (lVar32 != lVar31) {
      FUN_02a70230(plVar20);
      plVar24 = (long *)local_a0[0x12];
      if (plVar24 != (long *)0x0) {
        lVar32 = plVar24[0xb];
        if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
        if (*(long *)(lVar32 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
          *(undefined8 *)(lVar32 + 0x10) = uVar17;
        }
        piVar3 = (int *)(lVar32 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar32 = nn::os::GetCurrentThread();
      plVar18 = plVar24 + 0x41;
      do {
        if (*plVar18 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar24 + 0x1fc));
            while (*plVar18 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar7) {
                *plVar18 = lVar32;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_0155b994;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *plVar18 = lVar32;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0155b994:
      if (plVar24 != (long *)0x0) {
        lVar32 = plVar24[0xb];
        piVar3 = (int *)(lVar32 + 0xc);
        do {
          iVar13 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar32 + 0x18) = 0;
          (**(code **)(*plVar24 + 0x20))(plVar24);
        }
      }
      lVar31 = *(long *)(param_1[0x76] + 0x90);
      lVar32 = lVar31;
      if (*(long *)(lVar31 + 0x1d0) != 0) {
        lVar32 = *(long *)(lVar31 + 0x1d0);
      }
      if (*(long *)(lVar31 + 0x1d8) != 0) {
        lVar31 = *(long *)(lVar31 + 0x1d8);
      }
      if (lVar32 != lVar31) {
        FUN_02a70230(plVar24);
        plVar18 = local_a0;
        if (param_1[0x86] != 0) {
          plVar18 = *(long **)(param_1[0x86] + 0x88);
          if (plVar18 != (long *)0x0) {
            lVar32 = plVar18[0xb];
            if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
            if (*(long *)(lVar32 + 0x10) == 0) {
              uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
              *(undefined8 *)(lVar32 + 0x10) = uVar17;
            }
            piVar3 = (int *)(lVar32 + 0xc);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = *piVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            FUN_02a70468(plVar20,plVar18,0);
            lVar32 = plVar18[0xb];
            piVar3 = (int *)(lVar32 + 0xc);
            do {
              iVar13 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = iVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar32 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
          }
          plVar19 = *(long **)(param_1[0x86] + 0x90);
          plVar18 = local_a0;
          if (plVar19 != (long *)0x0) {
            lVar32 = plVar19[0xb];
            if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
            if (*(long *)(lVar32 + 0x10) == 0) {
              uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
              *(undefined8 *)(lVar32 + 0x10) = uVar17;
            }
            piVar3 = (int *)(lVar32 + 0xc);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = *piVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            FUN_02a70468(plVar24,plVar19,0);
            lVar32 = plVar19[0xb];
            piVar3 = (int *)(lVar32 + 0xc);
            do {
              iVar13 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = iVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            plVar18 = local_a0;
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar32 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
              plVar18 = local_a0;
            }
          }
        }
        local_a0 = plVar18;
        if (plVar18 != (long *)0x0) {
          lVar32 = plVar18[0xb];
          if (*(undefined8 **)(lVar32 + 0x18) == (undefined8 *)0x0) goto LAB_0155d9e8;
          if (*(long *)(lVar32 + 0x10) == 0) {
            uVar17 = (**(code **)**(undefined8 **)(lVar32 + 0x18))();
            *(undefined8 *)(lVar32 + 0x10) = uVar17;
          }
          piVar3 = (int *)(lVar32 + 0xc);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = *piVar3 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        plVar19 = (long *)param_1[0x86];
        param_1[0x86] = (long)plVar18;
        if (plVar19 != (long *)0x0) {
          lVar32 = plVar19[0xb];
          piVar3 = (int *)(lVar32 + 0xc);
          do {
            iVar13 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = iVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar32 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))();
          }
        }
        uVar22 = *(ulong *)(lVar29 + 0x238);
        if (uVar22 < *(ulong *)(lVar29 + 0x240)) {
          FUN_0156b6d8(lVar29 + 0x210,*(long *)(lVar29 + 0x230) + uVar22 * 8,&local_a0);
          *(long *)(lVar29 + 0x238) = *(long *)(lVar29 + 0x238) + 1;
        }
        else {
          local_90 = (long *)(*(long *)(lVar29 + 0x230) + uVar22 * 8);
          FUN_0156b61c(&local_78,lVar29 + 0x210,&local_90,&local_a0);
        }
        plVar24[0x41] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar24 + 0x1fc));
        plVar20[0x41] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar20 + 0x1fc));
        if (local_a0 != (long *)0x0) {
          lVar29 = local_a0[0xb];
          piVar3 = (int *)(lVar29 + 0xc);
          do {
            iVar13 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = iVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar29 + 0x18) = 0;
            (**(code **)(*local_a0 + 0x20))();
          }
        }
        if (local_68 != (long *)0x0) {
          lVar29 = local_68[0xb];
          piVar3 = (int *)(lVar29 + 0xc);
          do {
            iVar13 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = iVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar29 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        return;
      }
    }
  }
LAB_0155d9e8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


