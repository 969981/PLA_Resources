/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141c648; name: FUN_0141c648
 */


void FUN_0141c648(long param_1,byte param_2)

{
  long *plVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x4e037850425419da;
  pcStack_38 = "button_00";
  local_30 = 9;
  local_28 = (long *)0x0;
  plVar1 = (long *)thunk_FUN_00d2e944(param_1 + 0x180,&local_40);
  if (*(byte *)((long)plVar1 + 0xa2) != (param_2 & 1)) {
    *(byte *)((long)plVar1 + 0xa2) = param_2 & 1;
    (**(code **)(*plVar1 + 0x98))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x8cb5a90b4e903c3c;
  pcStack_38 = "InputEndButton";
  local_30 = 0xe;
  local_28 = (long *)0x0;
  FUN_0141d694(param_1,&local_40,param_2 & 1);
  return;
}


