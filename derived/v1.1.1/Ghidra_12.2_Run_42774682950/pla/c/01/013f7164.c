/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f7164; name: FUN_013f7164
 */


bool FUN_013f7164(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_00937d80(param_1 + 8);
  return *(long *)(param_1 + 0x10) == 0;
}


