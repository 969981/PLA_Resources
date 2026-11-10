/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01508450; name: FUN_01508450
 */


void FUN_01508450(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  *param_2 = (long)(PTR_DAT_0437f850 + 0x10);
  if ((long *)param_2[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x21] + 0x20))();
  }
  if ((long *)param_2[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x1d] + 0x20))();
  }
  if ((long *)param_2[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x19] + 0x20))();
  }
  if ((long *)param_2[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x15] + 0x20))();
  }
  if ((long *)param_2[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x11] + 0x20))();
  }
  if ((long *)param_2[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0xd] + 0x20))();
  }
  if ((long *)param_2[9] != (long *)0x0) {
    (**(code **)(*(long *)param_2[9] + 0x20))();
  }
  plVar7 = (long *)param_2[4];
  if (plVar7 == (long *)0x0) {
LAB_01508538:
    plVar7 = (long *)param_2[3];
    if (plVar7 == (long *)0x0) goto LAB_01508558;
LAB_01508540:
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
    if (iVar5 != 0) goto LAB_01508558;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = (long *)param_2[1];
  }
  else {
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
    if (iVar5 != 0) goto LAB_01508538;
    (**(code **)(*plVar7 + 0x10))();
    plVar7 = (long *)param_2[3];
    if (plVar7 != (long *)0x0) goto LAB_01508540;
LAB_01508558:
    plVar7 = (long *)param_2[1];
  }
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
    }
  }
  plVar7 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar9 = param_1[2];
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  lVar6 = tpidr_el0;
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar7,param_2,uVar2,uVar9);
      goto LAB_015085f4;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar2,uVar9);
LAB_015085f4:
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar5 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar5;
  if (iVar5 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
  return;
}


