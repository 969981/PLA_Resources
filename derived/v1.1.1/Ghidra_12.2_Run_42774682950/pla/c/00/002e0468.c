/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e0468; name: FUN_002e0468
 */


void FUN_002e0468(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04373780 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)PTR_DAT_04373770 != 0) {
                    /* try { // try from 002e04b0 to 002e04bb has its CatchHandler @ 002e04c0 */
    FUN_0032d2b0(PTR_DAT_04373770);
  }
  return;
}


