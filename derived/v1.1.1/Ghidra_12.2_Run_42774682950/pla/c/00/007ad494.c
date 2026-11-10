/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ad494; name: FUN_007ad494
 */


void FUN_007ad494(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04376fc0 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)PTR_DAT_04376fc8 != 0) {
                    /* try { // try from 007ad4dc to 007ad4e7 has its CatchHandler @ 007ad4ec */
    FUN_0032d2b0(PTR_DAT_04376fc8);
  }
  return;
}


