/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cb17d0; name: FUN_01cb17d0
 */


void FUN_01cb17d0(long *param_1,ulong *param_2)

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
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (*param_1 == 0) {
    return;
  }
  local_80 = 0x9068d2f87be4350d;
  pcStack_78 = "control_autoMoveAnimation";
  local_70 = 0x19;
  local_68 = (long *)0x0;
  bVar8 = FUN_00e9e50c(param_2,&local_80);
  *(byte *)(*param_1 + 0x98) = bVar8 & 1;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = 0x8f1e19684a4282e2;
  pcStack_78 = "control_autoJumpAnimation";
  local_70 = 0x19;
  local_68 = (long *)0x0;
  bVar8 = FUN_00e9e50c(param_2,&local_80);
  *(byte *)(*param_1 + 0x99) = bVar8 & 1;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = 0xbd784d8c032374b2;
  pcStack_78 = "control_autoStartTurnMove";
  local_70 = 0x19;
  local_68 = (long *)0x0;
  bVar8 = FUN_00e9e50c(param_2,&local_80);
  *(byte *)(*param_1 + 0xa0) = bVar8 & 1;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb19a4;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb19a4;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb1b00:
  *(undefined4 *)(*param_1 + 0xa4) = uVar17;
  local_80 = 0xc4a37df7ba8cf4da;
  pcStack_78 = "control_autoForwardDirection";
  local_70 = 0x1c;
  local_68 = (long *)0x0;
  bVar8 = FUN_00e9e50c(param_2,&local_80);
  *(byte *)(*param_1 + 0x9a) = bVar8 & 1;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb1bf4;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb1bf4;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb1d50:
  *(undefined4 *)(*param_1 + 0x9c) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb1df4;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb1df4;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb1f50:
  bVar8 = *puVar5;
