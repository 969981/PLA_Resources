/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1f2a8; name: FUN_02b1f2a8
 */


void FUN_02b1f2a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar7 = param_1[0x20];
  *param_1 = &PTR_FUN_04284220;
  param_1[9] = &PTR_LAB_04284258;
  if (lVar7 != 0) {
    lVar8 = param_1[0x22];
    plVar10 = (long *)param_1[0x23];
    param_1[0x21] = lVar7;
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar7,lVar8 - lVar7,8);
        goto LAB_02b1f364;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar8 - lVar7,8);
  }
LAB_02b1f364:
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0xe4));
  puVar11 = (undefined8 *)param_1[0xd];
  puVar12 = (undefined8 *)param_1[0xe];
  if (puVar12 != puVar11) {
    uVar6 = param_1[0x14];
    lVar7 = puVar11[uVar6 / 0x12] + (uVar6 % 0x12) * 0xd8;
    lVar8 = puVar11[(param_1[0x15] + uVar6) / 0x12] + ((param_1[0x15] + uVar6) % 0x12) * 0xd8;
    if (lVar8 != lVar7) {
      plVar10 = puVar11 + uVar6 / 0x12;
      do {
        FUN_02b22c04(lVar7);
        lVar7 = lVar7 + 0xd8;
        if (lVar7 - *plVar10 == 0xf30) {
          plVar10 = plVar10 + 1;
          lVar7 = *plVar10;
        }
      } while (lVar8 != lVar7);
      puVar11 = (undefined8 *)param_1[0xd];
      puVar12 = (undefined8 *)param_1[0xe];
    }
  }
  uVar6 = (long)puVar12 - (long)puVar11 >> 3;
  param_1[0x15] = 0;
  if (2 < uVar6) {
    lVar7 = tpidr_el0;
    do {
      plVar10 = (long *)param_1[0x16];
      uVar9 = *puVar11;
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) == 0) {
LAB_02b1f498:
        (**(code **)(*plVar10 + 0x18))(plVar10,uVar9,0xf30,8);
      }
      else {
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b1f498;
        FUN_02bcc824(plVar10,uVar9,0xf30,8);
      }
      puVar12 = (undefined8 *)param_1[0xe];
      puVar11 = (undefined8 *)(param_1[0xd] + 8);
      uVar6 = (long)puVar12 - (long)puVar11 >> 3;
      param_1[0xd] = puVar11;
    } while (2 < uVar6);
  }
  if (uVar6 == 1) {
    uVar9 = 9;
LAB_02b1f554:
    param_1[0x14] = uVar9;
  }
  else if (uVar6 == 2) {
    uVar9 = 0x12;
    goto LAB_02b1f554;
  }
  if (puVar11 != puVar12) {
    lVar7 = tpidr_el0;
    do {
      plVar10 = (long *)param_1[0x16];
      uVar9 = *puVar11;
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) == 0) {
LAB_02b1f5d4:
        (**(code **)(*plVar10 + 0x18))(plVar10,uVar9,0xf30,8);
      }
      else {
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b1f5d4;
        FUN_02bcc824(plVar10,uVar9,0xf30,8);
      }
      puVar11 = puVar11 + 1;
    } while (puVar12 != puVar11);
    lVar7 = param_1[0xe] - param_1[0xd];
    if (lVar7 != 0) {
      param_1[0xe] = param_1[0xe] + (lVar7 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  lVar7 = param_1[0xc];
  if (lVar7 != 0) {
    lVar8 = param_1[0xf];
    plVar10 = (long *)param_1[0x10];
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar10,lVar7,lVar8 - lVar7,8);
        plVar10 = (long *)param_1[0xb];
        goto joined_r0x02b1f70c;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,lVar8 - lVar7,8);
  }
  plVar10 = (long *)param_1[0xb];
joined_r0x02b1f70c:
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
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
                    /* WARNING: Could not recover jumptable at 0x02b1f764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x10))();
      return;
    }
  }
  return;
}


