/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141e848; name: FUN_0141e848
 */


void FUN_0141e848(long *param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x4e037850425419da;
  pcStack_28 = "button_00";
  local_20 = 9;
  local_18 = (long *)0x0;
  thunk_FUN_00d2e944(*param_1 + 0x180,&local_30);
  FUN_02808d3c();
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


