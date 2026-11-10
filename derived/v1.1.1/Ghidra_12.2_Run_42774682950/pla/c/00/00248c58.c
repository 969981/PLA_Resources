/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00248c58; name: FUN_00248c58
 */


void FUN_00248c58(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_00242014(param_1,0,0,param_2,param_4);
  puVar1 = PTR_DAT_04372d10;
  param_1[0x1d] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x1b] = (long)(param_1 + 0x1b);
  param_1[0x1c] = (long)(param_1 + 0x1b);
  return;
}


