/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068782c; name: FUN_0068782c
 */


void FUN_0068782c(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04375c00 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)PTR_DAT_04375c08 != 0) {
                    /* try { // try from 0068787c to 00687887 has its CatchHandler @ 0068788c */
    FUN_0032d2b0(PTR_DAT_04375c08);
  }
  param_1[5] = 0;
  return;
}


