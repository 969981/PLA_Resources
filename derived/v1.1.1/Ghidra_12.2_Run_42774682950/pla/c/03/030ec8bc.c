/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ec8bc; name: FUN_030ec8bc
 */


void FUN_030ec8bc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_LAB_042cfff0;
  (**(code **)(*(long *)param_1[10] + 0x270))((long *)param_1[10],param_1,0,&LAB_030f0fa0);
  if (0 < (int)param_1[0x20]) {
    plVar5 = *(long **)param_1[0x1f];
    if (plVar5[1] != 0) {
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
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
    if (1 < (int)param_1[0x20]) {
      lVar6 = 1;
      do {
        plVar5 = *(long **)(param_1[0x1f] + lVar6 * 8);
        if (plVar5[1] != 0) {
          plVar1 = plVar5 + 2;
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
            (**(code **)(*plVar5 + 0x18))();
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[0x20]);
    }
  }
  if (param_1[7] != -1) {
    (**(code **)(*(long *)param_1[10] + 0x68))((long *)param_1[10],param_1 + 7,1,0);
    param_1[7] = -1;
  }
  plVar5 = (long *)param_1[5];
  if (plVar5[1] != 0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x114)) && (param_1[0x21] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x21],((ulong)*(uint *)((long)param_1 + 0x114) & 0x3fffffff) * 0x30);
  }
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x1f],((ulong)*(uint *)((long)param_1 + 0x104) & 0x3fffffff) << 3);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) << 6);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


