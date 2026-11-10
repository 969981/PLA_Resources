/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c8458; name: FUN_014c8458
 */


void FUN_014c8458(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int param3;
  long lVar4;
  char *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  char local_70 [8];
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_28;
  
  lVar4 = *param_1;
  local_70[0] = -0x76;
  local_70[1] = -0x4f;
  local_70[2] = '\x1b';
  local_70[3] = '*';
  local_70[4] = -1;
  local_70[5] = '6';
  local_70[6] = '$';
  local_70[7] = '&';
  pcStack_68 = "grid_waza_panel";
  local_60 = 0xf;
  local_58 = (long *)0x0;
  uVar3 = thunk_FUN_00d2ec48(lVar4 + 0x180,local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_0280f49c(uVar3);
  snprintf(local_70,0x40,"button_waza_%02d",param3);
  local_98 = local_70;
  FUN_009313e8(&local_28,&local_98);
  plVar2 = local_28;
  if (local_28 == (long *)0x0) {
    local_90 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_90 = local_28[0xb];
    if (local_28 != (long *)0x0) {
      lStack_88 = local_28[0xc];
      goto joined_r0x014c850c;
    }
  }
  lStack_88 = *(long *)PTR_PTR_04379d00;
joined_r0x014c850c:
  if (local_28 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_28[0xd];
  }
  local_78 = (long *)0x0;
  if (local_28 == (long *)0x0) {
    local_78 = local_28;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    plVar1 = local_78;
    local_78 = plVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
  }
  thunk_FUN_00d2e944(lVar4 + 0x180,&local_90);
  FUN_02808d3c();
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


