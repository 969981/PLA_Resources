/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01247c6c; name: FUN_01247c6c
 */


void FUN_01247c6c(long *param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = param_1[1];
  plVar9 = *(long **)(*param_1 + 0x1c0);
  if (plVar9 == (long *)0x0) {
    lVar7 = *(long *)(lVar10 + 0xb0);
    if (lVar7 != 0) {
      plVar9 = *(long **)(lVar7 + 0x270);
      if (plVar9 != *(long **)(lVar7 + 0x278)) {
        iVar5 = 0;
        do {
          plVar8 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar8 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar8 == 0x50684b8bbd8051aa) goto LAB_01247ebc;
          plVar9 = plVar9 + 1;
          iVar5 = iVar5 + 1;
        } while (*(long **)(lVar7 + 0x278) != plVar9);
      }
    }
    iVar5 = 0;
LAB_01247ebc:
    FUN_02c2e33c(lVar10,iVar5,0);
  }
  else {
    plVar8 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *(long *)(lVar10 + 0xb0);
    if (lVar7 != 0) {
      plVar6 = *(long **)(lVar7 + 0x270);
      if (plVar6 != *(long **)(lVar7 + 0x278)) {
        iVar5 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar6 != 0) {
            plVar1 = (long *)(*plVar6 + 0x58);
          }
          if (*plVar1 == 0x50684b8bbd8051aa) goto LAB_01247d0c;
          plVar6 = plVar6 + 1;
          iVar5 = iVar5 + 1;
        } while (*(long **)(lVar7 + 0x278) != plVar6);
      }
    }
    iVar5 = 0;
LAB_01247d0c:
    FUN_02c2e33c(lVar10,iVar5,plVar9);
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  lVar10 = param_1[2];
  plVar9 = *(long **)(*param_1 + 0x1c0);
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar7 = lVar10 + (ulong)param_2 * 0x30;
  lVar11 = *(long *)(lVar7 + 0x498);
  *(undefined4 *)(lVar7 + 0x490) = 0;
  if (*(char *)(lVar11 + 0x7c) == '\0') {
    iVar5 = 0;
  }
  else {
    uVar4 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar9[0xb],*(undefined2 *)(lVar11 + 0x78));
    *(undefined2 *)(lVar11 + 0x7a) = uVar4;
    iVar5 = *(int *)(lVar7 + 0x490);
    if (0xc < iVar5) goto LAB_01247dd8;
  }
  lVar7 = (long)iVar5;
  lVar10 = lVar10 + (ulong)param_2 * 0x30;
  *(undefined8 *)(lVar10 + 0x4a0) = (&DAT_043eb278)[lVar7 * 6];
  *(undefined8 *)(lVar10 + 0x4a8) = (&DAT_043eb280)[lVar7 * 6];
  *(undefined8 *)(lVar10 + 0x4b0) = (&DAT_043eb288)[lVar7 * 6];
  plVar8 = (long *)(&DAT_043eb290)[lVar7 * 6];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(lVar10 + 0x4b8);
  *(long **)(lVar10 + 0x4b8) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
LAB_01247dd8:
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01247e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


