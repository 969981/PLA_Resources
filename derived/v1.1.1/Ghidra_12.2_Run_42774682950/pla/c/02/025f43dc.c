/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025f43dc; name: FUN_025f43dc
 */


void FUN_025f43dc(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_025f44d4(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 0x28;
    return;
  }
  uVar1 = FUN_025f45cc(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  FUN_025f4630(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333,param_1 + 3);
  FUN_025f44d4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x28;
  FUN_025f46c0(param_1,auStack_58);
  FUN_025f4794(auStack_58);
  return;
}


