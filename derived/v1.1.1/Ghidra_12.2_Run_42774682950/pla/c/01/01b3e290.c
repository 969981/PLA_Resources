/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3e290; name: FUN_01b3e290
 */


void FUN_01b3e290(int param_1,long param_2)

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
        local_90 = 0xece063d627399852;
        pcStack_88 = "common_ball_out_start_curve_offset";
        local_70 = 0x28d6a179641b693a;
        pcStack_68 = "buddy_warp";
        local_80 = 0x22;
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
        local_90 = 0xf78ad8fb3228d9eb;
        pcStack_88 = "common_ball_out_goal_curve_offset";
        local_70 = 0x28d6a179641b693a;
        pcStack_68 = "buddy_warp";
        local_80 = 0x21;
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
                  if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3eeec;
                }
                else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
            else {
              do {
                uVar11 = plVar14[1];
                if (uVar11 == 0x28d6a179641b693a) {
                  if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3eeec;
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
        goto LAB_01b3f690;
      }
      local_60 = 10;
      local_58 = (long *)0x0;
      local_90 = 0x55f6f6de35b70956;
      pcStack_88 = "slow_ball_out_start_curve_offset";
      local_70 = 0x28d6a179641b693a;
      pcStack_68 = "buddy_warp";
      local_80 = 0x20;
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
      local_90 = 0x51807b826d79ccef;
      pcStack_88 = "slow_ball_out_goal_curve_offset";
      local_70 = 0x28d6a179641b693a;
      pcStack_68 = "buddy_warp";
      local_80 = 0x1f;
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
                if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3eca8;
              }
              else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              uVar11 = plVar14[1];
              if (uVar11 == 0x28d6a179641b693a) {
                if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3eca8;
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
      goto LAB_01b3f3b0;
    }
    local_60 = 10;
    local_58 = (long *)0x0;
    local_90 = 0x8e8d80bee3de51f5;
    pcStack_88 = "fast_ball_out_start_curve_offset";
    local_70 = 0x28d6a179641b693a;
    pcStack_68 = "buddy_warp";
    local_80 = 0x20;
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
    local_90 = 0x78e84e8df91789de;
    pcStack_88 = "fast_ball_out_goal_curve_offset";
    local_70 = 0x28d6a179641b693a;
    pcStack_68 = "buddy_warp";
    local_80 = 0x1f;
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
              if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3ea3c;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x28d6a179641b693a) {
              if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3ea3c;
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
    goto LAB_01b3f048;
  }
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0xece063d627399852;
  pcStack_88 = "common_ball_out_start_curve_offset";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x22;
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
  local_90 = 0xf78ad8fb3228d9eb;
  pcStack_88 = "common_ball_out_goal_curve_offset";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x21;
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
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3e450;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3e450;
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
  goto LAB_01b3e5ac;
LAB_01b3eeec:
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
        uVar12 = uVar10 - 1 & 0x1e2cd2517c2ae07d;
      }
      else if (uVar10 < 0x1e2cd2517c2ae07e) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x1e2cd2517c2ae07d / uVar10;
        }
        uVar12 = 0x1e2cd2517c2ae07d - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x1e2cd2517c2ae07d;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x1e2cd2517c2ae07d) {
              if (plVar15[2] == 0x1e2cd2517c2ae07d) goto LAB_01b3f678;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x1e2cd2517c2ae07d) {
              if (plVar15[2] == 0x1e2cd2517c2ae07d) goto LAB_01b3f678;
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
    goto LAB_01b3f67c;
  }
  goto LAB_01b3f690;
LAB_01b3f678:
  uVar8 = (undefined4)plVar15[6];
LAB_01b3f67c:
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
LAB_01b3f690:
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0x51618b87762ecc6b;
  pcStack_88 = "common_ball_out_move_ease_func";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x1e;
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
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3f798;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3f798;
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
  goto LAB_01b3f8f4;
LAB_01b3f798:
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
        uVar12 = uVar10 - 1 & 0x49167651a53ea845;
      }
      else if (uVar10 < 0x49167651a53ea846) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x49167651a53ea845 / uVar10;
        }
        uVar12 = 0x49167651a53ea845 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x49167651a53ea845;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x49167651a53ea845) {
              if (plVar15[2] == 0x49167651a53ea845) goto LAB_01b3f8dc;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x49167651a53ea845) {
              if (plVar15[2] == 0x49167651a53ea845) goto LAB_01b3f8dc;
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
    goto LAB_01b3f8e0;
  }
  goto LAB_01b3f8f4;
LAB_01b3f8dc:
  uVar8 = (undefined4)plVar15[6];
LAB_01b3f8e0:
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
LAB_01b3f8f4:
  *(undefined4 *)(param_2 + 0x10) = uVar8;
  goto LAB_01b3e818;
LAB_01b3eca8:
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
        uVar12 = uVar10 - 1 & 0x667666b0c2d41029;
      }
      else if (uVar10 < 0x667666b0c2d4102a) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x667666b0c2d41029 / uVar10;
        }
        uVar12 = 0x667666b0c2d41029 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x667666b0c2d41029;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x667666b0c2d41029) {
              if (plVar15[2] == 0x667666b0c2d41029) goto LAB_01b3f398;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x667666b0c2d41029) {
              if (plVar15[2] == 0x667666b0c2d41029) goto LAB_01b3f398;
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
    goto LAB_01b3f39c;
  }
  goto LAB_01b3f3b0;
LAB_01b3f398:
  uVar8 = (undefined4)plVar15[6];
LAB_01b3f39c:
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
LAB_01b3f3b0:
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0xe5dbe25713d22df7;
  pcStack_88 = "slow_ball_out_move_ease_func";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x1c;
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
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3f4b8;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3f4b8;
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
  goto LAB_01b3f614;
