/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00935a60; name: FUN_00935a60
 */


bool FUN_00935a60(undefined8 *param_1,long *param_2)

{
  return *(char *)(*(long *)(*param_2 + 0x70) + 0x7d) != *(char *)*param_1;
}


