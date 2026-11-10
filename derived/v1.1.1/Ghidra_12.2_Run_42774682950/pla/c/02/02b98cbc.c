/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b98cbc; name: FUN_02b98cbc
 */


/* WARNING: Removing unreachable block (ram,0x02b98db8) */
/* WARNING: Removing unreachable block (ram,0x02b98e78) */

undefined1  [16] FUN_02b98cbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
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
    lVar11 = param_1[0x11];
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar13;
      param_1[0x11] = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)((long)param_1 + 0x74);
  do {
    while ((lVar13 != 0 && (lVar7 != lVar13))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar13 = *plVar1;
        lVar11 = param_1[0x11];
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar13;
          param_1[0x11] = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar13 || param_1[0x11] != lVar11) break;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar13;
        *(long *)((long)param_1 + 0x84) = lVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        plVar14 = (long *)param_1[7];
        goto joined_r0x02b98d68;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar1;
    lVar11 = param_1[0x11];
  } while( true );
joined_r0x02b98d68:
  if (plVar14 == (long *)0x0) goto LAB_02b98d84;
  uVar8 = FUN_02b9be60(plVar14[3],param_3);
  if ((uVar8 & 1) == 0) {
    plVar14 = (long *)*plVar14;
    goto joined_r0x02b98d68;
  }
  uVar9 = plVar14[2];
  do {
    lVar7 = *plVar1;
    lVar13 = param_1[0x11];
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      param_1[0x11] = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || param_1[0x11] != lVar13) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)((long)param_1 + 0x84) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b99164;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar13 = param_1[0x11];
  do {
    do {
      lVar11 = *plVar1;
      if (lVar11 != lVar7 || param_1[0x11] != lVar13) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b9942c;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)((long)param_1 + 0x84) = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b9942c:
    lVar7 = lVar11;
    lVar13 = param_1[0x11];
  } while (!bVar5);
LAB_02b99164:
  nn::os::SignalLightEvent(pLVar2);
  goto LAB_02b9916c;
LAB_02b98d84:
  do {
    lVar7 = *plVar1;
    lVar13 = param_1[0x11];
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      param_1[0x11] = lVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar1 != lVar7 || param_1[0x11] != lVar13) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)((long)param_1 + 0x84) = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02b98dc8;
  }
  ClearExclusiveLocal();
  lVar7 = *plVar1;
  lVar13 = param_1[0x11];
  do {
    do {
      lVar11 = *plVar1;
      if (lVar11 != lVar7 || param_1[0x11] != lVar13) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_02b993ec;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)((long)param_1 + 0x84) = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
LAB_02b993ec:
    lVar7 = lVar11;
    lVar13 = param_1[0x11];
  } while (!bVar5);
LAB_02b98dc8:
  nn::os::SignalLightEvent(pLVar2);
  FUN_02b9b5bc(&local_98,param_2,param_3);
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || param_1[0x11] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0x11] == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            param_1[0x11] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b98e20;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      param_1[0x11] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b98e20:
  uVar9 = *local_98;
  if (param_1[0x1a] == param_1[0x1b]) {
    iVar12 = *(int *)(param_1 + 0x21);
    *(int *)(param_1 + 0x21) = iVar12 + 1;
  }
  else {
    piVar10 = (int *)(param_1[0x1b] + -4);
    iVar12 = *piVar10;
    param_1[0x1b] = piVar10;
  }
  (*DAT_043f03f8)(param_1 + 0x16,iVar12,uVar9);
  *(int *)(local_98 + 0xd) = iVar12;
  *param_1 = local_98;
  plVar14 = (long *)FUN_02b9a4f4(param_1 + 1,param_1);
  puVar6 = local_98;
  local_98 = (undefined8 *)0x0;
  lVar13 = *plVar14;
  *plVar14 = (long)puVar6;
  lVar7 = tpidr_el0;
  if (lVar13 != 0) {
    FUN_02bcbe58(auStack_78,0);
    FUN_02b9b338(lVar13);
    plVar3 = (long *)plVar14[1];
    lVar11 = plVar14[2];
    lVar15 = plVar14[3];
    uVar8 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar8 & 1) == 0) {
LAB_02b98f40:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar13,lVar11,lVar15);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b98f40;
      FUN_02bcc824(plVar3,lVar13,lVar11,lVar15);
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
  uVar9 = *param_1;
  do {
    lVar13 = *plVar1;
    lVar11 = param_1[0x11];
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar13;
      param_1[0x11] = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar13 || param_1[0x11] != lVar11) {
      ClearExclusiveLocal();
      lVar13 = *plVar1;
      lVar11 = param_1[0x11];
      goto LAB_02b9943c;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x84) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_02b99034;
LAB_02b9943c:
  do {
    lVar15 = *plVar1;
    if (lVar15 == lVar13 && param_1[0x11] == lVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x84) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b9943c;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar13 = lVar15;
    lVar11 = param_1[0x11];
  } while (!bVar5);
LAB_02b99034:
  nn::os::SignalLightEvent(pLVar2);
  puVar6 = local_98;
  local_98 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) goto LAB_02b9916c;
  FUN_02bcbe58(auStack_78,0);
  FUN_02b9b338(puVar6);
  uVar8 = (**(code **)(*local_90 + 0xc0))(local_90);
  if ((uVar8 & 1) == 0) {
LAB_02b990b8:
    (**(code **)(*local_90 + 0x18))(local_90,puVar6,lStack_88,local_80);
  }
  else {
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b990b8;
    FUN_02bcc824(local_90,puVar6,lStack_88,local_80);
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
LAB_02b9916c:
  auVar16._8_8_ = uVar9;
  auVar16._0_8_ = 1;
  return auVar16;
}


