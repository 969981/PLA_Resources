/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c4ee0; name: FUN_011c4ee0
 */


void FUN_011c4ee0(long param_1)

{
  long *plVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0xe2a06d3a0634e918;
  pcStack_48 = "grid_panel";
  local_40 = 10;
  plVar1 = (long *)FUN_00d2ec48(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  local_50 = 0x20b4a3ce93c6338;
  pcStack_48 = "grid_cursor";
  local_40 = 0xb;
  local_38 = (long *)0x0;
  plVar1 = (long *)FUN_00d2f008(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((plVar1 != (long *)0x0) && (*(char *)((long)plVar1 + 0xa3) != '\x01')) {
    *(undefined1 *)((long)plVar1 + 0xa3) = 1;
    (**(code **)(*plVar1 + 0xa0))(plVar1,1);
  }
  *(undefined4 *)(param_1 + 0x824) = 0;
  FUN_00d469b4(*(undefined8 *)(param_1 + 0x68),param_1,0);
  FUN_00d42438(param_1,1,1);
  return;
}


