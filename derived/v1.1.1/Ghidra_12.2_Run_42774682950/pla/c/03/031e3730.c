/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e3730; name: FUN_031e3730
 */


void FUN_031e3730(long param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int local_58 [2];
  
  plVar1 = (long *)(param_1 + 8);
  lVar4 = FUN_031e5194(plVar1);
  if ((lVar4 != 0) &&
     (uVar6 = *(uint *)(lVar4 + 4) |
              ((int)lVar4 - (int)*(undefined8 *)(param_1 + 0x18)) * 0x20000000, -1 < (int)uVar6)) {
    lVar4 = *plVar1;
    iVar3 = *(int *)(lVar4 + (long)(int)uVar6 * 0x68 + 0x50);
    uVar11 = iVar3 - 1;
    if (0 < iVar3) {
      do {
        lVar8 = *(long *)(*(long *)(lVar4 + (long)(int)uVar6 * 0x68 + 0x48) +
                          ((long)((ulong)uVar11 << 0x20) >> 0x1c) + 8);
        piVar9 = (int *)(lVar8 + 0x18);
        piVar2 = (int *)(lVar8 + 0x1c);
        if (*piVar9 != *param_2) {
          piVar2 = piVar9;
        }
        local_58[0] = *piVar2;
        lVar8 = FUN_031e5194(plVar1,local_58);
        if (lVar8 == 0) {
          uVar7 = 0;
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(uint *)(lVar8 + 4);
          uVar7 = ((int)lVar8 - (int)*(undefined8 *)(param_1 + 0x18)) * 0x20000000;
        }
        lVar8 = *plVar1 + (long)(int)(uVar10 | uVar7) * 0x68 + 0x48;
        lVar5 = FUN_031e5218(lVar8,param_2);
        if (lVar5 != 0) {
          FUN_031e5298(lVar8,lVar5);
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    lVar4 = FUN_031e5194(plVar1,param_2);
    if (lVar4 != 0) {
      FUN_031e53e8(plVar1,lVar4);
      return;
    }
  }
  return;
}


