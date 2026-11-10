/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02794210; name: FUN_02794210
 */


void FUN_02794210(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_0279439c(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  FUN_02794400(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555,param_1 + 3);
  FUN_027942b4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x18;
  FUN_02794494(param_1,auStack_58);
  FUN_0279453c(auStack_58);
  return;
}


