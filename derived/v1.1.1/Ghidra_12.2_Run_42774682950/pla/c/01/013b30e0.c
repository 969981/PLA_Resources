/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b30e0; name: FUN_013b30e0
 */


void FUN_013b30e0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 local_18;
  
  *param_1 = &PTR_FUN_04209ea8;
  param_1[9] = &PTR_LAB_04209f28;
  param_1[10] = &PTR_LAB_04209f70;
  if (param_1[0x2d] != 0) {
    FUN_02a49534();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x35));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x31));
  puVar6 = (undefined8 *)param_1[0x2e];
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar6[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar4 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  plVar5 = (long *)param_1[0x2d];
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  FUN_013b350c(param_1 + 0x26);
  FUN_013b348c(param_1 + 0x24);
  if (*(char *)(param_1 + 0x22) != '\0') {
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  pcVar7 = (code *)param_1[0x13];
  if (pcVar7 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar7)(param_1 + 0x16);
  }
  FUN_013b3364(param_1);
  return;
}


