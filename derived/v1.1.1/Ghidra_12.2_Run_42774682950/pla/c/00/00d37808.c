/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d37808; name: FUN_00d37808
 */


void FUN_00d37808(long param_1,long param_2)

{
  *(long *)(param_1 + 8) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x348);
  }
  return;
}


