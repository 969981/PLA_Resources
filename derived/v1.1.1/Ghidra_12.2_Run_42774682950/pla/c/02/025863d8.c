/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025863d8; name: FUN_025863d8
 */


bool FUN_025863d8(long param_1)

{
  if (*(long *)(param_1 + 0x58) == 0) {
    return true;
  }
  return *(int *)(*(long *)(*(long *)(param_1 + 0x58) + 0x68) + 0x80) == 7;
}


