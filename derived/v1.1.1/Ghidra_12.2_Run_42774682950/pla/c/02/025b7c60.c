/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025b7c60; name: FUN_025b7c60
 */


void FUN_025b7c60(undefined1 (*param_1) [16],ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_218;
  undefined *puStack_210;
  undefined8 local_208;
  long *local_200;
  undefined8 local_1f8;
  undefined *puStack_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  undefined *puStack_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  char *pcStack_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  undefined8 local_198;
  undefined *puStack_190;
  undefined8 local_188;
  long *local_180;
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  long *local_160;
  undefined8 local_158;
  undefined *puStack_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 local_118;
  undefined *puStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  
  uVar10 = param_2 & 0xffffffff;
  lVar13 = uVar10 * 0xd8;
  local_88 = 0x13;
  local_80 = (long *)0x0;
  local_b8 = *(undefined8 *)(&DAT_0425ec18 + lVar13);
  puStack_b0 = (&PTR_s_land_shake_level0_direction_0425ec20)[uVar10 * 0x1b];
  local_a8 = *(undefined8 *)(&DAT_0425ec28 + lVar13);
  param_2 = param_2 & 0xffffffff;
  local_98 = 0xfb24cd929c871747;
  pcStack_90 = "player_camera_shake";
  local_a0 = (long *)0x0;
  auVar16 = FUN_00aee408(&local_98,&local_b8);
  local_d8 = *(undefined8 *)(&DAT_0425ec30 + lVar13);
  puStack_d0 = (&PTR_s_land_shake_level0_amplitude_0425ec38)[uVar10 * 0x1b];
  local_c8 = *(undefined8 *)(&DAT_0425ec40 + lVar13);
  local_c0 = (long *)0x0;
  *param_1 = auVar16;
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
  uVar15 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xfb24cd929c871747;
    }
    else {
      uVar12 = 0xfb24cd929c871747;
      if (uVar10 < 0xfb24cd929c871748) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xfb24cd929c871747 / uVar10;
        }
        uVar12 = 0xfb24cd929c871747 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (1 < uVar11) {
LAB_025b7d8c:
        uVar11 = plVar14[1];
        if (uVar11 == 0xfb24cd929c871747) {
          if (plVar14[2] != -0x4db326d6378e8b9) goto LAB_025b8390;
          plVar14 = (long *)plVar14[3];
joined_r0x025b8628:
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
            uVar15 = FUN_00d7905c(plVar14,&local_d8);
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
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        else {
          if (uVar10 <= uVar11) {
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar4 * uVar10;
          }
          if (uVar11 == uVar12) goto LAB_025b8390;
        }
        goto LAB_025b7de4;
      }
      do {
        if (plVar14[1] == 0xfb24cd929c871747) {
          if (plVar14[2] == -0x4db326d6378e8b9) {
            plVar14 = (long *)plVar14[3];
            goto joined_r0x025b8628;
          }
        }
        else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_025b7de4:
  *(undefined4 *)param_1[1] = uVar15;
  local_f8 = *(undefined8 *)(&DAT_0425ec48 + param_2 * 0xd8);
  puStack_f0 = (&PTR_s_land_shake_level0_period_0425ec50)[param_2 * 0x1b];
  local_e8 = *(undefined8 *)(&DAT_0425ec58 + param_2 * 0xd8);
  local_e0 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xfb24cd929c871747;
    }
    else {
      uVar12 = 0xfb24cd929c871747;
      if (uVar10 < 0xfb24cd929c871748) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xfb24cd929c871747 / uVar10;
        }
        uVar12 = 0xfb24cd929c871747 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
LAB_025b863c:
        if (plVar14[1] == 0xfb24cd929c871747) {
          if (plVar14[2] != -0x4db326d6378e8b9) goto LAB_025b871c;
          plVar14 = (long *)plVar14[3];
joined_r0x025b8660:
          if (plVar14 == (long *)0x0) goto LAB_025b83bc;
          plVar1 = plVar14 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar15 = FUN_00d78f50(plVar14,&local_f8);
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
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        else {
          if ((plVar14[1] & uVar10 - 1) == uVar12) goto LAB_025b871c;
          uVar15 = 0;
        }
        goto LAB_025b7ee0;
      }
      do {
        uVar11 = plVar14[1];
        if (uVar11 == 0xfb24cd929c871747) {
          if (plVar14[2] == -0x4db326d6378e8b9) {
            plVar14 = (long *)plVar14[3];
            goto joined_r0x025b8660;
          }
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
LAB_025b83bc:
  uVar15 = 0;
LAB_025b7ee0:
  *(undefined4 *)(param_1[1] + 4) = uVar15;
  local_118 = *(undefined8 *)(&DAT_0425ec60 + param_2 * 0xd8);
  puStack_110 = (&PTR_s_land_shake_level0_endFrame_0425ec68)[param_2 * 0x1b];
  local_108 = *(undefined8 *)(&DAT_0425ec70 + param_2 * 0xd8);
  local_100 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  if (uVar10 == 0) {
LAB_025b83e4:
    uVar15 = 0;
  }
  else {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xfb24cd929c871747;
    }
    else {
      uVar12 = 0xfb24cd929c871747;
      if (uVar10 < 0xfb24cd929c871748) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xfb24cd929c871747 / uVar10;
        }
        uVar12 = 0xfb24cd929c871747 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_025b83e4;
    if (1 < uVar11) {
LAB_025b7f7c:
      uVar11 = plVar14[1];
      if (uVar11 == 0xfb24cd929c871747) {
        if (plVar14[2] != -0x4db326d6378e8b9) goto LAB_025b83dc;
        plVar14 = (long *)plVar14[3];
joined_r0x025b7f98:
        if (plVar14 == (long *)0x0) goto LAB_025b83e4;
        plVar1 = plVar14 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar15 = FUN_00d78f50(plVar14,&local_118);
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
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
        goto LAB_025b7fdc;
      }
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar4 * uVar10;
      }
      if (uVar11 == uVar12) goto LAB_025b83dc;
      goto LAB_025b83e4;
    }
    do {
      if (plVar14[1] == 0xfb24cd929c871747) {
        if (plVar14[2] == -0x4db326d6378e8b9) {
          plVar14 = (long *)plVar14[3];
          goto joined_r0x025b7f98;
        }
      }
      else if ((plVar14[1] & uVar10 - 1) != uVar12) {
        uVar15 = 0;
        break;
      }
      plVar14 = (long *)*plVar14;
      uVar15 = 0;
    } while (plVar14 != (long *)0x0);
  }
LAB_025b7fdc:
  lVar13 = param_2 * 0xd8;
  local_138 = 0xfb24cd929c871747;
  pcStack_130 = "player_camera_shake";
  local_158 = *(undefined8 *)(&DAT_0425ec78 + lVar13);
  puStack_150 = (&PTR_s_land_shake_level0_isLoop_0425ec80)[param_2 * 0x1b];
  local_148 = *(undefined8 *)(&DAT_0425ec88 + lVar13);
  *(undefined4 *)(param_1[1] + 8) = uVar15;
  local_128 = 0x13;
  local_120 = (long *)0x0;
  local_140 = (long *)0x0;
  bVar8 = FUN_00e9e50c(&local_138,&local_158);
  local_198 = *(undefined8 *)(&DAT_0425ec90 + lVar13);
  puStack_190 = (&PTR_s_land_shake_level0_interpolationT_0425ec98)[param_2 * 0x1b];
  local_188 = *(undefined8 *)(&DAT_0425eca0 + lVar13);
  local_178 = 0xfb24cd929c871747;
  pcStack_170 = "player_camera_shake";
  param_1[1][0xc] = bVar8 & 1;
  local_168 = 0x13;
  local_160 = (long *)0x0;
  local_180 = (long *)0x0;
  uVar15 = FUN_00ea3f80(&local_178,&local_198);
  local_1d8 = *(undefined8 *)(&DAT_0425eca8 + lVar13);
  puStack_1d0 = (&PTR_s_land_shake_level0_randomRange_0425ecb0)[param_2 * 0x1b];
  *(undefined4 *)param_1[2] = uVar15;
  local_1c8 = *(undefined8 *)(&DAT_0425ecb8 + lVar13);
  local_1b8 = 0xfb24cd929c871747;
  pcStack_1b0 = "player_camera_shake";
  local_1a8 = 0x13;
  local_1a0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  auVar16 = FUN_00aee408(&local_1b8,&local_1d8);
  local_1f8 = *(undefined8 *)(&DAT_0425ecc0 + lVar13);
  puStack_1f0 = (&PTR_s_land_shake_level0_cameraPosWeigh_0425ecc8)[param_2 * 0x1b];
  local_1e8 = *(undefined8 *)(&DAT_0425ecd0 + lVar13);
  param_1[3] = auVar16;
  local_1e0 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar15 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xfb24cd929c871747;
    }
    else {
      uVar12 = 0xfb24cd929c871747;
      if (uVar10 < 0xfb24cd929c871748) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xfb24cd929c871747 / uVar10;
        }
        uVar12 = 0xfb24cd929c871747 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (1 < uVar11) {
LAB_025b80fc:
        uVar11 = plVar14[1];
        if (uVar11 == 0xfb24cd929c871747) {
          if (plVar14[2] != -0x4db326d6378e8b9) goto LAB_025b8404;
          plVar14 = (long *)plVar14[3];
joined_r0x025b86c8:
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
            uVar15 = FUN_00d7905c(plVar14,&local_1f8);
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
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        else {
          if (uVar10 <= uVar11) {
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar4 * uVar10;
          }
          if (uVar11 == uVar12) goto LAB_025b8404;
        }
        goto LAB_025b8154;
      }
      do {
        if (plVar14[1] == 0xfb24cd929c871747) {
          if (plVar14[2] == -0x4db326d6378e8b9) {
            plVar14 = (long *)plVar14[3];
            goto joined_r0x025b86c8;
          }
        }
        else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_025b8154:
  *(undefined4 *)param_1[4] = uVar15;
  local_218 = *(undefined8 *)(&DAT_0425ecd8 + param_2 * 0xd8);
  puStack_210 = (&PTR_s_land_shake_level0_blendRate_0425ece0)[param_2 * 0x1b];
  local_208 = *(undefined8 *)(&DAT_0425ece8 + param_2 * 0xd8);
  local_200 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar15 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xfb24cd929c871747;
    }
    else {
      uVar12 = 0xfb24cd929c871747;
      if (uVar10 < 0xfb24cd929c871748) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xfb24cd929c871747 / uVar10;
        }
        uVar12 = 0xfb24cd929c871747 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0xfb24cd929c871747) {
            if (plVar14[2] == -0x4db326d6378e8b9) goto LAB_025b820c;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0xfb24cd929c871747) {
            if (plVar14[2] == -0x4db326d6378e8b9) goto LAB_025b820c;
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
LAB_025b824c:
  *(undefined4 *)(param_1[4] + 4) = uVar15;
  if (local_200 != (long *)0x0) {
    (**(code **)(*local_200 + 0x20))();
  }
  if (local_1e0 != (long *)0x0) {
    (**(code **)(*local_1e0 + 0x20))();
  }
  if (local_1c0 != (long *)0x0) {
    (**(code **)(*local_1c0 + 0x20))();
  }
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 0x20))();
  }
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
LAB_025b8390:
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) goto LAB_025b7de4;
  goto LAB_025b7d8c;
LAB_025b871c:
  plVar14 = (long *)*plVar14;
  uVar15 = 0;
  if (plVar14 == (long *)0x0) goto LAB_025b7ee0;
  goto LAB_025b863c;
LAB_025b83dc:
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) goto LAB_025b83e4;
  goto LAB_025b7f7c;
LAB_025b8404:
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) goto LAB_025b8154;
  goto LAB_025b80fc;
LAB_025b820c:
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
    uVar15 = FUN_00d7905c(plVar14,&local_218);
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
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  goto LAB_025b824c;
}


