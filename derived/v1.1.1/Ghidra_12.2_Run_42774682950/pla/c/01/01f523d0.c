/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f523d0; name: FUN_01f523d0
 */


long FUN_01f523d0(long *param_1,long param_2,long *param_3,long param_4)

{
  if (param_4 == param_2) {
    return 0;
  }
  return ((long)param_3 - (long)param_1 >> 3) * 0x155 +
         (param_4 - *param_3 >> 2) * -0x5555555555555555 +
         (param_2 - *param_1 >> 2) * 0x5555555555555555;
}


