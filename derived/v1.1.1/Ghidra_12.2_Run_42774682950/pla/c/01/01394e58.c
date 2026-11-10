/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01394e58; name: FUN_01394e58
 */


void FUN_01394e58(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  if (param_1[1] == param_1[2]) {
    uVar1 = FUN_01395080(param_1,(param_1[1] - *param_1 >> 2) * -0x79435e50d79435e5 + 1);
    FUN_013950ec(auStack_58,uVar1,(param_1[1] - *param_1 >> 2) * -0x79435e50d79435e5,param_1 + 3);
    FUN_01394f58(param_1 + 3,local_48,param_2);
    local_48 = local_48 + 0x4c;
    FUN_01395180(param_1,auStack_58);
    FUN_01395228(auStack_58);
    return;
  }
  FUN_01394f58(param_1 + 3,param_1[1],param_2);
  param_1[1] = param_1[1] + 0x4c;
  return;
}


