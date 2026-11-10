/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b89a4; name: FUN_009b89a4
 */


void FUN_009b89a4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_009b8b6c(param_1,(param_1[1] - *param_1 >> 5) * -0x5555555555555555 + 1);
  FUN_009b8bd0(auStack_58,uVar1,(param_1[1] - *param_1 >> 5) * -0x5555555555555555,param_1 + 3);
  FUN_009b8a48(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x60;
  FUN_009b8c64(param_1,auStack_58);
  FUN_009b8d0c(auStack_58);
  return;
}


