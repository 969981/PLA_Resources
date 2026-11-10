/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142b784; name: FUN_0142b784
 */


void FUN_0142b784(long param_1)

{
  byte bVar1;
  long *plVar2;
  long local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0x808) == 0) {
    local_40 = -0x113d7d1824e9bd80;
    pcStack_38 = "grid_poke_list";
    local_30 = 0xe;
    local_28 = (long *)0x0;
    plVar2 = (long *)FUN_00d2ec48(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if (plVar2 == (long *)0x0) {
      return;
    }
    bVar1 = *(byte *)(param_1 + 0x804);
  }
  else {
    local_40 = 0x292c0349cd5092f4;
    pcStack_38 = "grid_skill_list";
    local_30 = 0xf;
    local_28 = (long *)0x0;
    plVar2 = (long *)FUN_00d2ec48(param_1 + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if (plVar2 == (long *)0x0) {
      return;
    }
    bVar1 = *(byte *)(param_1 + 0x805);
  }
  local_40 = (ulong)bVar1 << 0x20;
  FUN_0280e8d8(plVar2,&local_40,1,0);
  (**(code **)(*plVar2 + 0x58))(plVar2);
  return;
}


