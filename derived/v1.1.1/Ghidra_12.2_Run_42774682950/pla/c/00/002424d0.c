/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002424d0; name: FUN_002424d0
 */


long FUN_002424d0(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar4 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar1 + (ulong)(*(int *)((ulong)uVar4 + lVar1 + 4) + uVar4));
    if (*piVar2 == 0x15) {
      iVar3 = param_2 + -9;
      if (param_2 < 0x10) {
        iVar3 = param_2;
      }
      lVar5 = (long)*(char *)((long)piVar2 + (long)iVar3 + 4);
      if (-1 < lVar5) {
        return lVar1 + (ulong)(*(int *)((ulong)uVar4 + lVar5 * 4 + lVar1 + 4) + uVar4);
      }
    }
  }
  return 0;
}


