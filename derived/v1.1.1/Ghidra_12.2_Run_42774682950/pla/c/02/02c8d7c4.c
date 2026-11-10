/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8d7c4; name: FUN_02c8d7c4
 */


void FUN_02c8d7c4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 auStack_58 [24];
  
  lVar11 = 0x353;
  ppuVar10 = &PTR_PTR_0428af28;
  do {
    FUN_00937d80(ppuVar10);
    lVar11 = lVar11 + -1;
    ppuVar10 = ppuVar10 + 6;
  } while (lVar11 != 0);
  FUN_02c51bd0();
  lVar11 = DAT_04407c08;
  DAT_04407c08 = 0;
  if (lVar11 == 0) goto LAB_02c8d928;
  FUN_02bcbe58(auStack_58,0);
  FUN_00d141fc(lVar11);
  uVar8 = DAT_04407c20;
  uVar7 = DAT_04407c18;
  plVar6 = DAT_04407c10;
  uVar9 = (**(code **)(*DAT_04407c10 + 0xc0))(DAT_04407c10);
  lVar5 = tpidr_el0;
  if ((uVar9 & 1) == 0) {
LAB_02c8d88c:
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,uVar7,uVar8);
  }
  else {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02c8d88c;
    FUN_02bcc824(plVar6,lVar11,uVar7,uVar8);
  }
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
LAB_02c8d928:
  plVar6 = DAT_04407c28;
  DAT_04407c28 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02c8d984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


