/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02561c78; name: FUN_02561c78
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02561c78(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_0425cca0;
  param_1[9] = &PTR_LAB_0425cda0;
  param_1[10] = &PTR_LAB_0425ce80;
  puVar6 = (undefined8 *)param_1[0xa2];
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
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  if ((long *)param_1[0x9b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9b] + 0x20))();
  }
  puVar6 = (undefined8 *)param_1[0x98];
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
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  if ((long *)param_1[0x96] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x96] + 0x20))();
  }
  if ((long *)param_1[0x92] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x92] + 0x20))();
  }
  pcVar7 = (code *)param_1[0x7f];
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0x6f];
  }
  else {
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    (*pcVar7)(param_1 + 0x82);
    pcVar7 = (code *)param_1[0x6f];
  }
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0x5d];
  }
  else {
    param_1[0x71] = 0;
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    (*pcVar7)(param_1 + 0x72);
    pcVar7 = (code *)param_1[0x5d];
  }
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)param_1[0x4d];
  }
  else {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar7)(param_1 + 0x60);
    pcVar7 = (code *)param_1[0x4d];
  }
  if (pcVar7 == (code *)0x0) {
    plVar5 = (long *)param_1[0x48];
  }
  else {
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar7)(param_1 + 0x50);
    plVar5 = (long *)param_1[0x48];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  if ((long *)param_1[0x44] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x44] + 0x20))();
  }
  FUN_02561f18(param_1 + 0x3e);
  FUN_02a4c4ec(param_1);
  return;
}


