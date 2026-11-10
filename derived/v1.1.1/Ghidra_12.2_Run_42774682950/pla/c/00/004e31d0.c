/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e31d0; name: FUN_004e31d0
 */


undefined * FUN_004e31d0(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_1 < 9) {
    puVar1 = &DAT_03a286dc + param_1 * 8;
  }
  return puVar1;
}


