/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b34e28; name: FUN_02b34e28
 */


void FUN_02b34e28(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *param_1;
  *param_1 = 0;
  if (lVar8 == 0) {
    return;
  }
  if ((char)param_1[2] == '\0') goto LAB_02b34ea4;
  plVar6 = *(long **)(lVar8 + 0x38);
  if (plVar6 == (long *)0x0) {
LAB_02b34e70:
    plVar6 = *(long **)(lVar8 + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_02b34e90;
LAB_02b34e78:
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
    if (iVar4 != 0) goto LAB_02b34e90;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(lVar8 + 0x28);
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
    if (iVar4 != 0) goto LAB_02b34e70;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(lVar8 + 0x30);
    if (plVar6 != (long *)0x0) goto LAB_02b34e78;
LAB_02b34e90:
    plVar6 = *(long **)(lVar8 + 0x28);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
LAB_02b34ea4:
  plVar6 = *(long **)param_1[1];
  uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar7 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar8,0x48,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b34f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0x48,8);
  return;
}


