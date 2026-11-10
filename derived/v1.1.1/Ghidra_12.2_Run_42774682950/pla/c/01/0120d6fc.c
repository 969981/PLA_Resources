/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120d6fc; name: FUN_0120d6fc
 */


void FUN_0120d6fc(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x7788dc1eb6cdc49e;
  pcStack_38 = "search_main_cursor";
  local_30 = 0x12;
  FUN_0120d780(param_1,&local_40,1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00d428b0(param_1,0);
  FUN_00d42438(param_1,1,1);
  return;
}