LAB_01b3f4b8:
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
        uVar12 = uVar10 - 1 & 0x147a38663f98e811;
      }
      else if (uVar10 < 0x147a38663f98e812) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x147a38663f98e811 / uVar10;
        }
        uVar12 = 0x147a38663f98e811 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x147a38663f98e811;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x147a38663f98e811) {
              if (plVar15[2] == 0x147a38663f98e811) goto LAB_01b3f5fc;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x147a38663f98e811) {
              if (plVar15[2] == 0x147a38663f98e811) goto LAB_01b3f5fc;
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
    goto LAB_01b3f600;
  }
  goto LAB_01b3f614;
LAB_01b3f5fc:
  uVar8 = (undefined4)plVar15[6];
LAB_01b3f600:
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
LAB_01b3f614:
  *(undefined4 *)(param_2 + 0x10) = uVar8;
  local_90 = 0xec647c96fa227abf;
  pcStack_88 = "slow_ball_out_scaling_ease_func";
  goto LAB_01b3f2d4;
LAB_01b3ea3c:
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
        uVar12 = uVar10 - 1 & 0x9847544e2d12ede0;
      }
      else if (uVar10 < 0x9847544e2d12ede1) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x9847544e2d12ede0 / uVar10;
        }
        uVar12 = 0x9847544e2d12ede0 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x9847544e2d12ede0;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x9847544e2d12ede0) {
              if (plVar15[2] == -0x67b8abb1d2ed1220) goto LAB_01b3f030;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x9847544e2d12ede0) {
              if (plVar15[2] == -0x67b8abb1d2ed1220) goto LAB_01b3f030;
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
    goto LAB_01b3f034;
  }
  goto LAB_01b3f048;
LAB_01b3f030:
  uVar8 = (undefined4)plVar15[6];
LAB_01b3f034:
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
LAB_01b3f048:
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0x17d474f4d1b1232c;
  pcStack_88 = "fast_ball_out_move_ease_func";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x1c;
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
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3f150;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3f150;
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
  goto LAB_01b3f2ac;
LAB_01b3f150:
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
        uVar12 = uVar10 - 1 & 0x1295466df6c814e6;
      }
      else if (uVar10 < 0x1295466df6c814e7) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x1295466df6c814e6 / uVar10;
        }
        uVar12 = 0x1295466df6c814e6 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x1295466df6c814e6;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x1295466df6c814e6) {
              if (plVar15[2] == 0x1295466df6c814e6) goto LAB_01b3f294;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x1295466df6c814e6) {
              if (plVar15[2] == 0x1295466df6c814e6) goto LAB_01b3f294;
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
    goto LAB_01b3f298;
  }
  goto LAB_01b3f2ac;
LAB_01b3f294:
  uVar8 = (undefined4)plVar15[6];
LAB_01b3f298:
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
LAB_01b3f2ac:
  *(undefined4 *)(param_2 + 0x10) = uVar8;
  pcStack_88 = "fast_ball_out_scaling_ease_func";
  local_90 = 0x476a9baa97df97be;
LAB_01b3f2d4:
  local_80 = 0x1f;
  goto LAB_01b3e840;
LAB_01b3e450:
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
        uVar12 = uVar10 - 1 & 0x1e2cd2517c2ae07d;
      }
      else if (uVar10 < 0x1e2cd2517c2ae07e) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x1e2cd2517c2ae07d / uVar10;
        }
        uVar12 = 0x1e2cd2517c2ae07d - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x1e2cd2517c2ae07d;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x1e2cd2517c2ae07d) {
              if (plVar15[2] == 0x1e2cd2517c2ae07d) goto LAB_01b3e594;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x1e2cd2517c2ae07d) {
              if (plVar15[2] == 0x1e2cd2517c2ae07d) goto LAB_01b3e594;
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
    goto LAB_01b3e598;
  }
  goto LAB_01b3e5ac;
LAB_01b3e6b4:
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
        uVar12 = uVar10 - 1 & 0x49167651a53ea845;
      }
      else if (uVar10 < 0x49167651a53ea846) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x49167651a53ea845 / uVar10;
        }
        uVar12 = 0x49167651a53ea845 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x49167651a53ea845;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x49167651a53ea845) {
              if (plVar15[2] == 0x49167651a53ea845) goto LAB_01b3e7f8;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x49167651a53ea845) {
              if (plVar15[2] == 0x49167651a53ea845) goto LAB_01b3e7f8;
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
    goto LAB_01b3e7fc;
  }
  goto LAB_01b3e810;
LAB_01b3e7f8:
  uVar8 = (undefined4)plVar15[6];
LAB_01b3e7fc:
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
  goto LAB_01b3e810;
LAB_01b3e594:
  uVar8 = (undefined4)plVar15[6];
LAB_01b3e598:
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
LAB_01b3e5ac:
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  local_60 = 10;
  local_58 = (long *)0x0;
  local_90 = 0x51618b87762ecc6b;
  pcStack_88 = "common_ball_out_move_ease_func";
  local_70 = 0x28d6a179641b693a;
  pcStack_68 = "buddy_warp";
  local_80 = 0x1e;
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
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3e6b4;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x28d6a179641b693a) {
            if (plVar14[2] == 0x28d6a179641b693a) goto LAB_01b3e6b4;
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
LAB_01b3e810:
  *(undefined4 *)(param_2 + 0x10) = uVar8;
LAB_01b3e818:
  local_90 = 0x2367e82ce0a351b3;
  pcStack_88 = "common_ball_out_scaling_ease_func";
  local_80 = 0x21;
LAB_01b3e840:
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


