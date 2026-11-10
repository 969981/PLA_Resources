/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c495ec; name: FUN_02c495ec
 */


void FUN_02c495ec(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  param_1[-9] = (long)&PTR_FUN_0428a7f8;
  *param_1 = (long)&PTR_FUN_0428a838;
  plVar5 = (long *)param_1[4];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 3);
    plVar5 = (long *)param_1[4];
    param_1[3] = 0;
    param_1[4] = 0;
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 10;
      do {
        iVar4 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    param_1[5] = -1;
    param_1[6] = 0;
  }
  FUN_00878494(param_1 + 7);
  plVar5 = (long *)param_1[4];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 3);
    plVar6 = (long *)param_1[4];
    param_1[3] = 0;
    param_1[4] = 0;
    plVar5 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 10;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      plVar5 = (long *)param_1[4];
    }
    param_1[5] = -1;
    param_1[6] = 0;
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 10;
      do {
        iVar4 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))();
        plVar5 = (long *)param_1[2];
        goto joined_r0x02c496c8;
      }
    }
  }
  plVar5 = (long *)param_1[2];
joined_r0x02c496c8:
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  puVar1 = PTR_DAT_04388070 + 0x50;
  param_1[-9] = (long)(PTR_DAT_04388070 + 0x10);
  *param_1 = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x02c49710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[-8] + 0xa8))();
  return;
}


