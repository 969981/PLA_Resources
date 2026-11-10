/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003aaadc; name: FUN_003aaadc
 */


void FUN_003aaadc(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04373da0 + 0x10);
                    /* try { // try from 003aab04 to 003aab0b has its CatchHandler @ 003aab60 */
  FUN_0032dd08(param_1 + 2);
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)PTR_DAT_04373da8 != 0) {
                    /* try { // try from 003aab34 to 003aab3f has its CatchHandler @ 003aab44 */
    FUN_0032d2b0(PTR_DAT_04373da8);
  }
  return;
}


