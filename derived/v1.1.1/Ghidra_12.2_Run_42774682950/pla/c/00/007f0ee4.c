/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0ee4; name: FUN_007f0ee4
 */


bool FUN_007f0ee4(long param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x18) == 0) {
    return false;
  }
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_03a72091,0x10);
  return iVar1 != 0;
}


