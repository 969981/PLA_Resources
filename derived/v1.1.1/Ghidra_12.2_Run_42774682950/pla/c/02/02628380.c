/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02628380; name: FUN_02628380
 */


void FUN_02628380(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  long *local_48;
  
  if (*(long *)(param_1 + 0x648) == 0) {
    return;
  }
  FUN_01aa8974(&local_48);
  if (local_48 == (long *)0x0) {
    return;
  }
  local_c0 = 7;
  local_b8 = (long *)0x0;
  local_f0 = 0x3879a0a2d85f42d3;
  pcStack_e8 = "rim_startRGB";
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_d0 = 0x7ae129403ce05f36;
  pcStack_c8 = "basurao";
  local_e0 = 0xc;
  local_d8 = (long *)0x0;
  FUN_00aee408(&local_d0,&local_f0);
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_026284fc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_026284fc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02628660:
  uStack_68 = CONCAT44(uVar9,extraout_var_02);
  local_70 = CONCAT44(extraout_var,extraout_s0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_02628738;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_02628738;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02628894:
  local_c0 = 7;
  local_b8 = (long *)0x0;
  local_f0 = 0x755458fdd0f2b2bc;
  pcStack_e8 = "rim_startEaseFunc";
  local_60 = CONCAT44(local_60._4_4_,uVar9);
  local_d0 = 0x7ae129403ce05f36;
  pcStack_c8 = "basurao";
  local_e0 = 0x11;
  local_d8 = (long *)0x0;
  uVar9 = FUN_00ea3f80(&local_d0,&local_f0);
  local_60 = CONCAT44(uVar9,(undefined4)local_60);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_0262899c;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_0262899c;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02628af8:
  local_c0 = 7;
  local_b8 = (long *)0x0;
  local_f0 = 0x40bdcc7b304dd44;
  pcStack_e8 = "rim_keepRGB";
  local_58 = CONCAT44(local_58._4_4_,uVar9);
  local_d0 = 0x7ae129403ce05f36;
  pcStack_c8 = "basurao";
  local_e0 = 0xb;
  local_d8 = (long *)0x0;
  FUN_00aee408(&local_d0,&local_f0);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_02628bdc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_02628bdc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02628d40:
  uStack_88 = CONCAT44(uVar9,extraout_var_03);
  local_90 = CONCAT44(extraout_var_00,extraout_s0_00);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_02628e18;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_02628e18;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02628f74:
  local_c0 = 7;
  local_b8 = (long *)0x0;
  local_f0 = 0x34099048fe3c84e5;
  pcStack_e8 = "rim_keepEaseFunc";
  local_80 = CONCAT44(local_80._4_4_,uVar9);
  local_d0 = 0x7ae129403ce05f36;
  pcStack_c8 = "basurao";
  local_e0 = 0x10;
  local_d8 = (long *)0x0;
  uVar9 = FUN_00ea3f80(&local_d0,&local_f0);
  local_80 = CONCAT44(uVar9,(undefined4)local_80);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_0262907c;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_0262907c;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_026291d8:
  local_c0 = 7;
  local_b8 = (long *)0x0;
  local_f0 = 0xb17fd91503bfa8f8;
  pcStack_e8 = "rim_endRGB";
  local_78 = CONCAT44(local_78._4_4_,uVar9);
  local_d0 = 0x7ae129403ce05f36;
  pcStack_c8 = "basurao";
  local_e0 = 10;
  local_d8 = (long *)0x0;
  FUN_00aee408(&local_d0,&local_f0);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_026292bc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_026292bc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02629420:
  uStack_a8 = CONCAT44(uVar9,extraout_var_04);
  local_b0 = CONCAT44(extraout_var_01,extraout_s0_01);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_026294f8;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_026294f8;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02629654:
  local_c0 = 7;
  local_b8 = (long *)0x0;
  local_f0 = 0x1cf228fa3e735ae1;
  pcStack_e8 = "rim_endEaseFunc";
  local_a0 = CONCAT44(local_a0._4_4_,uVar9);
  local_d0 = 0x7ae129403ce05f36;
  pcStack_c8 = "basurao";
  local_e0 = 0xf;
  local_d8 = (long *)0x0;
  uVar9 = FUN_00ea3f80(&local_d0,&local_f0);
  local_a0 = CONCAT44(uVar9,(undefined4)local_a0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x7ae129403ce05f36;
    }
    else {
      uVar13 = 0x7ae129403ce05f36;
      if (uVar11 < 0x7ae129403ce05f37) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x7ae129403ce05f36 / uVar11;
        }
        uVar13 = 0x7ae129403ce05f36 - uVar13 * uVar11;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_0262975c;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7ae129403ce05f36) {
            if (plVar15[2] == 0x7ae129403ce05f36) goto LAB_0262975c;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_026298b8:
  local_98 = CONCAT44(local_98._4_4_,uVar9);
  FUN_00ae6fb8(local_48,&local_70,&local_90,&local_b0);
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
  return;
LAB_026284fc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar15[0x21];
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xdda8cd5d8cc7e8f4;
      }
      else if (uVar11 < 0xdda8cd5d8cc7e8f5) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xdda8cd5d8cc7e8f4 / uVar11;
        }
        uVar13 = 0xdda8cd5d8cc7e8f4 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xdda8cd5d8cc7e8f4;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xdda8cd5d8cc7e8f4) {
              if (plVar16[2] == -0x225732a27338170c) goto LAB_02628644;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xdda8cd5d8cc7e8f4) {
              if (plVar16[2] == -0x225732a27338170c) goto LAB_02628644;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0262864c;
  }
  goto LAB_02628660;
