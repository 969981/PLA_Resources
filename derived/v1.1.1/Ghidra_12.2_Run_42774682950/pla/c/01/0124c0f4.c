/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124c0f4; name: FUN_0124c0f4
 */


void FUN_0124c0f4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auStack_e8 [24];
  long *local_d0;
  undefined1 auStack_c8 [24];
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar6 = (long *)(**(code **)*puVar8)(puVar8);
  puVar4 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar5 != 0))
  {
    uVar13 = FUN_009311a8();
    *(undefined8 *)puVar4 = uVar13;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar6 != (long *)puVar4) {
    for (plVar6 = (long *)*plVar6; plVar6 != (long *)puVar4; plVar6 = (long *)*plVar6) {
    }
  }
  FUN_00d37c90(&local_a8,puVar8[0x15],0);
  plVar6 = (long *)local_a8[0xd];
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_a8 != (long *)0x0) {
    lVar7 = local_a8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  local_a8 = (long *)0xaf5738ee2445ec5a;
  FUN_02c2e7d0(plVar6,&local_a8,*(undefined8 *)(param_1 + 0xa0));
  local_a8 = (long *)0x997644661c6e9a82;
  FUN_02c2e7d0(plVar6,&local_a8,*(undefined8 *)(param_1 + 0xb0));
  local_a8 = (long *)0x997645661c6e9c35;
  FUN_02c2e7d0(plVar6,&local_a8,*(undefined8 *)(param_1 + 0xb8));
  lVar7 = *(long *)(param_1 + 0x90);
  plVar9 = *(long **)(lVar7 + 0x14a0);
  if (plVar9 == (long *)0x0) {
    plVar10 = *(long **)(lVar7 + 0x14b0);
  }
  else {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plVar10 = *(long **)(lVar7 + 0x14b0);
  }
  if (plVar10 == (long *)0x0) {
    plVar11 = *(long **)(lVar7 + 0x14b8);
  }
  else {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    plVar11 = *(long **)(lVar7 + 0x14b8);
  }
  if (plVar11 == (long *)0x0) {
    plVar12 = *(long **)(lVar7 + 0x14c8);
  }
  else {
    (**(code **)(*plVar11 + 0x18))(plVar11);
    plVar12 = *(long **)(lVar7 + 0x14c8);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5b8);
  FUN_02c395d0(uVar13,0,*(undefined4 *)(lVar7 + 0x14e0),7,0,1);
  FUN_02c333a8(uVar13,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xa0));
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  local_57 = 1;
  local_68 = *(undefined8 *)(param_1 + 0xa8);
  uStack_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 1;
  local_6c = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a8 = *(long **)(param_1 + 0xb0);
  local_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_98 = 0;
  local_6e = 1;
  uVar13 = *(undefined8 *)(param_1 + 0x98);
  FUN_02a4754c(auStack_c8,&DAT_041fe1a8);
  FUN_01248a38(uVar13,0,auStack_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  uVar13 = *(undefined8 *)(param_1 + 0x98);
  FUN_02a4754c(auStack_e8,&DAT_041fe1c0);
  FUN_01248a38(uVar13,1,auStack_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x98),0);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x90))(*(long **)(param_1 + 0x98),&local_68,&local_a8);
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


