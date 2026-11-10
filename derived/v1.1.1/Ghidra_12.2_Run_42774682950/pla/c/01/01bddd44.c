/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bddd44; name: FUN_01bddd44
 */


void FUN_01bddd44(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if ((long *)param_1[6] != (long *)0x0) {
    lVar11 = tpidr_el0;
    plVar13 = (long *)param_1[6];
LAB_01bdde60:
    do {
      plVar12 = (long *)*plVar13;
      puVar14 = (undefined8 *)plVar13[3];
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          puVar14[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_68 = *puVar14;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
      plVar15 = (long *)param_1[7];
      uVar9 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar15,plVar13,0x30,8);
          plVar13 = plVar12;
          if (plVar12 == (long *)0x0) break;
          goto LAB_01bdde60;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar13,0x30,8);
      plVar13 = plVar12;
    } while (plVar12 != (long *)0x0);
  }
  lVar11 = *param_1;
  *param_1 = 0;
  if (lVar11 == 0) {
    return;
  }
  lVar10 = param_1[1];
  plVar13 = (long *)param_1[2];
  uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar9 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar13,lVar11,lVar10 << 3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01bdde30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,lVar10 << 3,8);
  return;
}


