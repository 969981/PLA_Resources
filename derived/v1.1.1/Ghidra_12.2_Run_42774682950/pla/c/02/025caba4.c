/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025caba4; name: FUN_025caba4
 */


void FUN_025caba4(long param_1,ulong param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  long *local_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_4c;
  long *local_48;
  long *local_38;
  
  if (*(long *)(param_1 + 0x240) == 0) {
    return;
  }
  FUN_00cfac20(&local_38);
  if (local_38 == (long *)0x0) {
    return;
  }
  FUN_01aef8b8(&local_68);
  if (local_68 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_016c3724(&local_48);
    puVar9 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_68 + 1);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_88 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar14 + 0xd8,&local_88);
      }
    }
  }
  if (local_48 == (long *)0x0) goto joined_r0x025cb3cc;
  local_5c = 0;
  local_60 = 4;
  local_54 = 0;
  local_88 = (undefined8 *)0xdda9f413319d82e4;
  pcStack_80 = "player_face";
  local_4c = 0;
  local_78 = 0xb;
  local_70 = (long *)0x0;
  local_a8 = 0x2b8b75d2261fcdf4;
  pcStack_a0 = "face_damage";
  local_98 = 0xb;
  local_90 = (long *)0x0;
  local_68 = (undefined8 *)FUN_00ea3260(&local_88,&local_a8);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  puVar6 = PTR_DAT_04379660;
  if ((param_2 & 1) != 0) {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    uVar13 = *(ulong *)(lVar14 + 0x60);
    if (uVar13 == 0) {
LAB_025cb280:
      uVar17 = 0;
    }
    else {
      uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar13 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar12 = 0xdda9f413319d82e4;
        if (uVar13 < 0xdda9f413319d82e5) {
          uVar12 = 0;
          if (uVar13 != 0) {
            uVar12 = 0xdda9f413319d82e4 / uVar13;
          }
          uVar12 = 0xdda9f413319d82e4 - uVar12 * uVar13;
        }
      }
      plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar12 * 8);
      if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
      goto LAB_025cb280;
      if (1 < uVar11) {
        do {
          uVar11 = plVar15[1];
          if (uVar11 == 0xdda9f413319d82e4) {
            if (plVar15[2] == -0x22560becce627d1c) goto LAB_025caef0;
          }
          else {
            if (uVar13 <= uVar11) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar5 * uVar13;
            }
            if (uVar11 != uVar12) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        goto LAB_025cb280;
      }
      do {
        if (plVar15[1] == 0xdda9f413319d82e4) {
          if (plVar15[2] == -0x22560becce627d1c) goto LAB_025caef0;
        }
        else if ((plVar15[1] & uVar13 - 1) != uVar12) goto LAB_025cb280;
        plVar15 = (long *)*plVar15;
        uVar17 = 0;
      } while (plVar15 != (long *)0x0);
    }
    goto LAB_025cb310;
  }
  local_88 = (undefined8 *)0x0;
  pcStack_80 = (char *)0x0;
  FUN_00cf9db0(&local_88,local_38 + 0xf1);
  if (local_88 == (undefined8 *)0x0) {
    local_b0 = (long *)0x0;
  }
  else {
    FUN_00959eac(&local_b0);
    puVar9 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_88 + 1);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_a8 = *puVar9;
        FUN_02a44274(lVar14 + 0xd8,&local_a8);
      }
    }
  }
  if (local_b0 == (long *)0x0) {
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    uVar13 = *(ulong *)(lVar14 + 0x60);
    if (uVar13 == 0) goto LAB_025cb638;
    uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar13 - 1 & 0xdda9f413319d82e4;
    }
    else {
      uVar12 = 0xdda9f413319d82e4;
      if (uVar13 < 0xdda9f413319d82e5) {
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = 0xdda9f413319d82e4 / uVar13;
        }
        uVar12 = 0xdda9f413319d82e4 - uVar12 * uVar13;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar12 * 8);
    if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
    goto LAB_025cb638;
    if (uVar11 < 2) {
      do {
        if (plVar15[1] == 0xdda9f413319d82e4) {
          if (plVar15[2] == -0x22560becce627d1c) goto LAB_025cad7c;
        }
        else if ((plVar15[1] & uVar13 - 1) != uVar12) goto LAB_025cb638;
        plVar15 = (long *)*plVar15;
        uVar17 = 0;
      } while (plVar15 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar15[1];
        if (uVar11 == 0xdda9f413319d82e4) {
          if (plVar15[2] == -0x22560becce627d1c) goto LAB_025cad7c;
        }
        else {
          if (uVar13 <= uVar11) {
            uVar5 = 0;
            if (uVar13 != 0) {
              uVar5 = uVar11 / uVar13;
            }
            uVar11 = uVar11 - uVar5 * uVar13;
          }
          if (uVar11 != uVar12) goto LAB_025cb638;
        }
        plVar15 = (long *)*plVar15;
        uVar17 = 0;
      } while (plVar15 != (long *)0x0);
    }
  }
  else {
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)puVar7;
    *(long *)puVar8 = lVar14;
    uVar13 = *(ulong *)(lVar14 + 0x60);
    if (uVar13 != 0) {
      uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar13 - 1 & 0xdda9f413319d82e4;
      }
      else {
        uVar12 = 0xdda9f413319d82e4;
        if (uVar13 < 0xdda9f413319d82e5) {
          uVar12 = 0;
          if (uVar13 != 0) {
            uVar12 = 0xdda9f413319d82e4 / uVar13;
          }
          uVar12 = 0xdda9f413319d82e4 - uVar12 * uVar13;
        }
      }
      plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0xdda9f413319d82e4) {
              if (plVar15[2] == -0x22560becce627d1c) goto LAB_025cb060;
            }
            else if ((plVar15[1] & uVar13 - 1) != uVar12) goto LAB_025cb638;
            plVar15 = (long *)*plVar15;
            uVar17 = 0;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0xdda9f413319d82e4) {
              if (plVar15[2] == -0x22560becce627d1c) goto LAB_025cb060;
            }
            else {
              if (uVar13 <= uVar11) {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar11 / uVar13;
                }
                uVar11 = uVar11 - uVar5 * uVar13;
              }
              if (uVar11 != uVar12) goto LAB_025cb638;
            }
            plVar15 = (long *)*plVar15;
            uVar17 = 0;
          } while (plVar15 != (long *)0x0);
        }
        goto LAB_025cb1c4;
      }
    }
