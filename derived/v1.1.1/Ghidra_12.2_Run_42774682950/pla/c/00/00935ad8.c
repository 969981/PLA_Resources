/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935ad8; name: FUN_00935ad8
 */


bool FUN_00935ad8(undefined8 *param_1,long *param_2)

{
  if (*(char *)*param_1 == '\0') {
    return true;
  }
  return *(short *)(*(long *)(*param_2 + 0x70) + 0x74) != 0;
}


