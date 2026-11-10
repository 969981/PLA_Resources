/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c56d24; name: FUN_02c56d24
 */


void FUN_02c56d24(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  puVar6 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar6 = PTR_DAT_04379520;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_40 = param_2;
  if (((*puVar6 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar7 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar12 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_0428ad18;
  param_1[1] = lVar12;
  param_1[9] = (long)&PTR_LAB_0428ada0;
  plVar11 = param_1 + 0xb;
  *plVar11 = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = (long)(param_1 + 0x12);
  param_1[0x13] = (long)(param_1 + 0x12);
  if (((*puVar6 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  lVar9 = DAT_043f1798;
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
     (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) {
    lVar5 = tpidr_el0;
    lVar12 = *(long *)(lVar5 + 0x20);
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(long *)(lVar5 + 0x20) = DAT_043f1798;
      lVar12 = lVar9;
    }
  }
  param_1[0x15] = lVar12;
  param_1[0x16] = 0xfffffffffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  local_48 = 1;
  uStack_44 = 0;
  local_4c = 0;
  lVar9 = FUN_010e443c(auStack_38,local_40,&local_40,&uStack_44,&local_48,&local_4c);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
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
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *plVar11 = lVar9;
  local_48 = 1;
  uStack_44 = 0;
  local_4c = 0;
  lVar9 = FUN_010e443c(auStack_38,local_40,&local_40,&uStack_44,&local_48,&local_4c);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0xc] = lVar9;
  local_48 = 1;
  uStack_44 = 0;
  local_4c = 0;
  lVar9 = FUN_010e443c(auStack_38,local_40,&local_40,&uStack_44,&local_48,&local_4c);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0xd] = lVar9;
  local_48 = 1;
  uStack_44 = 0;
  local_4c = 0;
  lVar9 = FUN_010e443c(auStack_38,local_40,&local_40,&uStack_44,&local_48,&local_4c);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0xe] = lVar9;
  local_48 = 1;
  uStack_44 = 0;
  local_4c = 0;
  lVar9 = FUN_010e443c(auStack_38,local_40,&local_40,&uStack_44,&local_48,&local_4c);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0xf] = lVar9;
  local_48 = 1;
  uStack_44 = 0;
  local_4c = 0;
  lVar9 = FUN_010e443c(auStack_38,local_40,&local_40,&uStack_44,&local_48,&local_4c);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0x10] = lVar9;
  return;
}


