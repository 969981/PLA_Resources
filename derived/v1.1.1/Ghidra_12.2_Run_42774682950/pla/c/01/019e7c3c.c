/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e7c3c; name: FUN_019e7c3c
 */


void FUN_019e7c3c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (((param_2 == 0) || (lVar2 = *(long *)(param_2 + 0x30), lVar2 == 0)) ||
     (uVar1 = FUN_019e7aa4(lVar2), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_01a06b50(param_1 + -0x248,lVar2);
  return;
}


