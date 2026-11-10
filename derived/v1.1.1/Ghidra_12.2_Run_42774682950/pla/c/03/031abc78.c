/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031abc78; name: FUN_031abc78
 */


void FUN_031abc78(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_LAB_04301ce8;
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,param_1[0xe],*(int *)((long)param_1 + 0x7c) << 2);
  }
  plVar5 = (long *)param_1[0xd];
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
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
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,param_1[10],*(int *)((long)param_1 + 0x5c) << 2);
  }
  plVar5 = (long *)param_1[9];
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
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
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) << 5);
  }
  param_1[7] = 0;
  puVar4 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


