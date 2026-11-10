/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03299f64; name: FUN_03299f64
 */


void FUN_03299f64(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  uVar8 = param_1[0xb];
  *param_1 = (long)&PTR_LAB_04341d00;
  if ((uVar8 & 1) != 0) {
    lVar7 = tpidr_el0;
    lVar6 = *(long *)(lVar7 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar6;
    }
    plVar5 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    *(undefined8 *)(uVar8 - 0x11) = 0;
    (**(code **)(*plVar5 + 0x18))
              (plVar5,(undefined8 *)(uVar8 - 0x11),(long)*(int *)(uVar8 - 9) + 0x10);
  }
  puVar4 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[9],((ulong)*(uint *)((long)param_1 + 0x54) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  param_1[9] = 0;
  if ((int)param_1[8] != 0) {
    plVar9 = (long *)param_1[7];
    plVar10 = plVar9 + (long)(int)param_1[8] * 2 + -2;
    plVar5 = (long *)*plVar10;
    if (plVar5 != (long *)0x0) goto LAB_03299ff8;
LAB_03299fe8:
    if (plVar10 != plVar9) {
      while( true ) {
        plVar10 = plVar10 + -2;
        plVar5 = (long *)*plVar10;
        if (plVar5 == (long *)0x0) break;
LAB_03299ff8:
        if (plVar5[1] == 0) break;
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
        if (lVar7 + -1 != 0) break;
        (**(code **)(*plVar5 + 0x18))();
        if (plVar10 == plVar9) goto LAB_0329a02c;
      }
      goto LAB_03299fe8;
    }
  }
LAB_0329a02c:
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[7],((ulong)*(uint *)((long)param_1 + 0x44) & 0x3fffffff) << 4);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,param_1[5],*(int *)((long)param_1 + 0x34) << 2);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[3],(*(uint *)((long)param_1 + 0x24) & 0x3fffffff) << 1);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


