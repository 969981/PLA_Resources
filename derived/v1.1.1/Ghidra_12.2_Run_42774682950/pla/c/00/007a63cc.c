/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a63cc; name: FUN_007a63cc
 */


void FUN_007a63cc(long *param_1,long param_2)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04377070 + 0x10);
  param_1[1] = param_2;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
                    /* try { // try from 007a63f4 to 007a63fb has its CatchHandler @ 007a6454 */
  FUN_007b2d70(param_1 + 2);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)PTR_DAT_04377080 != 0) {
                    /* try { // try from 007a6430 to 007a643b has its CatchHandler @ 007a6440 */
    FUN_0032d2b0(PTR_DAT_04377080);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[6] = (long)PTR_DAT_043730c0;
  param_1[5] = (long)puVar1;
  return;
}


