/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012170c4; name: FUN_012170c4
 */


void FUN_012170c4(undefined8 param_1,uint param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0xada1ec7d33876c9;
  pcStack_38 = "InputChangeTrayMinus";
  local_30 = 0x14;
  local_28 = (long *)0x0;
  FUN_00d4d788(param_1,&local_40,param_2 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x57b016e0a3b18937;
  pcStack_38 = "InputChangeTrayPlus";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  FUN_00d4d788(param_1,&local_40,param_2 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


