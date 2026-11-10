/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107d384; name: FUN_0107d384
 */


void FUN_0107d384(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 local_28;
  
  *param_1 = (long)&PTR_FUN_041ef618;
  param_1[9] = (long)&PTR_LAB_041ef668;
  param_1[10] = (long)&PTR_LAB_041ef6b0;
  if ((*(char *)((long)param_1 + 0x109) == '\0') && (*(char *)((long)param_1 + 0x121) == '\0')) {
    FUN_0107d5a4(param_1);
  }
  if ((param_1[0x2f] != 0) && ((int)param_1[0x30] != -2)) {
    FUN_00155150(param_1[0x2f],0xfff0b9d8);
  }
  if ((param_1[0x2d] != 0) && ((int)param_1[0x2e] != -2)) {
    FUN_00155150(param_1[0x2d],0xfff0b9d8);
  }
  if ((param_1[0x2b] != 0) && ((int)param_1[0x2c] != -2)) {
    FUN_00155150(param_1[0x2b],0xfff0b9d8);
  }
  plVar7 = (long *)param_1[0x29];
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  lVar8 = param_1[0x25];
  param_1[0x25] = 0;
  if (lVar8 == 0) {
    plVar7 = (long *)param_1[0x20];
  }
  else {
    FUN_0107e1fc(param_1 + 0x26);
    plVar7 = (long *)param_1[0x20];
  }
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
      pcVar9 = (code *)param_1[0xf];
      goto joined_r0x0107d46c;
    }
  }
  pcVar9 = (code *)param_1[0xf];
joined_r0x0107d46c:
  if (pcVar9 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar9)(param_1 + 0x12);
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar10 = (undefined8 *)param_1[0xb];
  if (puVar10 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  return;
}


