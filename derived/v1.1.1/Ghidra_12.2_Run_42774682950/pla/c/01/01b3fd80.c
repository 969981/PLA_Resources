/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3fd80; name: FUN_01b3fd80
 */


void FUN_01b3fd80(int param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  puVar5 = PTR_DAT_04379660;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        local_60 = 10;
        local_58 = (long *)0x0;
        local_90 = 0xfb23395ced27842e;
        pcStack_88 = "common_player_return_start_curve_offset";
        local_70 = 0x28d6a179641b693a;
        pcStack_68 = "buddy_warp";
        local_80 = 0x27;
        local_78 = (long *)0x0;
        auVar16 = FUN_00aee408(&local_70,&local_90);
        *(undefined1 (*) [16])(param_2 + 0x180) = auVar16;
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        local_60 = 10;
        local_58 = (long *)0x0;
        local_90 = 0xe1b7cdd6e2b3e037;
        pcStack_88 = "common_player_return_goal_curve_offset";
        local_70 = 0x28d6a179641b693a;
        pcStack_68 = "buddy_warp";
        local_80 = 0x26;
        local_78 = (long *)0x0;
        auVar16 = FUN_00aee408(&local_70,&local_90);
        *(undefined1 (*) [16])(param_2 + 400) = auVar16;
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        uVar10 = *(ulong *)(lVar13 + 0x60);
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 < 2) {
            uVar12 = uVar10 - 1 & 0x28d6a179641b693a;
          }
          else {
            uVar12 = 0x28d6a179641b693a;
            if (uVar10 < 0x28d6a179641b693b) {
              uVar12 = 0;
              if (uVar10 != 0) {
                uVar12 = 0x28d6a179641b693a / uVar10;
              }
              uVar12 = 0x28d6a179641b693a - uVar12 * uVar10;
            }
          }
          plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
          if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
            if (uVar11 < 2) {
              do {
                if (plVar14[1] == 0x28d6a179641b693a) {
                  if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b40cfc;
                }
                else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
            else {
              do {
                uVar11 = plVar14[1];
                if (uVar11 == 0x28d6a179641b693a) {
                  if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b40cfc;
                }
                else {
                  if (uVar10 <= uVar11) {
                    uVar4 = 0;
                    if (uVar10 != 0) {
                      uVar4 = uVar11 / uVar10;
                    }
                    uVar11 = uVar11 - uVar4 * uVar10;
                  }
                  if (uVar11 != uVar12) break;
                }
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
          }
        }
        goto LAB_01b41188;
      }
      local_60 = 10;
      local_58 = (long *)0x0;
      local_90 = 0x84c11fdfa0a48d72;
      pcStack_88 = "slow_player_return_start_curve_offset";
      local_70 = 0x28d6a179641b693a;
      pcStack_68 = "buddy_warp";
      local_80 = 0x25;
      local_78 = (long *)0x0;
      auVar16 = FUN_00aee408(&local_70,&local_90);
      *(undefined1 (*) [16])(param_2 + 0x180) = auVar16;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_60 = 10;
      local_58 = (long *)0x0;
      local_90 = 0x69f3b2ef9b59960b;
      pcStack_88 = "slow_player_return_goal_curve_offset";
      local_70 = 0x28d6a179641b693a;
      pcStack_68 = "buddy_warp";
      local_80 = 0x24;
      local_78 = (long *)0x0;
      auVar16 = FUN_00aee408(&local_70,&local_90);
      *(undefined1 (*) [16])(param_2 + 400) = auVar16;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar13 = *(long *)puVar6;
      *(long *)puVar7 = lVar13;
      uVar10 = *(ulong *)(lVar13 + 0x60);
      uVar8 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          uVar12 = uVar10 - 1 & 0x28d6a179641b693a;
        }
        else {
          uVar12 = 0x28d6a179641b693a;
          if (uVar10 < 0x28d6a179641b693b) {
            uVar12 = 0;
            if (uVar10 != 0) {
              uVar12 = 0x28d6a179641b693a / uVar10;
            }
            uVar12 = 0x28d6a179641b693a - uVar12 * uVar10;
          }
        }
        plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if (plVar14[1] == 0x28d6a179641b693a) {
                if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b407c0;
              }
              else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              uVar11 = plVar14[1];
              if (uVar11 == 0x28d6a179641b693a) {
                if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b407c0;
              }
              else {
                if (uVar10 <= uVar11) {
                  uVar4 = 0;
                  if (uVar10 != 0) {
                    uVar4 = uVar11 / uVar10;
                  }
                  uVar11 = uVar11 - uVar4 * uVar10;
                }
                if (uVar11 != uVar12) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      goto LAB_01b40ea8;
    }
    local_60 = 10;
    local_58 = (long *)0x0;
    local_90 = 0x11298ede31106c07;
    pcStack_88 = "fast_player_return_start_curve_offset";
    local_70 = 0x28d6a179641b693a;
    pcStack_68 = "buddy_warp";
    local_80 = 0x25;
    local_78 = (long *)0x0;
    auVar16 = FUN_00aee408(&local_70,&local_90);
    *(undefined1 (*) [16])(param_2 + 0x180) = auVar16;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_60 = 10;
    local_58 = (long *)0x0;
    local_90 = 0xde92ba17b2746c4;
    pcStack_88 = "fast_player_return_goal_curve_offset";
    local_70 = 0x28d6a179641b693a;
    pcStack_68 = "buddy_warp";
    local_80 = 0x24;
    local_78 = (long *)0x0;
    auVar16 = FUN_00aee408(&local_70,&local_90);
    *(undefined1 (*) [16])(param_2 + 400) = auVar16;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    puVar5 = PTR_DAT_04379660;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar7 = PTR_DAT_04379670;
    puVar6 = PTR_DAT_04379668;
    lVar13 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar13;
    uVar10 = *(ulong *)(lVar13 + 0x60);
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x28d6a179641b693a;
      }
      else {
        uVar12 = 0x28d6a179641b693a;
        if (uVar10 < 0x28d6a179641b693b) {
          uVar12 = 0;
          if (uVar10 != 0) {
            uVar12 = 0x28d6a179641b693a / uVar10;
          }
          uVar12 = 0x28d6a179641b693a - uVar12 * uVar10;
        }
      }
      plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x28d6a179641b693a) {
              if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b4051c;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x28d6a179641b693a) {
              if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b4051c;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01b408f8;
  }
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0xfb23395ced27842e;
  pcStack_88 = "common_player_return_start_curve_offset";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x27;
  local_78 = (long *)0x0;
  auVar16 = FUN_00aee408(&local_70,&local_90);
  *(undefined1 (*) [16])(param_2 + 0x180) = auVar16;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0xe1b7cdd6e2b3e037;
  pcStack_88 = "common_player_return_goal_curve_offset";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x26;
  local_78 = (long *)0x0;
  auVar16 = FUN_00aee408(&local_70,&local_90);
  *(undefined1 (*) [16])(param_2 + 400) = auVar16;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar13 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x28d6a179641b693a;
    }
    else {
      uVar12 = 0x28d6a179641b693a;
      if (uVar10 < 0x28d6a179641b693b) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x28d6a179641b693a / uVar10;
        }
        uVar12 = 0x28d6a179641b693a - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3ff40;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3ff40;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_01b4009c;
