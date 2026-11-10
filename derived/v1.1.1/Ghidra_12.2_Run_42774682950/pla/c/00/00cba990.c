/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cba990; name: FUN_00cba990
 */


void FUN_00cba990(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_0437b020 + 0x78;
  *param_1 = (long)(PTR_DAT_0437b020 + 0x10);
  param_1[9] = (long)puVar1;
  plVar8 = (long *)param_1[0x14];
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
      lVar10 = param_1[0xb];
      goto joined_r0x00cbaa80;
    }
  }
  lVar10 = param_1[0xb];
joined_r0x00cbaa80:
  if (lVar10 == 0) {
    return;
  }
  lVar3 = param_1[0xd];
  plVar8 = (long *)param_1[0xe];
  param_1[0xc] = lVar10;
  uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar9 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar8,lVar10,lVar3 - lVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cbaa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar3 - lVar10,8);
  return;
}


