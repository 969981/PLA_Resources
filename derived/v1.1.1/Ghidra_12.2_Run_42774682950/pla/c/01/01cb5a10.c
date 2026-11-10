/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cb5a10; name: FUN_01cb5a10
 */


void FUN_01cb5a10(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  if (param_1 == 0) {
    return;
  }
  local_88 = 0x70dec33cff1e47e3;
  pcStack_80 = "anm_control_moveFrontName";
  local_78 = 0x19;
  local_70 = (long *)0x0;
  FUN_00bef9ac(&local_68,param_2,&local_88);
  plVar13 = local_68;
  if (local_68 == (long *)0x0) {
    lVar15 = *(long *)PTR_DAT_04379c88;
LAB_01cb7b1c:
    lVar16 = *(long *)PTR_PTR_04379d00;
    if (local_68 != (long *)0x0) goto LAB_01cb5a94;
LAB_01cb7b2c:
    *(long *)(param_1 + 0x30) = lVar15;
    *(long *)(param_1 + 0x38) = lVar16;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar15 = local_68[0xb];
    if (local_68 == (long *)0x0) goto LAB_01cb7b1c;
    lVar16 = local_68[0xc];
    if (local_68 == (long *)0x0) goto LAB_01cb7b2c;
LAB_01cb5a94:
    lVar17 = local_68[0xd];
    (**(code **)(*local_68 + 0x18))(local_68);
    *(long *)(param_1 + 0x30) = lVar15;
    *(long *)(param_1 + 0x38) = lVar16;
    *(long *)(param_1 + 0x40) = lVar17;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar15 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb5b9c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb5b9c;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb5cf8:
  *(undefined4 *)(param_1 + 0x1c) = uVar18;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb5d98;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb5d98;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb5ef4:
  *(undefined4 *)(param_1 + 0x10) = uVar18;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb5f94;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb5f94;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb60f0:
  *(undefined4 *)(param_1 + 0x14) = uVar18;
  local_88 = 0x7df7d0813147faee;
  pcStack_80 = "anm_control_moveStopName";
  local_78 = 0x18;
  local_70 = (long *)0x0;
  FUN_00bef9ac(&local_68,param_2,&local_88);
  plVar13 = local_68;
  if (local_68 == (long *)0x0) {
    lVar15 = *(long *)PTR_DAT_04379c88;
LAB_01cb7b50:
    lVar16 = *(long *)PTR_PTR_04379d00;
    if (local_68 != (long *)0x0) goto LAB_01cb6148;
LAB_01cb7b60:
    *(long *)(param_1 + 0x48) = lVar15;
    *(long *)(param_1 + 0x50) = lVar16;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar15 = local_68[0xb];
    if (local_68 == (long *)0x0) goto LAB_01cb7b50;
    lVar16 = local_68[0xc];
    if (local_68 == (long *)0x0) goto LAB_01cb7b60;
LAB_01cb6148:
    lVar17 = local_68[0xd];
    (**(code **)(*local_68 + 0x18))(local_68);
    *(long *)(param_1 + 0x48) = lVar15;
    *(long *)(param_1 + 0x50) = lVar16;
    *(long *)(param_1 + 0x58) = lVar17;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = 0x497675b57c10e6db;
  pcStack_80 = "anm_control_moveLeftName";
  local_78 = 0x18;
  local_70 = (long *)0x0;
  FUN_00bef9ac(&local_68,param_2,&local_88);
  plVar13 = local_68;
  if (local_68 == (long *)0x0) {
    lVar15 = *(long *)PTR_DAT_04379c88;
LAB_01cb7b84:
    lVar16 = *(long *)PTR_PTR_04379d00;
    if (local_68 != (long *)0x0) goto LAB_01cb61f0;
LAB_01cb7b94:
    *(long *)(param_1 + 0x168) = lVar15;
    *(long *)(param_1 + 0x170) = lVar16;
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  else {
    lVar15 = local_68[0xb];
    if (local_68 == (long *)0x0) goto LAB_01cb7b84;
    lVar16 = local_68[0xc];
    if (local_68 == (long *)0x0) goto LAB_01cb7b94;
LAB_01cb61f0:
    lVar17 = local_68[0xd];
    (**(code **)(*local_68 + 0x18))(local_68);
    *(long *)(param_1 + 0x168) = lVar15;
    *(long *)(param_1 + 0x170) = lVar16;
    *(long *)(param_1 + 0x178) = lVar17;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb62e0;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb62e0;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb643c:
  *(undefined4 *)(param_1 + 0x154) = uVar18;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb64dc;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb64dc;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb6638:
  *(undefined4 *)(param_1 + 0x148) = uVar18;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb66d8;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb66d8;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb6834:
  *(undefined4 *)(param_1 + 0x14c) = uVar18;
  local_88 = 0x2c490c7a5f2074cc;
  pcStack_80 = "anm_control_slopeName";
  local_78 = 0x15;
  local_70 = (long *)0x0;
  FUN_00bef9ac(&local_68,param_2,&local_88);
  plVar13 = local_68;
  if (local_68 == (long *)0x0) {
    lVar15 = *(long *)PTR_DAT_04379c88;
LAB_01cb7bb8:
    lVar16 = *(long *)PTR_PTR_04379d00;
    if (local_68 != (long *)0x0) goto LAB_01cb688c;
LAB_01cb7bc8:
    *(long *)(param_1 + 0x228) = lVar15;
    *(long *)(param_1 + 0x230) = lVar16;
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  else {
    lVar15 = local_68[0xb];
    if (local_68 == (long *)0x0) goto LAB_01cb7bb8;
    lVar16 = local_68[0xc];
    if (local_68 == (long *)0x0) goto LAB_01cb7bc8;
LAB_01cb688c:
    lVar17 = local_68[0xd];
    (**(code **)(*local_68 + 0x18))(local_68);
    *(long *)(param_1 + 0x228) = lVar15;
    *(long *)(param_1 + 0x230) = lVar16;
    *(long *)(param_1 + 0x238) = lVar17;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb6980;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb6980;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb6adc:
  *(undefined4 *)(param_1 + 0x214) = uVar18;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb6b7c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb6b7c;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb6cd8:
  *(undefined4 *)(param_1 + 0x208) = uVar18;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb6d78;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb6d78;
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
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01cb6ed4:
  *(undefined4 *)(param_1 + 0x20c) = uVar18;
  local_88 = 0x2d47a3cff3c8da55;
  pcStack_80 = "anm_control_aerialName";
  local_78 = 0x16;
  local_70 = (long *)0x0;
  FUN_00bef9ac(&local_68,param_2,&local_88);
  plVar13 = local_68;
  if (local_68 == (long *)0x0) {
    lVar15 = *(long *)PTR_DAT_04379c88;
LAB_01cb7bf0:
    lVar16 = *(long *)PTR_PTR_04379d00;
    if (local_68 != (long *)0x0) goto LAB_01cb6f2c;
LAB_01cb7c00:
    *(long *)(param_1 + 0x260) = lVar15;
    *(long *)(param_1 + 0x268) = lVar16;
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  else {
    lVar15 = local_68[0xb];
    if (local_68 == (long *)0x0) goto LAB_01cb7bf0;
    lVar16 = local_68[0xc];
    if (local_68 == (long *)0x0) goto LAB_01cb7c00;
LAB_01cb6f2c:
    lVar17 = local_68[0xd];
    (**(code **)(*local_68 + 0x18))(local_68);
    *(long *)(param_1 + 0x260) = lVar15;
    *(long *)(param_1 + 0x268) = lVar16;
    *(long *)(param_1 + 0x270) = lVar17;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  if (uVar10 == 0) {
LAB_01cb7118:
    uVar18 = 0;
  }
  else {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_01cb7118;
    if (1 < uVar11) {
      do {
        uVar11 = plVar13[1];
        if (uVar11 == uVar9) {
          if (plVar13[2] == uVar9) goto LAB_01cb701c;
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
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
      goto LAB_01cb7118;
    }
    do {
      if (plVar13[1] == uVar9) {
        if (plVar13[2] == uVar9) goto LAB_01cb701c;
      }
      else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_01cb7118;
      plVar13 = (long *)*plVar13;
      uVar18 = 0;
    } while (plVar13 != (long *)0x0);
  }
LAB_01cb7180:
  *(undefined4 *)(param_1 + 0x330) = uVar18;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  uVar10 = *(ulong *)(lVar15 + 0x60);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar9;
    }
    else if (uVar9 < uVar10) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar9 / uVar10;
      }
      uVar12 = uVar9 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01cb721c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_01cb7318;
          plVar13 = (long *)*plVar13;
          uVar18 = 0;
        } while (plVar13 != (long *)0x0);
        goto LAB_01cb7380;
      }
      do {
        uVar11 = plVar13[1];
        if (uVar11 == uVar9) {
          if (plVar13[2] == uVar9) goto LAB_01cb721c;
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
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_01cb7318:
  uVar18 = 0;
LAB_01cb7380:
  *(undefined4 *)(param_1 + 0x334) = uVar18;
  local_88 = 0x5fe8bbaf01ee7442;
  pcStack_80 = "anm_control_aerialLandingTypeName";
  local_78 = 0x21;
  local_70 = (long *)0x0;
  FUN_00bef9ac(&local_68,param_2,&local_88);
  plVar1 = local_68;
  plVar13 = (long *)PTR_DAT_04379c88;
  if (local_68 != (long *)0x0) {
    plVar13 = local_68 + 0xb;
  }
  lVar15 = *plVar13;
  plVar13 = (long *)PTR_PTR_04379d00;
  if (local_68 != (long *)0x0) {
    plVar13 = local_68 + 0xc;
  }
  lVar16 = *plVar13;
  if (local_68 == (long *)0x0) {
    *(long *)(param_1 + 0x2c8) = lVar15;
    *(long *)(param_1 + 0x2d0) = lVar16;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  else {
    lVar17 = local_68[0xd];
    (**(code **)(*local_68 + 0x18))(local_68);
    *(long *)(param_1 + 0x2c8) = lVar15;
    *(long *)(param_1 + 0x2d0) = lVar16;
    *(long *)(param_1 + 0x2d8) = lVar17;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
LAB_01cb5b9c:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0xe321d815fd61304c;
      }
      else if (uVar10 < 0xe321d815fd61304d) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xe321d815fd61304c / uVar10;
        }
        uVar9 = 0xe321d815fd61304c - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xe321d815fd61304c;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0xe321d815fd61304c) {
              if (plVar14[2] == -0x1cde27ea029ecfb4) goto LAB_01cb5ce0;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0xe321d815fd61304c) {
              if (plVar14[2] == -0x1cde27ea029ecfb4) goto LAB_01cb5ce0;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb5ce4;
  }
  goto LAB_01cb5cf8;
LAB_01cb5ce0:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb5ce4:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb5cf8;
LAB_01cb5d98:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x6aba301587614c98;
      }
      else if (uVar10 < 0x6aba301587614c99) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x6aba301587614c98 / uVar10;
        }
        uVar9 = 0x6aba301587614c98 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x6aba301587614c98;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x6aba301587614c98) {
              if (plVar14[2] == 0x6aba301587614c98) goto LAB_01cb5edc;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x6aba301587614c98) {
              if (plVar14[2] == 0x6aba301587614c98) goto LAB_01cb5edc;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb5ee0;
  }
  goto LAB_01cb5ef4;
LAB_01cb5edc:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb5ee0:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb5ef4;
LAB_01cb5f94:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x6ad54615877839b2;
      }
      else if (uVar10 < 0x6ad54615877839b3) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x6ad54615877839b2 / uVar10;
        }
        uVar9 = 0x6ad54615877839b2 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x6ad54615877839b2;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x6ad54615877839b2) {
              if (plVar14[2] == 0x6ad54615877839b2) goto LAB_01cb60d8;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x6ad54615877839b2) {
              if (plVar14[2] == 0x6ad54615877839b2) goto LAB_01cb60d8;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb60dc;
  }
  goto LAB_01cb60f0;
LAB_01cb60d8:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb60dc:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb60f0;
LAB_01cb62e0:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x309910da310cea4;
      }
      else if (uVar10 < 0x309910da310cea5) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x309910da310cea4 / uVar10;
        }
        uVar9 = 0x309910da310cea4 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x309910da310cea4;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x309910da310cea4) {
              if (plVar14[2] == 0x309910da310cea4) goto LAB_01cb6424;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x309910da310cea4) {
              if (plVar14[2] == 0x309910da310cea4) goto LAB_01cb6424;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb6428;
  }
  goto LAB_01cb643c;
