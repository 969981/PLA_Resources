/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850c3c; name: FUN_00850c3c
 */


undefined8 FUN_00850c3c(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x28) == -3)) {
    return 0xffffffff;
  }
  uVar1 = FUN_00850544();
  return uVar1;
}


