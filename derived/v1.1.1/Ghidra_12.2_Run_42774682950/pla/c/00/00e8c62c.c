/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e8c62c; name: FUN_00e8c62c
 */


void FUN_00e8c62c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar7 = PTR_DAT_04379688;
  puVar6 = PTR_DAT_04379680;
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar13 = *(long **)(lVar11 + 0x100);
  if (plVar13 != (long *)0x0) {
    plVar9 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar13[0x20];
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = (long *)plVar9[0x13];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar9 + 10;
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  plVar9 = plVar13 + 10;
  do {
    iVar8 = (int)*plVar9 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  uVar14 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)puVar6;
  *(long *)puVar7 = lVar11;
  plVar13 = *(long **)(lVar11 + 0x100);
  if (plVar13 != (long *)0x0) {
    plVar9 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar13[0x20];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = (long *)plVar9[0xf];
  if (local_70 != (long *)0x0) {
    lVar11 = local_70[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = (long *)FUN_00e8e17c(uVar14,param_1,param_2,&local_70);
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_70 != (long *)0x0) {
    lVar11 = local_70[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  plVar1 = plVar9 + 10;
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  plVar9 = plVar13 + 10;
  do {
    iVar8 = (int)*plVar9 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  plVar13 = local_68;
  FUN_00e8ca50(local_68,param_3);
  FUN_00e8ca50(plVar13,param_4);
  FUN_00e8ca50(plVar13,param_5);
  FUN_00e8ca50(plVar13,param_6);
  FUN_00e8ca50(plVar13,param_7);
  FUN_00e8ca50(plVar13,param_8);
  FUN_00e8ca50(plVar13,param_9);
  FUN_00e8ca50(plVar13,param_10);
  FUN_00e8ca50(plVar13,param_11);
  FUN_00e8ca50(plVar13,param_12);
  FUN_00e8ca50(plVar13,param_13);
  FUN_0163478c(plVar12,&local_68);
  if (local_68 != (long *)0x0) {
    plVar13 = local_68 + 10;
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return;
}


