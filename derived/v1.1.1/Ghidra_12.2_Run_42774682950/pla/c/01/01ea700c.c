/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea700c; name: FUN_01ea700c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea700c(undefined1 (*param_1) [16],undefined4 param_2,int param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  
  *(undefined8 *)param_1[1] = 0x33ca3d70a;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)(param_1[3] + 8) = 0;
  param_1[1][0xc] = 1;
  uVar7 = _UNK_03889a88;
  uVar6 = _DAT_03889a80;
  *(undefined8 *)param_1[5] = 0;
  *(undefined8 *)(param_1[5] + 8) = 0;
  *(undefined8 *)param_1[4] = 0x3f8000003f800000;
  *(undefined4 *)(param_1[1] + 8) = 0;
  *(undefined4 *)param_1[2] = 0;
  *(undefined8 *)param_1[6] = 0;
  *(undefined8 *)param_1[8] = 0;
  *(undefined4 *)(param_1[8] + 8) = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined8 *)(param_1[7] + 8) = 0;
  *(undefined8 *)(*param_1 + 8) = uVar7;
  *(undefined8 *)*param_1 = uVar6;
  switch(param_2) {
  case 1:
    local_90 = 0x16;
    local_88 = (long *)0x0;
    local_c0 = 0x61c970ae39994506;
    pcStack_b8 = "weak_cam_shake_direction";
    local_a0 = 0xd65830cac3e925da;
    local_98 = "field_obstruction_waza";
    local_b0 = 0x18;
    local_a8 = (long *)0x0;
    auVar22 = FUN_00aee408(&local_a0,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar8 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar10 = PTR_DAT_04379670;
    puVar9 = PTR_DAT_04379668;
    lVar19 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar19;
    uVar16 = *(ulong *)(lVar19 + 0x60);
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
      }
      else {
        uVar18 = 0xd65830cac3e925da;
        if (uVar16 < 0xd65830cac3e925db) {
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = 0xd65830cac3e925da / uVar16;
          }
          uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea73f0;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea73f0;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    break;
  case 2:
    local_90 = 0x16;
    local_88 = (long *)0x0;
    local_c0 = 0x8b52dd7c99ae50c5;
    pcStack_b8 = "medium_cam_shake_direction";
    local_a0 = 0xd65830cac3e925da;
    local_98 = "field_obstruction_waza";
    local_b0 = 0x1a;
    local_a8 = (long *)0x0;
    auVar22 = FUN_00aee408(&local_a0,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar8 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar10 = PTR_DAT_04379670;
    puVar9 = PTR_DAT_04379668;
    lVar19 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar19;
    uVar16 = *(ulong *)(lVar19 + 0x60);
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
      }
      else {
        uVar18 = 0xd65830cac3e925da;
        if (uVar16 < 0xd65830cac3e925db) {
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = 0xd65830cac3e925da / uVar16;
          }
          uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea71e0;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea71e0;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea796c;
  case 3:
    local_90 = 0x16;
    local_88 = (long *)0x0;
    local_c0 = 0xd4c56f1f70479ff9;
    pcStack_b8 = "strong_cam_shake_direction";
    local_a0 = 0xd65830cac3e925da;
    local_98 = "field_obstruction_waza";
    local_b0 = 0x1a;
    local_a8 = (long *)0x0;
    auVar22 = FUN_00aee408(&local_a0,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar8 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar10 = PTR_DAT_04379670;
    puVar9 = PTR_DAT_04379668;
    lVar19 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar19;
    uVar16 = *(ulong *)(lVar19 + 0x60);
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
      }
      else {
        uVar18 = 0xd65830cac3e925da;
        if (uVar16 < 0xd65830cac3e925db) {
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = 0xd65830cac3e925da / uVar16;
          }
          uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7600;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7600;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea926c;
  case 4:
    local_90 = 0x16;
    local_88 = (long *)0x0;
    local_c0 = 0x4736ae8f62dde639;
    pcStack_b8 = "beam_cam_shake_direction";
    local_a0 = 0xd65830cac3e925da;
    local_98 = "field_obstruction_waza";
    local_b0 = 0x18;
    local_a8 = (long *)0x0;
    auVar22 = FUN_00aee408(&local_a0,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar8 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar10 = PTR_DAT_04379670;
    puVar9 = PTR_DAT_04379668;
    lVar19 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar19;
    uVar16 = *(ulong *)(lVar19 + 0x60);
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
      }
      else {
        uVar18 = 0xd65830cac3e925da;
        if (uVar16 < 0xd65830cac3e925db) {
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = 0xd65830cac3e925da / uVar16;
          }
          uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9f28;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9f28;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01eaaefc;
  case 5:
    local_90 = 0x16;
    local_88 = (long *)0x0;
    local_c0 = 0x3aa17f3f549223f7;
    pcStack_b8 = "beam_strong_cam_shake_direction";
    local_a0 = 0xd65830cac3e925da;
    local_98 = "field_obstruction_waza";
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    auVar22 = FUN_00aee408(&local_a0,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar8 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar10 = PTR_DAT_04379670;
    puVar9 = PTR_DAT_04379668;
    lVar19 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar19;
    uVar16 = *(ulong *)(lVar19 + 0x60);
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
      }
      else {
        uVar18 = 0xd65830cac3e925da;
        if (uVar16 < 0xd65830cac3e925db) {
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = 0xd65830cac3e925da / uVar16;
          }
          uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
        }
      }
      plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar20[1] == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7834;
            }
            else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar20[1];
            if (uVar17 == 0xd65830cac3e925da) {
              if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7834;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01eaa158;
  default:
    auVar22._8_8_ = uVar7;
    auVar22._0_8_ = uVar6;
    uVar26 = 0x3f800000;
    uVar24 = 0x3ca3d70a;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 3;
    uVar25 = 0x3f800000;
    auVar23 = ZEXT816(0);
    goto LAB_01ea84a8;
  }
  goto LAB_01ea85e4;
LAB_01ea7834:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x4382b63a151655eb;
      }
      else if (uVar16 < 0x4382b63a151655ec) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x4382b63a151655eb / uVar16;
        }
        uVar18 = 0x4382b63a151655eb - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x4382b63a151655eb;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x4382b63a151655eb) {
              if (plVar21[2] == 0x4382b63a151655eb) goto LAB_01eaa140;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x4382b63a151655eb) {
              if (plVar21[2] == 0x4382b63a151655eb) goto LAB_01eaa140;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01eaa144;
  }
  goto LAB_01eaa158;
