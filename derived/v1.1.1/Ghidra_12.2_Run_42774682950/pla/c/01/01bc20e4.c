/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bc20e4; name: FUN_01bc20e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc20e4(undefined1 (*param_1) [16],long param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 local_10c;
  undefined8 *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined8 local_90 [2];
  
  *(undefined8 *)param_1[1] = 0x33ca3d70a;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)(param_1[3] + 8) = 0;
  param_1[1][0xc] = 1;
  uVar6 = _UNK_03889a88;
  uVar16 = _DAT_03889a80;
  *(undefined4 *)(param_1[1] + 8) = 0;
  *(undefined8 *)(*param_1 + 8) = uVar6;
  *(undefined8 *)*param_1 = uVar16;
  *(undefined4 *)param_1[2] = 0;
  *(undefined8 *)param_1[4] = 0x3f8000003f800000;
  *(undefined8 *)param_1[5] = 0;
  *(undefined8 *)param_1[8] = 0;
  *(undefined4 *)(param_1[8] + 8) = 0;
  *(undefined8 *)(param_1[5] + 8) = 0;
  *(undefined8 *)param_1[6] = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined8 *)(param_1[7] + 8) = 0;
  if (param_3 == 1) {
    if (*(int *)(param_2 + 0x1f0) != 3) {
      local_b0 = 8;
      local_a8 = (long *)0x0;
      local_e0 = (undefined8 *)0xfe36f801aeafcddc;
      pcStack_d8 = "small1_cam_shake_direction";
      local_c0 = (undefined8 *)0xc6a9fa08d7874415;
      pcStack_b8 = "landmark";
      local_d0 = 0x1a;
      local_c8 = (long *)0x0;
      auVar27 = FUN_00aee408(&local_c0,&local_e0);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      puVar7 = PTR_DAT_04379660;
      local_c0 = (undefined8 *)0x76896584bab325a4;
      pcStack_b8 = "small1_cam_shake_amplitude";
      local_b0 = 0x1a;
      local_a8 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar9 = PTR_DAT_04379670;
      puVar8 = PTR_DAT_04379668;
      lVar20 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar20;
      uVar17 = *(ulong *)(lVar20 + 0x60);
      uVar23 = 0;
      if (uVar17 != 0) {
        uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
        }
        else {
          uVar19 = 0xc6a9fa08d7874415;
          if (uVar17 < 0xc6a9fa08d7874416) {
            uVar19 = 0;
            if (uVar17 != 0) {
              uVar19 = 0xc6a9fa08d7874415 / uVar17;
            }
            uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
          }
        }
        plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
        if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
          if (uVar18 < 2) {
            do {
              if (plVar21[1] == 0xc6a9fa08d7874415) {
                if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc467c;
              }
              else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar21[1];
              if (uVar18 == 0xc6a9fa08d7874415) {
                if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc467c;
              }
              else {
                if (uVar17 <= uVar18) {
                  uVar5 = 0;
                  if (uVar17 != 0) {
                    uVar5 = uVar18 / uVar17;
                  }
                  uVar18 = uVar18 - uVar5 * uVar17;
                }
                if (uVar18 != uVar19) break;
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
        }
      }
      goto joined_r0x01bc57f8;
    }
    local_b0 = 8;
    local_a8 = (long *)0x0;
    local_e0 = (undefined8 *)0xd5dfc89a8e063b07;
    pcStack_d8 = "big1_cam_shake_direction";
    local_c0 = (undefined8 *)0xc6a9fa08d7874415;
    pcStack_b8 = "landmark";
    local_d0 = 0x18;
    local_c8 = (long *)0x0;
    auVar27 = FUN_00aee408(&local_c0,&local_e0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    puVar7 = PTR_DAT_04379660;
    local_c0 = (undefined8 *)0xf707439b556a7c9b;
    pcStack_b8 = "big1_cam_shake_amplitude";
    local_b0 = 0x18;
    local_a8 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar9 = PTR_DAT_04379670;
    puVar8 = PTR_DAT_04379668;
    lVar20 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar20;
    uVar17 = *(ulong *)(lVar20 + 0x60);
    uVar23 = 0;
    if (uVar17 != 0) {
      uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
      }
      else {
        uVar19 = 0xc6a9fa08d7874415;
        if (uVar17 < 0xc6a9fa08d7874416) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = 0xc6a9fa08d7874415 / uVar17;
          }
          uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
        }
      }
      plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0xc6a9fa08d7874415) {
              if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2bc8;
            }
            else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0xc6a9fa08d7874415) {
              if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2bc8;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar5 = 0;
                if (uVar17 != 0) {
                  uVar5 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar5 * uVar17;
              }
              if (uVar18 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto joined_r0x01bc5618;
  }
  if (param_3 != 2) {
    uVar25 = 0x3f800000;
    if ((param_3 != 3) || (*(int *)(param_2 + 0x1f0) != 3)) {
      uVar23 = 0x3ca3d70a;
      auVar28 = ZEXT816(0);
      auVar27._8_8_ = uVar6;
      auVar27._0_8_ = uVar16;
      uVar13 = 0;
      uVar12 = 0;
      local_10c = 3;
      uVar24 = 0x3f800000;
      goto LAB_01bc4e20;
    }
    local_b0 = 8;
    local_a8 = (long *)0x0;
    local_e0 = (undefined8 *)0xc860503cdcae08d;
    pcStack_d8 = "big3_cam_shake_direction";
    local_c0 = (undefined8 *)0xc6a9fa08d7874415;
    pcStack_b8 = "landmark";
    local_d0 = 0x18;
    local_c8 = (long *)0x0;
    auVar27 = FUN_00aee408(&local_c0,&local_e0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    puVar7 = PTR_DAT_04379660;
    local_c0 = (undefined8 *)0x6e4e80475dbd4861;
    pcStack_b8 = "big3_cam_shake_amplitude";
    local_b0 = 0x18;
    local_a8 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar9 = PTR_DAT_04379670;
    puVar8 = PTR_DAT_04379668;
    lVar20 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar20;
    uVar17 = *(ulong *)(lVar20 + 0x60);
    uVar23 = 0;
    if (uVar17 != 0) {
      uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
      }
      else {
        uVar19 = 0xc6a9fa08d7874415;
        if (uVar17 < 0xc6a9fa08d7874416) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = 0xc6a9fa08d7874415 / uVar17;
          }
          uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
        }
      }
      plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0xc6a9fa08d7874415) {
              if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc34c8;
            }
            else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0xc6a9fa08d7874415) {
              if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc34c8;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar5 = 0;
                if (uVar17 != 0) {
                  uVar5 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar5 * uVar17;
              }
              if (uVar18 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto joined_r0x01bc56b8;
  }
  if (*(int *)(param_2 + 0x1f0) != 3) {
    local_b0 = 8;
    local_a8 = (long *)0x0;
    local_e0 = (undefined8 *)0x87c66b620e5abef9;
    pcStack_d8 = "small2_cam_shake_direction";
    local_c0 = (undefined8 *)0xc6a9fa08d7874415;
    pcStack_b8 = "landmark";
    local_d0 = 0x1a;
    local_c8 = (long *)0x0;
    auVar27 = FUN_00aee408(&local_c0,&local_e0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    puVar7 = PTR_DAT_04379660;
    local_c0 = (undefined8 *)0x8a969c84e61337e5;
    pcStack_b8 = "small2_cam_shake_amplitude";
    local_b0 = 0x1a;
    local_a8 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar9 = PTR_DAT_04379670;
    puVar8 = PTR_DAT_04379668;
    lVar20 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar20;
    uVar17 = *(ulong *)(lVar20 + 0x60);
    uVar23 = 0;
    if (uVar17 != 0) {
      uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
      }
      else {
        uVar19 = 0xc6a9fa08d7874415;
        if (uVar17 < 0xc6a9fa08d7874416) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = 0xc6a9fa08d7874415 / uVar17;
          }
          uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
        }
      }
      plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar21[1] == 0xc6a9fa08d7874415) {
              if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3db4;
            }
            else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar21[1];
            if (uVar18 == 0xc6a9fa08d7874415) {
              if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3db4;
            }
            else {
              if (uVar17 <= uVar18) {
                uVar5 = 0;
                if (uVar17 != 0) {
                  uVar5 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar5 * uVar17;
              }
              if (uVar18 != uVar19) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto joined_r0x01bc5790;
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0xd43dee339bb8d9ee;
  pcStack_d8 = "big2_cam_shake_direction";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x18;
  local_c8 = (long *)0x0;
  auVar27 = FUN_00aee408(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  puVar7 = PTR_DAT_04379660;
  local_c0 = (undefined8 *)0x978f29403146e30e;
  pcStack_b8 = "big2_cam_shake_amplitude";
  local_b0 = 0x18;
  local_a8 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar9 = PTR_DAT_04379670;
  puVar8 = PTR_DAT_04379668;
  lVar20 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar23 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc22d8;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc22d8;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto joined_r0x01bc55b0;
LAB_01bc467c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
joined_r0x01bc57f8:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x15f31e216cf0922a;
  pcStack_b8 = "small1_cam_shake_period";
  local_b0 = 0x17;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc478c;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc545c;
          plVar21 = (long *)*plVar21;
          local_10c = 0;
        } while (plVar21 != (long *)0x0);
        goto joined_r0x01bc5758;
      }
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc478c;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
LAB_01bc545c:
  local_10c = 0;
joined_r0x01bc5758:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x8db46e20b6f15b0d;
  pcStack_b8 = "small1_cam_shake_endFrame";
  local_b0 = 0x19;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 == 0) {
LAB_01bc548c:
    uVar12 = 0;
  }
  else {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
    goto LAB_01bc548c;
    if (1 < uVar18) {
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc489c;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
      goto LAB_01bc548c;
    }
    do {
      if (plVar21[1] == 0xc6a9fa08d7874415) {
        if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc489c;
      }
      else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc548c;
      plVar21 = (long *)*plVar21;
      uVar12 = 0;
    } while (plVar21 != (long *)0x0);
  }
