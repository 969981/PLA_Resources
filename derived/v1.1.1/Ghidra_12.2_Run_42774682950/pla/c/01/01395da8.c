/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01395da8; name: FUN_01395da8
 */


void FUN_01395da8(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_01395f48(param_1,(param_1[1] - *param_1 >> 3) * -0xb81702e05c0b817 + 1);
  FUN_01395fb4(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0xb81702e05c0b817,param_1 + 3);
  FUN_01395e54(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x2c8;
  FUN_01396044(param_1,auStack_58);
  FUN_013960ec(auStack_58);
  return;
}


