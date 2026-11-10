/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c5360; name: FUN_013c5360
 */


void FUN_013c5360(long param_1)

{
  long *plVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_00d42438(param_1,1,1);
  FUN_00d428b0(param_1,0);
  FUN_013c5424(param_1);
  local_40 = 0xe2a06d3a0634e918;
  pcStack_38 = "grid_panel";
  local_30 = 10;
  local_28 = (long *)0x0;
  plVar1 = (long *)FUN_00d2ec48(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if ((plVar1 == (long *)0x0) || (*(char *)((long)plVar1 + 0xa2) == '\x01')) {
    return;
  }
  *(undefined1 *)((long)plVar1 + 0xa2) = 1;
                    /* WARNING: Could not recover jumptable at 0x013c5420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,1);
  return;
}