LAB_01eaa140:
  uVar24 = (undefined4)plVar21[6];
LAB_01eaa144:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01eaa158:
  local_a0 = 0xe9e8da7a4a300ee3;
  local_98 = "beam_strong_cam_shake_period";
  local_90 = 0x1c;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01eaa5e0:
    uVar12 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01eaa5e0;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa214;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01eaa5e0;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa214;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01eaa5e0;
      plVar20 = (long *)*plVar20;
      uVar12 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01eaad98:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_a0 = 0xf8282d1b593ee374;
  local_98 = "beam_strong_cam_shake_endFrame";
  local_90 = 0x1e;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01eaa610:
    uVar13 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01eaa610;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa324;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01eaa610;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa324;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01eaa610;
      plVar20 = (long *)*plVar20;
      uVar13 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01eaadb4:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0xbc8a55f939cf0778;
  pcStack_b8 = "beam_strong_cam_shake_interpolationType";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x27;
  local_a8 = (long *)0x0;
  uVar14 = FUN_00ea3f80(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0x1b6124666a5f771a;
  pcStack_b8 = "beam_strong_cam_shake_randomRange";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x21;
  local_a8 = (long *)0x0;
  auVar23 = FUN_00aee408(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar25 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa4e4;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa4e4;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01eaa6a0:
  bVar2 = *puVar8;
joined_r0x01eaaddc:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar26 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa73c;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa73c;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01eaa898:
  bVar2 = *puVar8;
joined_r0x01eaae2c:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa934;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaa934;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01eaaa90;
LAB_01eaa214:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01eaa5e0;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01eaad98;
LAB_01eaa324:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01eaa610;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01eaadb4;
LAB_01eaa4e4:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar25 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x25443d49944a9309;
      }
      else if (uVar16 < 0x25443d49944a930a) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x25443d49944a9309 / uVar16;
        }
        uVar18 = 0x25443d49944a9309 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x25443d49944a9309;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x25443d49944a9309) {
              if (plVar21[2] == 0x25443d49944a9309) goto LAB_01eaa688;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x25443d49944a9309) {
              if (plVar21[2] == 0x25443d49944a9309) goto LAB_01eaa688;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01eaa68c;
  }
  goto LAB_01eaa6a0;
LAB_01eaa688:
  uVar25 = (undefined4)plVar21[6];
