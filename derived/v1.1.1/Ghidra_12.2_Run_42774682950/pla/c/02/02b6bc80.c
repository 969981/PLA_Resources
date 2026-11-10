/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6bc80; name: FUN_02b6bc80
 */


void FUN_02b6bc80(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_04285640;
  param_1[9] = &PTR_LAB_04285678;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x464));
  lVar9 = param_1[0x7a];
  if (lVar9 == 0) {
LAB_02b6bd48:
    plVar11 = (long *)param_1[0x79];
    if (plVar11 == (long *)0x0) goto LAB_02b6bd68;
LAB_02b6bd50:
    plVar10 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02b6bd68;
    (**(code **)(*plVar11 + 0x10))();
    plVar11 = (long *)param_1[0x78];
    if (plVar11 != (long *)0x0) goto LAB_02b6bd70;
LAB_02b6bd88:
    lVar9 = param_1[0x71];
    if (lVar9 == 0) goto LAB_02b6be14;
LAB_02b6bd90:
    lVar8 = param_1[0x73];
    param_1[0x72] = lVar9;
    plVar11 = (long *)param_1[0x74];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6bdf8:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,0x10);
      goto LAB_02b6be14;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6bdf8;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,0x10);
    lVar9 = param_1[0x6a];
    if (lVar9 != 0) goto LAB_02b6be1c;
LAB_02b6bea0:
    lVar9 = param_1[99];
    if (lVar9 == 0) goto LAB_02b6bf2c;
LAB_02b6bea8:
    lVar8 = param_1[0x65];
    param_1[100] = lVar9;
    plVar11 = (long *)param_1[0x66];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6bf10:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,0x10);
      goto LAB_02b6bf2c;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6bf10;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,0x10);
    lVar9 = param_1[0x5c];
    if (lVar9 != 0) goto LAB_02b6bf34;
LAB_02b6bfb8:
    lVar9 = param_1[0x55];
    if (lVar9 == 0) goto LAB_02b6c044;
LAB_02b6bfc0:
    lVar8 = param_1[0x57];
    param_1[0x56] = lVar9;
    plVar11 = (long *)param_1[0x58];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c028:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,0x10);
      goto LAB_02b6c044;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c028;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,0x10);
    lVar9 = param_1[0x4e];
    if (lVar9 != 0) goto LAB_02b6c04c;
LAB_02b6c0d0:
    lVar9 = param_1[0x47];
    if (lVar9 == 0) goto LAB_02b6c15c;
LAB_02b6c0d8:
    lVar8 = param_1[0x49];
    param_1[0x48] = lVar9;
    plVar11 = (long *)param_1[0x4a];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c140:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,0x10);
      goto LAB_02b6c15c;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c140;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,0x10);
    lVar9 = param_1[0x3f];
    if (lVar9 != 0) goto LAB_02b6c164;
LAB_02b6c1e8:
    lVar9 = param_1[0x37];
    if (lVar9 == 0) goto LAB_02b6c270;
LAB_02b6c1f0:
    lVar8 = param_1[0x39];
    plVar11 = (long *)param_1[0x3a];
    param_1[0x38] = lVar9;
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c254:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,4);
      goto LAB_02b6c270;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c254;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,4);
    lVar9 = param_1[0x2f];
    if (lVar9 != 0) goto LAB_02b6c278;
LAB_02b6c2f8:
    lVar9 = param_1[0x27];
    if (lVar9 == 0) goto LAB_02b6c380;
LAB_02b6c300:
    lVar8 = param_1[0x29];
    plVar11 = (long *)param_1[0x2a];
    param_1[0x28] = lVar9;
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c364:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,4);
      goto LAB_02b6c380;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c364;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,4);
    lVar9 = param_1[0x20];
    if (lVar9 != 0) goto LAB_02b6c388;
LAB_02b6c408:
    lVar9 = param_1[0x19];
    if (lVar9 == 0) goto LAB_02b6c490;
LAB_02b6c410:
    lVar8 = param_1[0x1b];
    plVar11 = (long *)param_1[0x1c];
    param_1[0x1a] = lVar9;
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c474:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,2);
      goto LAB_02b6c490;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c474;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,2);
    plVar11 = (long *)param_1[0x12];
  }
  else {
    lVar8 = param_1[0x7c];
    param_1[0x7b] = lVar9;
    plVar11 = (long *)param_1[0x7d];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6bd2c:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,2);
      goto LAB_02b6bd48;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6bd2c;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,2);
    plVar11 = (long *)param_1[0x79];
    if (plVar11 != (long *)0x0) goto LAB_02b6bd50;
LAB_02b6bd68:
    plVar11 = (long *)param_1[0x78];
    if (plVar11 == (long *)0x0) goto LAB_02b6bd88;
LAB_02b6bd70:
    plVar10 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02b6bd88;
    (**(code **)(*plVar11 + 0x10))();
    lVar9 = param_1[0x71];
    if (lVar9 != 0) goto LAB_02b6bd90;
LAB_02b6be14:
    lVar9 = param_1[0x6a];
    if (lVar9 == 0) goto LAB_02b6bea0;