joined_r0x01cb3fd0:
  if (((bVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar18 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb1fec;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb1fec;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb2148:
  bVar8 = *puVar5;
joined_r0x01cb4020:
  if (((bVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar19 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb21e4;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb21e4;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb2340:
  bVar8 = *puVar5;
joined_r0x01cb4070:
  if (((bVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar20 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb23dc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb23dc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb2538:
  lVar14 = *param_1;
  *(undefined4 *)(lVar14 + 0x6c) = uVar17;
  *(undefined4 *)(lVar14 + 0x70) = uVar18;
  *(undefined4 *)(lVar14 + 0x74) = uVar19;
  *(undefined4 *)(lVar14 + 0x78) = uVar20;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb25e0;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb25e0;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb273c:
  bVar8 = *puVar5;
joined_r0x01cb40d0:
  if (((bVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar18 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb27d8;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb27d8;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb2934:
  bVar8 = *puVar5;
joined_r0x01cb4120:
  if (((bVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar19 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb29d0;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb29d0;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb2b2c:
  bVar8 = *puVar5;
joined_r0x01cb4170:
  if (((bVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar20 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb2bc8;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb2bc8;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb2d24:
  lVar14 = *param_1;
  *(undefined4 *)(lVar14 + 0xb0) = uVar17;
  *(undefined4 *)(lVar14 + 0xb4) = uVar18;
  *(undefined4 *)(lVar14 + 0xb8) = uVar19;
  *(undefined4 *)(lVar14 + 0xbc) = uVar20;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb2dcc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb2dcc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb2f28:
  *(undefined4 *)(*param_1 + 0xc0) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb2fcc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb2fcc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb3128:
  *(undefined4 *)(*param_1 + 0x80) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb31cc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb31cc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb3328:
  *(undefined4 *)(*param_1 + 0x88) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb33cc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb33cc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb3528:
  *(undefined4 *)(*param_1 + 0x84) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb35cc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb35cc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb3728:
  *(undefined4 *)(*param_1 + 0x8c) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb37cc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb37cc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb3928:
  *(undefined4 *)(*param_1 + 0xc4) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb39cc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb39cc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb3b28:
  *(undefined4 *)(*param_1 + 200) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb3bcc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb3bcc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb3d28:
  *(undefined4 *)(*param_1 + 0x90) = uVar17;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar6;
  *(long *)puVar7 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb3dcc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_01cb3dcc;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01cb3f28:
  *(undefined4 *)(*param_1 + 0x94) = uVar17;
  local_80 = 0x2544e839116fc78c;
  pcStack_78 = "control_isDirtMoveEnable";
  local_70 = 0x18;
  local_68 = (long *)0x0;
  bVar8 = FUN_00e9e50c(param_2,&local_80);
  *(byte *)(*param_1 + 0xa8) = bVar8 & 1;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
LAB_01cb19a4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x567cb96f2089ad3d;
      }
      else if (uVar11 < 0x567cb96f2089ad3e) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x567cb96f2089ad3d / uVar11;
        }
        uVar10 = 0x567cb96f2089ad3d - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x567cb96f2089ad3d;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x567cb96f2089ad3d) {
              if (plVar16[2] == 0x567cb96f2089ad3d) goto LAB_01cb1ae8;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x567cb96f2089ad3d) {
              if (plVar16[2] == 0x567cb96f2089ad3d) goto LAB_01cb1ae8;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb1aec;
  }
  goto LAB_01cb1b00;
LAB_01cb1ae8:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb1aec:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb1b00;
LAB_01cb1bf4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x9a2dd9a787734f18;
      }
      else if (uVar11 < 0x9a2dd9a787734f19) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x9a2dd9a787734f18 / uVar11;
        }
        uVar10 = 0x9a2dd9a787734f18 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x9a2dd9a787734f18;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x9a2dd9a787734f18) {
              if (plVar16[2] == -0x65d22658788cb0e8) goto LAB_01cb1d38;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x9a2dd9a787734f18) {
              if (plVar16[2] == -0x65d22658788cb0e8) goto LAB_01cb1d38;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb1d3c;
  }
  goto LAB_01cb1d50;
LAB_01cb1d38:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb1d3c:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb1d50;
LAB_01cb1df4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0xd0d3fcb58b65b3f2;
      }
      else if (uVar11 < 0xd0d3fcb58b65b3f3) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xd0d3fcb58b65b3f2 / uVar11;
        }
        uVar10 = 0xd0d3fcb58b65b3f2 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xd0d3fcb58b65b3f2;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xd0d3fcb58b65b3f2) {
              if (plVar16[2] == -0x2f2c034a749a4c0e) goto LAB_01cb1f38;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xd0d3fcb58b65b3f2) {
              if (plVar16[2] == -0x2f2c034a749a4c0e) goto LAB_01cb1f38;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb1f3c;
  }
  goto LAB_01cb1f50;
LAB_01cb1f38:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb1f3c:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 != 0) goto LAB_01cb1f50;
  (**(code **)(*plVar15 + 0x10))();
  bVar8 = *puVar5;
  goto joined_r0x01cb3fd0;
LAB_01cb1fec:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar18 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x305f66d36bbf41a3;
      }
      else if (uVar11 < 0x305f66d36bbf41a4) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x305f66d36bbf41a3 / uVar11;
        }
        uVar10 = 0x305f66d36bbf41a3 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x305f66d36bbf41a3;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x305f66d36bbf41a3) {
              if (plVar16[2] == 0x305f66d36bbf41a3) goto LAB_01cb2130;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x305f66d36bbf41a3) {
              if (plVar16[2] == 0x305f66d36bbf41a3) goto LAB_01cb2130;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb2134;
  }
  goto LAB_01cb2148;
LAB_01cb2130:
  uVar18 = (undefined4)plVar16[6];
LAB_01cb2134:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 != 0) goto LAB_01cb2148;
  (**(code **)(*plVar15 + 0x10))();
  bVar8 = *puVar5;
  goto joined_r0x01cb4020;
LAB_01cb21e4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar19 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0xf1800e577d7176ab;
      }
      else if (uVar11 < 0xf1800e577d7176ac) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xf1800e577d7176ab / uVar11;
        }
        uVar10 = 0xf1800e577d7176ab - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xf1800e577d7176ab;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xf1800e577d7176ab) {
              if (plVar16[2] == -0xe7ff1a8828e8955) goto LAB_01cb2328;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xf1800e577d7176ab) {
              if (plVar16[2] == -0xe7ff1a8828e8955) goto LAB_01cb2328;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb232c;
  }
  goto LAB_01cb2340;
LAB_01cb2328:
  uVar19 = (undefined4)plVar16[6];
LAB_01cb232c:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 != 0) goto LAB_01cb2340;
  (**(code **)(*plVar15 + 0x10))();
  bVar8 = *puVar5;
  goto joined_r0x01cb4070;
