/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c3b70; name: FUN_010c3b70
 */


bool FUN_010c3b70(short *param_1)

{
  if ((*param_1 == 0x10) && (0xfe < (byte)((ushort)param_1[2] >> 8))) {
    return (param_1[2] & 0xffU) == 1;
  }
  return false;
}


