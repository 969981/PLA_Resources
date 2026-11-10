/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283bd6c; name: FUN_0283bd6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0283bd6c(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  plVar11 = *(long **)(param_1 + 0x148);
  lVar6 = *(long *)(param_1 + 0x150);
  lVar13 = *param_2;
  plVar10 = (long *)param_2[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar12 = plVar11;
  if ((lVar6 != 0) && (*plVar11 != lVar13)) {
    lVar9 = lVar6 * 0x30;
    plVar7 = plVar11 + lVar6 * 6;
    do {
      lVar9 = lVar9 + -0x30;
      plVar12 = plVar7;
      if (lVar9 == 0) break;
      plVar8 = plVar11 + 6;
      plVar11 = plVar11 + 6;
      plVar12 = plVar11;
    } while (*plVar8 != lVar13);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar12 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)plVar12[4];
  }
  plVar10 = *(long **)(param_1 + 0x98);
  lVar6 = *(long *)(param_1 + 0xa0);
  lVar13 = *param_3;
  plVar12 = (long *)param_3[3];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar7 = plVar10;
  if ((lVar6 != 0) && (*plVar10 != lVar13)) {
    lVar9 = lVar6 * 0x30;
    plVar8 = plVar10 + lVar6 * 6;
    do {
      lVar9 = lVar9 + -0x30;
      plVar7 = plVar8;
      if (lVar9 == 0) break;
      plVar1 = plVar10 + 6;
      plVar10 = plVar10 + 6;
      plVar7 = plVar10;
    } while (*plVar1 != lVar13);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if ((plVar7 == (long *)(*(long *)(param_1 + 0x98) + *(long *)(param_1 + 0xa0) * 0x30)) ||
     (plVar10 = (long *)plVar7[4], plVar10 == (long *)0x0)) {
    uVar5 = (**(code **)(*_DAT_00000060 + 0x70))
                      (_DAT_00000060,*(long *)(_DAT_00000058 + 0x58) + 0x3010,param_4);
  }
  else {
    plVar12 = plVar10 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = (**(code **)(*(long *)plVar10[0xc] + 0x70))
                      ((long *)plVar10[0xc],*(long *)(plVar10[0xb] + 0x58) + 0x3010,param_4);
    do {
      iVar4 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  lVar6 = (**(code **)(*plVar11 + 0x58))(plVar11,0);
  *(undefined8 *)(*(long *)(lVar6 + 0x18) + 8) = uVar5;
  return;
}


