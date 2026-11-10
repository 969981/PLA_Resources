/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b5c158; name: FUN_01b5c158
 */


void FUN_01b5c158(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 local_68;
  
  *param_1 = &PTR_FUN_04240368;
  param_1[9] = &PTR_LAB_042404a0;
  param_1[10] = &PTR_LAB_04240580;
  param_1[0x3f] = &PTR_LAB_042405a8;
  plVar6 = (long *)param_1[0xb1];
  param_1[0x49] = &PTR_LAB_042405f8;
  if (plVar6 == (long *)0x0) {
LAB_01b5c1c8:
    plVar6 = (long *)param_1[0xb0];
  }
  else {
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01b5c1c8;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0xb0];
  }
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  lVar9 = param_1[0xac];
  param_1[0xac] = 0;
  if (lVar9 == 0) {
    plVar6 = (long *)param_1[0xa5];
  }
  else {
    FUN_01b5fd00(param_1 + 0xad);
    plVar6 = (long *)param_1[0xa5];
  }
  if (plVar6 != (long *)0x0) {
    lVar9 = tpidr_el0;
    do {
      while( true ) {
        plVar8 = (long *)param_1[0xa6];
        plVar12 = (long *)*plVar6;
        uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar7 & 1) != 0) break;
LAB_01b5cc30:
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x20,8);
        plVar6 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_01b5c200;
      }
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_01b5cc30;
      FUN_02bcc824(plVar8,plVar6,0x20,8);
      plVar6 = plVar12;
    } while (plVar12 != (long *)0x0);
  }
LAB_01b5c200:
  lVar9 = param_1[0x9f];
  param_1[0x9f] = 0;
  if (lVar9 == 0) {
    puVar11 = (undefined8 *)param_1[0x9b];
  }
  else {
    lVar10 = param_1[0xa0];
    plVar6 = (long *)param_1[0xa1];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar9,lVar10 << 3,8);
        puVar11 = (undefined8 *)param_1[0x9b];
        goto joined_r0x01b5c670;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,lVar10 << 3,8);
    puVar11 = (undefined8 *)param_1[0x9b];
  }
joined_r0x01b5c670:
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_68 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_68);
    }
  }
  plVar6 = (long *)param_1[0x93];
  if (plVar6 == (long *)0x0) {
LAB_01b5c290:
    puVar11 = (undefined8 *)param_1[0x91];
  }
  else {
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01b5c290;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    puVar11 = (undefined8 *)param_1[0x91];
  }
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_68 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_68);
    }
  }
  plVar6 = (long *)param_1[0x8f];
  if (plVar6 == (long *)0x0) {
LAB_01b5c314:
    plVar6 = (long *)param_1[0x8e];
    if (plVar6 == (long *)0x0) goto LAB_01b5c338;
LAB_01b5c31c:
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01b5c338;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x8d];
    if (plVar6 != (long *)0x0) goto LAB_01b5c340;
LAB_01b5c35c:
    plVar6 = (long *)param_1[0x86];
    if (plVar6 == (long *)0x0) goto LAB_01b5c364;
LAB_01b5c774:
    plVar8 = plVar6;
    if ((long *)param_1[0x87] != plVar6) {
      plVar12 = (long *)param_1[0x87] + -1;
      plVar8 = (long *)*plVar12;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) goto LAB_01b5c99c;
      }
LAB_01b5c970:
      if (plVar12 != plVar6) {
        while( true ) {
          plVar12 = plVar12 + -1;
          plVar8 = (long *)*plVar12;
          if (plVar8 == (long *)0x0) break;
          lVar9 = plVar8[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 != 0) break;
LAB_01b5c99c:
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
          if (plVar12 == plVar6) goto LAB_01b5c9b4;
        }
        goto LAB_01b5c970;
      }
LAB_01b5c9b4:
      plVar8 = (long *)param_1[0x86];
    }
    lVar9 = param_1[0x88];
    param_1[0x87] = plVar6;
    plVar6 = (long *)param_1[0x89];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b5c7ec:
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,lVar9 - (long)plVar8,8);
      plVar6 = (long *)param_1[0x7f];
      goto joined_r0x01b5c80c;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01b5c7ec;
    FUN_02bcc824(plVar6,plVar8,lVar9 - (long)plVar8,8);
    plVar6 = (long *)param_1[0x7f];
    if (plVar6 != (long *)0x0) goto LAB_01b5c810;
LAB_01b5c36c:
    plVar6 = (long *)param_1[0x78];
joined_r0x01b5c370:
    if (plVar6 != (long *)0x0) goto LAB_01b5c8ac;
