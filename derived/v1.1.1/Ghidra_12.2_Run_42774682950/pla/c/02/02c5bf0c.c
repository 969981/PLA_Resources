/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5bf0c; name: FUN_02c5bf0c
 */


void FUN_02c5bf0c(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  void *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_0428add0;
  param_1[1] = lVar8;
  param_1[9] = (long)&PTR_LAB_0428ae10;
  param_1[0x16] = 0;
  plVar13 = param_1 + 0xb;
  *plVar13 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_02c8b88c(&local_98,param_2);
  pvVar9 = local_98;
  memset(local_98,0,0x168);
  local_98 = (void *)0x0;
  lVar8 = *plVar13;
  *plVar13 = (long)pvVar9;
  lVar6 = tpidr_el0;
  if (lVar8 != 0) {
    FUN_02bcbe58(auStack_78,0);
    plVar1 = (long *)param_1[0xc];
    lVar11 = param_1[0xd];
    lVar12 = param_1[0xe];
    uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar7 & 1) == 0) {
LAB_02c5c058:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,lVar11,lVar12);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02c5c058;
      FUN_02bcc824(plVar1,lVar8,lVar11,lVar12);
    }
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
  }
  param_1[0xc] = local_90;
  param_1[0xd] = lStack_88;
  param_1[0xe] = local_80;
  FUN_02c5a270(&local_98,param_2);
  pvVar9 = local_98;
  local_98 = (void *)0x0;
  puVar10 = (undefined8 *)param_1[0x13];
  param_1[0x13] = (long)pvVar9;
  if (puVar10 == (undefined8 *)0x0) {
    param_1[0x15] = lStack_88;
    param_1[0x16] = local_80;
    param_1[0x14] = local_90;
    goto LAB_02c5c260;
  }
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar10)(puVar10);
  plVar1 = (long *)param_1[0x14];
  lVar8 = param_1[0x15];
  lVar11 = param_1[0x16];
  uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar7 & 1) == 0) {
LAB_02c5c19c:
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,lVar8,lVar11);
  }
  else {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02c5c19c;
    FUN_02bcc824(plVar1,puVar10,lVar8,lVar11);
  }
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
  param_1[0x14] = local_90;
  pvVar9 = (void *)param_1[0x13];
  param_1[0x15] = lStack_88;
  param_1[0x16] = local_80;
LAB_02c5c260:
  lVar6 = *plVar13;
  *(undefined8 *)((long)pvVar9 + 8) = 0;
  *(long *)((long)pvVar9 + 0x10) = lVar6;
  *(undefined2 *)((long)pvVar9 + 0x18) = 1;
  lVar8 = *(long *)(param_3 + 0x98);
  lVar6 = nn::os::GetCurrentThread();
  plVar13 = (long *)(lVar8 + 0x30);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
        while (*plVar13 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c5c2bc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c5c2bc:
  FUN_02c65ef8(lVar8,&DAT_044077c0,0);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x02c5c310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,&DAT_044077c0);
  return;
}


