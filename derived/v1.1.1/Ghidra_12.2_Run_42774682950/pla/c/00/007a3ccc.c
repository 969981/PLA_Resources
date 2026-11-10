/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a3ccc; name: FUN_007a3ccc
 */


void FUN_007a3ccc(long *param_1,long param_2)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_04377030 + 0x10);
  param_1[1] = param_2;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
                    /* try { // try from 007a3cf4 to 007a3cfb has its CatchHandler @ 007a3d60 */
  FUN_007a0c1c(param_1 + 2);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  if (*(int *)PTR_DAT_04377040 != 0) {
                    /* try { // try from 007a3d3c to 007a3d47 has its CatchHandler @ 007a3d4c */
    FUN_0032d2b0(PTR_DAT_04377040);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[6] = (long)puVar1;
  param_1[5] = (long)puVar1;
  param_1[8] = (long)puVar1;
  param_1[7] = (long)puVar1;
  return;
}