LAB_01b40cfc:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x6621955d8f90d561;
      }
      else if (uVar10 < 0x6621955d8f90d562) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x6621955d8f90d561 / uVar10;
        }
        uVar12 = 0x6621955d8f90d561 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x6621955d8f90d561;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x6621955d8f90d561) {
              if (plVar15[2] == 0x6621955d8f90d561) goto LAB_01b41170;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x6621955d8f90d561) {
              if (plVar15[2] == 0x6621955d8f90d561) goto LAB_01b41170;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01b41174;
  }
  goto LAB_01b41188;
LAB_01b41170:
  uVar8 = (undefined4)plVar15[6];
LAB_01b41174:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_01b41188:
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0x298709dbddbc3c6f;
  pcStack_88 = "common_player_return_move_ease_func";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x23;
  local_78 = (long *)0x0;
  uVar8 = FUN_00ea3f80(&local_70,&local_90);
  *(undefined4 *)(param_2 + 0x174) = uVar8;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x28d6a179641b693a;
    }
    else {
      uVar12 = 0x28d6a179641b693a;
      if (uVar10 < 0x28d6a179641b693b) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x28d6a179641b693a / uVar10;
        }
        uVar12 = 0x28d6a179641b693a - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b41290;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b41290;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_01b40300;
LAB_01b41290:
  plVar14 = (long *)plVar14[3];
  if (plVar14 == (long *)0x0) goto LAB_01b40300;
  plVar1 = plVar14 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar10 = plVar14[0x21];
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x8c82a2b40059a769;
    }
    else if (uVar10 < 0x8c82a2b40059a76a) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x8c82a2b40059a769 / uVar10;
      }
      uVar12 = 0x8c82a2b40059a769 - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x8c82a2b40059a769;
    }
    plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar15[1] == 0x8c82a2b40059a769) {
            if (plVar15[2] == -0x737d5d4bffa65897) goto LAB_01b413d4;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar15[1];
          if (uVar11 == 0x8c82a2b40059a769) {
            if (plVar15[2] == -0x737d5d4bffa65897) goto LAB_01b413d4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_01b413d8;
LAB_01b413d4:
  uVar8 = (undefined4)plVar15[6];
LAB_01b413d8:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
LAB_01b413ec:
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01b40300;
LAB_01b407c0:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x633ae42de0c5f11d;
      }
      else if (uVar10 < 0x633ae42de0c5f11e) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x633ae42de0c5f11d / uVar10;
        }
        uVar12 = 0x633ae42de0c5f11d - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x633ae42de0c5f11d;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x633ae42de0c5f11d) {
              if (plVar15[2] == 0x633ae42de0c5f11d) goto LAB_01b40e90;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x633ae42de0c5f11d) {
              if (plVar15[2] == 0x633ae42de0c5f11d) goto LAB_01b40e90;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01b40e94;
  }
  goto LAB_01b40ea8;
