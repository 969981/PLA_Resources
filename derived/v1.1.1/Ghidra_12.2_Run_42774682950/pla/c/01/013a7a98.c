/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a7a98; name: FUN_013a7a98
 */


void FUN_013a7a98(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined8 local_48;
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  local_48 = param_2;
  plVar7 = (long *)(**(code **)*puVar10)(puVar10);
  puVar5 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar6 != 0))
  {
    uVar11 = FUN_009311a8();
    *(undefined8 *)puVar5 = uVar11;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar7 != (long *)puVar5) {
    for (plVar7 = (long *)*plVar7; plVar7 != (long *)puVar5; plVar7 = (long *)*plVar7) {
    }
  }
  FUN_00d37c90(&local_60,puVar10[0x15],1);
  plVar7 = (long *)local_60[0xd];
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_60 != (long *)0x0) {
    lVar9 = local_60[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  local_60 = (long *)0x2fd03b5030f288bb;
  FUN_02c2e7d0(plVar7,&local_60,*(undefined8 *)(param_1 + 0xb8));
  plVar8 = (long *)FUN_00d76b70(&local_60,*(undefined8 *)(param_1 + 8),&local_48);
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5b8);
  FUN_010c6478(uVar11,0,plVar8,param_3,param_4);
  FUN_02c333a8(uVar11,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xb8));
  plVar2 = plVar8 + 10;
  do {
    iVar6 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  local_4f = 1;
  local_60 = *(long **)(param_1 + 0xb8);
  uStack_58 = 0;
  local_50 = 1;
  local_4e = 1;
  FUN_00d428b0(*(undefined8 *)(param_1 + 0xa8),0);
  FUN_00d67ea8(*(undefined8 *)(param_1 + 0xa8),&local_60);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


