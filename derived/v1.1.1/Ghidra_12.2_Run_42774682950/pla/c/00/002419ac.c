/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002419ac; name: FUN_002419ac
 */


void FUN_002419ac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372b10 + 0x10;
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  FUN_002419e0(param_1,0,0,param_2,param_3);
  return;
}


