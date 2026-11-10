/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f988c; name: FUN_014f988c
 */


void FUN_014f988c(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (param_2 == 0) {
    uVar1 = 0xeafedc07791b4226;
  }
  else {
    uVar1 = 0xeafedd07791b43d9;
  }
  pcStack_28 = "pane_T_msg_guide_00";
  local_30 = 0x5e97d135b4fe049e;
  local_20 = 0x13;
  local_18 = (long *)0x0;
  FUN_014fa560(param_1,uVar1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