LAB_01eaa68c:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01eaa6a0;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01eaaddc;
LAB_01eaa73c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar26 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x252bf8005fcc97eb;
      }
      else if (uVar16 < 0x252bf8005fcc97ec) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x252bf8005fcc97eb / uVar16;
        }
        uVar18 = 0x252bf8005fcc97eb - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x252bf8005fcc97eb;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x252bf8005fcc97eb) {
              if (plVar21[2] == 0x252bf8005fcc97eb) goto LAB_01eaa880;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x252bf8005fcc97eb) {
              if (plVar21[2] == 0x252bf8005fcc97eb) goto LAB_01eaa880;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01eaa884;
  }
  goto LAB_01eaa898;
LAB_01eaa880:
  uVar26 = (undefined4)plVar21[6];
LAB_01eaa884:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01eaa898;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01eaae2c;
LAB_01eaa934:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar27 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xf99f8435f61a3efd;
      }
      else if (uVar16 < 0xf99f8435f61a3efe) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xf99f8435f61a3efd / uVar16;
        }
        uVar18 = 0xf99f8435f61a3efd - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xf99f8435f61a3efd;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xf99f8435f61a3efd) {
              if (plVar21[2] == -0x6607bca09e5c103) goto LAB_01eaaa78;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xf99f8435f61a3efd) {
              if (plVar21[2] == -0x6607bca09e5c103) goto LAB_01eaaa78;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01eaaa7c;
  }
  goto LAB_01eaaa90;
LAB_01eaaa78:
  uVar27 = (undefined4)plVar21[6];
LAB_01eaaa7c:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01eaaa90:
  *(undefined4 *)(param_1[8] + 4) = uVar27;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaab30;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaab30;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea84a0;
LAB_01eaab30:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea84a0;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar16 = plVar20[0x21];
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xf9848e35f6038843;
    }
    else if (uVar16 < 0xf9848e35f6038844) {
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = 0xf9848e35f6038843 / uVar16;
      }
      uVar18 = 0xf9848e35f6038843 - uVar18 * uVar16;
    }
    else {
      uVar18 = 0xf9848e35f6038843;
    }
    plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == 0xf9848e35f6038843) {
            if (plVar21[2] == -0x67b71ca09fc77bd) goto LAB_01eaac74;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == 0xf9848e35f6038843) {
            if (plVar21[2] == -0x67b71ca09fc77bd) goto LAB_01eaac74;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01eaac78;
LAB_01eaac74:
  uVar27 = (undefined4)plVar21[6];
LAB_01eaac78:
  do {
    iVar15 = (int)*plVar1 + -1;
    bVar11 = iVar15 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01ea849c;
LAB_01ea9f28:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x4d811280daa1d125;
      }
      else if (uVar16 < 0x4d811280daa1d126) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x4d811280daa1d125 / uVar16;
        }
        uVar18 = 0x4d811280daa1d125 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x4d811280daa1d125;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x4d811280daa1d125) {
              if (plVar21[2] == 0x4d811280daa1d125) goto LAB_01eaaee4;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x4d811280daa1d125) {
              if (plVar21[2] == 0x4d811280daa1d125) goto LAB_01eaaee4;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01eaaee8;
  }
  goto LAB_01eaaefc;
LAB_01eaaee4:
  uVar24 = (undefined4)plVar21[6];
LAB_01eaaee8:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01eaaefc:
  local_a0 = 0x7cfe59c280120c69;
  local_98 = "beam_cam_shake_period";
  local_90 = 0x15;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01eab384:
    uVar12 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01eab384;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaafb8;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01eab384;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eaafb8;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01eab384;
      plVar20 = (long *)*plVar20;
      uVar12 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01eaba44:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_a0 = 0x145ea26562bd346e;
  local_98 = "beam_cam_shake_endFrame";
  local_90 = 0x17;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01eab3b4:
    uVar13 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01eab3b4;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab0c8;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01eab3b4;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab0c8;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01eab3b4;
      plVar20 = (long *)*plVar20;
      uVar13 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01eaba60:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0x6fc5911015e8e33e;
  pcStack_b8 = "beam_cam_shake_interpolationType";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x20;
  local_a8 = (long *)0x0;
  uVar14 = FUN_00ea3f80(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0xb396db55772fe794;
  pcStack_b8 = "beam_cam_shake_randomRange";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  auVar23 = FUN_00aee408(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar25 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab288;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab288;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01eab444:
  bVar2 = *puVar8;
joined_r0x01eaba88:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar26 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab4e0;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab4e0;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01eab63c:
  bVar2 = *puVar8;
joined_r0x01eabad8:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab6d8;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab6d8;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01eab834;
LAB_01eaafb8:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01eab384;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01eaba44;
LAB_01eab0c8:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01eab3b4;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01eaba60;
LAB_01eab288:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar25 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x4b0f7db312d3a163;
      }
      else if (uVar16 < 0x4b0f7db312d3a164) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x4b0f7db312d3a163 / uVar16;
        }
        uVar18 = 0x4b0f7db312d3a163 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x4b0f7db312d3a163;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x4b0f7db312d3a163) {
              if (plVar21[2] == 0x4b0f7db312d3a163) goto LAB_01eab42c;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x4b0f7db312d3a163) {
              if (plVar21[2] == 0x4b0f7db312d3a163) goto LAB_01eab42c;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01eab430;
  }
  goto LAB_01eab444;