LAB_025cb638:
    uVar17 = 0;
  }
  goto LAB_025cb1c4;
LAB_025caef0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025cb280;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = plVar15[0x14];
  if (uVar13 == 0) {
    uVar17 = 0;
  }
  else {
    uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar13 - 1 & 0x1ebc2d05553cadf0;
    }
    else if (uVar13 < 0x1ebc2d05553cadf1) {
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = 0x1ebc2d05553cadf0 / uVar13;
      }
      uVar12 = 0x1ebc2d05553cadf0 - uVar12 * uVar13;
    }
    else {
      uVar12 = 0x1ebc2d05553cadf0;
    }
    plVar16 = *(long **)(plVar15[0x13] + uVar12 * 8);
    if (plVar16 == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        uVar17 = 0;
      }
      else if (uVar11 < 2) {
        do {
          if (plVar16[1] == 0x1ebc2d05553cadf0) {
            if (plVar16[2] == 0x1ebc2d05553cadf0) goto LAB_025cb2f8;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar12) {
            uVar17 = 0;
            break;
          }
          plVar16 = (long *)*plVar16;
          uVar17 = 0;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar16[1];
          if (uVar11 == 0x1ebc2d05553cadf0) {
            if (plVar16[2] == 0x1ebc2d05553cadf0) goto LAB_025cb2f8;
          }
          else {
            if (uVar13 <= uVar11) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar5 * uVar13;
            }
            if (uVar11 != uVar12) {
              uVar17 = 0;
              goto LAB_025cb2fc;
            }
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
        uVar17 = 0;
      }
    }
  }
  goto LAB_025cb2fc;
