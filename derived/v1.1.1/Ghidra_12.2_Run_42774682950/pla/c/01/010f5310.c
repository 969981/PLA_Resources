/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f5310; name: FUN_010f5310
 */


void FUN_010f5310(long param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  
  uVar5 = (*(long **)(param_1 + 0x1d8))[1];
  if (uVar5 == 0) {
    return;
  }
  uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = *param_2;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = uVar4 / uVar5;
  }
  uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar3 < 2) {
    uVar7 = uVar5 - 1 & uVar4;
  }
  else {
    uVar7 = uVar4;
    if (uVar5 <= uVar4) {
      uVar7 = uVar4 - uVar1 * uVar5;
    }
  }
  lVar6 = **(long **)(param_1 + 0x1d8);
  plVar8 = *(long **)(lVar6 + uVar7 * 8);
  if ((plVar8 == (long *)0x0) || (plVar8 = (long *)*plVar8, plVar8 == (long *)0x0))
  goto LAB_010f53a8;
  if (uVar3 < 2) {
    do {
      if (plVar8[1] == uVar4) {
        if (plVar8[2] == uVar4) goto LAB_010f53a0;
      }
      else if ((plVar8[1] & uVar5 - 1) != uVar7) goto LAB_010f5418;
      plVar8 = (long *)*plVar8;
      iVar10 = 0;
    } while (plVar8 != (long *)0x0);
  }
  else {
    do {
      uVar9 = plVar8[1];
      if (uVar9 == uVar4) {
        if (plVar8[2] == uVar4) goto LAB_010f53a0;
      }
      else {
        if (uVar5 <= uVar9) {
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar2 * uVar5;
        }
        if (uVar9 != uVar7) break;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
LAB_010f5418:
    iVar10 = 0;
  }
LAB_010f53a4:
  param_3 = iVar10 + param_3;
LAB_010f53a8:
  if (uVar3 < 2) {
    uVar7 = uVar5 - 1 & uVar4;
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
  }
  else {
    uVar7 = uVar4;
    if (uVar5 <= uVar4) {
      uVar7 = uVar4 - uVar1 * uVar5;
    }
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
  }
  if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
    if (uVar3 < 2) {
      do {
        if (plVar8[1] == uVar4) {
          if (plVar8[2] == uVar4) goto LAB_010f53f0;
        }
        else if ((plVar8[1] & uVar5 - 1) != uVar7) {
          return;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        uVar3 = plVar8[1];
        if (uVar3 == uVar4) {
          if (plVar8[2] == uVar4) {
LAB_010f53f0:
            *(int *)(plVar8 + 3) = param_3;
            return;
          }
        }
        else {
          if (uVar5 <= uVar3) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar3 / uVar5;
            }
            uVar3 = uVar3 - uVar1 * uVar5;
          }
          if (uVar3 != uVar7) {
            return;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
LAB_010f53a0:
  iVar10 = (int)plVar8[3];
  goto LAB_010f53a4;
}


