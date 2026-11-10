/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e7e8ec; name: FUN_01e7e8ec
 */


void FUN_01e7e8ec(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  if (param_1[1] == param_1[2]) {
    uVar1 = FUN_01e7ead0(param_1,(param_1[1] - *param_1 >> 4) * -0xf0f0f0f0f0f0f0f + 1);
    FUN_01e7eb34(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * -0xf0f0f0f0f0f0f0f,param_1 + 3);
    FUN_01e7e9e4(param_1 + 3,local_48,param_2);
    local_48 = local_48 + 0x110;
    FUN_01e7ebc8(param_1,auStack_58);
    FUN_01e7ec70(auStack_58);
    return;
  }
  FUN_01e7e9e4(param_1 + 3,param_1[1],param_2);
  param_1[1] = param_1[1] + 0x110;
  return;
}