LAB_01cb23dc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar20 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0xe1a69756681b5a0a;
      }
      else if (uVar11 < 0xe1a69756681b5a0b) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xe1a69756681b5a0a / uVar11;
        }
        uVar10 = 0xe1a69756681b5a0a - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xe1a69756681b5a0a;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xe1a69756681b5a0a) {
              if (plVar16[2] == -0x1e5968a997e4a5f6) goto LAB_01cb2520;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xe1a69756681b5a0a) {
              if (plVar16[2] == -0x1e5968a997e4a5f6) goto LAB_01cb2520;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb2524;
  }
  goto LAB_01cb2538;
LAB_01cb2520:
  uVar20 = (undefined4)plVar16[6];
LAB_01cb2524:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb2538;
LAB_01cb25e0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x12589a951e89f1cb;
      }
      else if (uVar11 < 0x12589a951e89f1cc) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x12589a951e89f1cb / uVar11;
        }
        uVar10 = 0x12589a951e89f1cb - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x12589a951e89f1cb;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x12589a951e89f1cb) {
              if (plVar16[2] == 0x12589a951e89f1cb) goto LAB_01cb2724;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x12589a951e89f1cb) {
              if (plVar16[2] == 0x12589a951e89f1cb) goto LAB_01cb2724;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb2728;
  }
  goto LAB_01cb273c;
LAB_01cb2724:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb2728:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 != 0) goto LAB_01cb273c;
  (**(code **)(*plVar15 + 0x10))();
  bVar8 = *puVar5;
  goto joined_r0x01cb40d0;
LAB_01cb27d8:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar18 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x597b90b92cbfdd0e;
      }
      else if (uVar11 < 0x597b90b92cbfdd0f) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x597b90b92cbfdd0e / uVar11;
        }
        uVar10 = 0x597b90b92cbfdd0e - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x597b90b92cbfdd0e;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x597b90b92cbfdd0e) {
              if (plVar16[2] == 0x597b90b92cbfdd0e) goto LAB_01cb291c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x597b90b92cbfdd0e) {
              if (plVar16[2] == 0x597b90b92cbfdd0e) goto LAB_01cb291c;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb2920;
  }
  goto LAB_01cb2934;
LAB_01cb291c:
  uVar18 = (undefined4)plVar16[6];
LAB_01cb2920:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 != 0) goto LAB_01cb2934;
  (**(code **)(*plVar15 + 0x10))();
  bVar8 = *puVar5;
  goto joined_r0x01cb4120;
LAB_01cb29d0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar19 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x6bdf79411ac7f624;
      }
      else if (uVar11 < 0x6bdf79411ac7f625) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x6bdf79411ac7f624 / uVar11;
        }
        uVar10 = 0x6bdf79411ac7f624 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x6bdf79411ac7f624;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x6bdf79411ac7f624) {
              if (plVar16[2] == 0x6bdf79411ac7f624) goto LAB_01cb2b14;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x6bdf79411ac7f624) {
              if (plVar16[2] == 0x6bdf79411ac7f624) goto LAB_01cb2b14;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb2b18;
  }
  goto LAB_01cb2b2c;
