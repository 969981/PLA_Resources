/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad6e8c; name: FUN_01ad6e8c
 */


void FUN_01ad6e8c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01ad6f8c(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 0xe0;
    return;
  }
  uVar1 = FUN_01ad7148(param_1,(param_1[1] - *param_1 >> 5) * 0x6db6db6db6db6db7 + 1);
  FUN_01ad71b4(auStack_58,uVar1,(param_1[1] - *param_1 >> 5) * 0x6db6db6db6db6db7,param_1 + 3);
  FUN_01ad6f8c(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0xe0;
  FUN_01ad7248(param_1,auStack_58);
  FUN_01ad72f0(auStack_58);
  return;
}


