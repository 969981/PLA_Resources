/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c66f8; name: FUN_014c66f8
 */


void FUN_014c66f8(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int param3;
  char *local_a0;
  long *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  char local_70 [8];
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
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
  uVar3 = thunk_FUN_00d2ec48(param_1 + 0x180,local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_0280f49c(uVar3);
  snprintf(local_70,0x40,"button_waza_%02d",param3);
  local_a0 = local_70;
  FUN_009313e8(&local_98,&local_a0);
  plVar1 = local_98;
  if (local_98 == (long *)0x0) {
    local_90 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_90 = local_98[0xb];
    if (local_98 != (long *)0x0) {
      lStack_88 = local_98[0xc];
      goto joined_r0x014c67ac;
    }
  }
  lStack_88 = *(long *)PTR_PTR_04379d00;
joined_r0x014c67ac:
  if (local_98 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_98[0xd];
  }
  local_78 = (long *)0x0;
  if (local_98 == (long *)0x0) {
    local_78 = local_98;
  }
  else {
    (**(code **)(*local_98 + 0x18))(local_98);
    plVar2 = local_78;
    local_78 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  uVar3 = thunk_FUN_00d2e944(param_1 + 0x180,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  FUN_0280787c(uVar3);
  FUN_014bfd70(param_1,0);
  FUN_014c68cc(param_1,0);
  FUN_014c6634(param_1,1);
  local_70[0] = -3;
  local_70[1] = '\x0f';
  local_70[2] = '|';
  local_70[3] = -10;
  local_70[4] = '\x02';
  local_70[5] = -0x43;
  local_70[6] = 'G';
  local_70[7] = '\x0f';
  pcStack_68 = "anime_L_scr_01_waza_detaile_out";
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_70);
  }
  *(undefined4 *)(param_1 + 0x5bc) = 6;
  return;
}


