/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177ffd8; name: FUN_0177ffd8
 */


void FUN_0177ffd8(undefined1 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *local_50;
  ulong local_48;
  long local_40;
  long lStack_38;
  
  if ((*(char *)(param_2 + 0x178) != '\0') && (uVar10 = *(ulong *)(param_2 + 0xd8), uVar10 != 0)) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar8 = *(ulong *)(param_2 + 0x180);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar15 = uVar10 - 1 & uVar8;
    }
    else {
      uVar15 = uVar8;
      if (uVar10 <= uVar8) {
        uVar15 = 0;
        if (uVar10 != 0) {
          uVar15 = uVar8 / uVar10;
        }
        uVar15 = uVar8 - uVar15 * uVar10;
      }
    }
    lVar14 = *(long *)(param_2 + 0xd0);
    plVar12 = *(long **)(lVar14 + uVar15 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      uVar13 = uVar10 - 1;
      if (uVar11 < 2) {
        do {
          if (plVar12[1] == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_017800f4;
          }
          else if ((plVar12[1] & uVar13) != uVar15) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar12[1];
          if (uVar16 == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_017800f4;
          }
          else {
            if (uVar10 <= uVar16) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar16 / uVar10;
              }
              uVar16 = uVar16 - uVar5 * uVar10;
            }
            if (uVar16 != uVar15) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
LAB_017800f4:
  if (uVar11 < 2) {
    plVar12 = *(long **)(lVar14 + (uVar13 & uVar8) * 8);
    uVar15 = uVar13 & uVar8;
  }
  else if (uVar8 < uVar10) {
    plVar12 = *(long **)(lVar14 + uVar8 * 8);
    uVar15 = uVar8;
  }
  else {
    uVar15 = 0;
    if (uVar10 != 0) {
      uVar15 = uVar8 / uVar10;
    }
    uVar15 = uVar8 - uVar15 * uVar10;
    plVar12 = *(long **)(lVar14 + uVar15 * 8);
  }
  if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
    if (uVar11 < 2) {
      do {
        if (plVar12[1] == uVar8) {
          if (plVar12[2] == uVar8) goto LAB_017801b4;
        }
        else if ((plVar12[1] & uVar13) != uVar15) break;
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
    else {
      do {
        uVar11 = plVar12[1];
        if (uVar11 == uVar8) {
          if (plVar12[2] == uVar8) goto LAB_017801b4;
        }
        else {
          if (uVar10 <= uVar11) {
            uVar13 = 0;
            if (uVar10 != 0) {
              uVar13 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar13 * uVar10;
          }
          if (uVar11 != uVar15) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  FUN_01786b80();
LAB_01780380:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
LAB_017801b4:
  lVar14 = plVar12[3];
  lVar3 = plVar12[4];
  plVar1 = (long *)plVar12[8];
  local_48 = plVar12[9];
  local_40 = plVar12[10];
  lStack_38 = plVar12[0xb];
  lVar7 = plVar12[6] - plVar12[5];
  local_50 = plVar1;
  if (lVar7 == 0) {
    lVar9 = 0;
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar10 = local_48;
    if (0x7ffffffffffffffe < local_48) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < (ulong)(lVar7 >> 5)) goto LAB_01780380;
    lVar6 = (**(code **)(*plVar1 + 0x10))(plVar1,lVar7,0x10);
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0xb8))(plVar1);
    }
    lVar9 = lVar6 + (lVar7 >> 5) * 0x20;
    lVar2 = plVar12[5];
    lVar4 = plVar12[6];
    if (lVar2 == lVar4) {
      lVar7 = lVar6;
    }
    else {
      FUN_01785554(&local_50,lVar6,lVar2);
      lVar7 = lVar6 + 0x20;
      if (lVar2 + 0x20 != lVar4) {
        FUN_01785554(&local_50);
        lVar7 = lVar6 + 0x40;
        if (lVar2 + 0x40 != lVar4) {
          FUN_01785554(&local_50);
          lVar7 = lVar6 + 0x60;
          if (lVar2 + 0x60 != lVar4) {
            FUN_01785554(&local_50);
            lVar7 = lVar6 + 0x80;
            if (lVar2 + 0x80 != lVar4) {
              FUN_01785554(&local_50);
              lVar7 = lVar6 + 0xa0;
              for (lVar2 = lVar2 + 0xa0; lVar2 != lVar4; lVar2 = lVar2 + 0x20) {
                FUN_01785554(&local_50,lVar7,lVar2);
                lVar7 = lVar7 + 0x20;
              }
            }
          }
        }
      }
    }
  }
  *(long *)(param_1 + 0x18) = lVar6;
  *(long *)(param_1 + 0x20) = lVar7;
  *(long *)(param_1 + 0x28) = lVar9;
  *param_1 = 1;
  *(long *)(param_1 + 8) = lVar14;
  *(long *)(param_1 + 0x10) = lVar3;
  *(long *)(param_1 + 0x40) = local_40;
  *(long *)(param_1 + 0x48) = lStack_38;
  *(long **)(param_1 + 0x30) = local_50;
  *(ulong *)(param_1 + 0x38) = local_48;
  return;
}


