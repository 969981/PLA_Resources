/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b5fd8; name: FUN_003b5fd8
 */


void FUN_003b5fd8(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04373e28 + 0x10);
                    /* try { // try from 003b6004 to 003b600b has its CatchHandler @ 003b606c */
  FUN_0032dd08(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_04373e30 != 0) {
                    /* try { // try from 003b6040 to 003b604b has its CatchHandler @ 003b6050 */
    FUN_0032d2b0(PTR_DAT_04373e30);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}


