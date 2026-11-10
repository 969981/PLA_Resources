/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325f1ac; name: FUN_0325f1ac
 */


void FUN_0325f1ac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = (long *)param_1[0x4a];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  FUN_03267998(param_1 + 6);
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(puVar4,param_1[3],4,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  param_1[3] = 0;
  if ((int)param_1[2] != 0) {
    plVar7 = (long *)param_1[1];
    plVar8 = plVar7 + (long)(int)param_1[2] + -1;
    plVar5 = (long *)*plVar8;
    if (plVar5 != (long *)0x0) goto LAB_0325f250;
LAB_0325f240:
    if (plVar8 != plVar7) {
      while( true ) {
        plVar8 = plVar8 + -1;
        plVar5 = (long *)*plVar8;
        if (plVar5 == (long *)0x0) break;
LAB_0325f250:
        if (plVar5[1] == 0) break;
        plVar1 = plVar5 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 != 0) break;
        (**(code **)(*plVar5 + 0x18))();
        if (plVar8 == plVar7) goto LAB_0325f284;
      }
      goto LAB_0325f240;
    }
  }
LAB_0325f284:
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    FUN_032cf244(puVar4,param_1[1],8,*(uint *)((long)param_1 + 0x14) & 0x3fffffff);
  }
  plVar5 = (long *)*param_1;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar7 = plVar5 + 2;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0325f300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))();
      return;
    }
  }
  return;
}


