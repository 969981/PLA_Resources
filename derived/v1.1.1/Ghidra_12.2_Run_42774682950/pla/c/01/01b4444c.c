/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b4444c; name: FUN_01b4444c
 */


void FUN_01b4444c(long param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = FUN_01b44300();
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0xdd2) = param_2 & 1;
  }
  return;
}


