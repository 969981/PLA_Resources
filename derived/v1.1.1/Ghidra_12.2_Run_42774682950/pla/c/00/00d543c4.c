/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d543c4; name: FUN_00d543c4
 */


void FUN_00d543c4(long param_1,int param_2,uint param_3,byte param_4)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  byte unaff_1000018c;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long **pplVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *local_108;
  long lStack_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  long lStack_e0;
  long local_d8;
  long *local_d0;
  char local_c8 [104];
  
  pcVar1 = "pane_L_inventory_parts_00_L_btn_main_%02d_P_icon_check_00";
  if (param_2 != 0) {
    pcVar1 = "pane_L_inventory_parts_00_L_btn_sub_%02d_P_icon_check_00";
  }
  iVar10 = snprintf(local_c8,0x60,pcVar1,(ulong)param_3);
  plVar15 = *(long **)(param_1 + 0x2c8);
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7 = PTR_DAT_04379ce0;
  puVar6 = PTR_DAT_04379cd8;
  puVar5 = PTR_DAT_04379cd0;
  if (local_c8[0] == '\0') {
    plVar12 = (long *)FUN_00938550(iVar10);
    if (plVar12 == (long *)0x0) goto LAB_00d54484;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    if (plVar12 == (long *)0x0) goto LAB_00d547c0;
LAB_00d54488:
    plVar14 = plVar12 + 0xb;
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar11;
    FUN_02a47cd8(&local_e8,uVar11,local_c8);
    plVar12 = local_e8;
LAB_00d54484:
    if (plVar12 != (long *)0x0) goto LAB_00d54488;
LAB_00d547c0:
    plVar14 = (long *)PTR_DAT_04379c88;
  }
  lVar17 = *plVar14;
  if (plVar12 == (long *)0x0) {
    plVar14 = (long *)plVar15[0x29];
    plVar16 = plVar14 + plVar15[0x2a] * 6;
    if (plVar15[0x2a] != 0) goto LAB_00d544c8;
LAB_00d5478c:
    if (plVar12 != (long *)0x0) goto LAB_00d544fc;
LAB_00d546e4:
    *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe | unaff_1000018c & 1;
  }
  else {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plVar14 = (long *)plVar15[0x29];
    lVar2 = plVar15[0x2a];
    plVar16 = plVar14 + lVar2 * 6;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    if (lVar2 == 0) goto LAB_00d5478c;
LAB_00d544c8:
    if (*plVar14 == lVar17) goto LAB_00d5478c;
    do {
      plVar14 = plVar14 + 6;
      plVar8 = plVar16;
      bVar9 = unaff_1000018c;
      if (plVar16 == plVar14) break;
      plVar8 = plVar14;
      bVar9 = param_4;
    } while (*plVar14 != lVar17);
    unaff_1000018c = bVar9;
    plVar14 = plVar8;
    if (plVar12 == (long *)0x0) goto LAB_00d546e4;
LAB_00d544fc:
    (**(code **)(*plVar12 + 0x20))(plVar12);
    *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe | unaff_1000018c & 1;
    (**(code **)(*plVar12 + 0x20))(plVar12);
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  puVar7 = PTR_DAT_04379ce0;
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 10;
    do {
      iVar10 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  pcVar1 = "anime_L_inventory_parts_00_L_btn_main_%02d_selected";
  if (param_2 != 0) {
    pcVar1 = "anime_L_inventory_parts_00_L_btn_sub_%02d_selected";
  }
  iVar10 = snprintf(local_c8,0x60,pcVar1,(ulong)param_3);
  if (local_c8[0] == '\0') {
    local_e8 = (long *)FUN_00938550(iVar10);
    if (local_e8 == (long *)0x0) goto LAB_00d545bc;
    (**(code **)(*local_e8 + 0x18))(local_e8);
    if (local_e8 == (long *)0x0) goto LAB_00d547ec;
LAB_00d545c0:
    plVar15 = (long *)local_e8[0xb];
    if (local_e8 != (long *)0x0) goto LAB_00d545cc;
LAB_00d547fc:
    lStack_e0 = *(long *)PTR_PTR_04379d00;
    if (local_e8 == (long *)0x0) goto LAB_00d5480c;
LAB_00d545d8:
    local_d8 = local_e8[0xd];
    plVar12 = local_e8;
  }
  else {
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar11;
    FUN_02a47cd8(&local_e8,uVar11,local_c8);
LAB_00d545bc:
    if (local_e8 != (long *)0x0) goto LAB_00d545c0;
LAB_00d547ec:
    plVar15 = *(long **)PTR_DAT_04379c88;
    if (local_e8 == (long *)0x0) goto LAB_00d547fc;
LAB_00d545cc:
    lStack_e0 = local_e8[0xc];
    if (local_e8 != (long *)0x0) goto LAB_00d545d8;
LAB_00d5480c:
    local_d8 = 0;
    plVar12 = local_e8;
  }
  local_d0 = (long *)0x0;
  local_e8 = plVar15;
  if (plVar12 == (long *)0x0) {
    local_d0 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    local_d0 = plVar12;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  pcVar1 = "anime_L_inventory_parts_00_L_btn_main_%02d_unselected";
  if (param_2 != 0) {
    pcVar1 = "anime_L_inventory_parts_00_L_btn_sub_%02d_unselected";
  }
  iVar10 = snprintf(local_c8,0x60,pcVar1,(ulong)param_3);
  if (local_c8[0] == '\0') {
    local_108 = (long *)FUN_00938550(iVar10);
    if (local_108 == (long *)0x0) goto LAB_00d5463c;
    (**(code **)(*local_108 + 0x18))(local_108);
    if (local_108 == (long *)0x0) goto LAB_00d54834;
LAB_00d54640:
    plVar15 = (long *)local_108[0xb];
    if (local_108 != (long *)0x0) goto LAB_00d5464c;
LAB_00d54844:
    lStack_100 = *(long *)PTR_PTR_04379d00;
    if (local_108 == (long *)0x0) goto LAB_00d54854;
LAB_00d54658:
    local_f8 = local_108[0xd];
    plVar12 = local_108;
  }
  else {
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar11 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar11;
    FUN_02a47cd8(&local_108,uVar11,local_c8);
LAB_00d5463c:
    if (local_108 != (long *)0x0) goto LAB_00d54640;
LAB_00d54834:
    plVar15 = *(long **)PTR_DAT_04379c88;
    if (local_108 == (long *)0x0) goto LAB_00d54844;
LAB_00d5464c:
    lStack_100 = local_108[0xc];
    if (local_108 != (long *)0x0) goto LAB_00d54658;
LAB_00d54854:
    local_f8 = 0;
    plVar12 = local_108;
  }
  local_f0 = (long *)0x0;
  local_108 = plVar15;
  if (plVar12 == (long *)0x0) {
    local_f0 = (long *)0x0;
    lVar17 = *(long *)(param_1 + 0x2c8);
    if ((unaff_1000018c & 1) == 0) goto LAB_00d54674;
LAB_00d54760:
    if (lVar17 == 0) goto LAB_00d54690;
    FUN_0283b430(lVar17,&local_108);
    lVar17 = *(long *)(param_1 + 0x2c8);
    if (lVar17 == 0) goto LAB_00d54690;
    pplVar13 = &local_e8;
  }
  else {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    local_f0 = plVar12;
    (**(code **)(*plVar12 + 0x20))(plVar12);
    lVar17 = *(long *)(param_1 + 0x2c8);
    if ((unaff_1000018c & 1) != 0) goto LAB_00d54760;
LAB_00d54674:
    if (lVar17 == 0) goto LAB_00d54690;
    FUN_0283b430(lVar17,&local_e8);
    lVar17 = *(long *)(param_1 + 0x2c8);
    if (lVar17 == 0) goto LAB_00d54690;
    pplVar13 = &local_108;
  }
  FUN_0283b1e8(lVar17,pplVar13);
LAB_00d54690:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  return;
}