LAB_01b5c374:
    lVar9 = param_1[0x6b];
    if (lVar9 != 0) goto LAB_01b5c37c;
LAB_01b5c400:
    lVar9 = param_1[100];
  }
  else {
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01b5c314;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x8e];
    if (plVar6 != (long *)0x0) goto LAB_01b5c31c;
LAB_01b5c338:
    plVar6 = (long *)param_1[0x8d];
    if (plVar6 == (long *)0x0) goto LAB_01b5c35c;
LAB_01b5c340:
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01b5c35c;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x86];
    if (plVar6 != (long *)0x0) goto LAB_01b5c774;
LAB_01b5c364:
    plVar6 = (long *)param_1[0x7f];
joined_r0x01b5c80c:
    if (plVar6 == (long *)0x0) goto LAB_01b5c36c;
LAB_01b5c810:
    plVar8 = plVar6;
    if ((long *)param_1[0x80] != plVar6) {
      plVar12 = (long *)param_1[0x80] + -1;
      plVar8 = (long *)*plVar12;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) goto LAB_01b5ca0c;
      }
LAB_01b5c9e0:
      if (plVar12 != plVar6) {
        while( true ) {
          plVar12 = plVar12 + -1;
          plVar8 = (long *)*plVar12;
          if (plVar8 == (long *)0x0) break;
          lVar9 = plVar8[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 != 0) break;
LAB_01b5ca0c:
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
          if (plVar12 == plVar6) goto LAB_01b5ca24;
        }
        goto LAB_01b5c9e0;
      }
LAB_01b5ca24:
      plVar8 = (long *)param_1[0x7f];
    }
    lVar9 = param_1[0x81];
    param_1[0x80] = plVar6;
    plVar6 = (long *)param_1[0x82];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b5c888:
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,lVar9 - (long)plVar8,8);
      plVar6 = (long *)param_1[0x78];
      goto joined_r0x01b5c370;
    }
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01b5c888;
    FUN_02bcc824(plVar6,plVar8,lVar9 - (long)plVar8,8);
    plVar6 = (long *)param_1[0x78];
    if (plVar6 == (long *)0x0) goto LAB_01b5c374;
LAB_01b5c8ac:
    plVar8 = plVar6;
    if ((long *)param_1[0x79] != plVar6) {
      plVar12 = (long *)param_1[0x79] + -1;
      plVar8 = (long *)*plVar12;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) goto LAB_01b5ca7c;
      }
LAB_01b5ca50:
      if (plVar12 != plVar6) {
        while( true ) {
          plVar12 = plVar12 + -1;
          plVar8 = (long *)*plVar12;
          if (plVar8 == (long *)0x0) break;
          lVar9 = plVar8[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 != 0) break;
LAB_01b5ca7c:
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
          if (plVar12 == plVar6) goto LAB_01b5ca94;
        }
        goto LAB_01b5ca50;
      }
LAB_01b5ca94:
      plVar8 = (long *)param_1[0x78];
    }
    lVar9 = param_1[0x7a];
    param_1[0x79] = plVar6;
    plVar6 = (long *)param_1[0x7b];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b5c924:
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar8,lVar9 - (long)plVar8,8);
      lVar9 = param_1[0x6b];
    }
    else {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_01b5c924;
      FUN_02bcc824(plVar6,plVar8,lVar9 - (long)plVar8,8);
      lVar9 = param_1[0x6b];
    }
    if (lVar9 == 0) goto LAB_01b5c400;
LAB_01b5c37c:
    lVar10 = param_1[0x6d];
    param_1[0x6c] = lVar9;
    plVar6 = (long *)param_1[0x6e];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_01b5c3e4:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,lVar10 - lVar9,8);
      goto LAB_01b5c400;
    }
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01b5c3e4;
    FUN_02bcc824(plVar6,lVar9,lVar10 - lVar9,8);
    lVar9 = param_1[100];
  }
  if (lVar9 != 0) {
    lVar10 = param_1[0x66];
    param_1[0x65] = lVar9;
    plVar6 = (long *)param_1[0x67];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar9,lVar10 - lVar9,8);
        plVar6 = (long *)param_1[0x59];
        goto joined_r0x01b5c490;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,lVar10 - lVar9,8);
  }
  plVar6 = (long *)param_1[0x59];
joined_r0x01b5c490:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  puVar11 = (undefined8 *)param_1[0x50];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_68 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_68);
    }
  }
  puVar11 = (undefined8 *)param_1[0x4d];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_68 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_68);
    }
  }
  puVar11 = (undefined8 *)param_1[0x4b];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_68 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_68);
    }
  }
  FUN_0177ead8(param_1 + 0x3f);
  FUN_02a4c4ec(param_1);
  return;
}


