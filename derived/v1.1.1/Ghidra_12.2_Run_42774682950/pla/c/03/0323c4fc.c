/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0323c4fc; name: FUN_0323c4fc
 */


void FUN_0323c4fc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_LAB_042f8788;
  param_1[3] = (long)&PTR_LAB_042f87c8;
  plVar5 = (long *)param_1[0x32];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar8 = plVar5 + 2;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_1[0x17] != 0) {
    lVar6 = param_1[0x16];
    lVar9 = lVar6 + (long)(int)param_1[0x17] * 0x60;
    do {
      plVar5 = *(long **)(lVar9 + -0x10);
      lVar9 = lVar9 + -0x60;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar8 = plVar5 + 2;
        do {
          lVar7 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (lVar9 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x16],((ulong)*(uint *)((long)param_1 + 0xbc) & 0x3fffffff) * 0x60);
  }
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  param_1[0x16] = 0;
  if ((int)param_1[0x15] != 0) {
    plVar8 = (long *)param_1[0x14];
    plVar10 = plVar8 + (long)(int)param_1[0x15] * 0xc + -0xc;
    plVar5 = (long *)*plVar10;
    if (plVar5 != (long *)0x0) goto LAB_0323c624;
LAB_0323c614:
    if (plVar10 != plVar8) {
      while( true ) {
        plVar10 = plVar10 + -0xc;
        plVar5 = (long *)*plVar10;
        if (plVar5 == (long *)0x0) break;
LAB_0323c624:
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
        if (plVar10 == plVar8) goto LAB_0323c658;
      }
      goto LAB_0323c614;
    }
  }
LAB_0323c658:
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x14],((ulong)*(uint *)((long)param_1 + 0xac) & 0x3fffffff) * 0x60);
  }
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  param_1[0x14] = 0;
  if ((int)param_1[0x13] != 0) {
    lVar9 = param_1[0x12];
    lVar6 = (long)(int)param_1[0x13] * 0xd0;
    do {
      FUN_031ed88c(lVar9 + -0xd0 + lVar6);
      lVar6 = lVar6 + -0xd0;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x12],((ulong)*(uint *)((long)param_1 + 0x9c) & 0x3fffffff) * 0xd0);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  FUN_031f11b4(param_1 + 4);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