LAB_01cb2b14:
  uVar19 = (undefined4)plVar16[6];
LAB_01cb2b18:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 != 0) goto LAB_01cb2b2c;
  (**(code **)(*plVar15 + 0x10))();
  bVar8 = *puVar5;
  goto joined_r0x01cb4170;
LAB_01cb2bc8:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar20 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x28a0c74cc2607edf;
      }
      else if (uVar11 < 0x28a0c74cc2607ee0) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x28a0c74cc2607edf / uVar11;
        }
        uVar10 = 0x28a0c74cc2607edf - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x28a0c74cc2607edf;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x28a0c74cc2607edf) {
              if (plVar16[2] == 0x28a0c74cc2607edf) goto LAB_01cb2d0c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x28a0c74cc2607edf) {
              if (plVar16[2] == 0x28a0c74cc2607edf) goto LAB_01cb2d0c;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb2d10;
  }
  goto LAB_01cb2d24;
LAB_01cb2d0c:
  uVar20 = (undefined4)plVar16[6];
LAB_01cb2d10:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb2d24;
LAB_01cb2dcc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x6f94b3abc963a50a;
      }
      else if (uVar11 < 0x6f94b3abc963a50b) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x6f94b3abc963a50a / uVar11;
        }
        uVar10 = 0x6f94b3abc963a50a - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x6f94b3abc963a50a;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x6f94b3abc963a50a) {
              if (plVar16[2] == 0x6f94b3abc963a50a) goto LAB_01cb2f10;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x6f94b3abc963a50a) {
              if (plVar16[2] == 0x6f94b3abc963a50a) goto LAB_01cb2f10;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb2f14;
  }
  goto LAB_01cb2f28;
LAB_01cb2f10:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb2f14:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb2f28;
LAB_01cb2fcc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x4ff9396a74b8ecd5;
      }
      else if (uVar11 < 0x4ff9396a74b8ecd6) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x4ff9396a74b8ecd5 / uVar11;
        }
        uVar10 = 0x4ff9396a74b8ecd5 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x4ff9396a74b8ecd5;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x4ff9396a74b8ecd5) {
              if (plVar16[2] == 0x4ff9396a74b8ecd5) goto LAB_01cb3110;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x4ff9396a74b8ecd5) {
              if (plVar16[2] == 0x4ff9396a74b8ecd5) goto LAB_01cb3110;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb3114;
  }
  goto LAB_01cb3128;
LAB_01cb3110:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb3114:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb3128;
LAB_01cb31cc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x52710d588c37d444;
      }
      else if (uVar11 < 0x52710d588c37d445) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x52710d588c37d444 / uVar11;
        }
        uVar10 = 0x52710d588c37d444 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x52710d588c37d444;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x52710d588c37d444) {
              if (plVar16[2] == 0x52710d588c37d444) goto LAB_01cb3310;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x52710d588c37d444) {
              if (plVar16[2] == 0x52710d588c37d444) goto LAB_01cb3310;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb3314;
  }
  goto LAB_01cb3328;
LAB_01cb3310:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb3314:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb3328;
LAB_01cb33cc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0xb0c185b3a8dec161;
      }
      else if (uVar11 < 0xb0c185b3a8dec162) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xb0c185b3a8dec161 / uVar11;
        }
        uVar10 = 0xb0c185b3a8dec161 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xb0c185b3a8dec161;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xb0c185b3a8dec161) {
              if (plVar16[2] == -0x4f3e7a4c57213e9f) goto LAB_01cb3510;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xb0c185b3a8dec161) {
              if (plVar16[2] == -0x4f3e7a4c57213e9f) goto LAB_01cb3510;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb3514;
  }
  goto LAB_01cb3528;
