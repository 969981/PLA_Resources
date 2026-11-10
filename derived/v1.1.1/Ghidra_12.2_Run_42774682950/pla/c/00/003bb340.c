/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bb340; name: FUN_003bb340
 */


void FUN_003bb340(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_04373f48;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*(int *)PTR_DAT_04373f50 != 0) {
                    /* try { // try from 003bb3a4 to 003bb3af has its CatchHandler @ 003bb3b4 */
    FUN_0032d2b0(PTR_DAT_04373f50);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = (long)puVar1;
  param_1[9] = 0;
  param_1[7] = (long)puVar1;
  param_1[6] = (long)puVar1;
  return;
}


