/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cfb04; name: FUN_013cfb04
 */


void FUN_013cfb04(long param_1,byte param_2)

{
  long *plVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x20b4a3ce93c6338;
  pcStack_38 = "grid_cursor";
  local_30 = 0xb;
  local_28 = (long *)0x0;
  plVar1 = (long *)thunk_FUN_00d2f008(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (plVar1 != (long *)0x0) {
    if (*(byte *)((long)plVar1 + 0xa3) != (param_2 & 1)) {
      *(byte *)((long)plVar1 + 0xa3) = param_2 & 1;
      (**(code **)(*plVar1 + 0xa0))(plVar1);
    }
  }
  return;
}


