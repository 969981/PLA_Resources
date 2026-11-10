/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03144598; name: FUN_03144598
 */


void FUN_03144598(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  *param_1 = (long)(PTR_DAT_043888a0 + 0x10);
  if (param_1[7] != 0) {
    FUN_03340d04(param_1[7] + 0x788,param_1);
    FUN_03340d04(param_1[7] + 0x790,param_1);
    FUN_03340d04(param_1[7] + 0x6a0,param_1);
    param_1[7] = 0;
  }
  plVar7 = (long *)param_1[6];
  *param_1 = (long)&PTR_LAB_042b6f10;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar8 = 0;
    uVar9 = (ulong)(*(int *)((long)param_1 + 0x2c) + 1);
    do {
      if ((*(long *)(param_1[4] + lVar8) != -1) &&
         (puVar2 = (undefined8 *)(param_1[4] + lVar8), puVar2[1] != -1)) {
        *puVar2 = 0xffffffffffffffff;
        puVar2[1] = 0xffffffffffffffff;
      }
      uVar9 = uVar9 - 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar9 != 0);
  }
  uVar3 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 5) = uVar3 & 0x80000000;
  if ((-1 < (int)uVar3) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[4],(long)(*(int *)((long)param_1 + 0x2c) * 0x18 + 0x18));
  }
  puVar6 = PTR_DAT_043723c0;
  param_1[4] = 0;
  param_1[5] = -0x100000000;
  *param_1 = (long)(puVar6 + 0x10);
  return;
}


