/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131ac44; name: FUN_0131ac44
 */


float FUN_0131ac44(int param_1,float *param_2)

{
  if (param_1 < 7) {
    return *(float *)(&DAT_03a7ac50 + (long)param_1 * 0x10) +
           (*(float *)(&DAT_03a7ac58 + (long)param_1 * 0x10) -
           *(float *)(&DAT_03a7ac50 + (long)param_1 * 0x10)) * ((*param_2 + 1000.0) / 2000.0);
  }
  return 0.0;
}


