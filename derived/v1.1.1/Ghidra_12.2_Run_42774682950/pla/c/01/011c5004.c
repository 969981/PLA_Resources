/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c5004; name: FUN_011c5004
 */


void FUN_011c5004(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0x20b4a3ce93c6338;
  pcStack_48 = "grid_cursor";
  local_40 = 0xb;
  plVar1 = (long *)FUN_00d2f008(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((plVar1 != (long *)0x0) && (*(char *)((long)plVar1 + 0xa3) != '\0')) {
    *(undefined1 *)((long)plVar1 + 0xa3) = 0;
    (**(code **)(*plVar1 + 0xa0))(plVar1,0);
  }
  local_50 = 0xe2a06d3a0634e918;
  pcStack_48 = "grid_panel";
  local_40 = 10;
  local_38 = (long *)0x0;
  lVar2 = FUN_00d2ec48(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x88);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      for (lVar3 = *(long *)(lVar3 + 0x88); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x88)) {
        lVar2 = lVar3;
      }
    }
    FUN_028080bc(lVar2,0);
  }
  FUN_00d42438(param_1,0,1);
  return;
}


