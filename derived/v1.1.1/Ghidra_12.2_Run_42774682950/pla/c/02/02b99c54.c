/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b99c54; name: FUN_02b99c54
 */


void FUN_02b99c54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  *(undefined1 *)(param_1 + 0x110) = 0;
  FUN_00878410(param_1 + 0x110);
  lVar8 = *(long *)(param_1 + 0xd0);
  if (lVar8 != 0) {
    plVar7 = *(long **)(param_1 + 0xe8);
    *(long *)(param_1 + 0xd8) = lVar8;
    lVar9 = *(long *)(param_1 + 0xe0) - lVar8;
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar8,lVar9,4);
        plVar7 = *(long **)(param_1 + 0x98);
        goto joined_r0x02b99d04;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar9,4);
  }
  plVar7 = *(long **)(param_1 + 0x98);
joined_r0x02b99d04:
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,param_1 + 0x90);
    plVar7 = *(long **)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
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
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    plVar7 = *(long **)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
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
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x74));
  FUN_02b9a190(param_1 + 8,*(undefined8 *)(param_1 + 0x38));
  lVar8 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar8 == 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x18);
  lVar9 = *(long *)(param_1 + 0x10) << 3;
  uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar6 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar8,lVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b99e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar9,8);
  return;
}


