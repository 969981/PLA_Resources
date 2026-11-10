/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e3604; name: FUN_007e3604
 */


bool FUN_007e3604(long param_1)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_03a7160c,0x10);
  return iVar1 != 0;
}


