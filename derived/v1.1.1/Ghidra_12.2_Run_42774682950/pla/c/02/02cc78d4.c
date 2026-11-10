/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc78d4; name: FUN_02cc78d4
 */


void FUN_02cc78d4(long param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auStack_40 [8];
  long *local_38;
  
  plVar3 = *(long **)(param_1 + 0xa8);
  plVar9 = *(long **)(param_1 + 0xb0);
  while (plVar9 != plVar3) {
    plVar9 = plVar9 + -1;
    plVar6 = (long *)*plVar9;
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
  }
  *(long **)(param_1 + 0xb0) = plVar3;
  puVar8 = *(undefined8 **)(param_1 + 0x98);
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02cc8944(puVar8 + 2);
    FUN_02cc8a1c(auStack_40,*puVar8);
    if (local_38 != (long *)0x0) {
      plVar3 = local_38 + 1;
      do {
        lVar7 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


