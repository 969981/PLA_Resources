/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005447f4; name: FUN_005447f4
 */


void FUN_005447f4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04374c70 + 0x10);
                    /* try { // try from 0054480c to 00544817 has its CatchHandler @ 00544820 */
  thunk_FUN_003fddd0(param_1[3],param_1[4],0);
  return;
}