LAB_01eab42c:
  uVar25 = (undefined4)plVar21[6];
LAB_01eab430:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01eab444;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01eaba88;
LAB_01eab4e0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar26 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x24b589bce84af099;
      }
      else if (uVar16 < 0x24b589bce84af09a) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x24b589bce84af099 / uVar16;
        }
        uVar18 = 0x24b589bce84af099 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x24b589bce84af099;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x24b589bce84af099) {
              if (plVar21[2] == 0x24b589bce84af099) goto LAB_01eab624;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x24b589bce84af099) {
              if (plVar21[2] == 0x24b589bce84af099) goto LAB_01eab624;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01eab628;
  }
  goto LAB_01eab63c;
LAB_01eab624:
  uVar26 = (undefined4)plVar21[6];
LAB_01eab628:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01eab63c;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01eabad8;
LAB_01eab6d8:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar27 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xaf9960ecd89fd0eb;
      }
      else if (uVar16 < 0xaf9960ecd89fd0ec) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xaf9960ecd89fd0eb / uVar16;
        }
        uVar18 = 0xaf9960ecd89fd0eb - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xaf9960ecd89fd0eb;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xaf9960ecd89fd0eb) {
              if (plVar21[2] == -0x50669f1327602f15) goto LAB_01eab81c;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xaf9960ecd89fd0eb) {
              if (plVar21[2] == -0x50669f1327602f15) goto LAB_01eab81c;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01eab820;
  }
  goto LAB_01eab834;
LAB_01eab81c:
  uVar27 = (undefined4)plVar21[6];
LAB_01eab820:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01eab834:
  *(undefined4 *)(param_1[8] + 4) = uVar27;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab8d4;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01eab8d4;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea84a0;
LAB_01eab8d4:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea84a0;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar16 = plVar20[0x21];
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xaf7d76ecd8877b95;
    }
    else if (uVar16 < 0xaf7d76ecd8877b96) {
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = 0xaf7d76ecd8877b95 / uVar16;
      }
      uVar18 = 0xaf7d76ecd8877b95 - uVar18 * uVar16;
    }
    else {
      uVar18 = 0xaf7d76ecd8877b95;
    }
    plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == 0xaf7d76ecd8877b95) {
            if (plVar21[2] == -0x508289132778846b) goto LAB_01eaba18;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == 0xaf7d76ecd8877b95) {
            if (plVar21[2] == -0x508289132778846b) goto LAB_01eaba18;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01eaba1c;
LAB_01eaba18:
  uVar27 = (undefined4)plVar21[6];
LAB_01eaba1c:
  do {
    iVar15 = (int)*plVar1 + -1;
    bVar11 = iVar15 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01ea849c;
LAB_01ea7600:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xd795a042480018e5;
      }
      else if (uVar16 < 0xd795a042480018e6) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd795a042480018e5 / uVar16;
        }
        uVar18 = 0xd795a042480018e5 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xd795a042480018e5;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xd795a042480018e5) {
              if (plVar21[2] == -0x286a5fbdb7ffe71b) goto LAB_01ea9254;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xd795a042480018e5) {
              if (plVar21[2] == -0x286a5fbdb7ffe71b) goto LAB_01ea9254;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea9258;
  }
  goto LAB_01ea926c;
LAB_01ea9254:
  uVar24 = (undefined4)plVar21[6];
