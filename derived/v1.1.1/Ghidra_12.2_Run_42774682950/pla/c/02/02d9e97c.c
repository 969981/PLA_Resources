/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d9e97c; name: FUN_02d9e97c
 */


void FUN_02d9e97c(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_58 [3];
  
  puVar11 = (undefined8 *)param_1[0x12];
  *param_1 = (long)&PTR_FUN_04298ca0;
  param_1[9] = (long)&PTR_LAB_04298cf8;
  param_1[10] = (long)&PTR_LAB_04298d40;
  param_1[0x12] = 0;
  if (puVar11 == (undefined8 *)0x0) goto LAB_02d9ead4;
  FUN_02bcbe58(local_58,0);
  (**(code **)*puVar11)(puVar11);
  plVar4 = (long *)param_1[0x13];
  lVar10 = param_1[0x14];
  lVar12 = param_1[0x15];
  uVar9 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  lVar7 = tpidr_el0;
  if ((uVar9 & 1) == 0) {
LAB_02d9ea38:
    (**(code **)(*plVar4 + 0x18))(plVar4,puVar11,lVar10,lVar12);
  }
  else {
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02d9ea38;
    FUN_02bcc824(plVar4,puVar11,lVar10,lVar12);
  }
  if (*(char *)(lVar7 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar7 + 0x38d488) = 1;
    *(undefined8 *)(lVar7 + 0x38d478) = 0;
    *(undefined8 *)(lVar7 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar8 = *(int *)(lVar7 + 0x38d480) + -1;
  *(int *)(lVar7 + 0x38d480) = iVar8;
  if (iVar8 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar7 + 0x38d484) = 0;
  }
LAB_02d9ead4:
  puVar11 = (undefined8 *)param_1[0x10];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58[0] = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,local_58);
    }
  }
  puVar2 = PTR_DAT_04388328 + 0x68;
  puVar3 = PTR_DAT_04388328 + 0xb0;
  *param_1 = (long)(PTR_DAT_04388328 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  if ((char)param_1[0xd] != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar11 = (undefined8 *)param_1[0xb];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58[0] = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,local_58);
    }
  }
  return;
}


