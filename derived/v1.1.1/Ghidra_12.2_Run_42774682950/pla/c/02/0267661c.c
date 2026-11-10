/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0267661c; name: FUN_0267661c
 */


void FUN_0267661c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  long *local_d0 [3];
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  FUN_01a81668();
  uVar11 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((uVar11 & 1) == 0) {
    return;
  }
  if ((int)param_1[0x18a] != 3) {
    (**(code **)(*param_1 + 0x3b8))(param_1);
  }
  FUN_01a88454(param_1);
  (**(code **)(*param_1 + 0x388))(param_1);
  if (*(char *)((long)param_1 + 0xc62) != '\0') {
    FUN_01a885f0(param_1);
  }
  if (0 < (int)param_1[0x18b]) {
    *(int *)(param_1 + 0x18b) = (int)param_1[0x18b] + -1;
  }
  if (0 < *(int *)((long)param_1 + 0xc5c)) {
    *(int *)((long)param_1 + 0xc5c) = *(int *)((long)param_1 + 0xc5c) + -1;
  }
  if (*(int *)(param_1[0xb8] + 0x68) == 3) {
    if (*(char *)((long)param_1 + 0xc55) == '\0') {
      local_90 = (undefined8 *)0x4b6aad4704f84d1;
      pcStack_88 = "dash_keep_frame";
      local_80 = 0xf;
      local_78 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar12 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar12;
      uVar11 = *(ulong *)(lVar12 + 0x60);
      if (uVar11 != 0) {
        uVar21 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          uVar22 = uVar11 - 1 & 0x7b1672169b2cf48f;
        }
        else if (uVar11 < 0x7b1672169b2cf490) {
          uVar22 = 0;
          if (uVar11 != 0) {
            uVar22 = 0x7b1672169b2cf48f / uVar11;
          }
          uVar22 = 0x7b1672169b2cf48f - uVar22 * uVar11;
        }
        else {
          uVar22 = 0x7b1672169b2cf48f;
        }
        plVar14 = *(long **)(*(long *)(lVar12 + 0x58) + uVar22 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar21 < 2) {
            do {
              if (plVar14[1] == 0x7b1672169b2cf48f) {
                if (plVar14[2] == 0x7b1672169b2cf48f) goto LAB_026768a4;
              }
              else if ((plVar14[1] & uVar11 - 1) != uVar22) goto LAB_02676bfc;
              plVar14 = (long *)*plVar14;
              uVar9 = 0;
            } while (plVar14 != (long *)0x0);
            goto LAB_026768e4;
          }
          do {
            uVar21 = plVar14[1];
            if (uVar21 == 0x7b1672169b2cf48f) {
              if (plVar14[2] == 0x7b1672169b2cf48f) goto LAB_026768a4;
            }
            else {
              if (uVar11 <= uVar21) {
                uVar15 = 0;
                if (uVar11 != 0) {
                  uVar15 = uVar21 / uVar11;
                }
                uVar21 = uVar21 - uVar15 * uVar11;
              }
              if (uVar21 != uVar22) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
      goto LAB_02676bfc;
    }
    cVar2 = (char)param_1[0x186];
    goto joined_r0x02676908;
  }
  *(undefined1 *)((long)param_1 + 0xc55) = 0;
  if (((char)param_1[0x186] != '\0') && (*(char *)((long)param_1 + 0xc54) != '\0')) {
    if (param_1[0x182] == 0) {
      local_68 = (long *)0x0;
    }
    else {
      FUN_009b8630(&local_68);
      if (local_68 != (long *)0x0) {
        plVar14 = param_1 + 0x188;
        FUN_02a47560(&local_90,plVar14);
        puVar6 = PTR_DAT_04379660;
        local_b0 = 0x5af725bc7b01a222;
        pcStack_a8 = "camera_dash_end_interpolation_frame";
        local_a0 = 0x23;
        local_98 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        puVar8 = PTR_DAT_04379670;
        puVar7 = PTR_DAT_04379668;
        lVar12 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar12;
        puVar13 = *(undefined8 **)(lVar12 + 0x60);
        if (puVar13 != (undefined8 *)0x0) {
          uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            puVar16 = (undefined8 *)((long)puVar13 - 1U & (ulong)local_90);
          }
          else if (local_90 < puVar13) {
            puVar16 = local_90;
          }
          else {
            uVar21 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              uVar21 = (ulong)local_90 / (ulong)puVar13;
            }
            puVar16 = (undefined8 *)((long)local_90 - uVar21 * (long)puVar13);
          }
          plVar19 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar16 * 8);
          if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
            if (uVar11 < 2) {
              do {
                if ((undefined8 *)plVar19[1] == local_90) {
                  if ((undefined8 *)plVar19[2] == local_90) goto LAB_0267730c;
                }
                else if ((undefined8 *)((ulong)plVar19[1] & (long)puVar13 - 1U) != puVar16)
                goto LAB_026775d8;
                plVar19 = (long *)*plVar19;
                iVar10 = 0;
              } while (plVar19 != (long *)0x0);
              goto joined_r0x02677838;
            }
            do {
              puVar23 = (undefined8 *)plVar19[1];
              if (puVar23 == local_90) {
                if ((undefined8 *)plVar19[2] == local_90) goto LAB_0267730c;
              }
              else {
                if (puVar13 <= puVar23) {
                  uVar11 = 0;
                  if (puVar13 != (undefined8 *)0x0) {
                    uVar11 = (ulong)puVar23 / (ulong)puVar13;
                  }
                  puVar23 = (undefined8 *)((long)puVar23 - uVar11 * (long)puVar13);
                }
                if (puVar23 != puVar16) break;
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        goto LAB_026775d8;
      }
    }
  }
  goto LAB_026766d4;
LAB_026768a4:
  plVar14 = (long *)plVar14[3];
  if (plVar14 == (long *)0x0) {
LAB_02676bfc:
    uVar9 = 0;
  }
  else {
    plVar19 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar9 = FUN_00d78f50(plVar14,&local_90);
    do {
      iVar10 = (int)*plVar19 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *(int *)plVar19 = iVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
LAB_026768e4:
  *(undefined4 *)((long)param_1 + 0xc5c) = uVar9;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *(undefined1 *)((long)param_1 + 0xc55) = 1;
  cVar2 = (char)param_1[0x186];
joined_r0x02676908:
  if ((cVar2 != '\0') && (*(char *)((long)param_1 + 0xc54) == '\0')) {
    if (param_1[0x182] == 0) {
      local_68 = (long *)0x0;
    }
    else {
      FUN_009b8630(&local_68);
      if (local_68 != (long *)0x0) {
        uVar25 = FUN_01a831dc(param_1);
        uVar25 = FUN_01832b18(CONCAT44(0.0 - (float)((ulong)uVar25 >> 0x20),0.0 - (float)uVar25));
        plVar14 = param_1 + 0x189;
        FUN_02a47560(&local_90,plVar14);
        puVar6 = PTR_DAT_04379660;
        local_b0 = 0x6e0bf0c364120c03;
        pcStack_a8 = "camera_dash_start_interpolation_frame";
        local_a0 = 0x25;
        local_98 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        puVar8 = PTR_DAT_04379670;
        puVar7 = PTR_DAT_04379668;
        lVar12 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar12;
        puVar13 = *(undefined8 **)(lVar12 + 0x60);
        if (puVar13 != (undefined8 *)0x0) {
          uVar11 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            puVar16 = (undefined8 *)((long)puVar13 - 1U & (ulong)local_90);
          }
          else if (local_90 < puVar13) {
            puVar16 = local_90;
          }
          else {
            uVar21 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              uVar21 = (ulong)local_90 / (ulong)puVar13;
            }
            puVar16 = (undefined8 *)((long)local_90 - uVar21 * (long)puVar13);
          }
          plVar19 = *(long **)(*(long *)(lVar12 + 0x58) + (long)puVar16 * 8);
          if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
            if (uVar11 < 2) {
              do {
                if ((undefined8 *)plVar19[1] == local_90) {
                  if ((undefined8 *)plVar19[2] == local_90) goto LAB_02676fd4;
                }
                else if ((undefined8 *)((ulong)plVar19[1] & (long)puVar13 - 1U) != puVar16)
                goto LAB_0267757c;
                plVar19 = (long *)*plVar19;
                iVar10 = 0;
              } while (plVar19 != (long *)0x0);
              goto joined_r0x0267780c;
            }
            do {
              puVar23 = (undefined8 *)plVar19[1];
              if (puVar23 == local_90) {
                if ((undefined8 *)plVar19[2] == local_90) goto LAB_02676fd4;
              }
              else {
                if (puVar13 <= puVar23) {
                  uVar11 = 0;
                  if (puVar13 != (undefined8 *)0x0) {
                    uVar11 = (ulong)puVar23 / (ulong)puVar13;
                  }
                  puVar23 = (undefined8 *)((long)puVar23 - uVar11 * (long)puVar13);
                }
                if (puVar23 != puVar16) break;
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        goto LAB_0267757c;
      }
    }
  }
  goto LAB_02676754;
LAB_02676fd4:
  plVar19 = (long *)plVar19[3];
  if (plVar19 == (long *)0x0) {
LAB_0267757c:
    iVar10 = 0;
  }
  else {
    plVar17 = plVar19 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar10 = FUN_00d78f50(plVar19,&local_b0);
    do {
      iVar4 = (int)*plVar17 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
joined_r0x0267780c:
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar19 = local_68;
  FUN_02a47560(&local_90,plVar14);
  local_b0 = 0xaa45d2400c09d902;
  pcStack_a8 = "camera_dash_start_interpolation_type";
  local_a0 = 0x24;
  local_98 = (long *)0x0;
  uVar9 = FUN_00ea3f80(&local_90,&local_b0);
  FUN_02a47560(local_d0,plVar14);
  if (iVar10 == 0) {
    fVar26 = 1.0;
  }
  else {
    fVar26 = 1.0 / (float)iVar10;
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar7;
  *(long *)puVar8 = lVar12;
  plVar14 = *(long **)(lVar12 + 0x60);
  uVar27 = 0;
  if (plVar14 != (long *)0x0) {
    uVar11 = (long)plVar14 - ((ulong)plVar14 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      plVar17 = (long *)((long)plVar14 - 1U & (ulong)local_d0[0]);
    }
    else if (local_d0[0] < plVar14) {
      plVar17 = local_d0[0];
    }
    else {
      uVar21 = 0;
      if (plVar14 != (long *)0x0) {
        uVar21 = (ulong)local_d0[0] / (ulong)plVar14;
      }
      plVar17 = (long *)((long)local_d0[0] - uVar21 * (long)plVar14);
    }
    plVar20 = *(long **)(*(long *)(lVar12 + 0x58) + (long)plVar17 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((long *)plVar20[1] == local_d0[0]) {
            if ((long *)plVar20[2] == local_d0[0]) goto LAB_0267713c;
          }
          else if ((long *)((ulong)plVar20[1] & (long)plVar14 - 1U) != plVar17) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          plVar24 = (long *)plVar20[1];
          if (plVar24 == local_d0[0]) {
            if ((long *)plVar20[2] == local_d0[0]) goto LAB_0267713c;
          }
          else {
            if (plVar14 <= plVar24) {
              uVar11 = 0;
              if (plVar14 != (long *)0x0) {
                uVar11 = (ulong)plVar24 / (ulong)plVar14;
              }
              plVar24 = (long *)((long)plVar24 - uVar11 * (long)plVar14);
            }
            if (plVar24 != plVar17) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_02677670;
LAB_0267713c:
  plVar14 = (long *)plVar20[3];
  if (plVar14 != (long *)0x0) {
    plVar17 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar14[0x21];
    uVar27 = 0;
    if (uVar11 != 0) {
      uVar21 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar11 - 1 & 0xba332e71e29d7ffe;
      }
      else if (uVar11 < 0xba332e71e29d7fff) {
        uVar22 = 0;
        if (uVar11 != 0) {
          uVar22 = 0xba332e71e29d7ffe / uVar11;
        }
        uVar22 = 0xba332e71e29d7ffe - uVar22 * uVar11;
      }
      else {
        uVar22 = 0xba332e71e29d7ffe;
      }
      plVar20 = *(long **)(plVar14[0x20] + uVar22 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar20[1] == 0xba332e71e29d7ffe) {
              if (plVar20[2] == -0x45ccd18e1d628002) goto LAB_02677658;
            }
            else if ((plVar20[1] & uVar11 - 1) != uVar22) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar20[1];
            if (uVar21 == 0xba332e71e29d7ffe) {
              if (plVar20[2] == -0x45ccd18e1d628002) goto LAB_02677658;
            }
            else {
              if (uVar11 <= uVar21) {
                uVar15 = 0;
                if (uVar11 != 0) {
                  uVar15 = uVar21 / uVar11;
                }
                uVar21 = uVar21 - uVar15 * uVar11;
              }
              if (uVar21 != uVar22) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_0267765c;
  }
  goto LAB_02677670;
LAB_02677658:
  uVar27 = (undefined4)plVar20[6];
LAB_0267765c:
  do {
    iVar10 = (int)*plVar17 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *(int *)plVar17 = iVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_02677670:
  FUN_01a3a610(uVar25,fVar26,uVar27,plVar19,param_1 + 0x187,uVar9);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *(undefined1 *)((long)param_1 + 0xc54) = 1;
  if (local_68 != (long *)0x0) {
    lVar12 = local_68[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
LAB_02676754:
  FUN_01a92c54(&local_90,param_1);
  if (local_90 == (undefined8 *)0x0) {
    local_d0[0] = (long *)0x0;
  }
  else {
    FUN_00bd9360(local_d0);
    puVar13 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_90 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_b0 = *puVar13;
        FUN_02a44274(lVar12 + 0xd8,&local_b0);
      }
    }
  }
  if (local_d0[0] == (long *)0x0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xc56) == '\0') {
    if (((*PTR_DAT_043796b8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
    lVar12 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar12;
    local_90 = (undefined8 *)&DAT_56d709df6eaf0595;
    FUN_00da3604(lVar12 + 0x3c0,&local_90,0);
    local_90 = (undefined8 *)0x913f74f96c1af5a7;
    pcStack_88 = "PLAY_PM_RIDE_DASH_WHOOSH_LP";
    local_80 = 0x1b;
    local_78 = (long *)0x0;
    FUN_0290b66c(local_d0[0],&local_90,0);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    *(undefined1 *)((long)param_1 + 0xc56) = 1;
    if ((int)param_1[0x18b] == 0) {
      FUN_02677b10(param_1);
      lVar12 = param_1[0x18a];
      local_90 = (undefined8 *)0x4272fdc0abb2c0ee;
      pcStack_88 = "dash_voice_interval_frame";
      local_80 = 0x19;
      local_78 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar18 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar18;
      uVar11 = *(ulong *)(lVar18 + 0x60);
      if (uVar11 == 0) {
LAB_02676c24:
        uVar9 = 0;
      }
      else {
        uVar22 = *(ulong *)(&DAT_04266328 + (long)(int)lVar12 * 0x18);
        uVar21 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          uVar15 = uVar11 - 1 & uVar22;
        }
        else if (uVar22 < uVar11) {
          uVar15 = uVar22;
        }
        else {
          uVar15 = 0;
          if (uVar11 != 0) {
            uVar15 = uVar22 / uVar11;
          }
          uVar15 = uVar22 - uVar15 * uVar11;
        }
        plVar14 = *(long **)(*(long *)(lVar18 + 0x58) + uVar15 * 8);
        if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
        goto LAB_02676c24;
        if (1 < uVar21) {
          do {
            uVar21 = plVar14[1];
            if (uVar21 == uVar22) {
              if (plVar14[2] == uVar22) goto LAB_02676ab4;
            }
            else {
              if (uVar11 <= uVar21) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar21 / uVar11;
                }
                uVar21 = uVar21 - uVar5 * uVar11;
              }
              if (uVar21 != uVar15) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          goto LAB_02676c24;
        }
        do {
          if (plVar14[1] == uVar22) {
            if (plVar14[2] == uVar22) goto LAB_02676ab4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar15) goto LAB_02676c24;
          plVar14 = (long *)*plVar14;
          uVar9 = 0;
        } while (plVar14 != (long *)0x0);
      }
LAB_02676af4:
      *(undefined4 *)(param_1 + 0x18b) = uVar9;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  if (local_d0[0] == (long *)0x0) {
    return;
  }
  lVar12 = local_d0[0][0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 != 0) {
    return;
  }
  goto LAB_026767a0;
LAB_02676ab4:
  plVar14 = (long *)plVar14[3];
  if (plVar14 == (long *)0x0) goto LAB_02676c24;
  plVar19 = plVar14 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar3) {
      *(int *)plVar19 = (int)*plVar19 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = FUN_00d78f50(plVar14,&local_90);
  do {
    iVar10 = (int)*plVar19 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar3) {
      *(int *)plVar19 = iVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  goto LAB_02676af4;
LAB_0267730c:
  plVar19 = (long *)plVar19[3];
  if (plVar19 == (long *)0x0) {
LAB_026775d8:
    iVar10 = 0;
  }
  else {
    plVar17 = plVar19 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar10 = FUN_00d78f50(plVar19,&local_b0);
    do {
      iVar4 = (int)*plVar17 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
joined_r0x02677838:
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  plVar19 = local_68;
  uVar25 = FUN_01a4bcc8(local_68);
  FUN_02a47560(&local_90,plVar14);
  local_b0 = 0x35fe4c82233149d9;
  pcStack_a8 = "camera_dash_end_interpolation_type";
  local_a0 = 0x22;
  local_98 = (long *)0x0;
  uVar9 = FUN_00ea3f80(&local_90,&local_b0);
  FUN_02a47560(local_d0,plVar14);
  if (iVar10 == 0) {
    fVar26 = 1.0;
  }
  else {
    fVar26 = 1.0 / (float)iVar10;
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar7;
  *(long *)puVar8 = lVar12;
  plVar14 = *(long **)(lVar12 + 0x60);
  uVar27 = 0;
  if (plVar14 != (long *)0x0) {
    uVar11 = (long)plVar14 - ((ulong)plVar14 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      plVar17 = (long *)((long)plVar14 - 1U & (ulong)local_d0[0]);
    }
    else if (local_d0[0] < plVar14) {
      plVar17 = local_d0[0];
    }
    else {
      uVar21 = 0;
      if (plVar14 != (long *)0x0) {
        uVar21 = (ulong)local_d0[0] / (ulong)plVar14;
      }
      plVar17 = (long *)((long)local_d0[0] - uVar21 * (long)plVar14);
    }
    plVar20 = *(long **)(*(long *)(lVar12 + 0x58) + (long)plVar17 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((long *)plVar20[1] == local_d0[0]) {
            if ((long *)plVar20[2] == local_d0[0]) goto LAB_02677480;
          }
          else if ((long *)((ulong)plVar20[1] & (long)plVar14 - 1U) != plVar17) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          plVar24 = (long *)plVar20[1];
          if (plVar24 == local_d0[0]) {
            if ((long *)plVar20[2] == local_d0[0]) goto LAB_02677480;
          }
          else {
            if (plVar14 <= plVar24) {
              uVar11 = 0;
              if (plVar14 != (long *)0x0) {
                uVar11 = (ulong)plVar24 / (ulong)plVar14;
              }
              plVar24 = (long *)((long)plVar24 - uVar11 * (long)plVar14);
            }
            if (plVar24 != plVar17) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_02677764;
LAB_02677480:
  plVar14 = (long *)plVar20[3];
  if (plVar14 != (long *)0x0) {
    plVar17 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar14[0x21];
    uVar27 = 0;
    if (uVar11 != 0) {
      uVar21 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar11 - 1 & 0xa9500366893ba79;
      }
      else if (uVar11 < 0xa9500366893ba7a) {
        uVar22 = 0;
        if (uVar11 != 0) {
          uVar22 = 0xa9500366893ba79 / uVar11;
        }
        uVar22 = 0xa9500366893ba79 - uVar22 * uVar11;
      }
      else {
        uVar22 = 0xa9500366893ba79;
      }
      plVar20 = *(long **)(plVar14[0x20] + uVar22 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar20[1] == 0xa9500366893ba79) {
              if (plVar20[2] == 0xa9500366893ba79) goto LAB_0267774c;
            }
            else if ((plVar20[1] & uVar11 - 1) != uVar22) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar20[1];
            if (uVar21 == 0xa9500366893ba79) {
              if (plVar20[2] == 0xa9500366893ba79) goto LAB_0267774c;
            }
            else {
              if (uVar11 <= uVar21) {
                uVar15 = 0;
                if (uVar11 != 0) {
                  uVar15 = uVar21 / uVar11;
                }
                uVar21 = uVar21 - uVar15 * uVar11;
              }
              if (uVar21 != uVar22) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_02677750;
  }
  goto LAB_02677764;
LAB_0267774c:
  uVar27 = (undefined4)plVar20[6];
LAB_02677750:
  do {
    iVar10 = (int)*plVar17 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *(int *)plVar17 = iVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_02677764:
  FUN_01a3a610(uVar25,fVar26,uVar27,plVar19,(long)param_1 + 0xc34,uVar9);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *(undefined1 *)((long)param_1 + 0xc54) = 0;
  if (local_68 != (long *)0x0) {
    lVar12 = local_68[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
LAB_026766d4:
  FUN_01a92c54(&local_90,param_1);
  if (local_90 == (undefined8 *)0x0) {
    local_d0[0] = (long *)0x0;
  }
  else {
    FUN_00bd9360(local_d0);
    puVar13 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_90 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_b0 = *puVar13;
        FUN_02a44274(lVar12 + 0xd8,&local_b0);
      }
    }
  }
  if (local_d0[0] != (long *)0x0) {
    if (*(char *)((long)param_1 + 0xc56) != '\0') {
      if (((*PTR_DAT_043796b8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043796b8);
      }
      lVar12 = *(long *)PTR_DAT_043796c0;
      *(long *)PTR_DAT_043796c8 = lVar12;
      lVar12 = lVar12 + 0x3c0;
      local_90 = (undefined8 *)&DAT_56d709df6eaf0595;
      uVar9 = FUN_00da36a4(lVar12,&local_90);
      FUN_00da36f0(lVar12,uVar9,0);
      local_90 = (undefined8 *)0x33694b4c93791621;
      pcStack_88 = "STOP_PM_RIDE_DASH_WHOOSH_LP";
      local_80 = 0x1b;
      local_78 = (long *)0x0;
      FUN_0290b66c(local_d0[0],&local_90,0);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      *(undefined1 *)((long)param_1 + 0xc56) = 0;
      if (local_d0[0] == (long *)0x0) {
        return;
      }
    }
    lVar12 = local_d0[0][0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
LAB_026767a0:
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_d0[0] + 0x20))();
    }
  }
  return;
}


