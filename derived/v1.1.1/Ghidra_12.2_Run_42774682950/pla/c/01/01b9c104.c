/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9c104; name: FUN_01b9c104
 */


void FUN_01b9c104(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_78 [3];
  
  *param_1 = &PTR_FUN_04242ba8;
  param_1[9] = &PTR_LAB_04242d38;
  param_1[10] = &PTR_FUN_04242e18;
  param_1[0xc6] = &PTR_LAB_04242e40;
  param_1[199] = &PTR_LAB_04242ea0;
  param_1[0xc9] = &PTR_LAB_04242ee8;
  if (*(char *)((long)param_1 + 0x822) == '\0') {
    lVar13 = param_1[0x156];
    lVar5 = nn::os::GetCurrentThread();
    plVar6 = (long *)(lVar13 + 0x20);
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x14));
          while (*plVar6 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01b9c1ac;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01b9c1ac:
    if (*(long *)(lVar13 + 8) != 0) {
      *(undefined8 *)(lVar13 + 8) = 0;
    }
    *(undefined8 *)(lVar13 + 0x20) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x14));
    FUN_01b9cc88(param_1);
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0xb1c));
  if ((long *)param_1[0x160] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x160] + 0x20))();
  }
  lVar13 = param_1[0x156];
  param_1[0x156] = 0;
  lVar5 = tpidr_el0;
  if (lVar13 == 0) {
LAB_01b9c1fc:
    plVar6 = (long *)param_1[0x154];
  }
  else {
    FUN_02bcbe58(local_78,0);
    nn::os::FinalizeLightEvent((LightEventType *)(lVar13 + 0x14));
    plVar6 = (long *)param_1[0x157];
    uVar12 = param_1[0x158];
    uVar14 = param_1[0x159];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b9c6a8:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar13,uVar12,uVar14);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01b9c6a8;
      FUN_02bcc824(plVar6,lVar13,uVar12,uVar14);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar4;
    if (iVar4 != 0) goto LAB_01b9c1fc;
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
    plVar6 = (long *)param_1[0x154];
  }
  if (plVar6 != (long *)0x0) {
    lVar13 = plVar6[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      pcVar8 = (code *)param_1[0x13f];
      goto joined_r0x01b9c224;
    }
  }
  pcVar8 = (code *)param_1[0x13f];
joined_r0x01b9c224:
  if (pcVar8 == (code *)0x0) {
    plVar6 = (long *)param_1[0x134];
  }
  else {
    param_1[0x141] = 0;
    param_1[0x140] = 0;
    param_1[0x13f] = 0;
    param_1[0x13e] = 0;
    (*pcVar8)(param_1 + 0x142);
    plVar6 = (long *)param_1[0x134];
  }
joined_r0x01b9c22c:
  if (plVar6 != (long *)0x0) {
    do {
      plVar16 = (long *)*plVar6;
      FUN_00cbfc94(plVar6 + 3);
      plVar15 = (long *)param_1[0x135];
      uVar7 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) goto LAB_01b9c750;
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar6,0x80,8);
      plVar6 = plVar16;
      if (plVar16 == (long *)0x0) break;
    } while( true );
  }
  lVar13 = param_1[0x12e];
  param_1[0x12e] = 0;
  if (lVar13 == 0) {
LAB_01b9c35c:
    puVar11 = (undefined8 *)param_1[300];
  }
  else {
    lVar9 = param_1[0x12f];
    plVar6 = (long *)param_1[0x130];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b9c340:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar13,lVar9 << 3,8);
      goto LAB_01b9c35c;
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01b9c340;
    FUN_02bcc824(plVar6,lVar13,lVar9 << 3,8);
    puVar11 = (undefined8 *)param_1[300];
  }
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_78[0] = *puVar11;
      FUN_02a44274(lVar13 + 0xd8,local_78);
    }
  }
  lVar13 = param_1[0x123];
  if (lVar13 == 0) {
LAB_01b9c444:
    lVar13 = param_1[0x11c];
    if (lVar13 == 0) goto LAB_01b9c4cc;
LAB_01b9c44c:
    lVar9 = param_1[0x11e];
    param_1[0x11d] = lVar13;
    plVar6 = (long *)param_1[0x11f];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b9c4b0:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar13,lVar9 - lVar13,4);
      goto LAB_01b9c4cc;
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01b9c4b0;
    FUN_02bcc824(plVar6,lVar13,lVar9 - lVar13,4);
    if (*(char *)((long)param_1 + 0x884) != '\0') goto LAB_01b9c7cc;
