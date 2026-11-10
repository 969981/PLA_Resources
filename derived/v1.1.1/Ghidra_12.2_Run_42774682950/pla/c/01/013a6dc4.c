/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a6dc4; name: FUN_013a6dc4
 */


void FUN_013a6dc4(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  
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
  FUN_00d37c90(&local_78,puVar9[0x15],1);
  plVar6 = (long *)local_78[0xd];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_78 != (long *)0x0) {
    lVar8 = local_78[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  local_78 = (long *)0x2fd03a5030f28708;
  FUN_02c2e7d0(plVar6,&local_78,*(undefined8 *)(param_1 + 0xb8));
  local_78 = (long *)0x9d72cc79ccc670d3;
  FUN_02c2e7d0(plVar6,&local_78,*(undefined8 *)(param_1 + 200));
  local_78 = (long *)0x9d72cb79ccc66f20;
  FUN_02c2e7d0(plVar6,&local_78,*(undefined8 *)(param_1 + 0xd0));
  local_27 = 1;
  local_38 = *(undefined8 *)(param_1 + 0xb8);
  uStack_30 = 0;
  local_28 = 1;
  local_26 = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 1;
  local_3c = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_78 = *(long **)(param_1 + 200);
  local_70 = *(undefined8 *)(param_1 + 0xd0);
  local_3e = 1;
  uStack_68 = 0;
  FUN_00d428b0(*(undefined8 *)(param_1 + 0xa8),0);
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x90))(*(long **)(param_1 + 0xa8),&local_38,&local_78);
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


