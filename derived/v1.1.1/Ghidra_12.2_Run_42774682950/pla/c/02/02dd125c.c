/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd125c; name: FUN_02dd125c
 */


void FUN_02dd125c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 local_58 [3];
  
  *param_1 = (long)&PTR_FUN_0429a800;
  param_1[9] = (long)&PTR_LAB_0429a890;
  param_1[10] = (long)&PTR_LAB_0429a930;
  pcVar11 = (code *)param_1[0x17];
  if (pcVar11 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar11)(param_1 + 0x1a);
  }
  lVar13 = param_1[0x12];
  param_1[0x12] = 0;
  if (lVar13 == 0) goto LAB_02dd13c4;
  FUN_02bcbe58(local_58,0);
  FUN_02dd2e48(lVar13);
  plVar4 = (long *)param_1[0x13];
  lVar5 = param_1[0x14];
  lVar14 = param_1[0x15];
  uVar10 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  lVar8 = tpidr_el0;
  if ((uVar10 & 1) == 0) {
LAB_02dd1328:
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar13,lVar5,lVar14);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02dd1328;
    FUN_02bcc824(plVar4,lVar13,lVar5,lVar14);
  }
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar9 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar9;
  if (iVar9 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
LAB_02dd13c4:
  puVar1 = PTR_DAT_0437a7b8;
  *param_1 = (long)(PTR_DAT_0437a7b8 + 0x10);
  param_1[9] = (long)(puVar1 + 0x88);
  param_1[10] = (long)(puVar1 + 0x128);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x6c));
  puVar1 = PTR_DAT_04387f98 + 0x58;
  puVar2 = PTR_DAT_04387f98 + 0xf8;
  *param_1 = (long)(PTR_DAT_04387f98 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  puVar12 = (undefined8 *)param_1[0xb];
  if (puVar12 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar12 + 1);
    do {
      iVar9 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58[0] = *puVar12;
      FUN_02a44274(lVar13 + 0xd8,local_58);
    }
  }
  return;
}


