/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032589c8; name: FUN_032589c8
 */


void FUN_032589c8(long *param_1)

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
      piVar6 = (int *)(*param_1 + lVar3 * 0x10);
      lVar4 = param_1[2];
      uVar2 = (piVar6[1] << 5 ^ *piVar6 << 0x1b ^ piVar6[2]) * -0x61c8864f;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar5 = (ulong)(uVar2 & *(uint *)(param_1 + 3));
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


