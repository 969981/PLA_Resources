/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040bc10; name: FUN_0040bc10
 */


uint FUN_0040bc10(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if ((int)param_1[1] == 0) {
    return 0;
  }
  iVar2 = FUN_0040bfd0(param_2);
  uVar1 = 0x20 - iVar2;
  iVar3 = FUN_00410600(param_1,param_1,uVar1);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    uVar4 = 0;
  }
  else {
    param_2 = param_2 << (ulong)(-iVar2 & 0x1f);
    lVar6 = *param_1;
    lVar5 = (long)iVar3;
    uVar4 = 0;
    do {
      lVar5 = lVar5 + -1;
      iVar2 = *(int *)(lVar6 + lVar5 * 4);
      iVar3 = FUN_0040f180(uVar4,iVar2,param_2);
      lVar6 = *param_1;
      uVar4 = iVar2 - iVar3 * param_2;
      *(int *)(lVar6 + lVar5 * 4) = iVar3;
    } while (0 < lVar5);
    iVar3 = (int)param_1[1];
    iVar2 = iVar3 + -1;
    if (0 < iVar3) {
      if (*(int *)(*param_1 + (long)iVar2 * 4) != 0) {
        return uVar4 >> (ulong)(uVar1 & 0x1f);
      }
      *(int *)(param_1 + 1) = iVar2;
      uVar4 = uVar4 >> (ulong)(uVar1 & 0x1f);
      goto joined_r0x0040bce8;
    }
  }
  uVar4 = uVar4 >> (ulong)(uVar1 & 0x1f);
  iVar2 = iVar3;
joined_r0x0040bce8:
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar4;
}


