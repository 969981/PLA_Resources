/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c4d00; name: FUN_010c4d00
 */


void FUN_010c4d00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long *local_90;
  undefined1 auStack_88 [24];
  long *local_70;
  long *local_60 [4];
  long *local_40;
  undefined4 local_38;
  long local_28;
  
  FUN_00adcc04(local_60);
  if (local_60[0] == (long *)0x0) {
    plVar1 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar1 = local_60[0] + 0xc;
  }
  local_28 = *plVar1;
  FUN_00d7b920(&local_90,&local_28,&DAT_038dedd8,local_38);
  FUN_010c4b50(param_1,auStack_88,param_3);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  return;
}


