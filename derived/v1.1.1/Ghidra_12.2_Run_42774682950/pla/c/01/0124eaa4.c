/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124eaa4; name: FUN_0124eaa4
 */


void FUN_0124eaa4(long param_1)

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
  long *local_38;
  undefined8 local_30;
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
  FUN_00d37c90(&local_38,puVar9[0x15],0);
  plVar6 = (long *)local_38[0xd];
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
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  local_38 = (long *)0xaf5737ee2445eaa7;
  FUN_02c2e7d0(plVar6,&local_38,*(undefined8 *)(param_1 + 0x98));
  local_27 = 1;
  local_38 = *(long **)(param_1 + 0x98);
  local_28 = 0;
  local_26 = 0;
  local_30 = 0;
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x90),0);
  FUN_00d67ea8(*(undefined8 *)(param_1 + 0x90),&local_38);
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