LAB_02628644:
  uVar9 = (undefined4)plVar16[6];
LAB_0262864c:
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
  goto LAB_02628660;
LAB_02628738:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar15[0x21];
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x628f80f3d8f0e319;
      }
      else if (uVar11 < 0x628f80f3d8f0e31a) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x628f80f3d8f0e319 / uVar11;
        }
        uVar13 = 0x628f80f3d8f0e319 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x628f80f3d8f0e319;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x628f80f3d8f0e319) {
              if (plVar16[2] == 0x628f80f3d8f0e319) goto LAB_0262887c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x628f80f3d8f0e319) {
              if (plVar16[2] == 0x628f80f3d8f0e319) goto LAB_0262887c;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02628880;
  }
  goto LAB_02628894;
LAB_0262887c:
  uVar9 = (undefined4)plVar16[6];
LAB_02628880:
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
  goto LAB_02628894;
LAB_0262899c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar15[0x21];
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x4f71b937c43f4ab;
      }
      else if (uVar11 < 0x4f71b937c43f4ac) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x4f71b937c43f4ab / uVar11;
        }
        uVar13 = 0x4f71b937c43f4ab - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x4f71b937c43f4ab;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x4f71b937c43f4ab) {
              if (plVar16[2] == 0x4f71b937c43f4ab) goto LAB_02628ae0;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x4f71b937c43f4ab) {
              if (plVar16[2] == 0x4f71b937c43f4ab) goto LAB_02628ae0;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02628ae4;
  }
  goto LAB_02628af8;
LAB_02628ae0:
  uVar9 = (undefined4)plVar16[6];
LAB_02628ae4:
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
  goto LAB_02628af8;
LAB_02628bdc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar15[0x21];
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x760d211e106f27d3;
      }
      else if (uVar11 < 0x760d211e106f27d4) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x760d211e106f27d3 / uVar11;
        }
        uVar13 = 0x760d211e106f27d3 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x760d211e106f27d3;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x760d211e106f27d3) {
              if (plVar16[2] == 0x760d211e106f27d3) goto LAB_02628d24;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x760d211e106f27d3) {
              if (plVar16[2] == 0x760d211e106f27d3) goto LAB_02628d24;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02628d2c;
  }
  goto LAB_02628d40;
