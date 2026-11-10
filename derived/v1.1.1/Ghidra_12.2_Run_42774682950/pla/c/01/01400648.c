/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01400648; name: FUN_01400648
 */


void FUN_01400648(long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long **local_58;
  char *local_50;
  char *local_48;
  long *local_40;
  long *local_38;
  long *local_28;
  
  local_58 = (long **)&DAT_ec034b23cfd86628;
  local_50 = "list_panel";
  local_48 = (char *)0xa;
  local_40 = (long *)0x0;
  uVar2 = FUN_00d2ee28(param_1 + 0x180,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  local_58 = &local_28;
  local_28 = (long *)0x0;
  local_50 = (char *)0x1513dced4360a77f;
  local_48 = "list_panel_cursor";
  local_40 = (long *)0x11;
  local_38 = (long *)0x0;
  FUN_00d36f04(uVar2,&local_58,0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    if ((param_2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(param_1 + 0xcc8) != 0;
    }
    if ((bool)*(char *)((long)local_28 + 0xa3) != bVar1) {
      *(bool *)((long)local_28 + 0xa3) = bVar1;
      (**(code **)(*local_28 + 0xa0))();
    }
  }
  return;
}


