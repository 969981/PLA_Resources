/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130cdec; name: FUN_0130cdec
 */


void FUN_0130cdec(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  char local_54 [4];
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar5 != 0))
  {
    uVar7 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar7;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar6 != (long *)PTR_DAT_04379c98) {
    for (plVar6 = (long *)*plVar6; plVar6 != (long *)PTR_DAT_04379c98; plVar6 = (long *)*plVar6) {
    }
  }
  local_50 = &DAT_72837ff1f1cec6a2;
  pcStack_48 = "common/map.dat";
  local_40 = 0xe;
  local_38 = (long *)0x0;
  FUN_00d37bb4(&local_28,puVar9[0x15],&local_50,10);
  plVar6 = (long *)local_28[0xd];
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_54[0] = '\0';
  local_50 = (undefined1 *)FUN_0131e8f0(*(undefined4 *)(param_1 + 0xfc),local_54,0);
  if (local_54[0] == '\0') {
    FUN_02c2e7d0(plVar6,&local_50,*(undefined8 *)(param_1 + 0x98));
    FUN_02c36128(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x98),0,0);
  }
  else {
    FUN_010c7198(*(undefined8 *)(param_1 + 0x90),0,local_50);
  }
  local_28 = (long *)0xe3b4968e6294f7de;
  FUN_02c2e7d0(plVar6,&local_28,*(undefined8 *)(param_1 + 0x98));
  FUN_02c333a8(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),
               *(undefined8 *)(param_1 + 0x98));
  local_60 = *(long **)(param_1 + 0xa8);
  if (local_60 != (long *)0x0) {
    plVar10 = local_60 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar6 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar10 = plVar6;
  }
  local_28 = (long *)0xe3b49b8e6295005d;
  local_68 = plVar6;
  FUN_0130d3c0(param_1,&local_60,&local_68,&local_28);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (local_60 != (long *)0x0) {
    plVar10 = local_60 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  local_70 = *(long **)(param_1 + 0xb0);
  if (local_70 != (long *)0x0) {
    plVar10 = local_70 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar6 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar10 = plVar6;
  }
  local_28 = (long *)0xe3b49a8e6294feaa;
  local_78 = plVar6;
  FUN_0130d3c0(param_1,&local_70,&local_78,&local_28);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (local_70 != (long *)0x0) {
    plVar10 = local_70 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


