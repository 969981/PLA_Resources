/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d84a90; name: FUN_00d84a90
 */


void FUN_00d84a90(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_041ec788;
  param_1[9] = &PTR_LAB_041ec7c0;
  plVar6 = (long *)param_1[0xb];
  param_1[0xb] = 0;
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
  FUN_00d84d30(DAT_043acf28);
  FUN_00d87078();
  DAT_043acf30 = DAT_043acf38;
  FUN_00d85da8((undefined8 *)(DAT_043acf38 + 0x50),*(undefined8 *)(DAT_043acf38 + 0x50));
  plVar6 = (long *)param_1[0x39];
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
  lVar7 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar7 != 0) {
    FUN_00d86828(param_1 + 0x36);
  }
  lVar7 = param_1[0x31];
  param_1[0x31] = 0;
  if (lVar7 != 0) {
    FUN_00d8644c(param_1 + 0x32);
  }
  lVar7 = param_1[0x2d];
  param_1[0x2d] = 0;
  if (lVar7 != 0) {
    FUN_00d86070(param_1 + 0x2e);
  }
  FUN_00d84d68(param_1 + 0x12);
  plVar6 = (long *)param_1[0x11];
  if (plVar6 == (long *)0x0) {
LAB_00d84b6c:
    plVar6 = (long *)param_1[0x10];
    if (plVar6 == (long *)0x0) goto LAB_00d84b8c;
LAB_00d84b74:
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
    if (iVar5 != 0) goto LAB_00d84b8c;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0xf];
    if (plVar6 != (long *)0x0) goto LAB_00d84b94;
LAB_00d84bb0:
    plVar6 = (long *)param_1[0xe];
    if (plVar6 == (long *)0x0) goto LAB_00d84bd4;
LAB_00d84bb8:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d84bd4;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0xd];
    if (plVar6 != (long *)0x0) goto LAB_00d84bdc;
LAB_00d84bf4:
    plVar6 = (long *)param_1[0xc];
  }
  else {
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
    if (iVar5 != 0) goto LAB_00d84b6c;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x10];
    if (plVar6 != (long *)0x0) goto LAB_00d84b74;
LAB_00d84b8c:
    plVar6 = (long *)param_1[0xf];
    if (plVar6 == (long *)0x0) goto LAB_00d84bb0;
LAB_00d84b94:
    lVar7 = plVar6[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_00d84bb0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0xe];
    if (plVar6 != (long *)0x0) goto LAB_00d84bb8;
LAB_00d84bd4:
    plVar6 = (long *)param_1[0xd];
    if (plVar6 == (long *)0x0) goto LAB_00d84bf4;
LAB_00d84bdc:
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
    if (iVar5 != 0) goto LAB_00d84bf4;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0xc];
  }
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
      goto joined_r0x00d84cdc;
    }
  }
  plVar6 = (long *)param_1[0xb];
joined_r0x00d84cdc:
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
                    /* WARNING: Could not recover jumptable at 0x00d84cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


