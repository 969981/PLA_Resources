/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e4b314; name: FUN_01e4b314
 */


undefined8 FUN_01e4b314(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar5 = (int)param_2[1];
  if (((iVar5 == 0) || (iVar5 == 2)) || (iVar5 == 3)) {
    plVar6 = *(long **)*param_1;
    puVar2 = (undefined8 *)(*param_2 + 0x10);
    if (*(int *)((undefined8 *)*param_1 + 4) != 0) {
      puVar2 = (undefined8 *)(*param_2 + 8);
    }
    uVar8 = *puVar2;
    iVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6,uVar8);
    if (iVar5 != 0) {
      lVar7 = (**(code **)(**(long **)*param_1 + 0x118))(*(long **)*param_1,uVar8);
      plVar6 = *(long **)(lVar7 + 0x78);
      uVar8 = *(undefined8 *)(lVar7 + 0x98);
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (plVar6 == (long *)0x0) {
        return uVar8;
      }
      if (plVar6[1] == 0) {
        return uVar8;
      }
      plVar1 = plVar6 + 2;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
        return uVar8;
      }
      return uVar8;
    }
  }
  return 0;
}


