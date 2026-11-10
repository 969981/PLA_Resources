/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01396308; name: FUN_01396308
 */


void FUN_01396308(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  long local_58;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01396420(param_1 + 3,param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + 0x318;
    return;
  }
  uVar1 = FUN_01396524(param_1,(param_1[1] - *param_1 >> 3) * -0x50295fad40a57eb5 + 1);
  FUN_01396590(auStack_68,uVar1,(param_1[1] - *param_1 >> 3) * -0x50295fad40a57eb5,param_1 + 3);
  FUN_01396420(param_1 + 3,local_58,param_2,param_3);
  local_58 = local_58 + 0x318;
  FUN_01396620(param_1,auStack_68);
  FUN_013966c8(auStack_68);
  return;
}


