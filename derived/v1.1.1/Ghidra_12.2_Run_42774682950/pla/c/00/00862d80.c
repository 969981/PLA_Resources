/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00862d80; name: FUN_00862d80
 */


void FUN_00862d80(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04378220;
  puVar1 = PTR_DAT_04377558;
  *param_1 = (long)(PTR_DAT_04378218 + 0x10);
  param_1[0x1b] = (long)(puVar2 + 0x10);
  param_1[0x1f] = (long)(puVar1 + 0x10);
  FUN_007e81d4(param_1 + 0x25);
  FUN_0080008c(param_1);
  return;
}