LAB_02628d24:
  uVar9 = (undefined4)plVar16[6];
LAB_02628d2c:
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
  goto LAB_02628d40;
LAB_02628e18:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar15[0x21];
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x15630d87d93ec0fe;
      }
      else if (uVar11 < 0x15630d87d93ec0ff) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x15630d87d93ec0fe / uVar11;
        }
        uVar13 = 0x15630d87d93ec0fe - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x15630d87d93ec0fe;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x15630d87d93ec0fe) {
              if (plVar16[2] == 0x15630d87d93ec0fe) goto LAB_02628f5c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x15630d87d93ec0fe) {
              if (plVar16[2] == 0x15630d87d93ec0fe) goto LAB_02628f5c;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02628f60;
  }
  goto LAB_02628f74;
LAB_02628f5c:
  uVar9 = (undefined4)plVar16[6];
LAB_02628f60:
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
  goto LAB_02628f74;
LAB_0262907c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar15[0x21];
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x1cb1dd76cad9a26;
      }
      else if (uVar11 < 0x1cb1dd76cad9a27) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x1cb1dd76cad9a26 / uVar11;
        }
        uVar13 = 0x1cb1dd76cad9a26 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x1cb1dd76cad9a26;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x1cb1dd76cad9a26) {
              if (plVar16[2] == 0x1cb1dd76cad9a26) goto LAB_026291c0;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x1cb1dd76cad9a26) {
              if (plVar16[2] == 0x1cb1dd76cad9a26) goto LAB_026291c0;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_026291c4;
  }
  goto LAB_026291d8;
LAB_026291c0:
  uVar9 = (undefined4)plVar16[6];
LAB_026291c4:
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
  goto LAB_026291d8;
LAB_026292bc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar15[0x21];
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xccea080cc5968847;
      }
      else if (uVar11 < 0xccea080cc5968848) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xccea080cc5968847 / uVar11;
        }
        uVar13 = 0xccea080cc5968847 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xccea080cc5968847;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xccea080cc5968847) {
              if (plVar16[2] == -0x3315f7f33a6977b9) goto LAB_02629404;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xccea080cc5968847) {
              if (plVar16[2] == -0x3315f7f33a6977b9) goto LAB_02629404;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_0262940c;
  }
  goto LAB_02629420;
LAB_02629404:
  uVar9 = (undefined4)plVar16[6];
LAB_0262940c:
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
  goto LAB_02629420;
LAB_026294f8:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = plVar15[0x21];
    uVar9 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xe6d053dcd9548122;
      }
      else if (uVar11 < 0xe6d053dcd9548123) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xe6d053dcd9548122 / uVar11;
        }
        uVar13 = 0xe6d053dcd9548122 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xe6d053dcd9548122;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xe6d053dcd9548122) {
              if (plVar16[2] == -0x192fac2326ab7ede) goto LAB_0262963c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xe6d053dcd9548122) {
              if (plVar16[2] == -0x192fac2326ab7ede) goto LAB_0262963c;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar5 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02629640;
  }
  goto LAB_02629654;
LAB_0262963c:
  uVar9 = (undefined4)plVar16[6];
LAB_02629640:
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
  goto LAB_02629654;
LAB_0262975c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_026298b8;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar11 = plVar15[0x21];
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x99f9d78f4ef69f82;
    }
    else if (uVar11 < 0x99f9d78f4ef69f83) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0x99f9d78f4ef69f82 / uVar11;
      }
      uVar13 = 0x99f9d78f4ef69f82 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0x99f9d78f4ef69f82;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0x99f9d78f4ef69f82) {
            if (plVar16[2] == -0x66062870b109607e) goto LAB_026298a0;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0x99f9d78f4ef69f82) {
            if (plVar16[2] == -0x66062870b109607e) goto LAB_026298a0;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_026298a4;
LAB_026298a0:
  uVar9 = (undefined4)plVar16[6];
LAB_026298a4:
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
  goto LAB_026298b8;
}


