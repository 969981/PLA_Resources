/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03187ca0; name: FUN_03187ca0
 */


void FUN_03187ca0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0x20) + 0x68);
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x28,0);
  plVar4 = *(long **)(param_2 + 0x18);
  *puVar5 = &PTR_LAB_042f60b8;
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  puVar5[3] = plVar4;
  if (plVar4 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = plVar4;
    if (plVar4[1] != 0) {
      plVar4 = plVar4 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar7 = (long *)puVar5[3];
    }
    plVar4 = plVar7;
  }
  puVar5[4] = uVar8;
  (**(code **)(*plVar4 + 0x48))(plVar7,uVar8);
  *param_1 = puVar5;
  return;
}


