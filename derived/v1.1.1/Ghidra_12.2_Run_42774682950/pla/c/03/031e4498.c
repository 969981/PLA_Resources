/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e4498; name: FUN_031e4498
 */


void FUN_031e4498(long *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int local_48 [2];
  
  lVar3 = FUN_031e5518();
  if ((lVar3 != 0) &&
     (uVar5 = *(uint *)(lVar3 + 4) | ((int)lVar3 - (int)param_1[2]) * 0x20000000, -1 < (int)uVar5))
  {
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + (long)(int)uVar5 * 0x28 + 0x10);
    uVar10 = iVar2 - 1;
    if (0 < iVar2) {
      do {
        lVar7 = *(long *)(*(long *)(lVar3 + (long)(int)uVar5 * 0x28 + 8) +
                          ((long)((ulong)uVar10 << 0x20) >> 0x1c) + 8);
        piVar8 = (int *)(lVar7 + 0x18);
        piVar1 = (int *)(lVar7 + 0x1c);
        if (*piVar8 != *param_2) {
          piVar1 = piVar8;
        }
        local_48[0] = *piVar1;
        lVar7 = FUN_031e5518(param_1,local_48);
        if (lVar7 == 0) {
          uVar6 = 0;
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = *(uint *)(lVar7 + 4);
          uVar6 = ((int)lVar7 - (int)param_1[2]) * 0x20000000;
        }
        lVar7 = *param_1 + (long)(int)(uVar9 | uVar6) * 0x28 + 8;
        lVar4 = FUN_031e5218(lVar7,param_2);
        if (lVar4 != 0) {
          FUN_031e5298(lVar7,lVar4);
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    lVar3 = FUN_031e5518(param_1,param_2);
    if (lVar3 != 0) {
      FUN_031e5598(param_1,lVar3);
    }
  }
  return;
}


