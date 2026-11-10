/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a46cc; name: FUN_011a46cc
 */


void FUN_011a46cc(long param_1,int param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  char *local_90;
  long *local_88;
  char acStack_80 [32];
  
  plVar7 = *(long **)(param_1 + 0x2c8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  snprintf(acStack_80,0x20,"pane_P_deco_base_icon_item_%02d",param_2);
  local_90 = acStack_80;
  FUN_009313e8(&local_88,&local_90);
  plVar1 = local_88;
  if (local_88 == (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_04379c88;
LAB_011a4980:
    plVar8 = (long *)plVar7[0x29];
    lVar5 = plVar7[0x2a];
    plVar10 = plVar8 + lVar5 * 6;
  }
  else {
    lVar9 = local_88[0xb];
    if (local_88 == (long *)0x0) goto LAB_011a4980;
    (**(code **)(*local_88 + 0x18))(local_88);
    plVar8 = (long *)plVar7[0x29];
    lVar5 = plVar7[0x2a];
    plVar10 = plVar8 + lVar5 * 6;
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (lVar5 != 0) {
    lVar5 = *plVar8;
    while ((lVar5 != lVar9 && (plVar6 = plVar8 + 6, plVar8 = plVar10, plVar10 != plVar6))) {
      lVar5 = *plVar6;
      plVar8 = plVar6;
    }
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe | param_3 & 1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  snprintf(acStack_80,0x20,"pane_P_base_icon_Important_%02d",param_2);
  local_90 = acStack_80;
  FUN_009313e8(&local_88,&local_90);
  plVar1 = local_88;
  if (local_88 == (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar9 = local_88[0xb];
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))(local_88);
      plVar8 = (long *)plVar7[0x29];
      lVar5 = plVar7[0x2a];
      plVar10 = plVar8 + lVar5 * 6;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      goto joined_r0x011a49bc;
    }
  }
  plVar8 = (long *)plVar7[0x29];
  lVar5 = plVar7[0x2a];
  plVar10 = plVar8 + lVar5 * 6;
joined_r0x011a49bc:
  if (lVar5 != 0) {
    lVar5 = *plVar8;
    while ((lVar5 != lVar9 && (plVar6 = plVar8 + 6, plVar8 = plVar10, plVar10 != plVar6))) {
      lVar5 = *plVar6;
      plVar8 = plVar6;
    }
  }
  if (plVar1 == (long *)0x0) {
    *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe | param_3 & 1;
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1);
    *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe | param_3 & 1;
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


