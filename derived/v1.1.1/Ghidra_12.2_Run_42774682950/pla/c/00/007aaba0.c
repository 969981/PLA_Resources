/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007aaba0; name: FUN_007aaba0
 */


void FUN_007aaba0(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04376f70 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)PTR_DAT_04376f78 != 0) {
                    /* try { // try from 007aabe8 to 007aabf3 has its CatchHandler @ 007aabf8 */
    FUN_0032d2b0(PTR_DAT_04376f78);
  }
  return;
}