LAB_01b40e90:
  uVar8 = (undefined4)plVar15[6];
LAB_01b40e94:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_01b40ea8:
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0x8d1bd7ae7057e28b;
  pcStack_88 = "slow_player_return_move_ease_func";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x21;
  local_78 = (long *)0x0;
  uVar8 = FUN_00ea3f80(&local_70,&local_90);
  *(undefined4 *)(param_2 + 0x174) = uVar8;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x28d6a179641b693a;
    }
    else {
      uVar12 = 0x28d6a179641b693a;
      if (uVar10 < 0x28d6a179641b693b) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x28d6a179641b693a / uVar10;
        }
        uVar12 = 0x28d6a179641b693a - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b40fb0;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b40fb0;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_01b4110c;
LAB_01b40fb0:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0xc96bd685c9465b65;
      }
      else if (uVar10 < 0xc96bd685c9465b66) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xc96bd685c9465b65 / uVar10;
        }
        uVar12 = 0xc96bd685c9465b65 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0xc96bd685c9465b65;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xc96bd685c9465b65) {
              if (plVar15[2] == -0x3694297a36b9a49b) goto LAB_01b410f4;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xc96bd685c9465b65) {
              if (plVar15[2] == -0x3694297a36b9a49b) goto LAB_01b410f4;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01b410f8;
  }
  goto LAB_01b4110c;
LAB_01b410f4:
  uVar8 = (undefined4)plVar15[6];
LAB_01b410f8:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_01b4110c:
  *(undefined4 *)(param_2 + 0x10) = uVar8;
  local_90 = 0x9c59cdae8e95c0d3;
  pcStack_88 = "slow_player_return_scaling_ease_func";
  goto LAB_01b40b84;
LAB_01b4051c:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x90df7f7f0c0d5592;
      }
      else if (uVar10 < 0x90df7f7f0c0d5593) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x90df7f7f0c0d5592 / uVar10;
        }
        uVar12 = 0x90df7f7f0c0d5592 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x90df7f7f0c0d5592;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x90df7f7f0c0d5592) {
              if (plVar15[2] == -0x6f208080f3f2aa6e) goto LAB_01b408e0;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x90df7f7f0c0d5592) {
              if (plVar15[2] == -0x6f208080f3f2aa6e) goto LAB_01b408e0;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01b408e4;
  }
  goto LAB_01b408f8;
LAB_01b408e0:
  uVar8 = (undefined4)plVar15[6];
