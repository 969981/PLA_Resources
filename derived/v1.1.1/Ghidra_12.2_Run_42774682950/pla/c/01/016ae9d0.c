/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016ae9d0; name: FUN_016ae9d0
 */


void FUN_016ae9d0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_016aeb70(param_1,(param_1[1] - *param_1 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1);
  FUN_016aebdc(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * 0x2e8ba2e8ba2e8ba3,param_1 + 3);
  FUN_016aea7c(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0xb0;
  FUN_016aec70(param_1,auStack_58);
  FUN_016aed18(auStack_58);
  return;
}