LAB_01cb6424:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb6428:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb643c;
LAB_01cb64dc:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x255c835a320034e0;
      }
      else if (uVar10 < 0x255c835a320034e1) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x255c835a320034e0 / uVar10;
        }
        uVar9 = 0x255c835a320034e0 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x255c835a320034e0;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x255c835a320034e0) {
              if (plVar14[2] == 0x255c835a320034e0) goto LAB_01cb6620;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x255c835a320034e0) {
              if (plVar14[2] == 0x255c835a320034e0) goto LAB_01cb6620;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb6624;
  }
  goto LAB_01cb6638;
LAB_01cb6620:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb6624:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb6638;
LAB_01cb66d8:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x2541995a31e9928a;
      }
      else if (uVar10 < 0x2541995a31e9928b) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x2541995a31e9928a / uVar10;
        }
        uVar9 = 0x2541995a31e9928a - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x2541995a31e9928a;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x2541995a31e9928a) {
              if (plVar14[2] == 0x2541995a31e9928a) goto LAB_01cb681c;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x2541995a31e9928a) {
              if (plVar14[2] == 0x2541995a31e9928a) goto LAB_01cb681c;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb6820;
  }
  goto LAB_01cb6834;
LAB_01cb681c:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb6820:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb6834;
LAB_01cb6980:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x1be1651d230c6f1f;
      }
      else if (uVar10 < 0x1be1651d230c6f20) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x1be1651d230c6f1f / uVar10;
        }
        uVar9 = 0x1be1651d230c6f1f - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x1be1651d230c6f1f;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x1be1651d230c6f1f) {
              if (plVar14[2] == 0x1be1651d230c6f1f) goto LAB_01cb6ac4;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x1be1651d230c6f1f) {
              if (plVar14[2] == 0x1be1651d230c6f1f) goto LAB_01cb6ac4;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb6ac8;
  }
  goto LAB_01cb6adc;
