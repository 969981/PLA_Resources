/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb9954; name: FUN_01bb9954
 */


undefined1  [16] FUN_01bb9954(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  switch(*(undefined4 *)(param_1 + 0x1f0)) {
  case 0:
    local_50 = 0x7bb45a45183f49eb;
    pcStack_48 = "base_distance_tree";
    local_40 = 0x12;
    local_38 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar12 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar12;
    uVar9 = *(ulong *)(lVar12 + 0x60);
    auVar5 = ZEXT816(0);
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & 0x52a7808bb64974f4;
      }
      else if (uVar9 < 0x52a7808bb64974f5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0x52a7808bb64974f4 / uVar9;
        }
        uVar11 = 0x52a7808bb64974f4 - uVar11 * uVar9;
      }
      else {
        uVar11 = 0x52a7808bb64974f4;
      }
      plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
      auVar5 = ZEXT816(0);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)*plVar13, auVar5 = ZEXT816(0), plVar13 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar13[1] == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9b94;
            }
            else {
              auVar5 = ZEXT816(0);
              if ((plVar13[1] & uVar9 - 1) != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar13[1];
            if (uVar10 == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9b94;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar4 * uVar9;
              }
              auVar5 = ZEXT816(0);
              if (uVar10 != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    break;
  case 1:
    local_50 = 0x8ee53b7db25493d3;
    pcStack_48 = "base_distance_crystal";
    local_40 = 0x15;
    local_38 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar12 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar12;
    uVar9 = *(ulong *)(lVar12 + 0x60);
    auVar5 = ZEXT816(0);
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & 0x52a7808bb64974f4;
      }
      else if (uVar9 < 0x52a7808bb64974f5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0x52a7808bb64974f4 / uVar9;
        }
        uVar11 = 0x52a7808bb64974f4 - uVar11 * uVar9;
      }
      else {
        uVar11 = 0x52a7808bb64974f4;
      }
      plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
      auVar5 = ZEXT816(0);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)*plVar13, auVar5 = ZEXT816(0), plVar13 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar13[1] == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9a70;
            }
            else {
              auVar5 = ZEXT816(0);
              if ((plVar13[1] & uVar9 - 1) != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar13[1];
            if (uVar10 == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9a70;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar4 * uVar9;
              }
              auVar5 = ZEXT816(0);
              if (uVar10 != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    break;
  case 2:
    local_50 = 0xff2be436cb7026d5;
    pcStack_48 = "base_distance_small_crack_rock";
    local_40 = 0x1e;
    local_38 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar12 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar12;
    uVar9 = *(ulong *)(lVar12 + 0x60);
    auVar5 = ZEXT816(0);
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & 0x52a7808bb64974f4;
      }
      else if (uVar9 < 0x52a7808bb64974f5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0x52a7808bb64974f4 / uVar9;
        }
        uVar11 = 0x52a7808bb64974f4 - uVar11 * uVar9;
      }
      else {
        uVar11 = 0x52a7808bb64974f4;
      }
      plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
      auVar5 = ZEXT816(0);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)*plVar13, auVar5 = ZEXT816(0), plVar13 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar13[1] == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bba0b4;
            }
            else {
              auVar5 = ZEXT816(0);
              if ((plVar13[1] & uVar9 - 1) != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar13[1];
            if (uVar10 == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bba0b4;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar4 * uVar9;
              }
              auVar5 = ZEXT816(0);
              if (uVar10 != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    break;
  case 3:
    local_50 = 0x421a6c7fa4eb6ee2;
    pcStack_48 = "base_distance_big_crack_rock";
    local_40 = 0x1c;
    local_38 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar12 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar12;
    uVar9 = *(ulong *)(lVar12 + 0x60);
    auVar5 = ZEXT816(0);
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & 0x52a7808bb64974f4;
      }
      else if (uVar9 < 0x52a7808bb64974f5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0x52a7808bb64974f4 / uVar9;
        }
        uVar11 = 0x52a7808bb64974f4 - uVar11 * uVar9;
      }
      else {
        uVar11 = 0x52a7808bb64974f4;
      }
      plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
      auVar5 = ZEXT816(0);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)*plVar13, auVar5 = ZEXT816(0), plVar13 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar13[1] == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9d2c;
            }
            else {
              auVar5 = ZEXT816(0);
              if ((plVar13[1] & uVar9 - 1) != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar13[1];
            if (uVar10 == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9d2c;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar4 * uVar9;
              }
              auVar5 = ZEXT816(0);
              if (uVar10 != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    break;
  case 4:
    local_50 = 0x17a59dcabc4179ea;
    pcStack_48 = "base_distance_fallen_leaves";
    local_40 = 0x1b;
    local_38 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar12 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar12;
    uVar9 = *(ulong *)(lVar12 + 0x60);
    auVar5 = ZEXT816(0);
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & 0x52a7808bb64974f4;
      }
      else if (uVar9 < 0x52a7808bb64974f5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0x52a7808bb64974f4 / uVar9;
        }
        uVar11 = 0x52a7808bb64974f4 - uVar11 * uVar9;
      }
      else {
        uVar11 = 0x52a7808bb64974f4;
      }
      plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
      auVar5 = ZEXT816(0);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)*plVar13, auVar5 = ZEXT816(0), plVar13 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar13[1] == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bba1e0;
            }
            else {
              auVar5 = ZEXT816(0);
              if ((plVar13[1] & uVar9 - 1) != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar13[1];
            if (uVar10 == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bba1e0;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar4 * uVar9;
              }
              auVar5 = ZEXT816(0);
              if (uVar10 != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    break;
  case 5:
    local_50 = 0x619223f9c49b6f1;
    pcStack_48 = "base_distance_fallen_snow";
    local_40 = 0x19;
    local_38 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar12 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar12;
    uVar9 = *(ulong *)(lVar12 + 0x60);
    auVar5 = ZEXT816(0);
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & 0x52a7808bb64974f4;
      }
      else if (uVar9 < 0x52a7808bb64974f5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0x52a7808bb64974f4 / uVar9;
        }
        uVar11 = 0x52a7808bb64974f4 - uVar11 * uVar9;
      }
      else {
        uVar11 = 0x52a7808bb64974f4;
      }
      plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
      auVar5 = ZEXT816(0);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)*plVar13, auVar5 = ZEXT816(0), plVar13 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar13[1] == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9e50;
            }
            else {
              auVar5 = ZEXT816(0);
              if ((plVar13[1] & uVar9 - 1) != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar13[1];
            if (uVar10 == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9e50;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar4 * uVar9;
              }
              auVar5 = ZEXT816(0);
              if (uVar10 != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    break;
  case 6:
    local_50 = 0x63e2de360fb675ed;
    pcStack_48 = "base_distance_yachi_bose";
    local_40 = 0x18;
    local_38 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar12 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar12;
    uVar9 = *(ulong *)(lVar12 + 0x60);
    auVar5 = ZEXT816(0);
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & 0x52a7808bb64974f4;
      }
      else if (uVar9 < 0x52a7808bb64974f5) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0x52a7808bb64974f4 / uVar9;
        }
        uVar11 = 0x52a7808bb64974f4 - uVar11 * uVar9;
      }
      else {
        uVar11 = 0x52a7808bb64974f4;
      }
      plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
      auVar5 = ZEXT816(0);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)*plVar13, auVar5 = ZEXT816(0), plVar13 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar13[1] == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9f74;
            }
            else {
              auVar5 = ZEXT816(0);
              if ((plVar13[1] & uVar9 - 1) != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar13[1];
            if (uVar10 == 0x52a7808bb64974f4) {
              if (plVar13[2] == 0x52a7808bb64974f4) goto LAB_01bb9f74;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar4 * uVar9;
              }
              auVar5 = ZEXT816(0);
              if (uVar10 != uVar11) break;
            }
            plVar13 = (long *)*plVar13;
            auVar5 = ZEXT816(0);
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    break;
  default:
    return ZEXT816(0x40400000);
  }
