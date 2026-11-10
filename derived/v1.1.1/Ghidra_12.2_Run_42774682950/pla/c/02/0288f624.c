/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0288f624; name: FUN_0288f624
 */


void FUN_0288f624(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar13 = *param_1;
  if (lVar13 == 0) {
    return;
  }
  lVar14 = param_1[1];
  if (lVar14 == lVar13) {
    lVar14 = lVar13;
  }
  else {
    do {
      puVar11 = *(undefined8 **)(lVar14 + -0x38);
      lVar14 = lVar14 + -0x40;
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
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
    } while (lVar14 != lVar13);
    lVar14 = *param_1;
  }
  lVar12 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar13;
  uVar10 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar10 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar14,lVar12 - lVar14,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0288f7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar14,lVar12 - lVar14,8);
  return;
}


