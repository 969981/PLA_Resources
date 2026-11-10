/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0093ac1c; name: FUN_0093ac1c
 */


void FUN_0093ac1c(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_58;
  
  *param_1 = (long)&DAT_0427efa8;
  param_1[9] = (long)&PTR_LAB_0427f000;
  param_1[10] = (long)&PTR_LAB_0427f048;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x22c));
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar3 = PTR_DAT_043794a0;
  puVar2 = PTR_DAT_04379498;
  plVar12 = (long *)param_1[0x3e];
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)param_1[0x3a];
    if (plVar12 == (long *)0x0) goto LAB_0093ac88;
LAB_0093ac6c:
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 != 0) goto LAB_0093ac88;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))();
    plVar12 = (long *)param_1[0x39];
    if (plVar12 != (long *)0x0) goto LAB_0093ac90;
LAB_0093acac:
    puVar14 = (undefined8 *)param_1[0x37];
  }
  else {
    if ((long *)param_1[0x3f] == plVar12) {
      plVar15 = plVar12;
    }
    else {
      plVar15 = (long *)param_1[0x3f] + -2;
      puVar14 = (undefined8 *)*plVar15;
      while( true ) {
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
          do {
            iVar10 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 + -1 == 0) {
            puVar14[2] = 0;
            if (((*puVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar2), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar3,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar2);
            }
            lVar13 = *(long *)puVar3;
            *(long *)puVar8 = lVar13;
            local_58 = *puVar14;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        if (plVar15 == plVar12) break;
        plVar15 = plVar15 + -2;
        puVar14 = (undefined8 *)*plVar15;
      }
      plVar15 = (long *)param_1[0x3e];
    }
    lVar13 = param_1[0x40];
    param_1[0x3f] = (long)plVar12;
    plVar12 = (long *)param_1[0x41];
    uVar11 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar11 & 1) == 0) {
LAB_0093b238:
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar15,lVar13 - (long)plVar15,8);
      plVar12 = (long *)param_1[0x3a];
    }
    else {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_0093b238;
      FUN_02bcc824(plVar12,plVar15,lVar13 - (long)plVar15,8);
      plVar12 = (long *)param_1[0x3a];
    }
    if (plVar12 != (long *)0x0) goto LAB_0093ac6c;
LAB_0093ac88:
    plVar12 = (long *)param_1[0x39];
    if (plVar12 == (long *)0x0) goto LAB_0093acac;
LAB_0093ac90:
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 != 0) goto LAB_0093acac;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))();
    puVar14 = (undefined8 *)param_1[0x37];
  }
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      puVar14[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *puVar14;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x34));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x30));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2c));
  lVar13 = param_1[0x25];
  if (lVar13 == 0) {
    lVar13 = param_1[0x1e];
    if (lVar13 != 0) goto LAB_0093b000;
LAB_0093ad34:
    plVar12 = (long *)param_1[0x1d];
  }
  else {
    lVar4 = param_1[0x27];
    plVar12 = (long *)param_1[0x28];
    param_1[0x26] = lVar13;
    uVar11 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar11 & 1) == 0) {
LAB_0093afb4:
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,lVar4 - lVar13,8);
      lVar13 = param_1[0x1e];
    }
    else {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_0093afb4;
      FUN_02bcc824(plVar12,lVar13,lVar4 - lVar13,8);
      lVar13 = param_1[0x1e];
    }
    if (lVar13 == 0) goto LAB_0093ad34;
LAB_0093b000:
    lVar4 = param_1[0x20];
    plVar12 = (long *)param_1[0x21];
    param_1[0x1f] = lVar13;
    uVar11 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar11 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar13,lVar4 - lVar13,8);
        plVar12 = (long *)param_1[0x1d];
        goto joined_r0x0093b084;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,lVar4 - lVar13,8);
    plVar12 = (long *)param_1[0x1d];
  }
joined_r0x0093b084:
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
      plVar12 = (long *)param_1[0x17];
      goto joined_r0x0093ad5c;
    }
  }
  plVar12 = (long *)param_1[0x17];
joined_r0x0093ad5c:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 0x20))();
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 0x20))();
  }
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 0x20))();
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar14 = (undefined8 *)param_1[0xb];
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      puVar14[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *puVar14;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  return;
}


