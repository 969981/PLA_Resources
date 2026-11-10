/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5e92c; name: FUN_00d5e92c
 */


void FUN_00d5e92c(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  if ((param_2 & 1) == 0) {
    plVar8 = *(long **)(param_1 + 0x2c8);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x6d8);
    iVar7 = iVar6;
    if (iVar6 == 2) {
      iVar7 = 0;
    }
    lVar11 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar7 * 0x28);
    lVar11 = *(long *)(lVar11 + 0x8b0);
    piVar3 = (int *)(lVar11 + 0x20);
    if (*(int *)(lVar11 + 0x28) != 0) {
      piVar3 = (int *)(lVar11 + 0x24);
    }
    FUN_00d5e310(param_1,iVar6,*(int *)(lVar11 + 0x14) + *piVar3 * *(int *)(lVar11 + 0x10));
    plVar8 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)plVar8[0x29];
  lVar11 = plVar8[0x2a];
  if ((lVar11 != 0) && (*plVar9 != 0x2dc110817bf2fd6c)) {
    plVar10 = plVar9 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar9 = plVar10;
        break;
      }
      plVar2 = plVar9 + 6;
      plVar1 = plVar9 + 6;
      plVar9 = plVar2;
    } while (*plVar1 != 0x2dc110817bf2fd6c);
  }
  *(byte *)(plVar9[4] + 0x58) = *(byte *)(plVar9[4] + 0x58) & 0xfe;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(undefined2 *)(param_1 + 0x1618) = 0;
  return;
}


