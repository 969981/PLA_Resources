/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b38294; name: FUN_02b38294
 */


void FUN_02b38294(long param_1,uint param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_48 [8];
  
  plVar9 = *(long **)(param_1 + 0x1f8);
  uVar10 = (ulong)(int)param_2;
  uVar11 = (long)plVar9 - *(long *)(param_1 + 0x1f0) >> 3;
  if (uVar11 < uVar10) {
    FUN_02b38ea8((long *)(param_1 + 0x1f0),uVar10 - uVar11);
  }
  else if (uVar11 != uVar10) {
    plVar3 = (long *)(*(long *)(param_1 + 0x1f0) + uVar10 * 8);
    while (plVar3 != plVar9) {
      plVar9 = plVar9 + -1;
      plVar7 = (long *)*plVar9;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    *(long **)(param_1 + 0x1f8) = plVar3;
  }
  if (0 < (int)param_2) {
    uVar10 = 0;
    do {
      lVar8 = FUN_02b392e8(auStack_48,*(undefined8 *)(param_1 + 8));
      if (lVar8 != 0) {
        piVar2 = (int *)(lVar8 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar12 = *(long *)(param_1 + 0x1f0);
      plVar9 = *(long **)(lVar12 + uVar10 * 8);
      *(undefined8 *)(lVar12 + uVar10 * 8) = 0;
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 10;
        do {
          iVar6 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *(long *)(lVar12 + uVar10 * 8) = lVar8;
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_2);
  }
  return;
}


