/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc70e0; name: FUN_02cc70e0
 */


void FUN_02cc70e0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = *(long **)(param_1 + 0xa8);
  plVar9 = *(long **)(param_1 + 0xb0);
  while (plVar9 != plVar8) {
    plVar9 = plVar9 + -1;
    plVar5 = (long *)*plVar9;
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
      }
    }
  }
  *(long **)(param_1 + 0xb0) = plVar8;
  if (*(char *)(param_1 + 0x1e0) != '\0') {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  pcVar7 = *(code **)(param_1 + 0xe8);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    (*pcVar7)(param_1 + 0x100);
  }
  pcVar7 = *(code **)(param_1 + 0x168);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    (*pcVar7)(param_1 + 0x180);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    plVar8 = *(long **)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar6 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
        return;
      }
    }
  }
  return;
}


