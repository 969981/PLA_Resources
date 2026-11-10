/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012172cc; name: FUN_012172cc
 */


void FUN_012172cc(undefined8 param_1,uint param_2)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0xd5b4e006075c01f4;
  pcStack_28 = "InputModeChange";
  local_20 = 0xf;
  local_18 = (long *)0x0;
  FUN_00d4d788(param_1,&local_30,param_2 & 1);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


