/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f987dc; name: FUN_00f987dc
 */


void FUN_00f987dc(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_58;
  
  *param_1 = &DAT_04272818;
  param_1[9] = &PTR_LAB_04272980;
  param_1[10] = &PTR_LAB_04272ae0;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x394));
  pcVar11 = (code *)param_1[99];
  if (pcVar11 == (code *)0x0) {
    pcVar11 = (code *)param_1[0x53];
    if (pcVar11 == (code *)0x0) goto LAB_00f9882c;
LAB_00f98ae4:
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    (*pcVar11)(param_1 + 0x56);
    pcVar11 = (code *)param_1[0x43];
    if (pcVar11 != (code *)0x0) goto LAB_00f98b04;
LAB_00f98834:
    pcVar11 = (code *)param_1[0x33];
  }
  else {
    param_1[0x65] = 0;
    param_1[100] = 0;
    param_1[99] = 0;
    param_1[0x62] = 0;
    (*pcVar11)(param_1 + 0x66);
    pcVar11 = (code *)param_1[0x53];
    if (pcVar11 != (code *)0x0) goto LAB_00f98ae4;
LAB_00f9882c:
    pcVar11 = (code *)param_1[0x43];
    if (pcVar11 == (code *)0x0) goto LAB_00f98834;
LAB_00f98b04:
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    (*pcVar11)(param_1 + 0x46);
    pcVar11 = (code *)param_1[0x33];
  }
  if (pcVar11 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar11)(param_1 + 0x36);
  }
  FUN_00f98b74(param_1 + 0x2a);
  FUN_00f98b74(param_1 + 0x23);
  FUN_00f98b74(param_1 + 0x1c);
  FUN_00f98b74(param_1 + 0x15);
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar14 = param_1[0xe];
  if (lVar14 != 0) {
    lVar15 = param_1[0xf];
    lVar13 = lVar14;
    if (lVar15 != lVar14) {
      do {
        puVar12 = *(undefined8 **)(lVar15 + -0x10);
        if (puVar12 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar12 + 1);
          do {
            iVar9 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            puVar12[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar13 = *(long *)puVar6;
            *(long *)puVar7 = lVar13;
            local_58 = *puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        plVar1 = (long *)(lVar15 + -0x18);
        lVar15 = lVar15 + -0x30;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar15 != lVar14);
      lVar13 = param_1[0xe];
    }
    lVar15 = param_1[0x10];
    plVar1 = (long *)param_1[0x11];
    param_1[0xf] = lVar14;
    uVar10 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar10 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar13,lVar15 - lVar13,8);
        goto LAB_00f989c4;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar13,lVar15 - lVar13,8);
  }
LAB_00f989c4:
  *param_1 = &PTR_LAB_041eed40;
  param_1[9] = &PTR_LAB_041eed88;
  param_1[10] = &PTR_LAB_041eeee8;
  puVar12 = (undefined8 *)param_1[0xb];
  if (puVar12 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar12 + 1);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_58 = *puVar12;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  return;
}