LAB_01cb6ac4:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb6ac8:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb6adc;
LAB_01cb6b7c:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x84adc24991bc82ef;
      }
      else if (uVar10 < 0x84adc24991bc82f0) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x84adc24991bc82ef / uVar10;
        }
        uVar9 = 0x84adc24991bc82ef - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x84adc24991bc82ef;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x84adc24991bc82ef) {
              if (plVar14[2] == -0x7b523db66e437d11) goto LAB_01cb6cc0;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x84adc24991bc82ef) {
              if (plVar14[2] == -0x7b523db66e437d11) goto LAB_01cb6cc0;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb6cc4;
  }
  goto LAB_01cb6cd8;
LAB_01cb6cc0:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb6cc4:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb6cd8;
LAB_01cb6d78:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0x8492b04991a59ca1;
      }
      else if (uVar10 < 0x8492b04991a59ca2) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0x8492b04991a59ca1 / uVar10;
        }
        uVar9 = 0x8492b04991a59ca1 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0x8492b04991a59ca1;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar9 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0x8492b04991a59ca1) {
              if (plVar14[2] == -0x7b6d4fb66e5a635f) goto LAB_01cb6ebc;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0x8492b04991a59ca1) {
              if (plVar14[2] == -0x7b6d4fb66e5a635f) goto LAB_01cb6ebc;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb6ec0;
  }
  goto LAB_01cb6ed4;
