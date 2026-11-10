/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318a160; name: FUN_0318a160
 */


void FUN_0318a160(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = (long)&PTR_LAB_0430b2a8;
  lVar10 = (long)DAT_0444b53c;
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  puVar5 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(puVar5,param_1[3],0x10,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  lVar10 = (long)DAT_0444b53c;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(puVar5,param_1[5],0x14,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  lVar10 = (long)DAT_0444b53c;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar5,param_1[7],0x10,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  lVar10 = (long)DAT_0444b53c;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar10 * 8 + 0x18) == 0) {
    iVar4 = (int)param_1[10];
  }
  else {
    FUN_0332a954();
    iVar4 = (int)param_1[10];
  }
  if (iVar4 != 0) {
    lVar10 = param_1[9];
    lVar7 = lVar10 + (long)iVar4 * 0x10;
    do {
      while( true ) {
        plVar6 = *(long **)(lVar7 + -8);
        lVar7 = lVar7 + -0x10;
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) break;
LAB_0318a4a4:
        if (lVar7 == lVar10) goto LAB_0318a284;
      }
      plVar1 = plVar6 + 2;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 != 0) goto LAB_0318a4a4;
      (**(code **)(*plVar6 + 0x18))();
    } while (lVar7 != lVar10);
  }
LAB_0318a284:
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_032cf244(puVar5,param_1[9],0x10,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_032cf244(puVar5,param_1[0xb],4,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_032cf244(puVar5,param_1[0xd],4,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  plVar6 = (long *)param_1[0x19];
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  param_1[0x19] = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar10 = (long)DAT_0444b53c;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  if (*(long *)(lVar7 + lVar10 * 8 + 0x18) == 0) {
    plVar6 = (long *)param_1[0x19];
  }
  else {
    FUN_0332a954();
    plVar6 = (long *)param_1[0x19];
  }
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
      plVar6 = (long *)param_1[0x18];
      goto joined_r0x0318a308;
    }
  }
  plVar6 = (long *)param_1[0x18];
joined_r0x0318a308:
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_032cf244(puVar5,param_1[0xd],4,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_032cf244(puVar5,param_1[0xb],4,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  if ((int)param_1[10] != 0) {
    lVar7 = param_1[9];
    lVar8 = lVar7 + (long)(int)param_1[10] * 0x10;
    do {
      while( true ) {
        plVar6 = *(long **)(lVar8 + -8);
        lVar8 = lVar8 + -0x10;
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) break;
LAB_0318a62c:
        if (lVar8 == lVar7) goto LAB_0318a360;
      }
      plVar1 = plVar6 + 2;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 != 0) goto LAB_0318a62c;
      (**(code **)(*plVar6 + 0x18))();
    } while (lVar8 != lVar7);
  }
LAB_0318a360:
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_032cf244(puVar5,param_1[9],0x10,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar5,param_1[7],0x10,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(puVar5,param_1[5],0x14,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(puVar5,param_1[3],0x10,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  puVar5 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


