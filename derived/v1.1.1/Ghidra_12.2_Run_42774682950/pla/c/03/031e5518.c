/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e5518; name: FUN_031e5518
 */


uint * FUN_031e5518(long *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  uVar2 = *param_2 * -0x61c8864f;
  lVar3 = param_1[2];
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar4 = (ulong)(*(uint *)(param_1 + 3) & uVar2);
  iVar5 = *(int *)(lVar3 + uVar4 * 8 + 4);
  if (iVar5 < 0) {
    return (uint *)0x0;
  }
  while ((puVar1 = (uint *)(lVar3 + uVar4 * 8), *puVar1 != uVar2 ||
         (*(int *)(*param_1 + (long)iVar5 * 0x28) != *param_2))) {
    uVar4 = ((long)(uVar4 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    iVar5 = *(int *)(lVar3 + uVar4 * 8 + 4);
    if (iVar5 < 0) {
      return (uint *)0x0;
    }
  }
  return puVar1;
}


