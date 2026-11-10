/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006df1d4; name: FUN_006df1d4
 */


undefined8 * FUN_006df1d4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 8);
  puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x60,0x10);
  *puVar3 = &PTR_LAB_0419ccc0;
  puVar3[1] = plVar6;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  puVar3[3] = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  puVar3[5] = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((undefined8 *)(param_1 + 0x10) != puVar3 + 2) {
    plVar6 = *(long **)(param_1 + 0x50);
    if (plVar6 == (long *)0x0) {
      puVar3[10] = 0;
      return puVar3;
    }
    if (plVar6 == (long *)(param_1 + 0x30)) {
      puVar3[10] = puVar3 + 6;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
      return puVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0x30))();
    puVar3[10] = uVar4;
  }
  return puVar3;
}


