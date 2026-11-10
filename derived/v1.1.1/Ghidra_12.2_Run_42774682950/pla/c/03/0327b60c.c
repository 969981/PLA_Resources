/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327b60c; name: FUN_0327b60c
 */


void FUN_0327b60c(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  
  FUN_032c21f8(param_1 + 2);
  iVar1 = (int)param_1[1];
  if ((int)param_1[3] * 2 < iVar1 * 3) {
    FUN_032c2334(param_1 + 2);
    iVar1 = (int)param_1[1];
  }
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      uVar2 = FUN_0327b9d0(*param_1 + lVar6 * 0x70);
      uVar4 = (ulong)(*(uint *)(param_1 + 3) & uVar2);
      lVar3 = param_1[2];
      piVar5 = (int *)(lVar3 + uVar4 * 8 + 4);
      iVar1 = *piVar5;
      while (-1 < iVar1) {
        uVar4 = ((long)(uVar4 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar5 = (int *)(lVar3 + uVar4 * 8 + 4);
        iVar1 = *piVar5;
      }
      *(uint *)(lVar3 + uVar4 * 8) = uVar2;
      *piVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  return;
}


