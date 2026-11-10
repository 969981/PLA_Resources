/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b94dac; name: FUN_02b94dac
 */


undefined1  [16]
FUN_02b94dac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
            undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long local_88;
  long *local_80;
  long lStack_78;
  long local_70;
  undefined1 auStack_68 [24];
  
  FUN_02b98874(&local_88,param_2,*param_3,param_4,param_5);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0x10;
  do {
    if (*plVar1 != 0 || param_1[0x11] != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x74));
        while (*plVar1 == 0 && param_1[0x11] == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            param_1[0x11] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b94e38;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      param_1[0x11] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b94e38:
  lVar6 = local_88;
  uVar11 = *(undefined8 *)(local_88 + 0x48);
  uVar12 = *(undefined8 *)(local_88 + 0x68);
  if (*(char *)(local_88 + 0x88) != '\0') {
    if (param_1[0x1a] == param_1[0x1b]) {
      iVar14 = (int)param_1[0x21];
      *(int *)(param_1 + 0x21) = iVar14 + 1;
    }
    else {
      piVar9 = (int *)(param_1[0x1b] + -4);
      iVar14 = *piVar9;
      param_1[0x1b] = (long)piVar9;
    }
    (*DAT_043f03b8)(param_1 + 0x16,iVar14,uVar11,uVar12);
    *(int *)(local_88 + 0x80) = iVar14;
  }
  if (*(char *)(local_88 + 0x89) != '\0') {
    if (param_1[0x1a] == param_1[0x1b]) {
      iVar14 = (int)param_1[0x21];
      *(int *)(param_1 + 0x21) = iVar14 + 1;
    }
    else {
      piVar9 = (int *)(param_1[0x1b] + -4);
      iVar14 = *piVar9;
      param_1[0x1b] = (long)piVar9;
    }
    (*DAT_043f03c0)(param_1 + 0x16,iVar14,uVar11,uVar12);
    *(int *)(local_88 + 0x84) = iVar14;
  }
  *param_1 = local_88;
  plVar7 = (long *)FUN_02b95f00(param_1 + 1,param_1);
  local_88 = 0;
  lVar13 = *plVar7;
  *plVar7 = lVar6;
  lVar6 = tpidr_el0;
  if (lVar13 != 0) {
    FUN_02bcbe58(auStack_68,0);
    FUN_02b96d44(lVar13);
    plVar3 = (long *)plVar7[1];
    lVar10 = plVar7[2];
    lVar15 = plVar7[3];
    uVar8 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar8 & 1) == 0) {
LAB_02b94f74:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar13,lVar10,lVar15);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b94f74;
      FUN_02bcc824(plVar3,lVar13,lVar10,lVar15);
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar14 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar14;
    if (iVar14 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
    }
  }
  plVar7[2] = lStack_78;
  plVar7[3] = local_70;
  plVar7[1] = (long)local_80;
  lVar13 = *param_1;
  do {
    lVar10 = *plVar1;
    lVar15 = param_1[0x11];
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar10;
      param_1[0x11] = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar10 || param_1[0x11] != lVar15) {
      ClearExclusiveLocal();
      lVar10 = *plVar1;
      lVar15 = param_1[0x11];
      goto LAB_02b953d4;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x84) = lVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_02b95068;
LAB_02b953d4:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar10 && param_1[0x11] == lVar15) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x84) = lVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b953d4;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar10 = lVar2;
    lVar15 = param_1[0x11];
  } while (!bVar5);
LAB_02b95068:
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x74));
  lVar10 = local_88;
  local_88 = 0;
  if (lVar10 == 0) goto LAB_02b95188;
  FUN_02bcbe58(auStack_68,0);
  FUN_02b96d44(lVar10);
  uVar8 = (**(code **)(*local_80 + 0xc0))(local_80);
  if ((uVar8 & 1) == 0) {
LAB_02b950ec:
    (**(code **)(*local_80 + 0x18))(local_80,lVar10,lStack_78,local_70);
  }
  else {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b950ec;
    FUN_02bcc824(local_80,lVar10,lStack_78,local_70);
  }
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar14 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar14;
  if (iVar14 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
LAB_02b95188:
  auVar16._8_8_ = lVar13;
  auVar16._0_8_ = 1;
  return auVar16;
}


