/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fdf80; name: FUN_012fdf80
 */


void FUN_012fdf80(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 *puVar11;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar6 = (long *)(**(code **)*puVar11)(puVar11);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar5 != 0))
  {
    uVar8 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar8;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar6 != (long *)PTR_DAT_04379c98) {
    for (plVar6 = (long *)*plVar6; plVar6 != (long *)PTR_DAT_04379c98; plVar6 = (long *)*plVar6) {
    }
  }
  FUN_00d37c90(&local_88,puVar11[0x15],0);
  plVar6 = (long *)local_88[0xd];
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
  if (local_88 != (long *)0x0) {
    lVar9 = local_88[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_88 = (long *)0x345d847f1b77cfa9;
  FUN_02c2e7d0(plVar6,&local_88,*(undefined8 *)(param_1 + 0xa0));
  local_88 = (long *)0x526e719fe403adef;
  FUN_02c2e7d0(plVar6,&local_88,*(undefined8 *)(param_1 + 0xa8));
  local_88 = (long *)0x526e729fe403afa2;
  FUN_02c2e7d0(plVar6,&local_88,*(undefined8 *)(param_1 + 0xb0));
  local_88 = (long *)0x526e739fe403b155;
  FUN_02c2e7d0(plVar6,&local_88,*(undefined8 *)(param_1 + 0xb8));
  local_37 = 1;
  local_48 = *(undefined8 *)(param_1 + 0xa0);
  uStack_40 = 0;
  local_38 = 0;
  local_36 = 0;
  local_88 = (long *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  local_4e = 0xffff;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = 0;
  uVar7 = FUN_012ffcf8(*(undefined8 *)(param_1 + 0x90));
  if ((uVar7 & 1) == 0) {
    local_88 = *(long **)(param_1 + 0xb0);
    puVar11 = &local_80;
    uVar10 = 1;
  }
  else {
    local_88 = *(long **)(param_1 + 0xa8);
    local_80 = *(undefined8 *)(param_1 + 0xb0);
    puVar11 = &local_78;
    uVar10 = 2;
  }
  *puVar11 = *(undefined8 *)(param_1 + 0xb8);
  local_4e = CONCAT22(local_4e._2_2_,uVar10);
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x98),0);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x90))(*(long **)(param_1 + 0x98),&local_48,&local_88);
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


