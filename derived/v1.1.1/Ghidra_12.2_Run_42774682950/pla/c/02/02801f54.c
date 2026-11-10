/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02801f54; name: FUN_02801f54
 */


void FUN_02801f54(long *param_1)

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
  long lVar13;
  long *plVar14;
  undefined8 local_48;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar13 = param_1[1];
  lVar12 = param_1[2];
  while (lVar12 != lVar13) {
    while( true ) {
      param_1[2] = lVar12 + -0x20;
      puVar11 = *(undefined8 **)(lVar12 + -0x18);
      lVar12 = lVar12 + -0x20;
      if (puVar11 == (undefined8 *)0x0) break;
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
        local_48 = *puVar11;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
      lVar12 = param_1[2];
      if (lVar12 == lVar13) goto LAB_02802018;
    }
  }
LAB_02802018:
  lVar13 = *param_1;
  if (lVar13 == 0) {
    return;
  }
  lVar12 = param_1[3];
  plVar14 = *(long **)param_1[4];
  uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if ((uVar10 & 1) != 0) {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar14,lVar13,lVar12 - lVar13,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,lVar12 - lVar13,8);
  return;
}


