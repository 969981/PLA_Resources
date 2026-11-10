/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a7514; name: FUN_013a7514
 */


void FUN_013a7514(long param_1,undefined2 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar7 = (long *)(**(code **)*puVar9)(puVar9);
  puVar5 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar6 != 0))
  {
    uVar10 = FUN_009311a8();
    *(undefined8 *)puVar5 = uVar10;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar7 != (long *)puVar5) {
    for (plVar7 = (long *)*plVar7; plVar7 != (long *)puVar5; plVar7 = (long *)*plVar7) {
    }
  }
  FUN_00d37c90(&local_48,puVar9[0x15],1);
  plVar7 = (long *)local_48[0xd];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  local_48 = (long *)&DAT_2fd0405030f2913a;
  FUN_02c2e7d0(plVar7,&local_48,*(undefined8 *)(param_1 + 0xb8));
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_48);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5b8);
  FUN_02c3865c(uVar10,0,param_2,1);
  FUN_02c395d0(uVar10,1,1,3,0,1);
  FUN_010c6160(uVar10,2,local_48);
  FUN_02c333a8(uVar10,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0xb8));
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  local_37 = 1;
  local_48 = *(long **)(param_1 + 0xc0);
  local_38 = 1;
  local_36 = 1;
  uStack_40 = 0;
  FUN_00d428b0(*(undefined8 *)(param_1 + 0xa8),0);
  FUN_00d67ea8(*(undefined8 *)(param_1 + 0xa8),&local_48);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


