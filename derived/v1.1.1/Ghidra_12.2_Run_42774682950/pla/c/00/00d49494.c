/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d49494; name: FUN_00d49494
 */


void FUN_00d49494(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  plVar6 = (long *)param_1[0x59];
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar2 = (long *)plVar6[0x29];
  lVar7 = plVar6[0x2a];
  if ((lVar7 == 0) || (*plVar2 == 0x3f91b1bdcc5304d3)) {
    plVar8 = plVar2;
  }
  else {
    lVar9 = lVar7 * 0x30;
    plVar10 = plVar2;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) goto LAB_00d496a8;
      plVar1 = plVar10 + 6;
      plVar8 = plVar10 + 6;
      plVar10 = plVar10 + 6;
    } while (*plVar1 != 0x3f91b1bdcc5304d3);
  }
  if (plVar8 == plVar2 + lVar7 * 6) {
LAB_00d496a8:
    lVar7 = 0;
  }
  else {
    lVar7 = plVar8[4];
  }
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined4 *)(lVar7 + 0x38) = 0;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
  plVar2 = (long *)plVar6[0x29];
  lVar7 = plVar6[0x2a];
  if ((lVar7 == 0) || (*plVar2 == -0xe45e946e5173a11)) {
    plVar8 = plVar2;
  }
  else {
    lVar9 = lVar7 * 0x30;
    plVar10 = plVar2;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) goto LAB_00d496b0;
      plVar1 = plVar10 + 6;
      plVar8 = plVar10 + 6;
      plVar10 = plVar10 + 6;
    } while (*plVar1 != -0xe45e946e5173a11);
  }
  if (plVar8 == plVar2 + lVar7 * 6) {
LAB_00d496b0:
    lVar7 = 0;
  }
  else {
    lVar7 = plVar8[4];
  }
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined4 *)(lVar7 + 0x38) = 0;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
  plVar2 = (long *)plVar6[0x29];
  lVar7 = plVar6[0x2a];
  if ((lVar7 == 0) || (*plVar2 == -0xa5f9ab5d0b77feb)) {
    plVar8 = plVar2;
  }
  else {
    lVar9 = lVar7 * 0x30;
    plVar10 = plVar2;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) goto LAB_00d496b8;
      plVar1 = plVar10 + 6;
      plVar8 = plVar10 + 6;
      plVar10 = plVar10 + 6;
    } while (*plVar1 != -0xa5f9ab5d0b77feb);
  }
  if (plVar8 == plVar2 + lVar7 * 6) {
LAB_00d496b8:
    lVar7 = 0;
  }
  else {
    lVar7 = plVar8[4];
  }
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined4 *)(lVar7 + 0x38) = 0;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
  plVar2 = plVar6 + 10;
  do {
    iVar5 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined2 *)((long)param_1 + 0x1645) = 0x101;
  FUN_00d496e8(param_1);
  FUN_00d49898(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1,param_1 + 0xbe);
  *(undefined1 *)((long)param_1 + 0x1641) = *(undefined1 *)((long)param_1 + 0x5f3);
  (**(code **)(*param_1 + 0xe8))(param_1);
  FUN_00d49bb4(param_1);
  FUN_00d49d34(param_1,0);
  return;
}


