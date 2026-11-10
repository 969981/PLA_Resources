/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5b4b0; name: FUN_00d5b4b0
 */


void FUN_00d5b4b0(long param_1,int param_2,uint param_3,byte param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  char *__format;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  char local_b0 [96];
  long *local_48;
  
  if (param_2 == 0) {
    if (0x2f < param_3) {
      return;
    }
    __format = "pane_L_inventory_parts_00_L_btn_main_%02d_Pi_icon_use_field_00";
  }
  else {
    if (param_2 != 1) {
      return;
    }
    if (0x2f < param_3) {
      return;
    }
    __format = "pane_L_inventory_parts_00_L_btn_sub_%02d_Pi_icon_use_field_00";
  }
  iVar4 = snprintf(local_b0,0x60,__format);
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_b0[0] == '\0') {
    plVar6 = (long *)FUN_00938550(iVar4);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar5 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar5;
    FUN_02a47cd8(&local_48,uVar5,local_b0);
    plVar6 = local_48;
  }
  if (plVar6 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_04379c88;
    plVar1 = (long *)plVar9[0x29];
    lVar7 = plVar9[0x2a];
    plVar11 = plVar1 + lVar7 * 6;
  }
  else {
    lVar10 = plVar6[0xb];
    (**(code **)(*plVar6 + 0x18))(plVar6);
    plVar1 = (long *)plVar9[0x29];
    lVar7 = plVar9[0x2a];
    plVar11 = plVar1 + lVar7 * 6;
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar7 != 0) {
    lVar7 = *plVar1;
    while ((lVar7 != lVar10 && (plVar8 = plVar1 + 6, plVar1 = plVar11, plVar11 != plVar8))) {
      lVar7 = *plVar8;
      plVar1 = plVar8;
    }
  }
  if (plVar6 == (long *)0x0) {
    *(byte *)(plVar1[4] + 0x58) = *(byte *)(plVar1[4] + 0x58) & 0xfe | param_4 & 1;
  }
  else {
    (**(code **)(*plVar6 + 0x20))(plVar6);
    *(byte *)(plVar1[4] + 0x58) = *(byte *)(plVar1[4] + 0x58) & 0xfe | param_4 & 1;
    (**(code **)(*plVar6 + 0x20))(plVar6);
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return;
}


