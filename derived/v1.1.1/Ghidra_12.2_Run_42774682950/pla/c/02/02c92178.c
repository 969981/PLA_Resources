/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c92178; name: FUN_02c92178
 */


void FUN_02c92178(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_04294fa8;
  param_1[9] = &PTR_LAB_042950c0;
  param_1[10] = &PTR_LAB_042951a0;
  FUN_02c90d40();
  if ((long *)param_1[0x66] != (long *)0x0) {
    lVar8 = tpidr_el0;
    plVar9 = (long *)param_1[0x66];
    do {
      while( true ) {
        plVar10 = (long *)param_1[0x67];
        plVar11 = (long *)*plVar9;
        uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar6 & 1) != 0) break;
LAB_02c92238:
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0x20,8);
        plVar9 = plVar11;
        if (plVar11 == (long *)0x0) goto LAB_02c922c0;
      }
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02c92238;
      FUN_02bcc824(plVar10,plVar9,0x20,8);
      plVar9 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
LAB_02c922c0:
  lVar8 = param_1[0x60];
  param_1[0x60] = 0;
  if (lVar8 == 0) {
LAB_02c9234c:
    plVar9 = (long *)param_1[0x5d];
  }
  else {
    lVar7 = param_1[0x61];
    plVar9 = (long *)param_1[0x62];
    uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar6 & 1) == 0) {
LAB_02c92330:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar7 << 3,8);
      goto LAB_02c9234c;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02c92330;
    FUN_02bcc824(plVar9,lVar8,lVar7 << 3,8);
    plVar9 = (long *)param_1[0x5d];
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      plVar9 = (long *)param_1[0x5b];
      goto joined_r0x02c92418;
    }
  }
  plVar9 = (long *)param_1[0x5b];
joined_r0x02c92418:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 0x20))();
  }
  FUN_00984b00(param_1 + 0x4e);
  plVar9 = (long *)param_1[0x4d];
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


