/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03299970; name: FUN_03299970
 */


void FUN_03299970(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)&PTR_LAB_0433f390;
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_1[0x2a] != 0) {
    plVar7 = (long *)param_1[0x29];
    plVar8 = plVar7 + (long)(int)param_1[0x2a] * 3 + -3;
    plVar5 = (long *)*plVar8;
    if (plVar5 != (long *)0x0) goto LAB_032999c4;
LAB_032999b4:
    if (plVar8 != plVar7) {
      while( true ) {
        plVar8 = plVar8 + -3;
        plVar5 = (long *)*plVar8;
        if (plVar5 == (long *)0x0) break;
LAB_032999c4:
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
        if (plVar8 == plVar7) goto LAB_032999f8;
      }
      goto LAB_032999b4;
    }
  }
LAB_032999f8:
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x29],((ulong)*(uint *)((long)param_1 + 0x154) & 0x3fffffff) * 0x18);
  }
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x144)) && (param_1[0x27] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x27],(*(uint *)((long)param_1 + 0x144) & 0x3fffffff) << 1);
  }
  plVar5 = (long *)param_1[0x26];
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 0x80000000;
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
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x24],((ulong)*(uint *)((long)param_1 + 300) & 0x3fffffff) * 7);
  }
  param_1[0x24] = 0;
  puVar4 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


