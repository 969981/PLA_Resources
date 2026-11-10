/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cd3f0; name: FUN_031cd3f0
 */


void FUN_031cd3f0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 0xf0);
  if (*(int *)(lVar8 + 0x20) == 0) {
    *param_1 = 0;
  }
  else {
    if ((lVar8 != 0) && (*(long *)(lVar8 + 8) != 0)) {
      plVar4 = (long *)(lVar8 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar7 = tpidr_el0;
    lVar6 = *(long *)(lVar7 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x38,0);
    *puVar5 = &PTR_LAB_0430ae88;
    puVar5[1] = 0xffffffff;
    puVar5[2] = 1;
    puVar5[3] = 0;
    puVar5[4] = 0x8000000000000000;
    puVar5[5] = &DAT_03aad864;
    puVar5[6] = 0;
    plVar4 = *(long **)(param_2 + 0xf0);
    *(undefined8 **)(param_2 + 0xf0) = puVar5;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    *param_1 = lVar8;
  }
  return;
}


