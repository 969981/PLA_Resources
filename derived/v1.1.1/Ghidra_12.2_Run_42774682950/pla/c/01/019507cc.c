/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019507cc; name: FUN_019507cc
 */


void FUN_019507cc(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 local_58;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  plVar14 = (long *)*param_1;
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar15 = (long *)param_1[1];
  plVar12 = plVar14;
  if (plVar15 != plVar14) {
    do {
      while( true ) {
        puVar16 = (undefined8 *)plVar15[-3];
        plVar15 = plVar15 + -4;
        if (puVar16 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar16 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            puVar16[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_58 = *puVar16;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        plVar12 = (long *)*plVar15;
        if (plVar12 != (long *)0x0) break;
LAB_019509cc:
        if (plVar15 == plVar14) goto LAB_019509d4;
      }
      plVar2 = plVar12 + 10;
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 != 0) goto LAB_019509cc;
      (**(code **)(*plVar12 + 0x10))();
    } while (plVar15 != plVar14);
LAB_019509d4:
    plVar12 = (long *)*param_1;
  }
  lVar13 = param_1[2];
  plVar15 = (long *)param_1[3];
  param_1[1] = plVar14;
  uVar11 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar11 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar15,plVar12,lVar13 - (long)plVar12,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x019508b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar15 + 0x18))(plVar15,plVar12,lVar13 - (long)plVar12,8);
  return;
}


