/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016afddc; name: FUN_016afddc
 */


undefined8 FUN_016afddc(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar8 = FUN_016a4548(*(undefined8 *)(param_1 + 0x58));
    if (((uVar8 & 1) == 0) ||
       (uVar8 = FUN_016a2800(*(undefined8 *)(param_1 + 0x60)), (uVar8 & 1) == 0)) {
      uVar9 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x58);
      lVar4 = *(long *)(param_1 + 0x60);
      if (lVar4 != 0) {
        piVar1 = (int *)(lVar4 + 0x50);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar10 = *(long **)(lVar3 + 0x1b0);
      *(long *)(lVar3 + 0x1b0) = lVar4;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 10;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      uVar9 = 1;
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
  }
  else {
    uVar9 = 1;
  }
  return uVar9;
}