joined_r0x01bc5774:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x90dc1212af0a9dfb;
  pcStack_d8 = "small1_cam_shake_interpolationType";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x22;
  local_c8 = (long *)0x0;
  uVar13 = FUN_00ea3f80(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x79d9903d734acf79;
  pcStack_d8 = "small1_cam_shake_randomRange";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x1c;
  local_c8 = (long *)0x0;
  auVar28 = FUN_00aee408(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xf000d2e997b23b26;
  pcStack_b8 = "small1_cam_shake_cameraPosWeight";
  local_b0 = 0x20;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar24 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc4a80;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc4a80;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc5814:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xee5c497efdb29550;
  pcStack_b8 = "small1_cam_shake_blendRate";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar25 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc4b94;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc4b94;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc5830:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x6d061f244a93bf4a;
  pcStack_b8 = "small1_cam_shake_distanceMax";
  local_b0 = 0x1c;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc4ca8;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc4ca8;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01bc4ce8:
  *(undefined4 *)(param_1[8] + 4) = uVar26;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x6d2209244aac14a0;
  pcStack_b8 = "small1_cam_shake_distanceMin";
  local_b0 = 0x1c;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc4dc0;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc4dc0;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01bc51d4;
LAB_01bc478c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc545c;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_10c = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc5758;
LAB_01bc489c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc548c;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc5774;
LAB_01bc4a80:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar24 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc5814;
LAB_01bc4b94:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar25 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc5830;
LAB_01bc4ca8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto LAB_01bc4ce8;
LAB_01bc4dc0:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      bVar11 = iVar14 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_01bc4e00;
  }
  goto LAB_01bc4e04;
LAB_01bc2bc8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
joined_r0x01bc5618:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xa41d62eee4e0ea53;
  pcStack_b8 = "big1_cam_shake_period";
  local_b0 = 0x15;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2cd8;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc5108;
          plVar21 = (long *)*plVar21;
          local_10c = 0;
        } while (plVar21 != (long *)0x0);
        goto joined_r0x01bc5578;
      }
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2cd8;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
LAB_01bc5108:
  local_10c = 0;
