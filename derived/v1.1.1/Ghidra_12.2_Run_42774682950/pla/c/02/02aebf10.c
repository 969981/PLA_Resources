/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aebf10; name: FUN_02aebf10
 */


void FUN_02aebf10(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_042832c8;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x284));
  if ((long *)param_1[0x48] != (long *)0x0) {
    lVar9 = tpidr_el0;
    plVar10 = (long *)param_1[0x48];
LAB_02aebf74:
    do {
      plVar11 = (long *)*plVar10;
      plVar6 = (long *)plVar10[6];
      if (plVar6 == (long *)0x0) {
LAB_02aebf98:
        plVar6 = (long *)plVar10[5];
      }
      else {
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
        if (iVar4 != 0) goto LAB_02aebf98;
        (**(code **)(*plVar6 + 0x10))();
        plVar6 = (long *)plVar10[5];
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      plVar6 = (long *)param_1[0x49];
      uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar7 & 1) == 0) {
LAB_02aebffc:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar10,0x40,8);
        plVar10 = plVar11;
        if (plVar11 == (long *)0x0) break;
        goto LAB_02aebf74;
      }
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02aebffc;
      FUN_02bcc824(plVar6,plVar10,0x40,8);
      plVar10 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
  lVar9 = param_1[0x42];
  param_1[0x42] = 0;
  if (lVar9 != 0) {
    lVar8 = param_1[0x43];
    plVar10 = (long *)param_1[0x44];
    uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar7 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar9,lVar8 << 3,8);
        goto LAB_02aec128;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar8 << 3,8);
  }
LAB_02aec128:
  FUN_02aec1d4(param_1 + 0x35);
  FUN_02aec448(param_1 + 0x28);
  FUN_00af2598(param_1 + 0x1b);
  FUN_00d7b440(param_1 + 0xe);
  FUN_00af221c(param_1 + 1);
  return;
}


