/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03213b34; name: FUN_03213b34
 */


void FUN_03213b34(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_LAB_042f2918;
  lVar8 = param_1[0xd];
  if (param_1[0x11] != 0) {
    lVar2 = lVar8 + param_1[0x11] * 0x10;
    do {
      plVar6 = *(long **)(lVar8 + 8);
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
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
        }
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != lVar2);
  }
  puVar5 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[0xd],((ulong)*(uint *)((long)param_1 + 0x74) & 0x3fffffff) << 4);
  }
  param_1[0xd] = 0;
  lVar8 = param_1[8];
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  if (param_1[0xc] != 0) {
    lVar2 = lVar8 + param_1[0xc] * 0x10;
    do {
      plVar6 = *(long **)(lVar8 + 8);
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
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
        }
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != lVar2);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[8],((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) << 4);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 3);
  }
  param_1[4] = 0;
  puVar5 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


