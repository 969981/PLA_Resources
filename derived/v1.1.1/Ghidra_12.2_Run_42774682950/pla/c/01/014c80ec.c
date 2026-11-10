/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c80ec; name: FUN_014c80ec
 */


void FUN_014c80ec(long *param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x55249190b9dd69c8;
  pcStack_28 = "button_page_R";
  local_20 = 0xd;
  local_18 = (long *)0x0;
  thunk_FUN_00d2e944(*param_1 + 0x180,&local_30);
  FUN_02808d3c();
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


