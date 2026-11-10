/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f56a0; name: FUN_010f56a0
 */


void FUN_010f56a0(long param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar6 = (*(long **)(param_1 + 0x1d8))[1];
  if (uVar6 == 0) {
    return;
  }
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = *param_2;
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = uVar5 / uVar6;
  }
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar8 = uVar6 - 1 & uVar5;
  }
  else {
    uVar8 = uVar5;
    if (uVar6 <= uVar5) {
      uVar8 = uVar5 - uVar1 * uVar6;
    }
  }
  lVar7 = **(long **)(param_1 + 0x1d8);
  plVar9 = *(long **)(lVar7 + uVar8 * 8);
  if ((plVar9 == (long *)0x0) || (plVar9 = (long *)*plVar9, plVar9 == (long *)0x0)) {
    iVar3 = 0;
    goto joined_r0x010f5740;
  }
  if (uVar4 < 2) {
    do {
      if (plVar9[1] == uVar5) {
        if (plVar9[2] == uVar5) goto LAB_010f5730;
      }
      else if ((plVar9[1] & uVar6 - 1) != uVar8) goto LAB_010f57ac;
      plVar9 = (long *)*plVar9;
      uVar11 = 0;
    } while (plVar9 != (long *)0x0);
  }
  else {
    do {
      uVar10 = plVar9[1];
      if (uVar10 == uVar5) {
        if (plVar9[2] == uVar5) goto LAB_010f5730;
      }
      else {
        if (uVar6 <= uVar10) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar2 * uVar6;
        }
        if (uVar10 != uVar8) break;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
LAB_010f57ac:
    uVar11 = 0;
  }
LAB_010f5734:
  iVar3 = 0;
  if (param_3 <= uVar11) {
    iVar3 = uVar11 - param_3;
  }
joined_r0x010f5740:
  if (uVar4 < 2) {
    uVar8 = uVar6 - 1 & uVar5;
    plVar9 = *(long **)(lVar7 + uVar8 * 8);
  }
  else {
    uVar8 = uVar5;
    if (uVar6 <= uVar5) {
      uVar8 = uVar5 - uVar1 * uVar6;
    }
    plVar9 = *(long **)(lVar7 + uVar8 * 8);
  }
  if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
    if (uVar4 < 2) {
      do {
        if (plVar9[1] == uVar5) {
          if (plVar9[2] == uVar5) goto LAB_010f5784;
        }
        else if ((plVar9[1] & uVar6 - 1) != uVar8) {
          return;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
    else {
      do {
        uVar4 = plVar9[1];
        if (uVar4 == uVar5) {
          if (plVar9[2] == uVar5) {
LAB_010f5784:
            *(int *)(plVar9 + 3) = iVar3;
            return;
          }
        }
        else {
          if (uVar6 <= uVar4) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar4 / uVar6;
            }
            uVar4 = uVar4 - uVar1 * uVar6;
          }
          if (uVar4 != uVar8) {
            return;
          }
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return;
LAB_010f5730:
  uVar11 = *(uint *)(plVar9 + 3);
  goto LAB_010f5734;
}


