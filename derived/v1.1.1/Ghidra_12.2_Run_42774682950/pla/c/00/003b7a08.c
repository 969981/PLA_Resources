/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b7a08; name: FUN_003b7a08
 */


void FUN_003b7a08(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04373e78 + 0x10);
                    /* try { // try from 003b7a30 to 003b7a37 has its CatchHandler @ 003b7a8c */
  FUN_0032dd08(param_1 + 2);
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)PTR_DAT_04373e80 != 0) {
                    /* try { // try from 003b7a60 to 003b7a6b has its CatchHandler @ 003b7a70 */
    FUN_0032d2b0(PTR_DAT_04373e80);
  }
  return;
}


