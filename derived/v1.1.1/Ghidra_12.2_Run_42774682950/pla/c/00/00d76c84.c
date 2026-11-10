/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d76c84; name: FUN_00d76c84
 */


void FUN_00d76c84(long param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *__s;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined4 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38;
  char *local_30;
  long local_28;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    puVar2 = (undefined8 *)PTR_PTR_04379d00;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x90) + 0x60);
  }
  __s = (char *)*puVar2;
  pcVar1 = strrchr(__s,0x2f);
  if (pcVar1 != (char *)0x0) {
    __s = pcVar1 + 1;
  }
  local_30 = __s;
  FUN_00d58260(&local_90,&PTR_s_bin_misc_app_config__041ec2f0,&local_30);
  FUN_00d797e0(&local_60,&local_90);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_60 == (long *)0x0) {
    plVar3 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar3 = local_60 + 0xc;
  }
  local_28 = *plVar3;
  FUN_00d7b920(&local_90,&local_28,&DAT_038fd1c1,local_38);
  plVar3 = local_60;
  local_60 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  plVar3 = local_40;
  local_60 = local_90;
  local_90 = (long *)0x0;
  local_58 = uStack_88;
  uStack_50 = local_80;
  local_48 = uStack_78;
  local_40 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  local_40 = local_70;
  local_70 = (long *)0x0;
  local_38 = local_68;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  FUN_00938764(param_1 + 0x58,0,&local_60,0,*(undefined8 *)(param_1 + 0x88),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


