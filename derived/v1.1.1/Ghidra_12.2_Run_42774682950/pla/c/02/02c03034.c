/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c03034; name: FUN_02c03034
 */


void FUN_02c03034(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(param_1 + 0x3a0);
  plVar8 = *(long **)(param_1 + 0x3a8);
  while (plVar8 != plVar7) {
    plVar8 = plVar8 + -1;
    plVar5 = (long *)*plVar8;
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
  *(long **)(param_1 + 0x3a8) = plVar7;
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_1 + 0x3d8);
  FUN_02a6fce8(param_1);
  return;
}


