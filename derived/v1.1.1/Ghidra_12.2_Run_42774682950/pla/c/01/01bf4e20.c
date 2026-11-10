/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf4e20; name: FUN_01bf4e20
 */


undefined8 FUN_01bf4e20(long param_1,int param_2)

{
  if ((*(char *)(param_1 + 0x1230) == '\0') || (*(int *)(param_1 + 0x1234) != param_2)) {
    return 0;
  }
  return 1;
}


