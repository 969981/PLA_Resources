/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c91f14; name: FUN_02c91f14
 */


void FUN_02c91f14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2e8);
  if ((*(long *)(lVar1 + 0xe8) == 0) ||
     (*(int *)(lVar1 + 0xf0) != *(int *)(*(long *)(lVar1 + 0xe8) + 0x2c))) {
    return;
  }
  FUN_002669c8(lVar1 + 0xe8);
  FUN_002667b4();
  return;
}