LAB_01b9c4d4:
    if (*(char *)(param_1 + 0x10a) == '\0') goto LAB_01b9c4dc;
LAB_01b9c7d8:
    *(undefined1 *)(param_1 + 0x10a) = 0;
    if (*(char *)(param_1 + 0x106) != '\0') goto LAB_01b9c7e4;
LAB_01b9c4e4:
    lVar13 = param_1[0xf8];
    if (lVar13 == 0) goto LAB_01b9c4ec;
LAB_01b9c7f0:
    lVar10 = param_1[0xf9];
    lVar9 = lVar13;
    if (lVar10 != lVar13) {
      do {
        plVar6 = (long *)(lVar10 + -0x48);
        lVar10 = lVar10 + -0x80;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x20))();
        }
      } while (lVar13 != lVar10);
      lVar9 = param_1[0xf8];
    }
    lVar10 = param_1[0xfa];
    param_1[0xf9] = lVar13;
    plVar6 = (long *)param_1[0xfb];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b9c864:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,lVar10 - lVar9,0x10);
      plVar6 = (long *)param_1[0xf1];
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01b9c864;
      FUN_02bcc824(plVar6,lVar9,lVar10 - lVar9,0x10);
      plVar6 = (long *)param_1[0xf1];
    }
  }
  else {
    lVar9 = param_1[0x125];
    param_1[0x124] = lVar13;
    plVar6 = (long *)param_1[0x126];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b9c428:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar13,lVar9 - lVar13,4);
      goto LAB_01b9c444;
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_01b9c428;
    FUN_02bcc824(plVar6,lVar13,lVar9 - lVar13,4);
    lVar13 = param_1[0x11c];
    if (lVar13 != 0) goto LAB_01b9c44c;
LAB_01b9c4cc:
    if (*(char *)((long)param_1 + 0x884) == '\0') goto LAB_01b9c4d4;
LAB_01b9c7cc:
    *(undefined1 *)((long)param_1 + 0x884) = 0;
    if (*(char *)(param_1 + 0x10a) != '\0') goto LAB_01b9c7d8;
LAB_01b9c4dc:
    if (*(char *)(param_1 + 0x106) == '\0') goto LAB_01b9c4e4;
LAB_01b9c7e4:
    *(undefined1 *)(param_1 + 0x106) = 0;
    lVar13 = param_1[0xf8];
    if (lVar13 != 0) goto LAB_01b9c7f0;
LAB_01b9c4ec:
    plVar6 = (long *)param_1[0xf1];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = (long *)param_1[0xe8];
  if (plVar6 != (long *)0x0) {
    lVar5 = plVar6[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      puVar11 = (undefined8 *)param_1[0xe6];
      goto joined_r0x01b9c528;
    }
  }
  puVar11 = (undefined8 *)param_1[0xe6];
joined_r0x01b9c528:
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_78[0] = *puVar11;
      FUN_02a44274(lVar5 + 0xd8,local_78);
    }
  }
  puVar11 = (undefined8 *)param_1[0xe4];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_78[0] = *puVar11;
      FUN_02a44274(lVar5 + 0xd8,local_78);
    }
  }
  pcVar8 = (code *)param_1[0xd5];
  if (pcVar8 != (code *)0x0) {
    param_1[0xd7] = 0;
    param_1[0xd6] = 0;
    param_1[0xd5] = 0;
    param_1[0xd4] = 0;
    (*pcVar8)(param_1 + 0xd8);
  }
  FUN_0177ead8(param_1 + 0xc9);
  FUN_01b39078(param_1);
  return;
LAB_01b9c750:
  FUN_02bcc824(plVar15,plVar6,0x80,8);
  plVar6 = plVar16;
  goto joined_r0x01b9c22c;
}


