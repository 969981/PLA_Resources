/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c71e0; name: FUN_014c71e0
 */


void FUN_014c71e0(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x262436ff2a1bb18a;
  pcStack_38 = "grid_waza_panel";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar1 = thunk_FUN_00d2ec48(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 != 0) {
    FUN_0280f008(lVar1,1);
  }
  FUN_014c0fcc(param_1);
  return;
}


