/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a0590; name: FUN_026a0590
 */


void FUN_026a0590(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [12];
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 local_a0;
  float fStack_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  puVar10 = PTR_DAT_0437a6e0;
  puVar9 = PTR_DAT_0437a6d8;
  if (*(char *)(param_1 + 0xc6a) == '\0') {
    lVar18 = *(long *)(param_1 + 0xc38);
    if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
      piVar2 = (int *)(lVar18 + 0xc);
      iVar11 = *(int *)(lVar18 + 0xc);
      do {
        plVar19 = *(long **)(lVar18 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          uVar14 = FUN_00ad3750();
          *(undefined8 *)puVar10 = uVar14;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_026a08a8;
          if (plVar19 == (long *)puVar10) break;
          plVar19 = (long *)*plVar19;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_026a0cb4;
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 != 0) {
            plVar19 = (long *)(lVar18 + -0x50);
            FUN_02c90b50(plVar19,1);
            lVar18 = *(long *)(lVar18 + 8);
            piVar2 = (int *)(lVar18 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 != 0) break;
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
            lVar18 = *(long *)(param_1 + 0xc48);
            pbVar6 = PTR_DAT_0437a6d8;
            puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
            goto joined_r0x026a0d6c;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_026a0cb4:
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_026a08a8:
    lVar18 = *(long *)(param_1 + 0xc48);
    pbVar6 = PTR_DAT_0437a6d8;
    puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
joined_r0x026a0d6c:
    PTR_DAT_0437a6d8 = pbVar6;
    PTR_DAT_0437a6e0 = (undefined *)puVar7;
    if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
      piVar2 = (int *)(lVar18 + 0xc);
      iVar11 = *(int *)(lVar18 + 0xc);
      do {
        plVar19 = *(long **)(lVar18 + 0x10);
        if (((*pbVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar6), iVar12 != 0)) {
          uVar14 = FUN_00ad3750();
          *puVar7 = uVar14;
          __cxa_guard_release(pbVar6);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) goto LAB_026a08b0;
          if (plVar19 == puVar7) break;
          plVar19 = (long *)*plVar19;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar18 = *(long *)(lVar18 + 0x18);
            if (lVar18 != 0) {
              plVar19 = (long *)(lVar18 + -0x50);
              FUN_02c90b50(plVar19,1);
              lVar18 = *(long *)(lVar18 + 8);
              piVar2 = (int *)(lVar18 + 0xc);
              do {
                iVar11 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*plVar19 + 0x20))(plVar19);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_026a08b0:
    *(undefined1 *)(param_1 + 0xc6a) = 1;
  }
  if (param_2 == 0) {
    local_60 = 8;
    local_58 = (long *)0x0;
    local_70 = 0xd37b7a2603d7ef69;
    pcStack_68 = "whooguru";
    local_90 = 0x3d245706280d27e5;
    pcStack_88 = "eff_trajectory_scale_normal";
    local_80 = 0x1b;
    local_78 = (long *)0x0;
    auVar8 = FUN_00aee408(&local_70,&local_90);
    fVar22 = auVar8._8_4_;
    uVar21 = auVar8._0_8_;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar18 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar18;
    uVar15 = *(ulong *)(lVar18 + 0x60);
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar15 - 1 & 0xd37b7a2603d7ef69;
      }
      else {
        uVar17 = 0xd37b7a2603d7ef69;
        if (uVar15 < 0xd37b7a2603d7ef6a) {
          uVar17 = 0;
          if (uVar15 != 0) {
            uVar17 = 0xd37b7a2603d7ef69 / uVar15;
          }
          uVar17 = 0xd37b7a2603d7ef69 - uVar17 * uVar15;
        }
      }
      plVar19 = *(long **)(*(long *)(lVar18 + 0x58) + uVar17 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar19[1] == 0xd37b7a2603d7ef69) {
              if (plVar19[2] == -0x2c8485d9fc281097) goto LAB_026a09d4;
            }
            else if ((plVar19[1] & uVar15 - 1) != uVar17) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar19[1];
            if (uVar16 == 0xd37b7a2603d7ef69) {
              if (plVar19[2] == -0x2c8485d9fc281097) goto LAB_026a09d4;
            }
            else {
              if (uVar15 <= uVar16) {
                uVar5 = 0;
                if (uVar15 != 0) {
                  uVar5 = uVar16 / uVar15;
                }
                uVar16 = uVar16 - uVar5 * uVar15;
              }
              if (uVar16 != uVar17) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
  }
  else {
    local_60 = 8;
    local_58 = (long *)0x0;
    local_70 = 0xd37b7a2603d7ef69;
    pcStack_68 = "whooguru";
    local_90 = 0x1157520ab202d8ba;
    pcStack_88 = "eff_trajectory_scale_swoop";
    local_80 = 0x1a;
    local_78 = (long *)0x0;
    auVar8 = FUN_00aee408(&local_70,&local_90);
    fVar22 = auVar8._8_4_;
    uVar21 = auVar8._0_8_;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar18 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar18;
    uVar15 = *(ulong *)(lVar18 + 0x60);
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar15 - 1 & 0xd37b7a2603d7ef69;
      }
      else {
        uVar17 = 0xd37b7a2603d7ef69;
        if (uVar15 < 0xd37b7a2603d7ef6a) {
          uVar17 = 0;
          if (uVar15 != 0) {
            uVar17 = 0xd37b7a2603d7ef69 / uVar15;
          }
          uVar17 = 0xd37b7a2603d7ef69 - uVar17 * uVar15;
        }
      }
      plVar19 = *(long **)(*(long *)(lVar18 + 0x58) + uVar17 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar16 < 2) {
LAB_026a0b8c:
          if (plVar19[1] != 0xd37b7a2603d7ef69) {
            if ((plVar19[1] & uVar15 - 1) == uVar17) goto LAB_026a0bd0;
            goto LAB_026a0850;
          }
          if (plVar19[2] != -0x2c8485d9fc281097) goto LAB_026a0bd0;
          plVar19 = (long *)plVar19[3];
joined_r0x026a06f8:
          if (plVar19 != (long *)0x0) {
            plVar1 = plVar19 + 10;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar15 = plVar19[0x21];
            uVar23 = 0;
            if (uVar15 != 0) {
              uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
              uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
              uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar16 < 2) {
                uVar17 = uVar15 - 1 & 0x1a589ff32adb8f40;
              }
              else if (uVar15 < 0x1a589ff32adb8f41) {
                uVar17 = 0;
                if (uVar15 != 0) {
                  uVar17 = 0x1a589ff32adb8f40 / uVar15;
                }
                uVar17 = 0x1a589ff32adb8f40 - uVar17 * uVar15;
              }
              else {
                uVar17 = 0x1a589ff32adb8f40;
              }
              plVar20 = *(long **)(plVar19[0x20] + uVar17 * 8);
              if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0))
              {
                if (uVar16 < 2) {
                  do {
                    if (plVar20[1] == 0x1a589ff32adb8f40) {
                      if (plVar20[2] == 0x1a589ff32adb8f40) goto LAB_026a0838;
                    }
                    else if ((plVar20[1] & uVar15 - 1) != uVar17) break;
                    plVar20 = (long *)*plVar20;
                  } while (plVar20 != (long *)0x0);
                }
                else {
                  do {
                    uVar16 = plVar20[1];
                    if (uVar16 != 0x1a589ff32adb8f40) {
                      if (uVar15 <= uVar16) {
                        uVar5 = 0;
                        if (uVar15 != 0) {
                          uVar5 = uVar16 / uVar15;
                        }
                        uVar16 = uVar16 - uVar5 * uVar15;
                      }
                      if (uVar16 == uVar17) goto LAB_026a07c4;
                      break;
                    }
                    if (plVar20[2] == 0x1a589ff32adb8f40) goto LAB_026a0838;
LAB_026a07c4:
                    plVar20 = (long *)*plVar20;
                  } while (plVar20 != (long *)0x0);
                }
              }
            }
            goto LAB_026a083c;
          }
        }
        else {
          do {
            uVar16 = plVar19[1];
            if (uVar16 == 0xd37b7a2603d7ef69) {
              if (plVar19[2] == -0x2c8485d9fc281097) {
                plVar19 = (long *)plVar19[3];
                goto joined_r0x026a06f8;
              }
            }
            else {
              if (uVar15 <= uVar16) {
                uVar5 = 0;
                if (uVar15 != 0) {
                  uVar5 = uVar16 / uVar15;
                }
                uVar16 = uVar16 - uVar5 * uVar15;
              }
              if (uVar16 != uVar17) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_026a0850;
LAB_026a09d4:
  plVar19 = (long *)plVar19[3];
  if (plVar19 == (long *)0x0) goto LAB_026a0850;
  plVar1 = plVar19 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar15 = plVar19[0x21];
  uVar23 = 0;
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & 0xa5fd577f67f4ca93;
    }
    else if (uVar15 < 0xa5fd577f67f4ca94) {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = 0xa5fd577f67f4ca93 / uVar15;
      }
      uVar17 = 0xa5fd577f67f4ca93 - uVar17 * uVar15;
    }
    else {
      uVar17 = 0xa5fd577f67f4ca93;
    }
    plVar20 = *(long **)(plVar19[0x20] + uVar17 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar20[1] == 0xa5fd577f67f4ca93) {
            if (plVar20[2] == -0x5a02a880980b356d) goto LAB_026a0b1c;
          }
          else if ((plVar20[1] & uVar15 - 1) != uVar17) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar20[1];
          if (uVar16 == 0xa5fd577f67f4ca93) {
            if (plVar20[2] == -0x5a02a880980b356d) goto LAB_026a0b1c;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar5 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_026a0b24;
LAB_026a0838:
  uVar23 = (undefined4)plVar20[6];
LAB_026a083c:
  do {
    iVar11 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
  goto LAB_026a0850;
LAB_026a0bd0:
  plVar19 = (long *)*plVar19;
  if (plVar19 == (long *)0x0) goto LAB_026a0850;
  goto LAB_026a0b8c;
LAB_026a0b1c:
  uVar23 = (undefined4)plVar20[6];
LAB_026a0b24:
  do {
    iVar11 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
LAB_026a0850:
  puVar10 = PTR_DAT_0437a6e0;
  puVar9 = PTR_DAT_0437a6d8;
  lVar18 = *(long *)(param_1 + 0xc38);
  fVar24 = (float)((ulong)uVar21 >> 0x20);
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
    piVar2 = (int *)(lVar18 + 0xc);
    iVar11 = *(int *)(lVar18 + 0xc);
    do {
      plVar19 = *(long **)(lVar18 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        uVar14 = FUN_00ad3750();
        *(undefined8 *)puVar10 = uVar14;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto LAB_026a0860;
        if (plVar19 == (long *)puVar10) break;
        plVar19 = (long *)*plVar19;
      }
      iVar12 = *piVar2;
      if (iVar12 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_026a0ea0;
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 != 0) {
          plVar19 = (long *)(lVar18 + -0x50);
          lVar13 = FUN_02c90d14(plVar19);
          if (lVar13 != 0) {
            *(ulong *)(lVar13 + 0x128) = (ulong)(uint)fVar22;
            *(undefined8 *)(lVar13 + 0x120) = uVar21;
            *(ulong *)(lVar13 + 0x148) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0xf8) >> 0x20) * 0.0,
                          fVar22 * (float)*(undefined8 *)(lVar13 + 0xf8));
            *(ulong *)(lVar13 + 0x140) =
                 CONCAT44(fVar24 * (float)((ulong)*(undefined8 *)(lVar13 + 0xf0) >> 0x20),
                          (float)uVar21 * (float)*(undefined8 *)(lVar13 + 0xf0));
            *(ulong *)(lVar13 + 0x108) = CONCAT44(uVar23,(int)*(undefined8 *)(lVar13 + 0x108));
            *(undefined8 *)(lVar13 + 0x100) = *(undefined8 *)(lVar13 + 0x100);
          }
          lVar18 = *(long *)(lVar18 + 8);
          piVar2 = (int *)(lVar18 + 0xc);
          do {
            iVar11 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 != 0) break;
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
          lVar18 = *(long *)(param_1 + 0xc48);
          if (lVar18 == 0) {
            return;
          }
          goto LAB_026a0f70;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_026a0ea0:
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_026a0860:
  lVar18 = *(long *)(param_1 + 0xc48);
  if (lVar18 != 0) {
LAB_026a0f70:
    puVar10 = PTR_DAT_0437a6e0;
    puVar9 = PTR_DAT_0437a6d8;
    if (*(int *)(lVar18 + 0xc) != 0) {
      piVar2 = (int *)(lVar18 + 0xc);
      iVar11 = *(int *)(lVar18 + 0xc);
      do {
        plVar19 = *(long **)(lVar18 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          uVar14 = FUN_00ad3750();
          *(undefined8 *)puVar10 = uVar14;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar19 == (long *)0x0) {
            return;
          }
          if (plVar19 == (long *)puVar10) break;
          plVar19 = (long *)*plVar19;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar18 = *(long *)(lVar18 + 0x18);
            if (lVar18 == 0) {
              return;
            }
            plVar19 = (long *)(lVar18 + -0x50);
            lVar13 = FUN_02c90d14(plVar19);
            if (lVar13 != 0) {
              *(ulong *)(lVar13 + 0x128) = (ulong)(uint)fVar22;
              *(undefined8 *)(lVar13 + 0x120) = uVar21;
              *(ulong *)(lVar13 + 0x148) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0xf8) >> 0x20) * 0.0,
                            fVar22 * (float)*(undefined8 *)(lVar13 + 0xf8));
              *(ulong *)(lVar13 + 0x140) =
                   CONCAT44(fVar24 * (float)((ulong)*(undefined8 *)(lVar13 + 0xf0) >> 0x20),
                            (float)uVar21 * (float)*(undefined8 *)(lVar13 + 0xf0));
              *(ulong *)(lVar13 + 0x108) = CONCAT44(uVar23,(int)*(undefined8 *)(lVar13 + 0x108));
              *(undefined8 *)(lVar13 + 0x100) = *(undefined8 *)(lVar13 + 0x100);
            }
            lVar18 = *(long *)(lVar18 + 8);
            piVar2 = (int *)(lVar18 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
  }
  return;
}


