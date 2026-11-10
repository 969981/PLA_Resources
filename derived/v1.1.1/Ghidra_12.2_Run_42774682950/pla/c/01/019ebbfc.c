/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019ebbfc; name: FUN_019ebbfc
 */


void FUN_019ebbfc(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar14 = (long *)*param_1;
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar15 = (long *)param_1[1];
  plVar13 = plVar14;
  if (plVar15 != plVar14) {
    do {
      plVar15 = plVar15 + -8;
      puVar11 = (undefined8 *)*plVar15;
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar11[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar7 = lVar12;
          local_58 = *puVar11;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
    } while (plVar15 != plVar14);
    plVar13 = (long *)*param_1;
  }
  lVar12 = param_1[2];
  plVar15 = (long *)param_1[3];
  param_1[1] = plVar14;
  uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar10 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar15,plVar13,lVar12 - (long)plVar13,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x019ebcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar15 + 0x18))(plVar15,plVar13,lVar12 - (long)plVar13,0x10);
  return;
}


