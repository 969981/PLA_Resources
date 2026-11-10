/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0274036c; name: FUN_0274036c
 */


void FUN_0274036c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  long *local_48;
  long local_40;
  long lStack_38;
  long local_30;
  long *local_28;
  
  FUN_013ba5d8(&local_48,param_2 + 8,"+inner");
  plVar1 = local_48;
  if (local_48 == (long *)0x0) {
    plVar2 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar2 = local_48 + 0xb;
  }
  local_40 = *plVar2;
  plVar2 = (long *)PTR_PTR_04379d00;
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 0xc;
  }
  lStack_38 = *plVar2;
  if (local_48 == (long *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = local_48[0xd];
  }
  local_28 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  local_28 = plVar1;
  local_58[0] = 0;
  local_50 = 0x2000;
  FUN_0274045c();
  local_60 = 0;
  FUN_013ba578(param_1,&local_40,local_58,&local_60);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


