/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5dc3c; name: FUN_00d5dc3c
 */


void FUN_00d5dc3c(long param_1,int param_2,uint param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (param_4 == 0) {
    lVar13 = *(long *)(*(long *)(*(long *)(param_1 + (long)param_2 * 0x60 + 0x638) + 0xa8) +
                      (ulong)param_3 * 0x10);
    *(undefined4 *)(lVar13 + 8) = 1;
    iVar4 = 0;
    if (param_2 != 2) {
      iVar4 = param_2;
    }
    *(undefined2 *)(lVar13 + 0xc) = 0;
    *(undefined4 *)(lVar13 + 0x10) = 0;
    *(undefined2 *)(lVar13 + 0x14) = 0;
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(undefined2 *)(lVar13 + 0x1c) = 0;
    *(undefined4 *)(lVar13 + 0x28) = 3;
    *(undefined8 *)(lVar13 + 0x20) = 0xffffffff00000000;
    lVar7 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar4 * 0x28);
    lVar11 = **(long **)(lVar7 + 0x838);
    lVar7 = (*(long **)(lVar7 + 0x838))[1];
    if ((lVar11 != lVar7) &&
       (*(char *)(lVar11 + 0x20) != '\0' || *(uint *)(lVar11 + 0x24) != param_3)) {
      lVar6 = lVar11 + 0x30;
      do {
        lVar10 = lVar6;
        lVar11 = lVar7;
        if (lVar7 == lVar10) break;
        lVar6 = lVar10 + 0x30;
      } while ((*(char *)(lVar10 + 0x20) != '\0') ||
              (lVar11 = lVar10, *(uint *)(lVar10 + 0x24) != param_3));
    }
    if ((lVar11 != 0) && ((lVar7 != lVar11 && (*(int *)(lVar11 + 0x28) != -1)))) {
      FUN_00d53568(param_1,lVar13,*(int *)(lVar11 + 0x28),param_2);
      FUN_00d53960(param_1,param_2,param_3,*(undefined4 *)(lVar13 + 0x48));
    }
  }
  FUN_00d5751c(param_1,0,0);
  uVar8 = FUN_00d5751c(param_1,1,0);
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00d533f0(&local_60,uVar8,2,0);
  plVar14 = (long *)plVar12[0x29];
  lVar13 = plVar12[0x2a];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  plVar5 = plVar14;
  if ((lVar13 != 0) && (*plVar14 != local_60)) {
    lVar11 = lVar13 * 0x30;
    plVar9 = plVar14 + lVar13 * 6;
    do {
      lVar11 = lVar11 + -0x30;
      plVar5 = plVar9;
      if (lVar11 == 0) break;
      plVar1 = plVar14 + 6;
      plVar14 = plVar14 + 6;
      plVar5 = plVar14;
    } while (*plVar1 != local_60);
  }
  if (local_48 == (long *)0x0) {
    *(byte *)(plVar5[4] + 0x58) = *(byte *)(plVar5[4] + 0x58) & 0xfe;
  }
  else {
    (**(code **)(*local_48 + 0x20))(local_48);
    *(byte *)(plVar5[4] + 0x58) = *(byte *)(plVar5[4] + 0x58) & 0xfe;
    (**(code **)(*local_48 + 0x20))(local_48);
  }
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar14 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  *(undefined1 *)(param_1 + 0x6f8) = 0;
  FUN_00d59564(param_1,0);
  local_60 = 0x16445a137decbd35;
  pcStack_58 = "anime_L_inventory_parts_00_L_cursor_inventory_00_catch";
  local_50 = 0x36;
  local_48 = (long *)0x0;
  lVar13 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_60);
    lVar13 = *(long *)(param_1 + 0x2c8);
  }
  local_60 = -0x4ce4c16abc8da8bd;
  pcStack_58 = "anime_L_inventory_parts_00_L_cursor_inventory_00_release";
  local_50 = 0x38;
  local_48 = (long *)0x0;
  if (lVar13 != 0) {
    FUN_0283b1e8(lVar13,&local_60);
  }
  FUN_00d4d908(param_1,1);
  return;
}