LAB_01ea9258:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01ea926c:
  local_a0 = 0xdb6c20fc63a79229;
  local_98 = "strong_cam_shake_period";
  local_90 = 0x17;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01ea96f4:
    uVar12 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01ea96f4;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9328;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01ea96f4;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9328;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01ea96f4;
      plVar20 = (long *)*plVar20;
      uVar12 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01eaaca0:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_a0 = 0x2d5e11261ff782e;
  local_98 = "strong_cam_shake_endFrame";
  local_90 = 0x19;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01ea9724:
    uVar13 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01ea9724;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9438;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01ea9724;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9438;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01ea9724;
      plVar20 = (long *)*plVar20;
      uVar13 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01eaacbc:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0xd8026e01367327fe;
  pcStack_b8 = "strong_cam_shake_interpolationType";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x22;
  local_a8 = (long *)0x0;
  uVar14 = FUN_00ea3f80(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0xdfc3c861a409a354;
  pcStack_b8 = "strong_cam_shake_randomRange";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x1c;
  local_a8 = (long *)0x0;
  auVar23 = FUN_00aee408(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar25 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea95f8;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea95f8;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01ea97b4:
  bVar2 = *puVar8;
joined_r0x01eaace4:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar26 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9850;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9850;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01ea99ac:
  bVar2 = *puVar8;
joined_r0x01eaad34:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9a48;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9a48;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea9ba4;
LAB_01ea9328:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea96f4;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01eaaca0;
LAB_01ea9438:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea9724;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01eaacbc;
LAB_01ea95f8:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar25 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x57a2e59adb569e23;
      }
      else if (uVar16 < 0x57a2e59adb569e24) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x57a2e59adb569e23 / uVar16;
        }
        uVar18 = 0x57a2e59adb569e23 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x57a2e59adb569e23;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x57a2e59adb569e23) {
              if (plVar21[2] == 0x57a2e59adb569e23) goto LAB_01ea979c;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x57a2e59adb569e23) {
              if (plVar21[2] == 0x57a2e59adb569e23) goto LAB_01ea979c;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea97a0;
  }
  goto LAB_01ea97b4;
LAB_01ea979c:
  uVar25 = (undefined4)plVar21[6];
LAB_01ea97a0:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01ea97b4;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01eaace4;
LAB_01ea9850:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar26 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xf77874e999beb059;
      }
      else if (uVar16 < 0xf77874e999beb05a) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xf77874e999beb059 / uVar16;
        }
        uVar18 = 0xf77874e999beb059 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xf77874e999beb059;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xf77874e999beb059) {
              if (plVar21[2] == -0x8878b1666414fa7) goto LAB_01ea9994;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xf77874e999beb059) {
              if (plVar21[2] == -0x8878b1666414fa7) goto LAB_01ea9994;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea9998;
  }
  goto LAB_01ea99ac;
LAB_01ea9994:
  uVar26 = (undefined4)plVar21[6];
LAB_01ea9998:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01ea99ac;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01eaad34;
LAB_01ea9a48:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar27 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xce28e4d918b71eab;
      }
      else if (uVar16 < 0xce28e4d918b71eac) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xce28e4d918b71eab / uVar16;
        }
        uVar18 = 0xce28e4d918b71eab - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xce28e4d918b71eab;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xce28e4d918b71eab) {
              if (plVar21[2] == -0x31d71b26e748e155) goto LAB_01ea9b8c;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xce28e4d918b71eab) {
              if (plVar21[2] == -0x31d71b26e748e155) goto LAB_01ea9b8c;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea9b90;
  }
  goto LAB_01ea9ba4;
LAB_01ea9b8c:
  uVar27 = (undefined4)plVar21[6];
LAB_01ea9b90:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01ea9ba4:
  *(undefined4 *)(param_1[8] + 4) = uVar27;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9c44;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea9c44;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea84a0;
LAB_01ea9c44:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea84a0;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar16 = plVar20[0x21];
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xce0dfad918a07c55;
    }
    else if (uVar16 < 0xce0dfad918a07c56) {
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = 0xce0dfad918a07c55 / uVar16;
      }
      uVar18 = 0xce0dfad918a07c55 - uVar18 * uVar16;
    }
    else {
      uVar18 = 0xce0dfad918a07c55;
    }
    plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == 0xce0dfad918a07c55) {
            if (plVar21[2] == -0x31f20526e75f83ab) goto LAB_01ea9d88;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == 0xce0dfad918a07c55) {
            if (plVar21[2] == -0x31f20526e75f83ab) goto LAB_01ea9d88;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea9d8c;
LAB_01ea9d88:
  uVar27 = (undefined4)plVar21[6];
LAB_01ea9d8c:
  do {
    iVar15 = (int)*plVar1 + -1;
    bVar11 = iVar15 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01ea849c;
LAB_01ea71e0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x5641bca955dcf9a9;
      }
      else if (uVar16 < 0x5641bca955dcf9aa) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x5641bca955dcf9a9 / uVar16;
        }
        uVar18 = 0x5641bca955dcf9a9 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x5641bca955dcf9a9;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x5641bca955dcf9a9) {
              if (plVar21[2] == 0x5641bca955dcf9a9) goto LAB_01ea7954;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x5641bca955dcf9a9) {
              if (plVar21[2] == 0x5641bca955dcf9a9) goto LAB_01ea7954;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea7958;
  }
  goto LAB_01ea796c;
