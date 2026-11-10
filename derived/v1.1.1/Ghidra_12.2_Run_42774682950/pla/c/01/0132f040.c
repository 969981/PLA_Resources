/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0132f040; name: FUN_0132f040
 */


void FUN_0132f040(long *param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  local_40 = 0x4a802437f079a1e5;
  pcStack_38 = "View_Info";
  local_30 = 9;
  uVar1 = FUN_0130e3d0(*(undefined8 *)(*param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_0133e264(uVar1);
  return;
}


