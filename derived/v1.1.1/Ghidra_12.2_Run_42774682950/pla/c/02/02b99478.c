/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b99478; name: FUN_02b99478
 */


/* WARNING: Removing unreachable block (ram,0x02b99598) */
/* WARNING: Removing unreachable block (ram,0x02b995d0) */

undefined1  [16] FUN_02b99478(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 *local_98;
  long *local_90;
  long lStack_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0x10;
  do {
    lVar13 = *plVar1;
    lVar10 = param_1[0x11];
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar13;
      param_1[0x11] = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x74);
  do {
    while ((lVar13 != 0 && (lVar7 != lVar13))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar13 = *plVar1;
        lVar10 = param_1[0x11];
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar13;
          param_1[0x11] = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar13 || param_1[0x11] != lVar10) break;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13;
        *(long *)((long)param_1 + 0x84) = lVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        plVar14 = (long *)param_1[7];
        goto joined_r0x02b99524;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar1;
    lVar10 = param_1[0x11];
  } while( true );
joined_r0x02b99524:
  if (plVar14 == (long *)0x0) goto LAB_02b9959c;
  if (((*(char *)(plVar14[3] + 0x6c) != '\0') || (lVar7 = *(long *)plVar14[3], lVar7 == 0)) ||
     (cVar6 = (*DAT_043f08a0)(lVar7,*param_3), cVar6 == '\0')) {
    plVar14 = (long *)*plVar14;
    goto joined_r0x02b99524;
  }
  uVar11 = plVar14[2];
  do {
    lVar7 = *plVar1;
    lVar13 = param_1[0x11];
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      param_1[0x11] = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || param_1[0x11] != lVar13) break;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      *(long *)((long)param_1 + 0x84) = lVar13 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_02b99940;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar13 = param_1[0x11];
  do {
    do {
      lVar10 = *plVar1;
      if (lVar10 != lVar7 || param_1[0x11] != lVar13) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02b99c08;
      }
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7;
        *(long *)((long)param_1 + 0x84) = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar4 = true;
LAB_02b99c08:
    lVar7 = lVar10;
    lVar13 = param_1[0x11];
  } while (!bVar4);
LAB_02b99940:
  nn::os::SignalLightEvent(pLVar2);
  goto LAB_02b99948;
LAB_02b9959c:
  do {
    lVar7 = *plVar1;
    lVar13 = param_1[0x11];
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      param_1[0x11] = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || param_1[0x11] != lVar13) break;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      *(long *)((long)param_1 + 0x84) = lVar13 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_02b995e0;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar13 = param_1[0x11];
  do {
    do {
      lVar10 = *plVar1;
      if (lVar10 != lVar7 || param_1[0x11] != lVar13) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02b99bc8;
      }
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7;
        *(long *)((long)param_1 + 0x84) = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar4 = true;
LAB_02b99bc8:
    lVar7 = lVar10;
    lVar13 = param_1[0x11];
  } while (!bVar4);
LAB_02b995e0:
  nn::os::SignalLightEvent(pLVar2);
  FUN_02b9bbf0(&local_98,param_2,*param_3);
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || param_1[0x11] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0x11] == 0) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            param_1[0x11] = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02b99638;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      param_1[0x11] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02b99638:
  uVar11 = *local_98;
  if (param_1[0x1a] == param_1[0x1b]) {
    iVar12 = *(int *)(param_1 + 0x21);
    *(int *)(param_1 + 0x21) = iVar12 + 1;
  }
  else {
    piVar9 = (int *)(param_1[0x1b] + -4);
    iVar12 = *piVar9;
    param_1[0x1b] = piVar9;
  }
  (*DAT_043f03f8)(param_1 + 0x16,iVar12,uVar11);
  *(int *)(local_98 + 0xd) = iVar12;
  *param_1 = local_98;
  plVar14 = (long *)FUN_02b9a4f4(param_1 + 1,param_1);
  puVar5 = local_98;
  local_98 = (undefined8 *)0x0;
  lVar13 = *plVar14;
  *plVar14 = (long)puVar5;
  lVar7 = tpidr_el0;
  if (lVar13 != 0) {
    FUN_02bcbe58(auStack_78,0);
    FUN_02b9b338(lVar13);
    plVar3 = (long *)plVar14[1];
    lVar10 = plVar14[2];
    lVar15 = plVar14[3];
    uVar8 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar8 & 1) == 0) {
LAB_02b9971c:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar13,lVar10,lVar15);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b9971c;
      FUN_02bcc824(plVar3,lVar13,lVar10,lVar15);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar12 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar12;
    if (iVar12 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
  }
  plVar14[2] = lStack_88;
  plVar14[3] = local_80;
  plVar14[1] = (long)local_90;
  uVar11 = *param_1;
  do {
    lVar13 = *plVar1;
    lVar10 = param_1[0x11];
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar13;
      param_1[0x11] = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    if (*plVar1 != lVar13 || param_1[0x11] != lVar10) {
      ClearExclusiveLocal();
      lVar13 = *plVar1;
      lVar10 = param_1[0x11];
      goto LAB_02b99c18;
    }
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x84) = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  goto LAB_02b99810;
LAB_02b99c18:
  do {
    lVar15 = *plVar1;
    if (lVar15 == lVar13 && param_1[0x11] == lVar10) {
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x84) = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_02b99c18;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar13 = lVar15;
    lVar10 = param_1[0x11];
  } while (!bVar4);
LAB_02b99810:
  nn::os::SignalLightEvent(pLVar2);
  puVar5 = local_98;
  local_98 = (undefined8 *)0x0;
  if (puVar5 == (undefined8 *)0x0) goto LAB_02b99948;
  FUN_02bcbe58(auStack_78,0);
  FUN_02b9b338(puVar5);
  uVar8 = (**(code **)(*local_90 + 0xc0))(local_90);
  if ((uVar8 & 1) == 0) {
LAB_02b99894:
    (**(code **)(*local_90 + 0x18))(local_90,puVar5,lStack_88,local_80);
  }
  else {
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b99894;
    FUN_02bcc824(local_90,puVar5,lStack_88,local_80);
  }
  if (*(char *)(lVar7 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar7 + 0x38d488) = 1;
    *(undefined8 *)(lVar7 + 0x38d478) = 0;
    *(undefined8 *)(lVar7 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar12 = *(int *)(lVar7 + 0x38d480) + -1;
  *(int *)(lVar7 + 0x38d480) = iVar12;
  if (iVar12 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar7 + 0x38d484) = 0;
  }
LAB_02b99948:
  auVar16._8_8_ = uVar11;
  auVar16._0_8_ = 1;
  return auVar16;
}