LAB_01ea7954:
  uVar24 = (undefined4)plVar21[6];
LAB_01ea7958:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01ea796c:
  local_a0 = 0x851e8db50ccd9d3d;
  local_98 = "medium_cam_shake_period";
  local_90 = 0x17;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01ea7df4:
    uVar12 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01ea7df4;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7a28;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01ea7df4;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7a28;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01ea7df4;
      plVar20 = (long *)*plVar20;
      uVar12 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01ea912c:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_a0 = 0xc14585dd97b49ca;
  local_98 = "medium_cam_shake_endFrame";
  local_90 = 0x19;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01ea7e24:
    uVar13 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01ea7e24;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7b38;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01ea7e24;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7b38;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01ea7e24;
      plVar20 = (long *)*plVar20;
      uVar13 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01ea9148:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0x813cf87ad8282a72;
  pcStack_b8 = "medium_cam_shake_interpolationType";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x22;
  local_a8 = (long *)0x0;
  uVar14 = FUN_00ea3f80(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0xa5940cfc377a48a0;
  pcStack_b8 = "medium_cam_shake_randomRange";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x1c;
  local_a8 = (long *)0x0;
  auVar23 = FUN_00aee408(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar25 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7cf8;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7cf8;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01ea7eb4:
  bVar2 = *puVar8;
joined_r0x01ea9170:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar26 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7f50;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea7f50;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01ea80ac:
  bVar2 = *puVar8;
joined_r0x01ea91c0:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8148;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8148;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea82a4;
LAB_01ea7a28:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea7df4;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01ea912c;
LAB_01ea7b38:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea7e24;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01ea9148;
LAB_01ea7cf8:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar25 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xc991f5ebdd0b92f;
      }
      else if (uVar16 < 0xc991f5ebdd0b930) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xc991f5ebdd0b92f / uVar16;
        }
        uVar18 = 0xc991f5ebdd0b92f - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xc991f5ebdd0b92f;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xc991f5ebdd0b92f) {
              if (plVar21[2] == 0xc991f5ebdd0b92f) goto LAB_01ea7e9c;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xc991f5ebdd0b92f) {
              if (plVar21[2] == 0xc991f5ebdd0b92f) goto LAB_01ea7e9c;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea7ea0;
  }
  goto LAB_01ea7eb4;
LAB_01ea7e9c:
  uVar25 = (undefined4)plVar21[6];
LAB_01ea7ea0:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01ea7eb4;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01ea9170;
LAB_01ea7f50:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar26 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xe9edfdd63a5745ad;
      }
      else if (uVar16 < 0xe9edfdd63a5745ae) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xe9edfdd63a5745ad / uVar16;
        }
        uVar18 = 0xe9edfdd63a5745ad - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xe9edfdd63a5745ad;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xe9edfdd63a5745ad) {
              if (plVar21[2] == -0x16120229c5a8ba53) goto LAB_01ea8094;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xe9edfdd63a5745ad) {
              if (plVar21[2] == -0x16120229c5a8ba53) goto LAB_01ea8094;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea8098;
  }
  goto LAB_01ea80ac;
LAB_01ea8094:
  uVar26 = (undefined4)plVar21[6];
LAB_01ea8098:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01ea80ac;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01ea91c0;
LAB_01ea8148:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar27 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xd6fe47d960301327;
      }
      else if (uVar16 < 0xd6fe47d960301328) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd6fe47d960301327 / uVar16;
        }
        uVar18 = 0xd6fe47d960301327 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xd6fe47d960301327;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xd6fe47d960301327) {
              if (plVar21[2] == -0x2901b8269fcfecd9) goto LAB_01ea828c;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xd6fe47d960301327) {
              if (plVar21[2] == -0x2901b8269fcfecd9) goto LAB_01ea828c;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea8290;
  }
  goto LAB_01ea82a4;
LAB_01ea828c:
  uVar27 = (undefined4)plVar21[6];
LAB_01ea8290:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01ea82a4:
  *(undefined4 *)(param_1[8] + 4) = uVar27;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8344;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8344;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea84a0;
