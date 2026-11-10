/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148d248; name: FUN_0148d248
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0148d248(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  FUN_0148cc94(param_1,3);
  if (*(char *)(param_1 + 0x10a0) == '\0') {
    *(char *)(param_1 + 0x10a0) = '\x01';
  }
  plVar6 = DAT_043c3968;
  lVar5 = DAT_043c3950;
  plVar13 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (DAT_043c3968 != (long *)0x0) {
    (**(code **)(*DAT_043c3968 + 0x18))(DAT_043c3968);
  }
  plVar4 = plVar13;
  if ((lVar10 != 0) && (*plVar13 != lVar5)) {
    lVar11 = lVar10 * 0x30;
    plVar9 = plVar13 + lVar10 * 6;
    do {
      lVar11 = lVar11 + -0x30;
      plVar4 = plVar9;
      if (lVar11 == 0) break;
      plVar1 = plVar13 + 6;
      plVar13 = plVar13 + 6;
      plVar4 = plVar13;
    } while (*plVar1 != lVar5);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  *(byte *)(plVar4[4] + 0x58) = *(byte *)(plVar4[4] + 0x58) | 1;
  local_70 = 0xc63b8b496c6c79f0;
  pcStack_68 = "FSYS_X_MENU_ZUKAN_DISABLE";
  local_60 = 0x19;
  local_58 = (long *)0x0;
  uVar8 = FUN_028501c4(&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar6 = DAT_043c3a48;
  lVar5 = DAT_043c3a30;
  lVar11 = *(long *)(param_1 + 0x2c8);
  plVar13 = *(long **)(lVar11 + 0x148);
  lVar10 = *(long *)(lVar11 + 0x150);
  if (DAT_043c3a48 != (long *)0x0) {
    (**(code **)(*DAT_043c3a48 + 0x18))(DAT_043c3a48);
  }
  plVar4 = plVar13;
  if ((lVar10 != 0) && (*plVar13 != lVar5)) {
    lVar12 = lVar10 * 0x30;
    plVar9 = plVar13 + lVar10 * 6;
    do {
      lVar12 = lVar12 + -0x30;
      plVar4 = plVar9;
      if (lVar12 == 0) break;
      plVar1 = plVar13 + 6;
      plVar13 = plVar13 + 6;
      plVar4 = plVar13;
    } while (*plVar1 != lVar5);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar4 == (long *)(*(long *)(lVar11 + 0x148) + *(long *)(lVar11 + 0x150) * 0x30)) {
    lVar10 = 0;
    bVar2 = DAT_00000058;
  }
  else {
    lVar10 = plVar4[4];
    bVar2 = *(byte *)(lVar10 + 0x58);
  }
  if ((uVar8 & 1) == 0) {
    *(byte *)(lVar10 + 0x58) = bVar2 | 1;
    uVar8 = FUN_0195323c(1);
    if ((uVar8 & 1) == 0) {
      local_70 = 0xd26602592132200f;
      pcStack_68 = "anime_L_command_00_active_pokedex";
      local_60 = 0x21;
    }
    else {
      local_70 = 0x97cd4a0d202aef5c;
      pcStack_68 = "anime_L_command_00_passive_pokedex";
      local_60 = 0x22;
    }
    local_58 = (long *)0x0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
    }
  }
  else {
    *(byte *)(lVar10 + 0x58) = bVar2 & 0xfe;
  }
  local_70 = DAT_042708b0;
  pcStack_68 = PTR_s_FSYS_MAP_DISABLE_042708b8;
  local_60 = DAT_042708c0;
  local_58 = (long *)0x0;
  uVar8 = FUN_028501c4(&local_70);
  if ((uVar8 & 1) == 0) {
    uVar7 = FUN_0195323c(1);
    uVar7 = uVar7 ^ 1;
  }
  else {
    uVar7 = 0;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar6 = DAT_043c3a68;
  lVar5 = DAT_043c3a50;
  plVar13 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar10 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if (DAT_043c3a68 != (long *)0x0) {
    (**(code **)(*DAT_043c3a68 + 0x18))(DAT_043c3a68);
  }
  plVar4 = plVar13;
  if ((lVar10 != 0) && (*plVar13 != lVar5)) {
    lVar11 = lVar10 * 0x30;
    plVar9 = plVar13 + lVar10 * 6;
    do {
      lVar11 = lVar11 + -0x30;
      plVar4 = plVar9;
      if (lVar11 == 0) break;
      plVar1 = plVar13 + 6;
      plVar13 = plVar13 + 6;
      plVar4 = plVar13;
    } while (*plVar1 != lVar5);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  bVar3 = *(byte *)(plVar4[4] + 0x58);
  bVar2 = bVar3 | 1;
  if ((uVar7 & 1) == 0) {
    bVar2 = bVar3 & 0xfe;
  }
  *(byte *)(plVar4[4] + 0x58) = bVar2;
  return;
}


