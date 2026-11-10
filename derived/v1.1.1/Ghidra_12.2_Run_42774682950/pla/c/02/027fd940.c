/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fd940; name: FUN_027fd940
 */


void FUN_027fd940(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04379610;
  *param_1 = &PTR_FUN_0426cf00;
  param_1[9] = &PTR_LAB_0426d000;
  param_1[10] = &PTR_LAB_0426d048;
  puVar6 = (undefined8 *)param_1[0xf3];
  param_1[0xe8] = puVar4 + 0x10;
  param_1[0xf1] = puVar4 + 0x58;
  param_1[0xf2] = puVar4 + 0xa0;
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar6;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  param_1[0xd4] = puVar4 + 0x10;
  puVar6 = (undefined8 *)param_1[0xdf];
  param_1[0xdd] = puVar4 + 0x58;
  param_1[0xde] = puVar4 + 0xa0;
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar6;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  puVar6 = (undefined8 *)param_1[0xd1];
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar6;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  param_1[0x9b] = &PTR_LAB_0426d070;
  FUN_027fdd88(param_1 + 0xa0);
  param_1[0x9b] = PTR_DAT_0437a028 + 0x10;
  FUN_00d3b410(param_1);
  return;
}


