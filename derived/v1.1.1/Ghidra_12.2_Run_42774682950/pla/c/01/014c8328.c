/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c8328; name: FUN_014c8328
 */


void FUN_014c8328(long *param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x4c168fdfbe1756e4;
  pcStack_28 = "button_poke_down";
  local_20 = 0x10;
  local_18 = (long *)0x0;
  thunk_FUN_00d2e944(*param_1 + 0x180,&local_30);
  FUN_02808d3c();
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


