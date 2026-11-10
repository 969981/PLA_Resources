/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012303dc; name: FUN_012303dc
 */


void FUN_012303dc(long param_1,uint param_2)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x1c7123a56b62b11d;
  pcStack_38 = "list_cursor_00";
  local_30 = 0xe;
  local_28 = (long *)0x0;
  lVar1 = thunk_FUN_00d2f008(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 != 0) {
    FUN_028077c0(lVar1,param_2 & 1);
  }
  return;
}


