/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01505024; name: FUN_01505024
 */


void FUN_01505024(long param_1)

{
  long *plVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x1c128de5cab86fb2;
  pcStack_38 = "waza_shop_list";
  local_30 = 0xe;
  plVar1 = (long *)thunk_FUN_00d2ee28(param_1 + 0x180,&local_40);
  (**(code **)(*plVar1 + 0x58))();
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_015050c4(param_1,*(int *)(*(long *)(param_1 + 0x630) + 0xb0) != 0);
  FUN_01504f70(param_1);
  if (*(long *)(param_1 + 0x440) != 0) {
    FUN_02831440();
  }
  return;
}


