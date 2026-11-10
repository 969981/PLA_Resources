/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01133958; name: FUN_01133958
 */


bool FUN_01133958(long param_1,uint param_2)

{
  if (((int)param_2 < 0x3d5) &&
     (param_1 = param_1 + (ulong)param_2 * 0x58, *(short *)(param_1 + 0xe6) != 0)) {
    return (*(byte *)(param_1 + 0xdc) & 2) == 0;
  }
  return false;
}


