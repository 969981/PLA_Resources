/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fe26dc; name: FUN_00fe26dc
 */


void FUN_00fe26dc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_18;
  
  *param_1 = (long)&PTR_FUN_041ef050;
  param_1[9] = (long)&PTR_LAB_041ef0a0;
  param_1[10] = (long)&PTR_LAB_041ef0e8;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x7f));
  pcVar9 = (code *)param_1[0x6d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    (*pcVar9)(param_1 + 0x70);
  }
  pcVar9 = (code *)param_1[0x5d];
  if (pcVar9 == (code *)0x0) {
    pcVar9 = (code *)param_1[0x4d];
    if (pcVar9 != (code *)0x0) goto LAB_00fe28b8;
LAB_00fe273c:
    pcVar9 = (code *)param_1[0x3d];
    if (pcVar9 != (code *)0x0) goto LAB_00fe28d8;
LAB_00fe2744:
    plVar8 = (long *)param_1[0x35];
    if (plVar8 == (long *)0x0) goto LAB_00fe276c;
LAB_00fe274c:
    if (plVar8[1] == 0) goto LAB_00fe276c;
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 != 0) goto LAB_00fe276c;
    (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)param_1[0x2e];
  }
  else {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar9)(param_1 + 0x60);
    pcVar9 = (code *)param_1[0x4d];
    if (pcVar9 == (code *)0x0) goto LAB_00fe273c;
LAB_00fe28b8:
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar9)(param_1 + 0x50);
    pcVar9 = (code *)param_1[0x3d];
    if (pcVar9 == (code *)0x0) goto LAB_00fe2744;
LAB_00fe28d8:
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (*pcVar9)(param_1 + 0x40);
    plVar8 = (long *)param_1[0x35];
    if (plVar8 != (long *)0x0) goto LAB_00fe274c;
LAB_00fe276c:
    plVar8 = (long *)param_1[0x2e];
  }
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
      pcVar9 = (code *)param_1[0x15];
      goto joined_r0x00fe2890;
    }
  }
  pcVar9 = (code *)param_1[0x15];
joined_r0x00fe2890:
  if (pcVar9 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar9)(param_1 + 0x18);
  }
  plVar8 = (long *)param_1[0xe];
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar11 = (undefined8 *)param_1[0xb];
  if (puVar11 != (undefined8 *)0x0) {
    piVar4 = (int *)(puVar11 + 1);
    do {
      iVar7 = *piVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_18 = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_18);
    }
  }
  return;
}


