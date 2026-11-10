/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057e458; name: FUN_0057e458
 */


void FUN_0057e458(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04374e10 + 0x10);
  param_1[0x11] = (long)"invalid";
  if ((void *)param_1[0x12] != (void *)0x0) {
                    /* try { // try from 0057e488 to 0057e4ab has its CatchHandler @ 0057e4c0 */
    free((void *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    free((void *)param_1[0x13]);
    param_1[0x13] = 0;
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    free((void *)param_1[0x14]);
    param_1[0x14] = 0;
  }
  FUN_0057e914(param_1);
  return;
}


