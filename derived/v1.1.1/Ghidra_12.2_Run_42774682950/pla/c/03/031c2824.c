/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c2824; name: FUN_031c2824
 */


void FUN_031c2824(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  *param_1 = (long)&PTR_LAB_04305d88;
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_1[0xb] != 0) {
    plVar7 = (long *)param_1[10];
    plVar9 = plVar7 + (int)param_1[0xb];
LAB_031c2918:
    do {
      plVar9 = plVar9 + -1;
      plVar5 = (long *)*plVar9;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
          if (plVar9 == plVar7) break;
          goto LAB_031c2918;
        }
      }
    } while (plVar9 != plVar7);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[10],((ulong)*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  param_1[10] = 0;
  if ((int)param_1[9] != 0) {
    plVar7 = (long *)param_1[8];
    plVar9 = plVar7 + (int)param_1[9];
LAB_031c2978:
    do {
      plVar9 = plVar9 + -1;
      plVar5 = (long *)*plVar9;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
          if (plVar9 == plVar7) break;
          goto LAB_031c2978;
        }
      }
    } while (plVar9 != plVar7);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[8],((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  if ((int)param_1[7] != 0) {
    lVar6 = param_1[6];
    lVar8 = (long)(int)param_1[7] * 0x38;
    do {
      (**(code **)(*(long *)(lVar6 + -0x38 + lVar8) + 8))();
      lVar8 = lVar8 + -0x38;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) * 0x38);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  if ((int)param_1[5] != 0) {
    lVar6 = param_1[4];
    lVar8 = (long)(int)param_1[5] * 0x38;
    do {
      (**(code **)(*(long *)(lVar6 + -0x38 + lVar8) + 8))();
      lVar8 = lVar8 + -0x38;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) * 0x38);
  }
  param_1[4] = 0;
  puVar4 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


