/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c377e8; name: FUN_00c377e8
 */


void FUN_00c377e8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_041e09c8;
  param_1[9] = &PTR_LAB_041e0a30;
  plVar7 = (long *)param_1[0x14];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      lVar9 = param_1[0xb];
      goto joined_r0x00c378d4;
    }
  }
  lVar9 = param_1[0xb];
joined_r0x00c378d4:
  if (lVar9 == 0) {
    return;
  }
  lVar2 = param_1[0xd];
  plVar7 = (long *)param_1[0xe];
  param_1[0xc] = lVar9;
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar8 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar9,lVar2 - lVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c378c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar2 - lVar9,8);
  return;
}


