/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327a564; name: FUN_0327a564
 */


void FUN_0327a564(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  FUN_032c21f8(param_1 + 2);
  iVar1 = (int)param_1[1];
  if ((int)param_1[3] * 2 < iVar1 * 3) {
    FUN_032c2334(param_1 + 2);
    iVar1 = (int)param_1[1];
  }
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      lVar4 = param_1[2];
      uVar2 = *(int *)(*param_1 + lVar3 * 8) * -0x61c8864f;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar5 = (ulong)(*(uint *)(param_1 + 3) & uVar2);
      piVar6 = (int *)(lVar4 + uVar5 * 8 + 4);
      iVar1 = *piVar6;
      while (-1 < iVar1) {
        uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar6 = (int *)(lVar4 + uVar5 * 8 + 4);
        iVar1 = *piVar6;
      }
      *(uint *)(lVar4 + uVar5 * 8) = uVar2;
      *piVar6 = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  return;
}


