/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d803dc; name: FUN_02d803dc
 */


void FUN_02d803dc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 == (long *)0x0) {
LAB_02d80410:
    plVar5 = *(long **)(param_1 + 0x20);
  }
  else {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02d80410;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))();
    plVar5 = *(long **)(param_1 + 0x20);
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      cVar3 = *(char *)(param_1 + 8);
      goto joined_r0x02d8047c;
    }
  }
  cVar3 = *(char *)(param_1 + 8);
joined_r0x02d8047c:
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}


