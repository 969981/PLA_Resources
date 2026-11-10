/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a1d70; name: FUN_033a1d70
 */


int * FUN_033a1d70(long *param_1)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  lVar2 = param_1[2];
  uVar3 = (ulong)(*(uint *)(param_1 + 3) & 0x9e3779b9);
  iVar4 = *(int *)(lVar2 + uVar3 * 8 + 4);
  if (iVar4 < 0) {
    return (int *)0x0;
  }
  while ((piVar1 = (int *)(lVar2 + uVar3 * 8), *piVar1 != -0x61c88647 ||
         (*(long *)(*param_1 + (long)iVar4 * 0x18) != 0))) {
    uVar3 = ((long)(uVar3 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    iVar4 = *(int *)(lVar2 + uVar3 * 8 + 4);
    if (iVar4 < 0) {
      return (int *)0x0;
    }
  }
  return piVar1;
}


