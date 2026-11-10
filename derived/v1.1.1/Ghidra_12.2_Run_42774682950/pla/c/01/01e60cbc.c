/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e60cbc; name: FUN_01e60cbc
 */


void FUN_01e60cbc(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_01e60e64(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  FUN_01e60ec8(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555,param_1 + 3);
  FUN_01e60d60(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x30;
  FUN_01e60f5c(param_1,auStack_58);
  FUN_01e61004(auStack_58);
  return;
}