LAB_01cb6ebc:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb6ec0:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb6ed4;
LAB_01cb701c:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x14];
    if (uVar10 == 0) {
      uVar18 = 0;
    }
    else {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0xfc0a8f2ff535642;
      }
      else if (uVar10 < 0xfc0a8f2ff535643) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xfc0a8f2ff535642 / uVar10;
        }
        uVar9 = 0xfc0a8f2ff535642 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xfc0a8f2ff535642;
      }
      plVar14 = *(long **)(plVar13[0x13] + uVar9 * 8);
      if (plVar14 == (long *)0x0) {
        uVar18 = 0;
      }
      else {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          uVar18 = 0;
        }
        else if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0xfc0a8f2ff535642) {
              if (plVar14[2] == 0xfc0a8f2ff535642) goto LAB_01cb7168;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) {
              uVar18 = 0;
              break;
            }
            plVar14 = (long *)*plVar14;
            uVar18 = 0;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0xfc0a8f2ff535642) {
              if (plVar14[2] == 0xfc0a8f2ff535642) goto LAB_01cb7168;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) {
                uVar18 = 0;
                goto LAB_01cb716c;
              }
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          uVar18 = 0;
        }
      }
    }
    goto LAB_01cb716c;
  }
  goto LAB_01cb7118;
LAB_01cb7168:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb716c:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb7180;
LAB_01cb721c:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar13[0x14];
    if (uVar10 == 0) {
      uVar18 = 0;
    }
    else {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar9 = uVar10 - 1 & 0xfa592f2ff3c6928;
      }
      else if (uVar10 < 0xfa592f2ff3c6929) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = 0xfa592f2ff3c6928 / uVar10;
        }
        uVar9 = 0xfa592f2ff3c6928 - uVar9 * uVar10;
      }
      else {
        uVar9 = 0xfa592f2ff3c6928;
      }
      plVar14 = *(long **)(plVar13[0x13] + uVar9 * 8);
      if (plVar14 == (long *)0x0) {
        uVar18 = 0;
      }
      else {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          uVar18 = 0;
        }
        else if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0xfa592f2ff3c6928) {
              if (plVar14[2] == 0xfa592f2ff3c6928) goto LAB_01cb7368;
            }
            else if ((plVar14[1] & uVar10 - 1) != uVar9) {
              uVar18 = 0;
              break;
            }
            plVar14 = (long *)*plVar14;
            uVar18 = 0;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0xfa592f2ff3c6928) {
              if (plVar14[2] == 0xfa592f2ff3c6928) goto LAB_01cb7368;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar12 * uVar10;
              }
              if (uVar11 != uVar9) {
                uVar18 = 0;
                goto LAB_01cb736c;
              }
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          uVar18 = 0;
        }
      }
    }
    goto LAB_01cb736c;
  }
  goto LAB_01cb7318;
LAB_01cb7368:
  uVar18 = (undefined4)plVar14[6];
LAB_01cb736c:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01cb7380;
}


