/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8e38; name: FUN_007e8e38
 */


void FUN_007e8e38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x170;
  if (*(long *)(param_1 + 0x178) != lVar1) {
    lVar2 = (long)*(int *)(param_1 + 0x184);
    lVar3 = *(long *)(param_1 + 0x178) - lVar2;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
        FUN_007e8fa0(lVar1,lVar3 + lVar2,lVar2 + param_2);
        return;
      }
      lVar3 = *(long *)(lVar3 + lVar2 + 8) - lVar2;
    } while (lVar3 != lVar1 - lVar2);
  }
  FUN_008248e4(param_1 + 0x120);
  FUN_007e8fa0(lVar1,lVar1,*(int *)(param_1 + 0x184) + param_2);
  return;
}