joined_r0x01bc5578:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xe82a5c19e475984;
  pcStack_b8 = "big1_cam_shake_endFrame";
  local_b0 = 0x17;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 == 0) {
LAB_01bc5138:
    uVar12 = 0;
  }
  else {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
    goto LAB_01bc5138;
    if (1 < uVar18) {
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2de8;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
      goto LAB_01bc5138;
    }
    do {
      if (plVar21[1] == 0xc6a9fa08d7874415) {
        if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2de8;
      }
      else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc5138;
      plVar21 = (long *)*plVar21;
      uVar12 = 0;
    } while (plVar21 != (long *)0x0);
  }
joined_r0x01bc5594:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x1c7c649f589828e8;
  pcStack_d8 = "big1_cam_shake_interpolationType";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x20;
  local_c8 = (long *)0x0;
  uVar13 = FUN_00ea3f80(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x7eececa759cde02a;
  pcStack_d8 = "big1_cam_shake_randomRange";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x1a;
  local_c8 = (long *)0x0;
  auVar28 = FUN_00aee408(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x94f971d9aa359b39;
  pcStack_b8 = "big1_cam_shake_cameraPosWeight";
  local_b0 = 0x1e;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar24 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2fcc;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2fcc;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc5634:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xb40da515908d953b;
  pcStack_b8 = "big1_cam_shake_blendRate";
  local_b0 = 0x18;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar25 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc30e0;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc30e0;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc5650:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xb36ca234433736d;
  pcStack_b8 = "big1_cam_shake_distanceMax";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc31f4;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc31f4;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01bc3234:
  *(undefined4 *)(param_1[8] + 4) = uVar26;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xb1bb423441c8653;
  pcStack_b8 = "big1_cam_shake_distanceMin";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc330c;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc330c;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01bc51d4;
LAB_01bc2cd8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc5108;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_10c = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc5578;
LAB_01bc2de8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc5138;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc5594;
LAB_01bc2fcc:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar24 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc5634;
LAB_01bc30e0:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar25 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc5650;
LAB_01bc31f4:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto LAB_01bc3234;
LAB_01bc330c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      bVar11 = iVar14 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_01bc4e00;
  }
  goto LAB_01bc4e04;
LAB_01bc34c8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
joined_r0x01bc56b8:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x449303865d0c6795;
  pcStack_b8 = "big3_cam_shake_period";
  local_b0 = 0x15;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc35d8;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc5220;
          plVar21 = (long *)*plVar21;
          local_10c = 0;
        } while (plVar21 != (long *)0x0);
        goto joined_r0x01bc5680;
      }
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc35d8;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
LAB_01bc5220:
  local_10c = 0;
