/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032813cc; name: FUN_032813cc
 */


void FUN_032813cc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_LAB_0433a1a8;
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_1[0xc] != 0) {
    lVar6 = param_1[0xb];
    lVar7 = (long)(int)param_1[0xc] * 0x70;
    do {
      FUN_03281600(lVar6 + -0x70 + lVar7);
      lVar7 = lVar7 + -0x70;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0xb],((ulong)*(uint *)((long)param_1 + 100) & 0x3fffffff) * 0x70);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[9],((ulong)*(uint *)((long)param_1 + 0x54) & 0x3fffffff) << 5);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) << 5);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[5],((ulong)*(uint *)((long)param_1 + 0x34) & 0x3fffffff) << 5);
  }
  plVar5 = (long *)param_1[3];
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
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
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