LAB_01b408e4:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_01b408f8:
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0xab978cc09b9ee63a;
  pcStack_88 = "fast_player_return_move_ease_func";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x21;
  local_78 = (long *)0x0;
  uVar8 = FUN_00ea3f80(&local_70,&local_90);
  *(undefined4 *)(param_2 + 0x174) = uVar8;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x28d6a179641b693a;
    }
    else {
      uVar12 = 0x28d6a179641b693a;
      if (uVar10 < 0x28d6a179641b693b) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x28d6a179641b693a / uVar10;
        }
        uVar12 = 0x28d6a179641b693a - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b40a00;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b40a00;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_01b40b5c;
LAB_01b40a00:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0xcf9d8adcc1f2148c;
      }
      else if (uVar10 < 0xcf9d8adcc1f2148d) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xcf9d8adcc1f2148c / uVar10;
        }
        uVar12 = 0xcf9d8adcc1f2148c - uVar12 * uVar10;
      }
      else {
        uVar12 = 0xcf9d8adcc1f2148c;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xcf9d8adcc1f2148c) {
              if (plVar15[2] == -0x306275233e0deb74) goto LAB_01b40b44;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xcf9d8adcc1f2148c) {
              if (plVar15[2] == -0x306275233e0deb74) goto LAB_01b40b44;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01b40b48;
  }
  goto LAB_01b40b5c;
LAB_01b40b44:
  uVar8 = (undefined4)plVar15[6];
LAB_01b40b48:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_01b40b5c:
  *(undefined4 *)(param_2 + 0x10) = uVar8;
  pcStack_88 = "fast_player_return_scaling_ease_func";
  local_90 = 0xa915890c8aac7018;
LAB_01b40b84:
  local_80 = 0x24;
  goto LAB_01b40330;
LAB_01b3ff40:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x6621955d8f90d561;
      }
      else if (uVar10 < 0x6621955d8f90d562) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x6621955d8f90d561 / uVar10;
        }
        uVar12 = 0x6621955d8f90d561 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x6621955d8f90d561;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x6621955d8f90d561) {
              if (plVar15[2] == 0x6621955d8f90d561) goto LAB_01b40084;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x6621955d8f90d561) {
              if (plVar15[2] == 0x6621955d8f90d561) goto LAB_01b40084;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01b40088;
  }
  goto LAB_01b4009c;
LAB_01b401a4:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x21];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x8c82a2b40059a769;
      }
      else if (uVar10 < 0x8c82a2b40059a76a) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x8c82a2b40059a769 / uVar10;
        }
        uVar12 = 0x8c82a2b40059a769 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x8c82a2b40059a769;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x8c82a2b40059a769) {
              if (plVar15[2] == -0x737d5d4bffa65897) goto LAB_01b402e8;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x8c82a2b40059a769) {
              if (plVar15[2] == -0x737d5d4bffa65897) goto LAB_01b402e8;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar4 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01b402ec;
  }
  goto LAB_01b40300;
LAB_01b402e8:
  uVar8 = (undefined4)plVar15[6];
LAB_01b402ec:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 != 0) goto LAB_01b40300;
  goto LAB_01b413ec;
LAB_01b40084:
  uVar8 = (undefined4)plVar15[6];
LAB_01b40088:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_01b4009c:
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0x298709dbddbc3c6f;
  pcStack_88 = "common_player_return_move_ease_func";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x23;
  local_78 = (long *)0x0;
  uVar8 = FUN_00ea3f80(&local_70,&local_90);
  *(undefined4 *)(param_2 + 0x174) = uVar8;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x28d6a179641b693a;
    }
    else {
      uVar12 = 0x28d6a179641b693a;
      if (uVar10 < 0x28d6a179641b693b) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x28d6a179641b693a / uVar10;
        }
        uVar12 = 0x28d6a179641b693a - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b401a4;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b401a4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01b40300:
  *(undefined4 *)(param_2 + 0x10) = uVar8;
  local_90 = 0xa14d59d202152f37;
  pcStack_88 = "common_player_return_scaling_ease_func";
  local_80 = 0x26;
LAB_01b40330:
  local_58 = (long *)0x0;
  local_60 = 10;
  pcStack_68 = "buddy_warp";
  local_70 = 0x28d6a179641b693a;
  local_78 = (long *)0x0;
  uVar8 = FUN_00ea3f80(&local_70,&local_90);
  *(undefined4 *)(param_2 + 0x178) = uVar8;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


