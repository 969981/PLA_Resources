/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03261b50; name: FUN_03261b50
 */


void FUN_03261b50(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)(uVar3 - 1) < 1) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    iVar10 = 0;
    uVar11 = 1;
    uVar12 = 0;
    do {
      uVar1 = uVar12 + 1;
      if ((long)uVar1 < (long)(int)uVar3) {
        uVar6 = uVar11;
        uVar9 = uVar8;
        do {
          iVar4 = *(int *)(*param_1 + uVar6 * 4) - *(int *)(*param_1 + uVar12 * 4);
          iVar4 = (iVar4 * 2 & 0x10000U) + iVar4;
          iVar2 = iVar4 >> 0x10;
          iVar4 = (int)(short)iVar4;
          iVar4 = iVar2 * iVar2 + iVar4 * iVar4;
          uVar8 = (int)uVar12;
          uVar5 = (int)uVar6;
          if (iVar4 <= iVar10) {
            uVar8 = uVar9;
            iVar4 = iVar10;
            uVar5 = uVar7;
          }
          uVar7 = uVar5;
          iVar10 = iVar4;
          uVar6 = uVar6 + 1;
          uVar9 = uVar8;
        } while (uVar3 != uVar6);
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar1;
    } while (uVar1 != uVar3 - 1);
  }
  *param_2 = uVar8;
  *param_3 = uVar7;
  return;
}


