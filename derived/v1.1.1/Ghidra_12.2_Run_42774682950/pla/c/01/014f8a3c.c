/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f8a3c; name: FUN_014f8a3c
 */


void FUN_014f8a3c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_014f9fb0(&local_70,*(undefined8 *)(param_1 + 8));
  uVar4 = local_70;
  local_70 = 0;
  lVar2 = *(long *)(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5c0) = uVar4;
  if (lVar2 != 0) {
    FUN_01500024(param_1 + 0x5c8);
  }
  *(undefined8 *)(param_1 + 0x5d0) = uStack_60;
  *(undefined8 *)(param_1 + 0x5d8) = local_58;
  *(undefined8 *)(param_1 + 0x5c8) = local_68;
  snprintf((char *)&local_70,0x40,"L_info_basedata_%02d",0);
  uVar4 = *(undefined8 *)(param_1 + 0x5c0);
  local_a0 = &local_70;
  FUN_009313e8(&local_98,&local_a0);
  plVar1 = local_98;
  if (local_98 == (long *)0x0) {
    plVar3 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar3 = local_98 + 0xb;
  }
  local_90 = *plVar3;
  if (local_98 == (long *)0x0) {
    plVar3 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar3 = local_98 + 0xc;
  }
  lStack_88 = *plVar3;
  if (local_98 == (long *)0x0) {
    local_80 = 0;
    local_78 = (long *)0x0;
  }
  else {
    local_80 = local_98[0xd];
    local_78 = (long *)0x0;
    (**(code **)(*local_98 + 0x18))(local_98);
    plVar3 = local_78;
    local_78 = plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
  }
  thunk_FUN_014efa78(uVar4,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  snprintf((char *)&local_70,0x40,"L_info_basedata_%02d",1);
  lVar2 = *(long *)(param_1 + 0x5c0);
  local_a0 = &local_70;
  FUN_009313e8(&local_98,&local_a0);
  plVar1 = local_98;
  if (local_98 == (long *)0x0) {
    plVar3 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar3 = local_98 + 0xb;
  }
  local_90 = *plVar3;
  if (local_98 == (long *)0x0) {
    lStack_88 = *(long *)PTR_PTR_04379d00;
  }
  else {
    lStack_88 = local_98[0xc];
    if (local_98 != (long *)0x0) {
      local_80 = local_98[0xd];
      local_78 = (long *)0x0;
      (**(code **)(*local_98 + 0x18))(local_98);
      plVar3 = local_78;
      local_78 = plVar1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      goto LAB_014f8bd8;
    }
  }
  local_80 = 0;
  local_78 = (long *)0x0;
LAB_014f8bd8:
  thunk_FUN_014efa78(lVar2 + 0x110,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  return;
}