joined_r0x01bc5680:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x99b69cb0f46a3c02;
  pcStack_b8 = "big3_cam_shake_endFrame";
  local_b0 = 0x17;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 == 0) {
LAB_01bc5250:
    uVar12 = 0;
  }
  else {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
    goto LAB_01bc5250;
    if (1 < uVar18) {
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc36e8;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
      goto LAB_01bc5250;
    }
    do {
      if (plVar21[1] == 0xc6a9fa08d7874415) {
        if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc36e8;
      }
      else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc5250;
      plVar21 = (long *)*plVar21;
      uVar12 = 0;
    } while (plVar21 != (long *)0x0);
  }
joined_r0x01bc569c:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x2e5d11a2759d1b9a;
  pcStack_d8 = "big3_cam_shake_interpolationType";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x20;
  local_c8 = (long *)0x0;
  uVar13 = FUN_00ea3f80(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0xcc611c072162b188;
  pcStack_d8 = "big3_cam_shake_randomRange";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x1a;
  local_c8 = (long *)0x0;
  auVar28 = FUN_00aee408(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x9be78b9b3a9b4677;
  pcStack_b8 = "big3_cam_shake_cameraPosWeight";
  local_b0 = 0x1e;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar24 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc38cc;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc38cc;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc56d4:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x876ee4b0399c0855;
  pcStack_b8 = "big3_cam_shake_blendRate";
  local_b0 = 0x18;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar25 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc39e0;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc39e0;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc56f0:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xcba6bd05383fac4f;
  pcStack_b8 = "big3_cam_shake_distanceMax";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3af4;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3af4;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01bc3b34:
  *(undefined4 *)(param_1[8] + 4) = uVar26;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xcb8acb0538274961;
  pcStack_b8 = "big3_cam_shake_distanceMin";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3c0c;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3c0c;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01bc51d4;
LAB_01bc35d8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc5220;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_10c = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc5680;
LAB_01bc36e8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc5250;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc569c;
LAB_01bc38cc:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar24 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc56d4;
LAB_01bc39e0:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar25 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc56f0;
LAB_01bc3af4:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto LAB_01bc3b34;
LAB_01bc3c0c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      bVar11 = iVar14 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_01bc4e00;
  }
  goto LAB_01bc4e04;
LAB_01bc3db4:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
joined_r0x01bc5790:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xd2ea6cf21b54ef29;
  pcStack_b8 = "small2_cam_shake_period";
  local_b0 = 0x17;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3ec4;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc5348;
          plVar21 = (long *)*plVar21;
          local_10c = 0;
        } while (plVar21 != (long *)0x0);
        goto joined_r0x01bc5720;
      }
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3ec4;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
LAB_01bc5348:
  local_10c = 0;
