/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02645304; name: FUN_02645304
 */


void FUN_02645304(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_025faaa4(param_1 + 3,param_1[1],param_2);
    param_1[1] = param_1[1] + 0xe0;
    return;
  }
  uVar1 = FUN_02645404(param_1,(param_1[1] - *param_1 >> 5) * 0x6db6db6db6db6db7 + 1);
  FUN_025facb8(auStack_58,uVar1,(param_1[1] - *param_1 >> 5) * 0x6db6db6db6db6db7,param_1 + 3);
  FUN_025faaa4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0xe0;
  FUN_025fad4c(param_1,auStack_58);
  FUN_025fadf4(auStack_58);
  return;
}


