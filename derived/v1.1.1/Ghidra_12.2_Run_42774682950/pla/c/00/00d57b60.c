/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d57b60; name: FUN_00d57b60
 */


void FUN_00d57b60(long param_1,int param_2,byte param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  long local_f0;
  undefined8 *local_e8;
  long lStack_d8;
  long *local_d0;
  char local_c8 [96];
  long *local_68;
  
  if (((DAT_043abb88 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043abb88), iVar5 != 0)) {
    DAT_043abb28 = 0xbb520343a95e4c2a;
    DAT_043abb30 = "pane_L_inventory_parts_00_L_btn_main_%02d_";
    DAT_043abb38 = 0x2a;
    DAT_043abb40 = 0;
    DAT_043abb48 = 0x370263a375a4dcd;
    DAT_043abb50 = "pane_L_inventory_parts_00_L_btn_sub_%02d_";
    DAT_043abb58 = 0x29;
    DAT_043abb60 = 0;
    DAT_043abb68 = 0xaeebab01ef9b4158;
    DAT_043abb70 = "pane_L_inventory_parts_00_L_btn_catch_%02d_";
    DAT_043abb78 = 0x2b;
    DAT_043abb80 = 0;
    FUN_00100250(0xd48d90,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043abb88);
  }
  param_3 = param_3 & 1;
  if (param_2 == 2) {
    if ((DAT_043abc38 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_043abc38);
      local_e8 = &DAT_043abbd8;
      if (iVar5 != 0) {
        DAT_043abbd8 = 0x222e44eae60ccbde;
        DAT_043abbe0 = "P_item_base_00";
        DAT_043abbe8 = 0xe;
        DAT_043abbf0 = 0;
        DAT_043abbf8 = 0x565800faa228ad58;
        DAT_043abc00 = "P_item_base_selected_00";
        DAT_043abc08 = 0x17;
        DAT_043abc10 = 0;
        DAT_043abc28 = 0x17;
        DAT_043abc30 = 0;
        DAT_043abc18 = 0x565801faa228af0b;
        DAT_043abc20 = "P_item_base_selected_01";
        FUN_00100250(&LAB_00d48e40,0,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043abc38);
      }
      local_f0 = 3;
    }
    else {
      local_f0 = 3;
      local_e8 = &DAT_043abbd8;
    }
  }
  else if ((DAT_043abbd0 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(&DAT_043abbd0);
    local_e8 = &DAT_043abb90;
    if (iVar5 == 0) {
      local_f0 = 2;
    }
    else {
      DAT_043abb90 = 0x222e44eae60ccbde;
      DAT_043abb98 = "P_item_base_00";
      DAT_043abba0 = 0xe;
      DAT_043abba8 = 0;
      DAT_043abbb0 = 0x565800faa228ad58;
      DAT_043abbb8 = "P_item_base_selected_00";
      DAT_043abbc0 = 0x17;
      DAT_043abbc8 = 0;
      FUN_00100250(0xd48df0,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043abbd0);
      local_f0 = 2;
    }
  }
  else {
    local_f0 = 2;
    local_e8 = &DAT_043abb90;
  }
  lVar10 = (long)param_2;
  uVar2 = *(uint *)(&DAT_03a785c0 + lVar10 * 4);
  lVar11 = 0;
  do {
    pcVar14 = (&DAT_043abb30)[lVar10 * 4];
    if (*pcVar14 == '\0') {
      plVar15 = (long *)FUN_00938550();
      if (plVar15 == (long *)0x0) goto LAB_00d57c3c;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      if (plVar15 == (long *)0x0) goto LAB_00d57f2c;
LAB_00d57c40:
      plVar7 = plVar15 + 0xc;
    }
    else {
      if (((*PTR_DAT_04379cd0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar6 = *(undefined8 *)PTR_DAT_04379cd8;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
      FUN_02a47cd8(&local_68,uVar6,pcVar14);
      plVar15 = local_68;
LAB_00d57c3c:
      if (plVar15 != (long *)0x0) goto LAB_00d57c40;
LAB_00d57f2c:
      plVar7 = (long *)PTR_PTR_04379d00;
    }
    lStack_d8 = *plVar7;
    pcVar14 = (char *)local_e8[lVar11 * 4 + 1];
    if (*pcVar14 == '\0') {
      plVar7 = (long *)FUN_00938550();
      if (plVar7 == (long *)0x0) goto LAB_00d57c98;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      if (plVar7 == (long *)0x0) goto LAB_00d57f58;
LAB_00d57c9c:
      local_68 = plVar7 + 0xc;
    }
    else {
      if (((*PTR_DAT_04379cd0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379cd0);
      }
      uVar6 = *(undefined8 *)PTR_DAT_04379cd8;
      *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
      FUN_02a47cd8(&local_68,uVar6,pcVar14);
      plVar7 = local_68;
LAB_00d57c98:
      if (plVar7 != (long *)0x0) goto LAB_00d57c9c;
LAB_00d57f58:
      local_68 = (long *)PTR_PTR_04379d00;
    }
    local_68 = (long *)*local_68;
    FUN_00d58260(&local_d0,&lStack_d8,&local_68);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    uVar13 = 0;
    do {
      plVar15 = (long *)PTR_PTR_04379d00;
      if (local_d0 != (long *)0x0) {
        plVar15 = local_d0 + 0xc;
      }
      iVar5 = snprintf(local_c8,0x60,(char *)*plVar15,(ulong)uVar13);
      plVar15 = *(long **)(param_1 + 0x2c8);
      if (plVar15 != (long *)0x0) {
        plVar7 = plVar15 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = (int)*plVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (local_c8[0] == '\0') {
        plVar7 = (long *)FUN_00938550(iVar5);
        if (plVar7 == (long *)0x0) goto LAB_00d57d90;
        (**(code **)(*plVar7 + 0x18))(plVar7);
        if (plVar7 == (long *)0x0) goto LAB_00d57f84;
LAB_00d57d94:
        lVar12 = plVar7[0xb];
        if (plVar7 != (long *)0x0) goto LAB_00d57da0;
LAB_00d57f94:
        plVar1 = (long *)plVar15[0x29];
        lVar8 = plVar15[0x2a];
        plVar16 = plVar1 + lVar8 * 6;
      }
      else {
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar6 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
        FUN_02a47cd8(&local_68,uVar6,local_c8);
        plVar7 = local_68;
LAB_00d57d90:
        if (plVar7 != (long *)0x0) goto LAB_00d57d94;
LAB_00d57f84:
        lVar12 = *(long *)PTR_DAT_04379c88;
        if (plVar7 == (long *)0x0) goto LAB_00d57f94;
LAB_00d57da0:
        (**(code **)(*plVar7 + 0x18))(plVar7);
        plVar1 = (long *)plVar15[0x29];
        lVar8 = plVar15[0x2a];
        plVar16 = plVar1 + lVar8 * 6;
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      if (lVar8 != 0) {
        lVar8 = *plVar1;
        while (lVar8 != lVar12) {
          plVar9 = plVar1 + 6;
          plVar1 = plVar16;
          if (plVar16 == plVar9) break;
          plVar1 = plVar9;
          lVar8 = *plVar9;
        }
      }
      if (plVar7 == (long *)0x0) {
        *(byte *)(plVar1[4] + 0x58) = *(byte *)(plVar1[4] + 0x58) & 0xfe | param_3;
      }
      else {
        (**(code **)(*plVar7 + 0x20))(plVar7);
        *(byte *)(plVar1[4] + 0x58) = *(byte *)(plVar1[4] + 0x58) & 0xfe | param_3;
        (**(code **)(*plVar7 + 0x20))(plVar7);
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (plVar15 != (long *)0x0) {
        plVar7 = plVar15 + 10;
        do {
          iVar5 = (int)*plVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar2);
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == local_f0) {
      *(byte *)(param_1 + lVar10 + 0x1642) = param_3;
      return;
    }
  } while( true );
}


