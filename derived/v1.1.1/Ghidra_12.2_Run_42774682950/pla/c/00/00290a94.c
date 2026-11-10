/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00290a94; name: FUN_00290a94
 */


void FUN_00290a94(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(*param_2 + 400);
  plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,400,0x10);
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar6 = plVar4 + 2;
  *plVar6 = 0;
  puVar3 = PTR_DAT_043730b0;
  plVar4[4] = (long)plVar7;
  plVar7 = plVar4 + 6;
  *plVar4 = (long)(puVar3 + 0x10);
  FUN_0029843c(plVar7,param_2,param_3,param_4,param_7,param_8);
  lVar5 = plVar4[7];
  if ((lVar5 == 0) || (*(long *)(lVar5 + 8) == -1)) {
    if (plVar4 != (long *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar4[6] = (long)plVar7;
    plVar4[7] = (long)plVar4;
    if (lVar5 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    do {
      lVar5 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_006de628(plVar7,param_8,param_5,param_6);
  *param_1 = (long)plVar7;
  param_1[1] = (long)plVar4;
  return;
}


