/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012484f8; name: FUN_012484f8
 */


void FUN_012484f8(long param_1)

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
  undefined1 auStack_e8 [24];
  long *local_d0;
  undefined1 auStack_c8 [24];
  long *local_b0;
  undefined1 auStack_a8 [24];
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined8 local_48;
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
  FUN_00d37c90(&local_88,puVar9[0x15],0);
  plVar7 = (long *)local_88[0xd];
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
  if (local_88 != (long *)0x0) {
    lVar8 = local_88[0xb];
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
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_88 = (long *)0xaf5731ee2445e075;
  FUN_02c2e7d0(plVar7,&local_88,*(undefined8 *)(param_1 + 0x98));
  local_88 = (long *)0x997644661c6e9a82;
  FUN_02c2e7d0(plVar7,&local_88,*(undefined8 *)(param_1 + 0xa0));
  local_88 = (long *)0x997645661c6e9c35;
  FUN_02c2e7d0(plVar7,&local_88,*(undefined8 *)(param_1 + 0xa8));
  local_88 = (long *)0x50684c8bbd80535d;
  FUN_02c2e7d0(plVar7,&local_88,*(undefined8 *)(param_1 + 0xb0));
  local_37 = 1;
  local_48 = *(undefined8 *)(param_1 + 0x98);
  uStack_40 = 0;
  local_38 = 0;
  local_36 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  local_4c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_88 = *(long **)(param_1 + 0xa0);
  local_80 = *(undefined8 *)(param_1 + 0xa8);
  local_78 = *(undefined8 *)(param_1 + 0xb0);
  local_4e = 1;
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  FUN_02a4754c(auStack_a8,&DAT_041fdcd0);
  FUN_01248a38(uVar10,0,auStack_a8);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  FUN_02a4754c(auStack_c8,&DAT_041fdce8);
  FUN_01248a38(uVar10,1,auStack_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  FUN_02a4754c(auStack_e8,&DAT_041fdce8);
  FUN_01248a38(uVar10,2,auStack_e8);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x90),0);
  (**(code **)(**(long **)(param_1 + 0x90) + 0x90))(*(long **)(param_1 + 0x90),&local_48,&local_88);
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