LAB_01bb9bd4:
  if (local_38 != (long *)0x0) {
LAB_01bb9bdc:
    uVar16 = auVar5._8_8_;
    uVar15 = auVar5._0_8_;
    (**(code **)(*local_38 + 0x20))();
    auVar5._8_8_ = uVar16;
    auVar5._0_8_ = uVar15;
  }
  return auVar5;
LAB_01bb9f74:
  plVar13 = (long *)plVar13[3];
  auVar5 = ZEXT816(0);
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
    auVar14 = FUN_00d7905c(plVar13,&local_50);
    do {
      iVar8 = (int)*plVar1 + -1;
      bVar7 = iVar8 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_01bb9bd0;
  }
  goto LAB_01bb9bd4;
LAB_01bb9e50:
  plVar13 = (long *)plVar13[3];
  auVar5 = ZEXT816(0);
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
    auVar14 = FUN_00d7905c(plVar13,&local_50);
    do {
      iVar8 = (int)*plVar1 + -1;
      bVar7 = iVar8 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_01bb9bd0;
  }
  goto LAB_01bb9bd4;
LAB_01bba1e0:
  plVar13 = (long *)plVar13[3];
  auVar5 = ZEXT816(0);
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
    auVar14 = FUN_00d7905c(plVar13,&local_50);
    do {
      iVar8 = (int)*plVar1 + -1;
      bVar7 = iVar8 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_01bb9bd0;
  }
  goto LAB_01bb9bd4;
LAB_01bb9d2c:
  plVar13 = (long *)plVar13[3];
  auVar5 = ZEXT816(0);
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
    auVar14 = FUN_00d7905c(plVar13,&local_50);
    do {
      iVar8 = (int)*plVar1 + -1;
      bVar7 = iVar8 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_01bb9bd0;
  }
  goto LAB_01bb9bd4;
LAB_01bba0b4:
  plVar13 = (long *)plVar13[3];
  auVar5 = ZEXT816(0);
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
    auVar14 = FUN_00d7905c(plVar13,&local_50);
    do {
      iVar8 = (int)*plVar1 + -1;
      bVar7 = iVar8 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_01bb9bd0;
  }
  goto LAB_01bb9bd4;
LAB_01bb9a70:
  plVar13 = (long *)plVar13[3];
  auVar5 = ZEXT816(0);
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
    auVar14 = FUN_00d7905c(plVar13,&local_50);
    do {
      iVar8 = (int)*plVar1 + -1;
      bVar7 = iVar8 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_01bb9bd0;
  }
  goto LAB_01bb9bd4;
LAB_01bb9b94:
  plVar13 = (long *)plVar13[3];
  auVar5 = ZEXT816(0);
  if (plVar13 == (long *)0x0) goto LAB_01bb9bd4;
  plVar1 = plVar13 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  auVar14 = FUN_00d7905c(plVar13,&local_50);
  do {
    iVar8 = (int)*plVar1 + -1;
    bVar7 = iVar8 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01bb9bd0:
  uVar15 = auVar14._8_8_;
  auVar5 = auVar14;
  if (!bVar7) goto LAB_01bb9bd4;
  (**(code **)(*plVar13 + 0x10))(plVar13);
  auVar6._8_8_ = uVar15;
  auVar6._0_8_ = auVar14._0_8_;
  auVar5._8_8_ = uVar15;
  auVar5._0_8_ = auVar14._0_8_;
  if (local_38 == (long *)0x0) {
    return auVar6;
  }
  goto LAB_01bb9bdc;
}


