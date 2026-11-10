/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040cf20; name: FUN_0040cf20
 */


undefined4 FUN_0040cf20(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar7 = (int)((long)param_3 + -1);
  if (param_4 < 0) {
    piVar8 = (int *)(param_2 + ((long)iVar7 - (long)param_4) * 4);
    iVar9 = param_4;
    do {
      if (*piVar8 != 0) {
        return 0xffffffff;
      }
      piVar8 = piVar8 + -1;
      bVar3 = iVar9 != -1;
      iVar9 = iVar9 + 1;
    } while (bVar3);
  }
  if (0 < param_4) {
    lVar6 = (long)param_4;
    do {
      if (*(int *)(param_1 + (long)iVar7 * 4 + lVar6 * 4) != 0) {
        return 1;
      }
      lVar6 = lVar6 + -1;
    } while (0 < lVar6);
  }
  if (param_3 != 0) {
    lVar6 = ((long)param_3 + -1) * 4;
    uVar1 = *(uint *)(param_1 + lVar6);
    uVar2 = *(uint *)(param_2 + lVar6);
    bVar4 = uVar2 <= uVar1;
    bVar3 = uVar1 == uVar2;
    if (!bVar3) {
LAB_0040cfcc:
      uVar5 = 0xffffffff;
      if (bVar4 && !bVar3) {
        uVar5 = 1;
      }
      return uVar5;
    }
    if (-1 < param_3 + -2) {
      lVar6 = (long)(param_3 + -2);
      do {
        uVar1 = *(uint *)(param_1 + lVar6 * 4);
        uVar2 = *(uint *)(param_2 + lVar6 * 4);
        bVar4 = uVar2 <= uVar1;
        bVar3 = uVar1 == uVar2;
        if (!bVar3) goto LAB_0040cfcc;
        bVar3 = 0 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar3);
    }
  }
  return 0;
}


