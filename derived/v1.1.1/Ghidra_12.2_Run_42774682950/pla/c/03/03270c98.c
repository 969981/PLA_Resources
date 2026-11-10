/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03270c98; name: FUN_03270c98
 */


void FUN_03270c98(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_LAB_0432d290;
  puVar5 = PTR_PTR_0434a080;
  if ((int)param_1[7] != 0) {
    lVar7 = param_1[6];
    lVar9 = (long)(int)param_1[7] * 0x18;
    do {
      lVar2 = lVar7 + lVar9;
      *(undefined4 *)(lVar2 + -0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -0xc)) && (*(long *)(lVar2 + -0x18) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))
                  (puVar5,*(long *)(lVar2 + -0x18),
                   ((ulong)*(uint *)(lVar2 + -0xc) & 0x3fffffff) << 4);
      }
      lVar9 = lVar9 + -0x18;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined4 *)(lVar2 + -0xc) = 0x80000000;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[6],((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  if ((int)param_1[5] != 0) {
    plVar8 = (long *)param_1[4];
    plVar10 = plVar8 + (long)(int)param_1[5] * 2 + -2;
    plVar6 = (long *)*plVar10;
    if (plVar6 != (long *)0x0) goto LAB_03270d88;
LAB_03270d78:
    if (plVar10 != plVar8) {
      while( true ) {
        plVar10 = plVar10 + -2;
        plVar6 = (long *)*plVar10;
        if (plVar6 == (long *)0x0) break;
LAB_03270d88:
        if (plVar6[1] == 0) break;
        plVar1 = plVar6 + 2;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 != 0) break;
        (**(code **)(*plVar6 + 0x18))();
        if (plVar10 == plVar8) goto LAB_03270dbc;
      }
      goto LAB_03270d78;
    }
  }
LAB_03270dbc:
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 4);
  }
  plVar6 = (long *)param_1[3];
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar8 = plVar6 + 2;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


