/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00718c20; name: FUN_00718c20
 */


void FUN_00718c20(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_043766d0;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_043766d8;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(int *)puVar1 != 0) {
                    /* try { // try from 00718c90 to 00718c9b has its CatchHandler @ 00718ca0 */
    FUN_0032d2b0(PTR_DAT_043766d8);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[9] = (long)puVar1;
  param_1[8] = (long)puVar1;
  return;
}


