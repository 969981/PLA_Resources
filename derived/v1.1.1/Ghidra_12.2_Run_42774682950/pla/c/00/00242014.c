/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00242014; name: FUN_00242014
 */


void FUN_00242014(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372b10;
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_002419e0();
  return;
}


