/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007135f8; name: FUN_007135f8
 */


void FUN_007135f8(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_043765d0 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)PTR_DAT_043765d8 != 0) {
                    /* try { // try from 00713650 to 0071365b has its CatchHandler @ 00713660 */
    FUN_0032d2b0(PTR_DAT_043765d8);
  }
  param_1[5] = (long)PTR_DAT_043730c0;
  param_1[6] = 0;
  return;
}


