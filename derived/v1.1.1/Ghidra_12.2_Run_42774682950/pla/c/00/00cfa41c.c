/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cfa41c; name: FUN_00cfa41c
 */


void FUN_00cfa41c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_28;
  
  lVar8 = *param_1;
  *param_1 = 0;
  if (lVar8 == 0) {
    return;
  }
  if ((char)param_1[2] != '\0') {
    puVar6 = *(undefined8 **)(lVar8 + 0x298);
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
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar6;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    puVar6 = *(undefined8 **)(lVar8 + 0x288);
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
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar6;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    puVar6 = *(undefined8 **)(lVar8 + 0x270);
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
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar6;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    puVar6 = *(undefined8 **)(lVar8 + 0x30);
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
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar6;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  plVar9 = *(long **)param_1[1];
  uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar5 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar9,lVar8,0x2b0,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cfa658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0x2b0,0x10);
  return;
}


