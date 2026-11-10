/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006065d0; name: FUN_006065d0
 */


void FUN_006065d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_28;
  
  local_28 = param_3;
  lVar5 = FUN_006066d8(param_2,&local_28);
  *param_1 = lVar5;
  plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  plVar8 = plVar6 + 2;
  *plVar8 = 0;
  puVar4 = PTR_DAT_04375270;
  plVar6[3] = lVar5;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
  }
  param_1[1] = (long)plVar6;
  if ((lVar5 != 0) && ((lVar7 = plVar1[1], lVar7 == 0 || (*(long *)(lVar7 + 8) == -1)))) {
    if (plVar6 != (long *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = plVar1[1];
    }
    *plVar1 = lVar5;
    plVar1[1] = (long)plVar6;
    if (lVar7 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    if (plVar6 != (long *)0x0) {
      do {
        lVar5 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
        return;
      }
    }
  }
  return;
}


