/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014497fc; name: FUN_014497fc
 */


void FUN_014497fc(long param_1)

{
  long *plVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  local_40 = 0xb45bcccff4ab5923;
  pcStack_38 = "grid_player";
  local_30 = 0xb;
  local_28 = (long *)0x0;
  plVar1 = (long *)thunk_FUN_00d2ec48(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  if (*(long *)(param_1 + 0x440) != 0) {
    FUN_02831440();
  }
  FUN_00d428b0(param_1,0);
  return;
}


