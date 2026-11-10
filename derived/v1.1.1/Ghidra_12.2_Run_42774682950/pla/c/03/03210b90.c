/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03210b90; name: FUN_03210b90
 */


void FUN_03210b90(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_LAB_042f2770;
  puVar5 = PTR_PTR_0434a080;
  if ((int)param_1[0xd] != 0) {
    lVar8 = param_1[0xc];
    lVar7 = (long)(int)param_1[0xd] << 5;
    do {
      lVar2 = lVar8 + lVar7;
      *(undefined4 *)(lVar2 + -8) = 0;
      if ((-1 < *(int *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))
                  (puVar5,*(long *)(lVar2 + -0x10),*(int *)(lVar2 + -4) << 2);
      }
      lVar7 = lVar7 + -0x20;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined4 *)(lVar2 + -4) = 0x80000000;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[0xc],((ulong)*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) << 5);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[9],((ulong)*(uint *)((long)param_1 + 0x54) & 0x3fffffff) << 4);
  }
  plVar6 = (long *)param_1[6];
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
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
      plVar6 = (long *)param_1[5];
      goto joined_r0x03210c1c;
    }
  }
  plVar6 = (long *)param_1[5];
joined_r0x03210c1c:
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
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


