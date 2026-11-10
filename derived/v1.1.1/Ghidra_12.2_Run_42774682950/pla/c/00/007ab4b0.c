/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ab4b0; name: FUN_007ab4b0
 */


void FUN_007ab4b0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_043770e8;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)PTR_DAT_043770f0 != 0) {
                    /* try { // try from 007ab50c to 007ab517 has its CatchHandler @ 007ab51c */
    FUN_0032d2b0(PTR_DAT_043770f0);
  }
  param_1[5] = (long)PTR_DAT_043730c0;
  return;
}


