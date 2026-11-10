/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a7284; name: FUN_011a7284
 */


void FUN_011a7284(long param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  FUN_011a730c();
  FUN_011a73d0(param_1,param_2);
  if (param_2 == 1) {
    FUN_011a7a80(param_1,param_3,param_4,param_5);
  }
  else if (param_2 == 0) {
    FUN_011a7464(param_1,param_3);
  }
  FUN_00d7331c(param_1,0);
  return;
}


