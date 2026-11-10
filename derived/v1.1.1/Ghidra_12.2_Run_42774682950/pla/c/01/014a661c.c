/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a661c; name: FUN_014a661c
 */


void FUN_014a661c(undefined8 param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x3e8b6156e9ae75f7;
  pcStack_28 = "pane_T_heading_pt_00";
  local_20 = 0x14;
  local_18 = (long *)0x0;
  FUN_014a6d24(param_1,0xea8fe00c6922fd95,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


