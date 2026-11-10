/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c6478; name: FUN_013c6478
 */


void FUN_013c6478(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar1 = *(long *)(param_1 + 0xb0) + 0x5b0;
  }
  if ((*(long *)(param_1 + 0x88) == lVar1) && (iVar2 = FUN_013c35bc(), iVar2 == 1)) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  return;
}


