/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333af6c; name: FUN_0333af6c
 */


void FUN_0333af6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)&PTR_LAB_04350ee8;
  puVar5 = PTR_PTR_0434a080;
  if ((int)param_1[0x78] == 0) {
LAB_0333b00c:
    *(undefined4 *)(param_1 + 0x78) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0x3c4)) && (param_1[0x77] != 0)) {
      (**(code **)(*(long *)puVar5 + 0x18))
                (puVar5,param_1[0x77],((ulong)*(uint *)((long)param_1 + 0x3c4) & 0x3fffffff) << 3);
    }
    param_1[0x77] = 0;
    *(undefined4 *)((long)param_1 + 0x3c4) = 0x80000000;
    *(undefined4 *)(param_1 + 0x66) = 0;
    if ((-1 < *(int *)((long)param_1 + 0x334)) && (param_1[0x65] != 0)) {
      (**(code **)(*(long *)puVar5 + 0x18))
                (puVar5,param_1[0x65],*(int *)((long)param_1 + 0x334) << 2);
    }
    param_1[0x65] = 0;
    *(undefined4 *)((long)param_1 + 0x334) = 0x80000000;
    *(undefined4 *)(param_1 + 4) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
      (**(code **)(*(long *)puVar5 + 0x18))
                (puVar5,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) * 0x18);
    }
    param_1[3] = 0;
    puVar5 = PTR_DAT_043723c0;
    *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
    *param_1 = (long)(puVar5 + 0x10);
    return;
  }
  plVar7 = (long *)param_1[0x77];
  plVar8 = plVar7 + (long)(int)param_1[0x78] + -1;
  plVar6 = (long *)*plVar8;
  if (plVar6 == (long *)0x0) goto LAB_0333afd8;
  if (plVar6[1] == 0) goto LAB_0333afd8;
  plVar1 = plVar6 + 2;
  do {
    lVar4 = *plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
LAB_0333afd8:
    do {
      if (plVar8 == plVar7) goto LAB_0333b00c;
      plVar8 = plVar8 + -1;
      plVar6 = (long *)*plVar8;
    } while ((plVar6 == (long *)0x0) || (plVar6[1] == 0));
    plVar1 = plVar6 + 2;
    do {
      lVar4 = *plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  } while( true );
}


