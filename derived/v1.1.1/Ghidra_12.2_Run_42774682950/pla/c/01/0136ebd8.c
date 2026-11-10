/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136ebd8; name: FUN_0136ebd8
 */


void FUN_0136ebd8(long param_1,uint param_2)

{
  long lVar1;
  int param3;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  uint **local_a8;
  long *local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  uint *local_78 [8];
  uint local_34;
  
  lVar5 = *(long *)(param_1 + 0x5c0);
  if (lVar5 == 0) {
    return;
  }
  bVar3 = *(uint *)(lVar5 + 0x1c) < param_2;
  lVar1 = param_1 + 0x5c0;
  if (!bVar3) {
    lVar1 = lVar5;
  }
  for (lVar5 = *(long *)(lVar5 + (ulong)bVar3 * 8); lVar5 != 0;
      lVar5 = *(long *)(lVar5 + (ulong)bVar3 * 8)) {
    bVar3 = *(uint *)(lVar5 + 0x1c) < param_2;
    if (!bVar3) {
      lVar1 = lVar5;
    }
  }
  if (lVar1 == param_1 + 0x5c0) {
    return;
  }
  if (param_2 < *(uint *)(lVar1 + 0x1c)) {
    return;
  }
  local_78[0] = &local_34;
  local_34 = param_2;
  lVar5 = FUN_0136f9bc(param_1 + 0x5b8,&local_34,local_78);
  param3 = *(int *)(lVar5 + 0x28);
  FUN_0136fd78(param_1 + 0x5b8,&local_34);
  snprintf((char *)local_78,0x40,"pane_N_mngm_info_%02d",param3);
  local_a8 = local_78;
  FUN_009313e8(&local_a0,&local_a8);
  plVar2 = local_a0;
  if (local_a0 == (long *)0x0) {
    local_98 = *(long *)PTR_DAT_04379c88;
LAB_0136eef4:
    lStack_90 = *(long *)PTR_PTR_04379d00;
    if (local_a0 != (long *)0x0) goto LAB_0136ecd0;
LAB_0136ef04:
    local_88 = 0;
  }
  else {
    local_98 = local_a0[0xb];
    if (local_a0 == (long *)0x0) goto LAB_0136eef4;
    lStack_90 = local_a0[0xc];
    if (local_a0 == (long *)0x0) goto LAB_0136ef04;
LAB_0136ecd0:
    local_88 = local_a0[0xd];
  }
  local_80 = (long *)0x0;
  if (local_a0 == (long *)0x0) {
    local_80 = local_a0;
  }
  else {
    (**(code **)(*local_a0 + 0x18))(local_a0);
    plVar4 = local_80;
    local_80 = plVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
  }
  lVar5 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_98);
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  snprintf((char *)local_78,0x40,"anime_L_mngm_score_info_00_%02d_close",param3);
  local_a8 = local_78;
  FUN_009313e8(&local_a0,&local_a8);
  plVar2 = local_a0;
  if (local_a0 == (long *)0x0) {
    local_98 = *(long *)PTR_DAT_04379c88;
LAB_0136ef1c:
    plVar4 = (long *)PTR_PTR_04379d00;
  }
  else {
    local_98 = local_a0[0xb];
    if (local_a0 == (long *)0x0) goto LAB_0136ef1c;
    plVar4 = local_a0 + 0xc;
  }
  lStack_90 = *plVar4;
  if (local_a0 == (long *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = local_a0[0xd];
  }
  local_80 = (long *)0x0;
  if (local_a0 == (long *)0x0) {
    local_80 = local_a0;
  }
  else {
    (**(code **)(*local_a0 + 0x18))(local_a0);
    plVar4 = local_80;
    local_80 = plVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
  }
  FUN_00d2df7c(param_1 + 0x180,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  snprintf((char *)local_78,0x40,"anime_L_mngm_score_info_01_%02d_close",param3);
  local_a8 = local_78;
  FUN_009313e8(&local_a0,&local_a8);
  plVar2 = local_a0;
  if (local_a0 == (long *)0x0) {
    local_98 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_98 = local_a0[0xb];
    if (local_a0 != (long *)0x0) {
      lStack_90 = local_a0[0xc];
      goto joined_r0x0136ef44;
    }
  }
  lStack_90 = *(long *)PTR_PTR_04379d00;
joined_r0x0136ef44:
  if (local_a0 == (long *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = local_a0[0xd];
  }
  local_80 = (long *)0x0;
  if (local_a0 == (long *)0x0) {
    local_80 = local_a0;
  }
  else {
    (**(code **)(*local_a0 + 0x18))(local_a0);
    plVar4 = local_80;
    local_80 = plVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
  }
  FUN_00d2df7c(param_1 + 0x180,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  *(int *)(param_1 + 0x5b4) = param3;
  return;
}


