/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01960b6c; name: FUN_01960b6c
 */


void FUN_01960b6c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04379498;
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return;
  }
  lVar10 = param_1[1];
  lVar8 = lVar7;
  if (lVar10 != lVar7) {
    plVar9 = (long *)PTR_DAT_043794a0;
    plVar12 = (long *)PTR_DAT_043794a8;
    do {
      puVar11 = *(undefined8 **)(lVar10 + -0x18);
      lVar10 = lVar10 + -0x20;
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
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
          puVar11[2] = 0;
          if ((*puVar4 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(puVar4);
            plVar9 = (long *)PTR_DAT_043794a0;
            plVar12 = (long *)PTR_DAT_043794a8;
            if (iVar5 != 0) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
              plVar9 = (long *)PTR_DAT_043794a0;
              plVar12 = (long *)PTR_DAT_043794a8;
            }
          }
          lVar8 = *plVar9;
          *plVar12 = lVar8;
          local_38 = *puVar11;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
    } while (lVar10 != lVar7);
    lVar8 = *param_1;
  }
  param_1[1] = lVar7;
  lVar7 = param_1[2];
  plVar9 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar6 & 1) != 0) {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar10 + 0x38d480)) {
      FUN_02bcc824(plVar9,lVar8,lVar7 - lVar8,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01960c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar7 - lVar8,8);
  return;
}


