/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02764b24; name: FUN_02764b24
 */


void FUN_02764b24(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_02764cb0(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  FUN_02764d14(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555,param_1 + 3);
  FUN_02764bc8(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x18;
  FUN_02764da4(param_1,auStack_58);
  FUN_02764e4c(auStack_58);
  return;
}


