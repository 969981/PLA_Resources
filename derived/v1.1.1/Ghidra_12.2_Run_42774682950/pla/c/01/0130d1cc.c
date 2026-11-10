/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130d1cc; name: FUN_0130d1cc
 */


void FUN_0130d1cc(long param_1)

{
  int *piVar1;
  long **pplVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar6 != 0))
  {
    uVar9 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar9;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar7 != (long *)PTR_DAT_04379c98) {
    for (plVar7 = (long *)*plVar7; plVar7 != (long *)PTR_DAT_04379c98; plVar7 = (long *)*plVar7) {
    }
  }
  local_48 = (long *)&DAT_72837ff1f1cec6a2;
  pcStack_40 = "common/map.dat";
  local_38 = 0xe;
  local_30 = (long *)0x0;
  FUN_00d37bb4(&local_28,puVar11[0x15],&local_48,10);
  plVar7 = (long *)local_28[0xd];
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_28 != (long *)0x0) {
    lVar10 = local_28[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  uVar8 = FUN_0131ef4c();
  bVar5 = (uVar8 & 1) == 0;
  pplVar2 = &local_48;
  if (bVar5) {
    pplVar2 = &local_28;
  }
  plVar3 = (long *)0xe3b48e8e6294ea46;
  if (bVar5) {
    plVar3 = (long *)0xe3b48f8e6294ebf9;
  }
  *pplVar2 = plVar3;
  FUN_02c2e7d0(plVar7,pplVar2,*(undefined8 *)(param_1 + 0xa0));
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


