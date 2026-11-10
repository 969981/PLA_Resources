/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0127bf8c; name: FUN_0127bf8c
 */


void FUN_0127bf8c(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x9c4c00f115d39ce2;
  pcStack_38 = "pane_L_button_00_T_text_00";
  local_30 = 0x1a;
  FUN_0127c20c(param_1,0xaab7eecef808caa7,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x940e4e8ab7236ea9;
  pcStack_38 = "pane_L_button_01_T_text_00";
  local_30 = 0x1a;
  local_28 = (long *)0x0;
  FUN_0127c20c(param_1,0xaab7efcef808cc5a,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0xf2a7b79864f1a990;
  pcStack_38 = "pane_L_button_02_T_text_00";
  local_30 = 0x1a;
  local_28 = (long *)0x0;
  FUN_0127c20c(param_1,0xaab7f0cef808ce0d,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


