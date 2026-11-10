/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ecd79c; name: FUN_01ecd79c
 */


void FUN_01ecd79c(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  while (lVar7 != param_2) {
    *(long *)(param_1 + 0x10) = lVar7 + -0x90;
    pcVar6 = *(code **)(lVar7 + -0x78);
    if (pcVar6 == (code *)0x0) {
      plVar5 = *(long **)(lVar7 + -0x88);
    }
    else {
      *(undefined8 *)(lVar7 + -0x70) = 0;
      *(undefined8 *)(lVar7 + -0x68) = 0;
      *(undefined8 *)(lVar7 + -0x80) = 0;
      *(undefined8 *)(lVar7 + -0x78) = 0;
      (*pcVar6)(lVar7 + -0x60);
      plVar5 = *(long **)(lVar7 + -0x88);
    }
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    lVar7 = *(long *)(param_1 + 0x10);
  }
  return;
}


