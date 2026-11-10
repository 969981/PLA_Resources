/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b8c50; name: FUN_003b8c50
 */


void FUN_003b8c50(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04373d90 + 0x10);
                    /* try { // try from 003b8c7c to 003b8c83 has its CatchHandler @ 003b8ce4 */
  FUN_0032dd08(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_04373d98 != 0) {
                    /* try { // try from 003b8cb8 to 003b8cc3 has its CatchHandler @ 003b8cc8 */
    FUN_0032d2b0(PTR_DAT_04373d98);
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


