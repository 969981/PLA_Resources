/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbd1b8; name: FUN_01bbd1b8
 */


void FUN_01bbd1b8(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    FUN_01bbf964(param_1,param_2);
    return;
  }
  FUN_01b67c00(param_1 + 0x18);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x80;
  return;
}