LAB_01ea8344:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea84a0;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar16 = plVar20[0x21];
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd71955d96046f2a9;
    }
    else if (uVar16 < 0xd71955d96046f2aa) {
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = 0xd71955d96046f2a9 / uVar16;
      }
      uVar18 = 0xd71955d96046f2a9 - uVar18 * uVar16;
    }
    else {
      uVar18 = 0xd71955d96046f2a9;
    }
    plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == 0xd71955d96046f2a9) {
            if (plVar21[2] == -0x28e6aa269fb90d57) goto LAB_01ea8488;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == 0xd71955d96046f2a9) {
            if (plVar21[2] == -0x28e6aa269fb90d57) goto LAB_01ea8488;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01ea848c;
LAB_01ea8488:
  uVar27 = (undefined4)plVar21[6];
LAB_01ea848c:
  do {
    iVar15 = (int)*plVar1 + -1;
    bVar11 = iVar15 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01ea849c:
  if (bVar11) {
    (**(code **)(*plVar20 + 0x10))();
  }
  goto LAB_01ea84a0;
LAB_01ea73f0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x732331b58585776;
      }
      else if (uVar16 < 0x732331b58585777) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x732331b58585776 / uVar16;
        }
        uVar18 = 0x732331b58585776 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x732331b58585776;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x732331b58585776) {
              if (plVar21[2] == 0x732331b58585776) goto LAB_01ea85cc;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x732331b58585776) {
              if (plVar21[2] == 0x732331b58585776) goto LAB_01ea85cc;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea85d0;
  }
  goto LAB_01ea85e4;
LAB_01ea86a0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea8a6c;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01eaa018;
LAB_01ea87b0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01ea8a9c;
  plVar1 = plVar20 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = FUN_00d78f50(plVar20,&local_a0);
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  goto joined_r0x01eaa034;
LAB_01ea8970:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar25 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x61fd69ae4105db30;
      }
      else if (uVar16 < 0x61fd69ae4105db31) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x61fd69ae4105db30 / uVar16;
        }
        uVar18 = 0x61fd69ae4105db30 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x61fd69ae4105db30;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x61fd69ae4105db30) {
              if (plVar21[2] == 0x61fd69ae4105db30) goto LAB_01ea8b14;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x61fd69ae4105db30) {
              if (plVar21[2] == 0x61fd69ae4105db30) goto LAB_01ea8b14;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea8b18;
  }
  goto LAB_01ea8b2c;
LAB_01ea8b14:
  uVar25 = (undefined4)plVar21[6];
LAB_01ea8b18:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01ea8b2c;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01eaa05c;
LAB_01ea8bc8:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar26 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xe2d704833e11457e;
      }
      else if (uVar16 < 0xe2d704833e11457f) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xe2d704833e11457e / uVar16;
        }
        uVar18 = 0xe2d704833e11457e - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xe2d704833e11457e;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0xe2d704833e11457e) {
              if (plVar21[2] == -0x1d28fb7cc1eeba82) goto LAB_01ea8d0c;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0xe2d704833e11457e) {
              if (plVar21[2] == -0x1d28fb7cc1eeba82) goto LAB_01ea8d0c;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea8d10;
  }
  goto LAB_01ea8d24;
LAB_01ea8d0c:
  uVar26 = (undefined4)plVar21[6];
LAB_01ea8d10:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 != 0) goto LAB_01ea8d24;
  (**(code **)(*plVar20 + 0x10))();
  bVar2 = *puVar8;
  goto joined_r0x01eaa0ac;
LAB_01ea8dc0:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar27 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x6f95fd9fa8e75130;
      }
      else if (uVar16 < 0x6f95fd9fa8e75131) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x6f95fd9fa8e75130 / uVar16;
        }
        uVar18 = 0x6f95fd9fa8e75130 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x6f95fd9fa8e75130;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x6f95fd9fa8e75130) {
              if (plVar21[2] == 0x6f95fd9fa8e75130) goto LAB_01ea8f04;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x6f95fd9fa8e75130) {
              if (plVar21[2] == 0x6f95fd9fa8e75130) goto LAB_01ea8f04;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea8f08;
  }
  goto LAB_01ea8f1c;
LAB_01ea8f04:
  uVar27 = (undefined4)plVar21[6];
LAB_01ea8f08:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
  goto LAB_01ea8f1c;
LAB_01ea8fbc:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = plVar20[0x21];
    uVar27 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x6f7b139fa8d0aeda;
      }
      else if (uVar16 < 0x6f7b139fa8d0aedb) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x6f7b139fa8d0aeda / uVar16;
        }
        uVar18 = 0x6f7b139fa8d0aeda - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x6f7b139fa8d0aeda;
      }
      plVar21 = *(long **)(plVar20[0x20] + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar21[1] == 0x6f7b139fa8d0aeda) {
              if (plVar21[2] == 0x6f7b139fa8d0aeda) goto LAB_01ea9100;
            }
            else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar21[1];
            if (uVar17 == 0x6f7b139fa8d0aeda) {
              if (plVar21[2] == 0x6f7b139fa8d0aeda) goto LAB_01ea9100;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar5 = 0;
                if (uVar16 != 0) {
                  uVar5 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar5 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01ea9104;
  }
  goto LAB_01ea84a0;
LAB_01ea9100:
  uVar27 = (undefined4)plVar21[6];
LAB_01ea9104:
  do {
    iVar15 = (int)*plVar1 + -1;
    bVar11 = iVar15 == 0;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_01ea849c;
LAB_01ea85cc:
  uVar24 = (undefined4)plVar21[6];
LAB_01ea85d0:
  do {
    iVar15 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar15;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar20 + 0x10))();
  }
