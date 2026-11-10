/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405430; name: FUN_00405430
 */


bool FUN_00405430(uint param_1,ushort param_2)

{
  if (param_1 < 0x80) {
    return (*(ushort *)(&DAT_039fee94 + (long)(int)param_1 * 2) & param_2) != 0;
  }
  return false;
}


