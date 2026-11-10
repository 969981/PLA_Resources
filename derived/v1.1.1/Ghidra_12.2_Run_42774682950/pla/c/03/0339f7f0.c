/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339f7f0; name: FUN_0339f7f0
 */


void FUN_0339f7f0(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_04370570;
  if (*(int *)(param_1 + 0x11) != 0) {
    lVar8 = param_1[0x10];
    lVar9 = (long)*(int *)(param_1 + 0x11) * 0x18;
    do {
      FUN_032e6310(lVar8,3,1);
      lVar8 = lVar8 + 0x18;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  FUN_033a1758(param_1 + 0x14);
  puVar6 = PTR_PTR_0434a080;
  if (*(int *)(param_1 + 0x11) != 0) {
    lVar8 = param_1[0x10];
    lVar9 = lVar8 + (long)*(int *)(param_1 + 0x11) * 0x18;
LAB_0339f8ac:
    do {
      puVar1 = (ulong *)(lVar9 + -8);
      lVar9 = lVar9 + -0x18;
      if ((*puVar1 & 1) != 0) {
        plVar7 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar2 = plVar7 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar7 + 8))();
          if (lVar9 == lVar8) break;
          goto LAB_0339f8ac;
        }
      }
    } while (lVar9 != lVar8);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[0x10],((ulong)*(uint *)((long)param_1 + 0x8c) & 0x3fffffff) * 0x18);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[7] = &PTR_LAB_0436e318;
  FUN_03379180(param_1 + 10);
  param_1[2] = &PTR_LAB_0434e538;
  if (*(int *)(param_1 + 4) != 0) {
    lVar8 = param_1[3];
    lVar9 = lVar8 + (long)*(int *)(param_1 + 4) * 0x18;
LAB_0339f8d0:
    do {
      puVar1 = (ulong *)(lVar9 + -8);
      lVar9 = lVar9 + -0x18;
      if ((*puVar1 & 1) != 0) {
        plVar7 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar2 = plVar7 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar7 + 8))();
          if (lVar9 == lVar8) break;
          goto LAB_0339f8d0;
        }
      }
    } while (lVar9 != lVar8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) * 0x18);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  return;
}


