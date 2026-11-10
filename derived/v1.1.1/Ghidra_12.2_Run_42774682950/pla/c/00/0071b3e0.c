/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071b3e0; name: FUN_0071b3e0
 */


void FUN_0071b3e0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_043766e0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = param_2;
  *(undefined4 *)((long)param_1 + 100) = 0;
  if (*(int *)PTR_DAT_043766e8 != 0) {
                    /* try { // try from 0071b450 to 0071b45b has its CatchHandler @ 0071b460 */
    FUN_0032d2b0(PTR_DAT_043766e8);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = (long)puVar1;
  param_1[6] = (long)puVar1;
  param_1[5] = (long)puVar1;
  return;
}


