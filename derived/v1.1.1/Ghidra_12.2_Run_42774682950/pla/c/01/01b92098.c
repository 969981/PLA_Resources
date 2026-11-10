/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b92098; name: FUN_01b92098
 */


void FUN_01b92098(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  
  *param_1 = &PTR_FUN_04242278;
  param_1[9] = &PTR_LAB_04242378;
  param_1[10] = &PTR_LAB_04242458;
  plVar5 = (long *)param_1[0xe8];
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      cVar2 = *(char *)((long)param_1 + 0x724);
      goto joined_r0x01b920ec;
    }
  }
  cVar2 = *(char *)((long)param_1 + 0x724);
joined_r0x01b920ec:
  if (cVar2 != '\0') {
    *(undefined1 *)((long)param_1 + 0x724) = 0;
  }
  if (*(char *)(param_1 + 0xe3) != '\0') {
    *(undefined1 *)(param_1 + 0xe3) = 0;
  }
  FUN_01b92b2c(param_1 + 0xa0);
  FUN_01b92b2c(param_1 + 0x5e);
  puVar7 = (undefined8 *)param_1[0x5a];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
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
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_18 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_18);
    }
  }
  if (*(char *)(param_1 + 0x54) != '\0') {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  FUN_01b92d64(param_1 + 0x3e);
  FUN_02a4c4ec(param_1);
  return;
}


