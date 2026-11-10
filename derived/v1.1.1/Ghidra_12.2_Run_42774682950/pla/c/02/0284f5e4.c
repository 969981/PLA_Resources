/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284f5e4; name: FUN_0284f5e4
 */


void FUN_0284f5e4(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_28 [8];
  
  lVar6 = FUN_00d25b60(auStack_28,*(undefined8 *)(param_1 + 0x58));
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
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
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x90) = lVar6;
  FUN_02c3c658(lVar6 + 0x68,param_1 + 0x60);
  FUN_0022b74c(*(undefined8 *)(lVar6 + 0x60),*(long *)(*(long *)(lVar6 + 0x70) + 600) + 0x80);
  plVar7 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
  (**(code **)(*plVar7 + 0x18))(plVar7,FUN_02c3bc54);
  return;
}


