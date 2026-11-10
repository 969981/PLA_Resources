/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed4e40; name: FUN_01ed4e40
 */


void FUN_01ed4e40(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_3c;
  long *local_38;
  long *local_28;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_00cfac20(&local_28);
  if (local_28 == (long *)0x0) {
    return;
  }
  FUN_01aef8b8(&local_58);
  if (local_58 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_016c3724(&local_38);
    puVar6 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_58 + 1);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_78 = *puVar6;
        FUN_02a44274(lVar11 + 0xd8,&local_78);
      }
    }
  }
  if (local_38 == (long *)0x0) goto joined_r0x01ed54b0;
  iVar7 = *(int *)(*(long *)(param_1 + 0x78) + 0x54);
  if (iVar7 == 1) {
    if (*(char *)(*(long *)(param_1 + 0x78) + 0x229) == '\0') {
      local_4c = 0;
      local_50 = 4;
      local_78 = 0xdda9f413319d82e4;
      pcStack_70 = "player_face";
      local_44 = 0;
      local_68 = 0xb;
      local_60 = (long *)0x0;
      local_98 = 0x89deb8c1d0676fd8;
      pcStack_90 = "face_battle_result_win";
      local_3c = 0;
      local_88 = 0x16;
      local_80 = (long *)0x0;
      local_58 = (undefined8 *)FUN_00ea3260(&local_78,&local_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      local_78 = 0x297458406896fe6a;
      pcStack_70 = "battle_result_win_keep_frame";
      local_68 = 0x1c;
      local_60 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar11 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar11;
      uVar8 = *(ulong *)(lVar11 + 0x60);
      if (uVar8 != 0) {
        uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          uVar10 = uVar8 - 1 & 0xdda9f413319d82e4;
        }
        else if (uVar8 < 0xdda9f413319d82e5) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = 0xdda9f413319d82e4 / uVar8;
          }
          uVar10 = 0xdda9f413319d82e4 - uVar10 * uVar8;
        }
        else {
          uVar10 = 0xdda9f413319d82e4;
        }
        plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + uVar10 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          if (uVar9 < 2) {
            do {
              if (plVar12[1] == 0xdda9f413319d82e4) {
                if (plVar12[2] == -0x22560becce627d1c) goto LAB_01ed5024;
              }
              else if ((plVar12[1] & uVar8 - 1) != uVar10) goto LAB_01ed510c;
              plVar12 = (long *)*plVar12;
              local_48 = 0;
            } while (plVar12 != (long *)0x0);
            goto LAB_01ed5064;
          }
          do {
            uVar9 = plVar12[1];
            if (uVar9 == 0xdda9f413319d82e4) {
              if (plVar12[2] == -0x22560becce627d1c) goto LAB_01ed5024;
            }
            else {
              if (uVar8 <= uVar9) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar9 / uVar8;
                }
                uVar9 = uVar9 - uVar5 * uVar8;
              }
              if (uVar9 != uVar10) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    else {
      local_50 = 4;
      local_4c = 0;
      local_44 = 0;
      local_3c = 0;
      local_58 = (undefined8 *)FUN_025d3d5c();
      local_60 = (long *)0x0;
      local_78 = 0xc2258a0faaaace2a;
      pcStack_70 = "battle_result_enemy_escape_keep_frame";
      local_68 = 0x25;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar11 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar11;
      uVar8 = *(ulong *)(lVar11 + 0x60);
      if (uVar8 != 0) {
        uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          uVar10 = uVar8 - 1 & 0xdda9f413319d82e4;
        }
        else if (uVar8 < 0xdda9f413319d82e5) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = 0xdda9f413319d82e4 / uVar8;
          }
          uVar10 = 0xdda9f413319d82e4 - uVar10 * uVar8;
        }
        else {
          uVar10 = 0xdda9f413319d82e4;
        }
        plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + uVar10 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          if (uVar9 < 2) {
            do {
              if (plVar12[1] == 0xdda9f413319d82e4) {
                if (plVar12[2] == -0x22560becce627d1c) goto LAB_01ed53e8;
              }
              else if ((plVar12[1] & uVar8 - 1) != uVar10) goto LAB_01ed510c;
              plVar12 = (long *)*plVar12;
              local_48 = 0;
            } while (plVar12 != (long *)0x0);
            goto LAB_01ed5064;
          }
          do {
            uVar9 = plVar12[1];
            if (uVar9 == 0xdda9f413319d82e4) {
              if (plVar12[2] == -0x22560becce627d1c) goto LAB_01ed53e8;
            }
            else {
              if (uVar8 <= uVar9) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar9 / uVar8;
                }
                uVar9 = uVar9 - uVar5 * uVar8;
              }
              if (uVar9 != uVar10) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    goto LAB_01ed510c;
  }
  if (iVar7 == 2) {
    local_4c = 0;
    local_50 = 4;
    local_78 = 0xdda9f413319d82e4;
    pcStack_70 = "player_face";
    local_44 = 0;
    local_68 = 0xb;
    local_60 = (long *)0x0;
    local_98 = 0x5dee209decd9bc67;
    pcStack_90 = "face_battle_result_lose";
    local_3c = 0;
    local_88 = 0x17;
    local_80 = (long *)0x0;
    local_58 = (undefined8 *)FUN_00ea3260(&local_78,&local_98);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    local_78 = 0x844fbdb71591cbe7;
    pcStack_70 = "battle_result_lose_keep_frame";
    local_68 = 0x1d;
    local_60 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar11 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar11;
    uVar8 = *(ulong *)(lVar11 + 0x60);
    if (uVar8 != 0) {
      uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar8 - 1 & 0xdda9f413319d82e4;
      }
      else if (uVar8 < 0xdda9f413319d82e5) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = 0xdda9f413319d82e4 / uVar8;
        }
        uVar10 = 0xdda9f413319d82e4 - uVar10 * uVar8;
      }
      else {
        uVar10 = 0xdda9f413319d82e4;
      }
      plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + uVar10 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar12[1] == 0xdda9f413319d82e4) {
              if (plVar12[2] == -0x22560becce627d1c) goto LAB_01ed5280;
            }
            else if ((plVar12[1] & uVar8 - 1) != uVar10) goto LAB_01ed5480;
            plVar12 = (long *)*plVar12;
            local_48 = 0;
          } while (plVar12 != (long *)0x0);
          goto LAB_01ed52c0;
        }
        do {
          uVar9 = plVar12[1];
          if (uVar9 == 0xdda9f413319d82e4) {
            if (plVar12[2] == -0x22560becce627d1c) goto LAB_01ed5280;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar5 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    goto LAB_01ed5480;
  }
  goto LAB_01ed5090;
LAB_01ed53e8:
  plVar12 = (long *)plVar12[3];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_48 = FUN_00d78f50(plVar12,&local_78);
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto joined_r0x01ed5424;
  }
LAB_01ed510c:
  local_48 = 0;
  goto LAB_01ed5064;
LAB_01ed5280:
  plVar12 = (long *)plVar12[3];
  if (plVar12 == (long *)0x0) {
LAB_01ed5480:
    local_48 = 0;
  }
  else {
    plVar1 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_48 = FUN_00d78f50(plVar12,&local_78);
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_01ed52c0:
  local_4c = 1;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  local_50 = 0;
  goto LAB_01ed5088;
LAB_01ed5024:
  plVar12 = (long *)plVar12[3];
  if (plVar12 == (long *)0x0) goto LAB_01ed510c;
  plVar1 = plVar12 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_48 = FUN_00d78f50(plVar12,&local_78);
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
joined_r0x01ed5424:
  if (iVar7 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
LAB_01ed5064:
  local_4c = 1;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
LAB_01ed5088:
  FUN_025d35b8(local_38,&local_58);
LAB_01ed5090:
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
joined_r0x01ed54b0:
  if (local_28 != (long *)0x0) {
    lVar11 = local_28[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


