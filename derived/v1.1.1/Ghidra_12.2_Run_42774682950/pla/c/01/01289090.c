/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01289090; name: FUN_01289090
 */


void FUN_01289090(undefined8 param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0xabe0c7b792aab60a;
  pcStack_28 = "pane_T_list_name_00";
  local_20 = 0x13;
  local_18 = (long *)0x0;
  FUN_0128d2ac(param_1,0,0xb05dc17b5aa026c7,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


