/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4c6dc; name: FUN_00d4c6dc
 */


uint FUN_00d4c6dc(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x8ad48bca42a4661b;
  pcStack_38 = "context_menu_00";
  local_30 = 0xf;
  lVar2 = FUN_00d472a0(param_1 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0280b440(lVar2);
  }
  return uVar1 & 1;
}


