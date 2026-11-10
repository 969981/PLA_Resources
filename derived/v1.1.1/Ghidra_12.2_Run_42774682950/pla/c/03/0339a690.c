/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a690; name: FUN_0339a690
 */


void FUN_0339a690(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_0436f288;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[5],1,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


