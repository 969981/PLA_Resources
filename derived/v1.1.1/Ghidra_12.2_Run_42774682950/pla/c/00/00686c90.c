/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00686c90; name: FUN_00686c90
 */


void FUN_00686c90(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04375be8 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  puVar1 = PTR_DAT_04375bf0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)puVar1 != 0) {
                    /* try { // try from 00686ce4 to 00686cef has its CatchHandler @ 00686cf4 */
    FUN_0032d2b0(PTR_DAT_04375bf0);
  }
  return;
}