joined_r0x01bc5720:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x65645ca6403a5d2e;
  pcStack_b8 = "small2_cam_shake_endFrame";
  local_b0 = 0x19;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 == 0) {
LAB_01bc5378:
    uVar12 = 0;
  }
  else {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
    goto LAB_01bc5378;
    if (1 < uVar18) {
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3fd4;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
      goto LAB_01bc5378;
    }
    do {
      if (plVar21[1] == 0xc6a9fa08d7874415) {
        if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc3fd4;
      }
      else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc5378;
      plVar21 = (long *)*plVar21;
      uVar12 = 0;
    } while (plVar21 != (long *)0x0);
  }
joined_r0x01bc573c:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x2319e590ee026fe;
  pcStack_d8 = "small2_cam_shake_interpolationType";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x22;
  local_c8 = (long *)0x0;
  uVar13 = FUN_00ea3f80(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x5e7a7d5e27969a54;
  pcStack_d8 = "small2_cam_shake_randomRange";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x1c;
  local_c8 = (long *)0x0;
  auVar28 = FUN_00aee408(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x9edd286606928523;
  pcStack_b8 = "small2_cam_shake_cameraPosWeight";
  local_b0 = 0x20;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar24 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc41b8;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc41b8;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc57ac:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xaa79712c37d1cf59;
  pcStack_b8 = "small2_cam_shake_blendRate";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar25 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc42cc;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc42cc;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc57c8:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x4cdf99d59c4415ab;
  pcStack_b8 = "small2_cam_shake_distanceMax";
  local_b0 = 0x1c;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc43e0;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc43e0;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01bc4420:
  *(undefined4 *)(param_1[8] + 4) = uVar26;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x4cc4afd59c2d7355;
  pcStack_b8 = "small2_cam_shake_distanceMin";
  local_b0 = 0x1c;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc44f8;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc44f8;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01bc51d4;
LAB_01bc3ec4:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc5348;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_10c = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc5720;
LAB_01bc3fd4:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc5378;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc573c;
LAB_01bc41b8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar24 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc57ac;
LAB_01bc42cc:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar25 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc57c8;
LAB_01bc43e0:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto LAB_01bc4420;
LAB_01bc44f8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      bVar11 = iVar14 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_01bc4e00;
  }
  goto LAB_01bc4e04;
LAB_01bc23e8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc4ff4;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_10c = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc5540;
LAB_01bc24f8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 == (long *)0x0) goto LAB_01bc5024;
  plVar1 = plVar21 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar21,&local_c0);
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar14;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  goto joined_r0x01bc555c;
LAB_01bc26dc:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar24 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc55cc;
LAB_01bc27f0:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar25 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto joined_r0x01bc55e8;
LAB_01bc2904:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto LAB_01bc2944;
LAB_01bc2a1c:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar26 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      bVar11 = iVar14 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01bc4e00:
    if (bVar11) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  goto LAB_01bc4e04;
