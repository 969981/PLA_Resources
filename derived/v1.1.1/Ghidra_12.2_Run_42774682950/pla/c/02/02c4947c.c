/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4947c; name: FUN_02c4947c
 */


void FUN_02c4947c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  
  *param_1 = (long)&PTR_FUN_0428a7f8;
  param_1[9] = (long)&PTR_FUN_0428a838;
  plVar6 = (long *)param_1[0xd];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x30))(plVar6,param_1 + 0xc);
    plVar6 = (long *)param_1[0xd];
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    param_1[0xe] = -1;
    param_1[0xf] = 0;
  }
  FUN_00878494(param_1 + 0x10);
  plVar6 = (long *)param_1[0xd];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x30))(plVar6,param_1 + 0xc);
    plVar6 = (long *)param_1[0xd];
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    plVar6 = (long *)param_1[0xd];
    param_1[0xe] = -1;
    param_1[0xf] = 0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
        plVar6 = (long *)param_1[0xb];
        goto joined_r0x02c49558;
      }
    }
  }
  plVar6 = (long *)param_1[0xb];
joined_r0x02c49558:
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  puVar2 = PTR_DAT_04388070 + 0x50;
  *param_1 = (long)(PTR_DAT_04388070 + 0x10);
  param_1[9] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x02c495a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xa8))();
  return;
}