LAB_01cb3510:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb3514:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb3528;
LAB_01cb35cc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x1249eaff7f8914e9;
      }
      else if (uVar11 < 0x1249eaff7f8914ea) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x1249eaff7f8914e9 / uVar11;
        }
        uVar10 = 0x1249eaff7f8914e9 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x1249eaff7f8914e9;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x1249eaff7f8914e9) {
              if (plVar16[2] == 0x1249eaff7f8914e9) goto LAB_01cb3710;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x1249eaff7f8914e9) {
              if (plVar16[2] == 0x1249eaff7f8914e9) goto LAB_01cb3710;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb3714;
  }
  goto LAB_01cb3728;
LAB_01cb3710:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb3714:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb3728;
LAB_01cb37cc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x5ca13ada0744f4f7;
      }
      else if (uVar11 < 0x5ca13ada0744f4f8) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x5ca13ada0744f4f7 / uVar11;
        }
        uVar10 = 0x5ca13ada0744f4f7 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x5ca13ada0744f4f7;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x5ca13ada0744f4f7) {
              if (plVar16[2] == 0x5ca13ada0744f4f7) goto LAB_01cb3910;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x5ca13ada0744f4f7) {
              if (plVar16[2] == 0x5ca13ada0744f4f7) goto LAB_01cb3910;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb3914;
  }
  goto LAB_01cb3928;
LAB_01cb3910:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb3914:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb3928;
LAB_01cb39cc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0x1def7c44a039c0b3;
      }
      else if (uVar11 < 0x1def7c44a039c0b4) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0x1def7c44a039c0b3 / uVar11;
        }
        uVar10 = 0x1def7c44a039c0b3 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0x1def7c44a039c0b3;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x1def7c44a039c0b3) {
              if (plVar16[2] == 0x1def7c44a039c0b3) goto LAB_01cb3b10;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x1def7c44a039c0b3) {
              if (plVar16[2] == 0x1def7c44a039c0b3) goto LAB_01cb3b10;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb3b14;
  }
  goto LAB_01cb3b28;
LAB_01cb3b10:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb3b14:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb3b28;
LAB_01cb3bcc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar10 = uVar11 - 1 & 0xd1adce46e2279ec2;
      }
      else if (uVar11 < 0xd1adce46e2279ec3) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = 0xd1adce46e2279ec2 / uVar11;
        }
        uVar10 = 0xd1adce46e2279ec2 - uVar10 * uVar11;
      }
      else {
        uVar10 = 0xd1adce46e2279ec2;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xd1adce46e2279ec2) {
              if (plVar16[2] == -0x2e5231b91dd8613e) goto LAB_01cb3d10;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xd1adce46e2279ec2) {
              if (plVar16[2] == -0x2e5231b91dd8613e) goto LAB_01cb3d10;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar13 = 0;
                if (uVar11 != 0) {
                  uVar13 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar13 * uVar11;
              }
              if (uVar12 != uVar10) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01cb3d14;
  }
  goto LAB_01cb3d28;
LAB_01cb3d10:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb3d14:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb3d28;
LAB_01cb3dcc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_01cb3f28;
  plVar1 = plVar15 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar11 = plVar15[0x21];
  uVar17 = 0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar10 = uVar11 - 1 & 0xd192b846e210b1a8;
    }
    else if (uVar11 < 0xd192b846e210b1a9) {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = 0xd192b846e210b1a8 / uVar11;
      }
      uVar10 = 0xd192b846e210b1a8 - uVar10 * uVar11;
    }
    else {
      uVar10 = 0xd192b846e210b1a8;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar10 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0xd192b846e210b1a8) {
            if (plVar16[2] == -0x2e6d47b91def4e58) goto LAB_01cb3f10;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar10) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0xd192b846e210b1a8) {
            if (plVar16[2] == -0x2e6d47b91def4e58) goto LAB_01cb3f10;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar13 * uVar11;
            }
            if (uVar12 != uVar10) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_01cb3f14;
LAB_01cb3f10:
  uVar17 = (undefined4)plVar16[6];
LAB_01cb3f14:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_01cb3f28;
}


