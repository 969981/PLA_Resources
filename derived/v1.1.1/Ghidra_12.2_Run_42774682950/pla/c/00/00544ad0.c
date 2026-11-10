/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00544ad0; name: FUN_00544ad0
 */


void FUN_00544ad0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04374c80 + 0x10);
                    /* try { // try from 00544ae8 to 00544af7 has its CatchHandler @ 00544b00 */
  FUN_002ef710(param_1 + 5);
  thunk_FUN_003fddd0(param_1[3],param_1[4],0);
  return;
}