LAB_01bc22d8:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar1 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar23 = FUN_00d7905c(plVar21,&local_c0);
    do {
      iVar14 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
joined_r0x01bc55b0:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x7608dec6d694c2a0;
  pcStack_b8 = "big2_cam_shake_period";
  local_b0 = 0x15;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 == 0) {
LAB_01bc4ff4:
    local_10c = 0;
  }
  else {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
    goto LAB_01bc4ff4;
    if (1 < uVar18) {
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc23e8;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
      goto LAB_01bc4ff4;
    }
    do {
      if (plVar21[1] == 0xc6a9fa08d7874415) {
        if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc23e8;
      }
      else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc4ff4;
      plVar21 = (long *)*plVar21;
      local_10c = 0;
    } while (plVar21 != (long *)0x0);
  }
joined_r0x01bc5540:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xf584e23e9aa1e21f;
  pcStack_b8 = "big2_cam_shake_endFrame";
  local_b0 = 0x17;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  if (uVar17 == 0) {
LAB_01bc5024:
    uVar12 = 0;
  }
  else {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
    goto LAB_01bc5024;
    if (1 < uVar18) {
      do {
        uVar18 = plVar21[1];
        if (uVar18 == 0xc6a9fa08d7874415) {
          if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc24f8;
        }
        else {
          if (uVar17 <= uVar18) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar5 * uVar17;
          }
          if (uVar18 != uVar19) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
      goto LAB_01bc5024;
    }
    do {
      if (plVar21[1] == 0xc6a9fa08d7874415) {
        if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc24f8;
      }
      else if ((plVar21[1] & uVar17 - 1) != uVar19) goto LAB_01bc5024;
      plVar21 = (long *)*plVar21;
      uVar12 = 0;
    } while (plVar21 != (long *)0x0);
  }
joined_r0x01bc555c:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x934c2417f4b8b61;
  pcStack_d8 = "big2_cam_shake_interpolationType";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x20;
  local_c8 = (long *)0x0;
  uVar13 = FUN_00ea3f80(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_b0 = 8;
  local_a8 = (long *)0x0;
  local_e0 = (undefined8 *)0x2cee79c9f10a94e3;
  pcStack_d8 = "big2_cam_shake_randomRange";
  local_c0 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_b8 = "landmark";
  local_d0 = 0x1a;
  local_c8 = (long *)0x0;
  auVar28 = FUN_00aee408(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xc6653a379ca0cdf8;
  pcStack_b8 = "big2_cam_shake_cameraPosWeight";
  local_b0 = 0x1e;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar24 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc26dc;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc26dc;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc55cc:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0x7b626d4947acfae6;
  pcStack_b8 = "big2_cam_shake_blendRate";
  local_b0 = 0x18;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar25 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc27f0;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc27f0;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
joined_r0x01bc55e8:
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)0xf8ec501a066248d8;
  pcStack_b8 = "big2_cam_shake_distanceMax";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2904;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2904;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01bc2944:
  *(undefined4 *)(param_1[8] + 4) = uVar26;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined8 *)&DAT_f907461a0678ff92;
  pcStack_b8 = "big2_cam_shake_distanceMin";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar20 = *(long *)puVar8;
  *(long *)puVar9 = lVar20;
  uVar17 = *(ulong *)(lVar20 + 0x60);
  uVar26 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0xc6a9fa08d7874415;
    }
    else {
      uVar19 = 0xc6a9fa08d7874415;
      if (uVar17 < 0xc6a9fa08d7874416) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0xc6a9fa08d7874415 / uVar17;
        }
        uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar17;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar20 + 0x58) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar21[1] == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2a1c;
          }
          else if ((plVar21[1] & uVar17 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar21[1];
          if (uVar18 == 0xc6a9fa08d7874415) {
            if (plVar21[2] == -0x395605f72878bbeb) goto LAB_01bc2a1c;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_01bc51d4:
  uVar26 = 0;
LAB_01bc4e04:
  *(undefined4 *)(param_1[8] + 8) = uVar26;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
LAB_01bc4e20:
  *(undefined4 *)param_1[1] = uVar23;
  *(undefined4 *)(param_1[1] + 4) = local_10c;
  *(undefined4 *)(param_1[1] + 8) = uVar12;
  param_1[1][0xf] = local_92;
  *param_1 = auVar27;
  *(undefined2 *)(param_1[1] + 0xd) = local_94;
  param_1[1][0xc] = 0;
  *(undefined4 *)param_1[2] = uVar13;
  *(undefined4 *)(param_1[2] + 0xc) = local_98;
  *(undefined8 *)(param_1[2] + 4) = local_a0;
  *(undefined4 *)param_1[4] = uVar24;
  *(undefined4 *)(param_1[4] + 4) = uVar25;
  *(undefined4 *)param_1[8] = uVar12;
  param_1[3] = auVar28;
  puVar10 = PTR_DAT_043794d0;
  puVar9 = PTR_DAT_043794c8;
  puVar8 = PTR_DAT_043794b8;
  puVar7 = PTR_DAT_043794b0;
  lVar20 = *(long *)(param_2 + 0x1a8);
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
LAB_01bc4e74:
    plVar21 = (long *)0x0;
  }
  else {
    piVar2 = (int *)(lVar20 + 0xc);
    iVar14 = *(int *)(lVar20 + 0xc);
    do {
      puVar22 = *(undefined8 **)(lVar20 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar7), iVar15 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar15 != 0)) {
          if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(puVar10);
          }
          *(undefined **)puVar9 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar8 = puVar9;
        __cxa_guard_release(puVar7);
      }
      if (puVar22 == (undefined8 *)0x0) goto LAB_01bc4e74;
      while (puVar22 != (undefined8 *)puVar8) {
        puVar22 = (undefined8 *)*puVar22;
        plVar21 = (long *)0x0;
        if (puVar22 == (undefined8 *)0x0) goto LAB_01bc4e78;
      }
      iVar15 = *piVar2;
      if (iVar15 == iVar14) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar21 = (long *)0x0;
          if (*(long *)(lVar20 + 0x18) != 0) {
            plVar21 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar21 = (long *)0x0;
      iVar14 = iVar15;
    } while (iVar15 != 0);
  }
LAB_01bc4e78:
  (**(code **)(*plVar21 + 0x10))(&local_c0,plVar21);
  local_e0 = (undefined8 *)0x0;
  pcStack_d8 = (char *)0x0;
  FUN_0087f944(&local_e0,&local_c0);
  puVar22 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_c0 + 1);
    do {
      iVar14 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_90[0] = *puVar22;
      FUN_02a44274(lVar20 + 0xd8,local_90);
    }
  }
  FUN_0087fcf0(param_1 + 5,&local_e0);
  puVar22 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_e0 + 1);
    do {
      iVar14 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_c0 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar20 + 0xd8,&local_c0);
    }
  }
  if (plVar21 != (long *)0x0) {
    lVar20 = plVar21[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar14 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  return;
}


