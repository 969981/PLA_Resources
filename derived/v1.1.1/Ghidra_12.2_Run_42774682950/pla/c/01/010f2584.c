/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f2584; name: FUN_010f2584
 */


void FUN_010f2584(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  long local_58;
  
  uVar1 = FUN_010f2640(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  FUN_010cffa8(auStack_68,uVar1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555,param_1 + 3);
  FUN_010f240c(param_1[3],local_58,param_2,param_3,param_4);
  local_58 = local_58 + 0x30;
  FUN_010d003c(param_1,auStack_68);
  FUN_010d00e4(auStack_68);
  return;
}


