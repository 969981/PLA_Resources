/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128c1b4; name: FUN_0128c1b4
 */


void FUN_0128c1b4(long param_1,int param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  char *local_78;
  char acStack_70 [32];
  long *local_48;
  
  snprintf(acStack_70,0x20,"pane_P_deco_base_icon_item_%02d",param_2);
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_78 = acStack_70;
  FUN_009313e8(&local_48,&local_78);
  plVar1 = local_48;
  if (local_48 == (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar9 = local_48[0xb];
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))(local_48);
      plVar2 = (long *)plVar8[0x29];
      lVar6 = plVar8[0x2a];
      plVar10 = plVar2 + lVar6 * 6;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      goto joined_r0x0128c360;
    }
  }
  plVar2 = (long *)plVar8[0x29];
  lVar6 = plVar8[0x2a];
  plVar10 = plVar2 + lVar6 * 6;
joined_r0x0128c360:
  if (lVar6 != 0) {
    lVar6 = *plVar2;
    while ((lVar6 != lVar9 && (plVar7 = plVar2 + 6, plVar2 = plVar10, plVar10 != plVar7))) {
      lVar6 = *plVar7;
      plVar2 = plVar7;
    }
  }
  if (plVar1 == (long *)0x0) {
    *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe | param_3 & 1;
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1);
    *(byte *)(plVar2[4] + 0x58) = *(byte *)(plVar2[4] + 0x58) & 0xfe | param_3 & 1;
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return;
}


