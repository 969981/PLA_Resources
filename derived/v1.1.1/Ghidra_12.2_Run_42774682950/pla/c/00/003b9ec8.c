/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b9ec8; name: FUN_003b9ec8
 */


void FUN_003b9ec8(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04373e50 + 0x10);
                    /* try { // try from 003b9ef4 to 003b9efb has its CatchHandler @ 003b9f5c */
  FUN_0032dd08(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_04373e58 != 0) {
                    /* try { // try from 003b9f30 to 003b9f3b has its CatchHandler @ 003b9f40 */
    FUN_0032d2b0(PTR_DAT_04373e58);
  }
  param_1[9] = 0;
  return;
}


