/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e7270; name: FUN_011e7270
 */


void FUN_011e7270(undefined8 param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x6f62314bf97fb8d3;
  pcStack_28 = "pane_L_button_00_T_blost_00";
  local_20 = 0x1b;
  local_18 = (long *)0x0;
  FUN_011e73d8(param_1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


