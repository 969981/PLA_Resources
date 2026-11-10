/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5611c; name: FUN_02e5611c
 */


undefined * FUN_02e5611c(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return &DAT_042a5dc8;
  }
  puVar1 = (undefined *)FUN_02e48184(*(long *)(param_1 + 0x30),param_1);
  return puVar1;
}