LAB_02b6be1c:
    lVar8 = param_1[0x6c];
    param_1[0x6b] = lVar9;
    plVar11 = (long *)param_1[0x6d];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6be84:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,2);
      goto LAB_02b6bea0;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6be84;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,2);
    lVar9 = param_1[99];
    if (lVar9 != 0) goto LAB_02b6bea8;
LAB_02b6bf2c:
    lVar9 = param_1[0x5c];
    if (lVar9 == 0) goto LAB_02b6bfb8;
LAB_02b6bf34:
    lVar8 = param_1[0x5e];
    param_1[0x5d] = lVar9;
    plVar11 = (long *)param_1[0x5f];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6bf9c:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,2);
      goto LAB_02b6bfb8;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6bf9c;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,2);
    lVar9 = param_1[0x55];
    if (lVar9 != 0) goto LAB_02b6bfc0;
LAB_02b6c044:
    lVar9 = param_1[0x4e];
    if (lVar9 == 0) goto LAB_02b6c0d0;
LAB_02b6c04c:
    lVar8 = param_1[0x50];
    param_1[0x4f] = lVar9;
    plVar11 = (long *)param_1[0x51];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c0b4:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,0x10);
      goto LAB_02b6c0d0;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c0b4;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,0x10);
    lVar9 = param_1[0x47];
    if (lVar9 != 0) goto LAB_02b6c0d8;
LAB_02b6c15c:
    lVar9 = param_1[0x3f];
    if (lVar9 == 0) goto LAB_02b6c1e8;
LAB_02b6c164:
    lVar8 = param_1[0x41];
    param_1[0x40] = lVar9;
    plVar11 = (long *)param_1[0x42];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c1cc:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,4);
      goto LAB_02b6c1e8;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c1cc;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,4);
    lVar9 = param_1[0x37];
    if (lVar9 != 0) goto LAB_02b6c1f0;
LAB_02b6c270:
    lVar9 = param_1[0x2f];
    if (lVar9 == 0) goto LAB_02b6c2f8;
LAB_02b6c278:
    lVar8 = param_1[0x31];
    plVar11 = (long *)param_1[0x32];
    param_1[0x30] = lVar9;
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c2dc:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,4);
      goto LAB_02b6c2f8;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c2dc;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,4);
    lVar9 = param_1[0x27];
    if (lVar9 != 0) goto LAB_02b6c300;
LAB_02b6c380:
    lVar9 = param_1[0x20];
    if (lVar9 == 0) goto LAB_02b6c408;
LAB_02b6c388:
    lVar8 = param_1[0x22];
    plVar11 = (long *)param_1[0x23];
    param_1[0x21] = lVar9;
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b6c3ec:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,2);
      goto LAB_02b6c408;
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02b6c3ec;
    FUN_02bcc824(plVar11,lVar9,lVar8 - lVar9,2);
    lVar9 = param_1[0x19];
    if (lVar9 != 0) goto LAB_02b6c410;
LAB_02b6c490:
    plVar11 = (long *)param_1[0x12];
  }
  if (plVar11 != (long *)0x0) {
    if ((long *)param_1[0x13] == plVar11) {
      plVar10 = plVar11;
    }
    else {
      lVar9 = tpidr_el0;
      plVar10 = (long *)param_1[0x13];
      do {
        plVar7 = plVar10 + -8;
        lVar8 = *plVar7;
        if (lVar8 != 0) {
          lVar1 = plVar10[-6];
          plVar2 = (long *)plVar10[-5];
          plVar10[-7] = lVar8;
          uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
          if ((uVar6 & 1) != 0) {
            if (*(char *)(lVar9 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar9 + 0x38d488) = 1;
              *(undefined8 *)(lVar9 + 0x38d478) = 0;
              *(undefined8 *)(lVar9 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar9 + 0x38d480)) {
              FUN_02bcc824(plVar2,lVar8,lVar1 - lVar8,4);
              goto LAB_02b6c540;
            }
          }
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar8,lVar1 - lVar8,4);
        }
LAB_02b6c540:
        plVar10 = plVar7;
      } while (plVar11 != plVar7);
      plVar10 = (long *)param_1[0x12];
    }
    lVar9 = param_1[0x14];
    plVar7 = (long *)param_1[0x15];
    param_1[0x13] = plVar11;
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) != 0) {
      lVar8 = tpidr_el0;
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar7,plVar10,lVar9 - (long)plVar10,8);
        plVar11 = (long *)param_1[0xb];
        goto joined_r0x02b6c938;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar10,lVar9 - (long)plVar10,8);
  }
  plVar11 = (long *)param_1[0xb];
joined_r0x02b6c938:
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)param_1[0xc];
  if (plVar10 == plVar11) {
    plVar10 = plVar11;
  }
  else {
    do {
      plVar10 = plVar10 + -2;
      plVar7 = (long *)*plVar10;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    } while (plVar10 != plVar11);
    plVar10 = (long *)param_1[0xb];
  }
  param_1[0xc] = plVar11;
  lVar9 = param_1[0xd];
  plVar11 = (long *)param_1[0xe];
  uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  if ((uVar6 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar11,plVar10,lVar9 - (long)plVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b6c72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,lVar9 - (long)plVar10,8);
  return;
}


