/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016ca20; name: FUN_0016ca20
 */


void FUN_0016ca20(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10);
  lVar2 = lVar1 + -0x7fffffffffffffff;
  if (lVar2 <= param_2) {
    lVar2 = param_2;
  }
  *(long *)(param_1 + 0x10) = lVar1 - lVar2;
  *(long *)(param_1 + 0x18) = lVar2;
  return;
}