LAB_025cb2f8:
  uVar17 = (undefined4)plVar16[6];
LAB_025cb2fc:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_025cb310:
  local_5c = 1;
  local_58 = uVar17;
  goto LAB_025cb1f4;
LAB_025cb060:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025cb638;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = plVar15[0x14];
  if (uVar13 == 0) {
    uVar17 = 0;
  }
  else {
    uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar13 - 1 & 0xab3c8a2c14faadd3;
    }
    else if (uVar13 < 0xab3c8a2c14faadd4) {
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = 0xab3c8a2c14faadd3 / uVar13;
      }
      uVar12 = 0xab3c8a2c14faadd3 - uVar12 * uVar13;
    }
    else {
      uVar12 = 0xab3c8a2c14faadd3;
    }
    plVar16 = *(long **)(plVar15[0x13] + uVar12 * 8);
    if (plVar16 == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        uVar17 = 0;
      }
      else if (uVar11 < 2) {
        do {
          if (plVar16[1] == 0xab3c8a2c14faadd3) {
            if (plVar16[2] == -0x54c375d3eb05522d) goto LAB_025cb368;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar12) {
            uVar17 = 0;
            break;
          }
          plVar16 = (long *)*plVar16;
          uVar17 = 0;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar16[1];
          if (uVar11 == 0xab3c8a2c14faadd3) {
            if (plVar16[2] == -0x54c375d3eb05522d) goto LAB_025cb368;
          }
          else {
            if (uVar13 <= uVar11) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar5 * uVar13;
            }
            if (uVar11 != uVar12) {
              uVar17 = 0;
              goto LAB_025cb36c;
            }
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
        uVar17 = 0;
      }
    }
  }
  goto LAB_025cb36c;
LAB_025cb368:
  uVar17 = (undefined4)plVar16[6];
LAB_025cb36c:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto joined_r0x025cb37c;
LAB_025cad7c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025cb638;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = plVar15[0x14];
  if (uVar13 == 0) {
    uVar17 = 0;
  }
  else {
    uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar13 - 1 & 0xd8bc0280923cba2e;
    }
    else if (uVar13 < 0xd8bc0280923cba2f) {
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = 0xd8bc0280923cba2e / uVar13;
      }
      uVar12 = 0xd8bc0280923cba2e - uVar12 * uVar13;
    }
    else {
      uVar12 = 0xd8bc0280923cba2e;
    }
    plVar16 = *(long **)(plVar15[0x13] + uVar12 * 8);
    if (plVar16 == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        uVar17 = 0;
      }
      else if (uVar11 < 2) {
        do {
          if (plVar16[1] == 0xd8bc0280923cba2e) {
            if (plVar16[2] == -0x2743fd7f6dc345d2) goto LAB_025cb1ac;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar12) {
            uVar17 = 0;
            break;
          }
          plVar16 = (long *)*plVar16;
          uVar17 = 0;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar16[1];
          if (uVar11 == 0xd8bc0280923cba2e) {
            if (plVar16[2] == -0x2743fd7f6dc345d2) goto LAB_025cb1ac;
          }
          else {
            if (uVar13 <= uVar11) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar5 * uVar13;
            }
            if (uVar11 != uVar12) {
              uVar17 = 0;
              goto LAB_025cb1b0;
            }
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
        uVar17 = 0;
      }
    }
  }
  goto LAB_025cb1b0;
LAB_025cb1ac:
  uVar17 = (undefined4)plVar16[6];
LAB_025cb1b0:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
joined_r0x025cb37c:
  if (iVar10 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_025cb1c4:
  local_5c = 1;
  local_58 = uVar17;
  if (local_b0 != (long *)0x0) {
    lVar14 = local_b0[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
LAB_025cb1f4:
  local_60 = 0;
  FUN_025d35b8(local_48,&local_68);
  if (local_48 != (long *)0x0) {
    lVar14 = local_48[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
joined_r0x025cb3cc:
  if (local_38 != (long *)0x0) {
    lVar14 = local_38[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


