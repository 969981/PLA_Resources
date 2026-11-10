/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a49060; name: FUN_02a49060
 */


void FUN_02a49060(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 local_48;
  
  *param_1 = (long)&PTR_FUN_0427d628;
  param_1[9] = (long)&PTR_LAB_0427d698;
  param_1[10] = (long)&DAT_0427d6e0;
  pcVar9 = (code *)param_1[0x73];
  if (pcVar9 != (code *)0x0) {
    param_1[0x75] = 0;
    param_1[0x74] = 0;
    param_1[0x73] = 0;
    param_1[0x72] = 0;
    (*pcVar9)(param_1 + 0x76);
  }
  pcVar9 = (code *)param_1[99];
  if (pcVar9 != (code *)0x0) {
    param_1[0x65] = 0;
    param_1[100] = 0;
    param_1[99] = 0;
    param_1[0x62] = 0;
    (*pcVar9)(param_1 + 0x66);
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x2e4));
  lVar11 = param_1[0x58];
  param_1[0x58] = 0;
  if (lVar11 != 0) {
    plVar14 = (long *)param_1[0x59];
    lVar12 = param_1[0x5a];
    lVar13 = param_1[0x5b];
    uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar8 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar11,lVar12,lVar13);
        goto LAB_02a49168;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar12,lVar13);
  }
LAB_02a49168:
  puVar1 = PTR_DAT_04379610 + 0x58;
  puVar2 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  puVar10 = (undefined8 *)param_1[0xb];
  if (puVar10 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar10;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  return;
}