LAB_01ea85e4:
  local_a0 = 0x9efac5779b0ddb48;
  local_98 = "weak_cam_shake_period";
  local_90 = 0x15;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01ea8a6c:
    uVar12 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01ea8a6c;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea86a0;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01ea8a6c;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea86a0;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01ea8a6c;
      plVar20 = (long *)*plVar20;
      uVar12 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01eaa018:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_a0 = 0xd9c78751d2e77ec7;
  local_98 = "weak_cam_shake_endFrame";
  local_90 = 0x17;
  local_88 = (long *)0x0;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar16 == 0) {
LAB_01ea8a9c:
    uVar13 = 0;
  }
  else {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
    goto LAB_01ea8a9c;
    if (1 < uVar17) {
      do {
        uVar17 = plVar20[1];
        if (uVar17 == 0xd65830cac3e925da) {
          if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea87b0;
        }
        else {
          if (uVar16 <= uVar17) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar17 / uVar16;
            }
            uVar17 = uVar17 - uVar5 * uVar16;
          }
          if (uVar17 != uVar18) break;
        }
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      goto LAB_01ea8a9c;
    }
    do {
      if (plVar20[1] == 0xd65830cac3e925da) {
        if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea87b0;
      }
      else if ((plVar20[1] & uVar16 - 1) != uVar18) goto LAB_01ea8a9c;
      plVar20 = (long *)*plVar20;
      uVar13 = 0;
    } while (plVar20 != (long *)0x0);
  }
joined_r0x01eaa034:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0x8597f58d4e58e679;
  pcStack_b8 = "weak_cam_shake_interpolationType";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x20;
  local_a8 = (long *)0x0;
  uVar14 = FUN_00ea3f80(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_90 = 0x16;
  local_88 = (long *)0x0;
  local_c0 = 0xe565fa0931cd01db;
  pcStack_b8 = "weak_cam_shake_randomRange";
  local_a0 = 0xd65830cac3e925da;
  local_98 = "field_obstruction_waza";
  local_b0 = 0x1a;
  local_a8 = (long *)0x0;
  auVar23 = FUN_00aee408(&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar25 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8970;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8970;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01ea8b2c:
  bVar2 = *puVar8;
joined_r0x01eaa05c:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar26 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8bc8;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8bc8;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01ea8d24:
  bVar2 = *puVar8;
joined_r0x01eaa0ac:
  if (((bVar2 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8dc0;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8dc0;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01ea8f1c:
  *(undefined4 *)(param_1[8] + 4) = uVar27;
  if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar19 = *(long *)puVar9;
  *(long *)puVar10 = lVar19;
  uVar16 = *(ulong *)(lVar19 + 0x60);
  uVar27 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8fbc;
          }
          else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar20[2] == -0x29a7cf353c16da26) goto LAB_01ea8fbc;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar5 = 0;
              if (uVar16 != 0) {
                uVar5 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar5 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_01ea84a0:
  *(undefined4 *)(param_1[8] + 8) = uVar27;
LAB_01ea84a8:
  param_1[1][0xf] = local_c0._2_1_;
  param_1[1][0xc] = param_3 == 1;
  *param_1 = auVar22;
  *(undefined2 *)(param_1[1] + 0xd) = (undefined2)local_c0;
  *(undefined8 *)(param_1[2] + 4) = local_a0;
  *(undefined4 *)param_1[1] = uVar24;
  *(undefined4 *)param_1[4] = uVar25;
  *(undefined4 *)(param_1[4] + 4) = uVar26;
  *(undefined4 *)(param_1[1] + 4) = uVar12;
  *(undefined4 *)(param_1[1] + 8) = uVar13;
  *(undefined4 *)param_1[2] = uVar14;
  uVar24 = 999999;
  if (param_3 != 1) {
    uVar24 = uVar13;
  }
  *(undefined4 *)(param_1[2] + 0xc) = local_98._0_4_;
  *(undefined4 *)param_1[8] = uVar24;
  param_1[3] = auVar23;
  return;
}


