/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a1880; name: FUN_028a1880
 */


void FUN_028a1880(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 local_38;
  
  plVar12 = (long *)param_1[0x58];
  *param_1 = &PTR_FUN_042724d8;
  param_1[9] = &PTR_LAB_042725d8;
  param_1[10] = &PTR_LAB_042726b8;
  if (plVar12 == (long *)0x0) {
LAB_028a198c:
    plVar12 = (long *)param_1[0x51];
    if (plVar12 == (long *)0x0) goto LAB_028a1a68;
LAB_028a1994:
    plVar10 = (long *)param_1[0x52];
    if (plVar10 == plVar12) {
      plVar10 = plVar12;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        plVar8 = (long *)*plVar10;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      } while (plVar10 != plVar12);
      plVar10 = (long *)param_1[0x51];
    }
    lVar9 = param_1[0x53];
    param_1[0x52] = plVar12;
    plVar12 = (long *)param_1[0x54];
    uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar7 & 1) == 0) {
LAB_028a1a4c:
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar10,lVar9 - (long)plVar10,8);
      goto LAB_028a1a68;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_028a1a4c;
    FUN_02bcc824(plVar12,plVar10,lVar9 - (long)plVar10,8);
    plVar12 = (long *)param_1[0x4a];
  }
  else {
    plVar10 = (long *)param_1[0x59];
    if (plVar10 == plVar12) {
      plVar10 = plVar12;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        plVar8 = (long *)*plVar10;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      } while (plVar10 != plVar12);
      plVar10 = (long *)param_1[0x58];
    }
    lVar9 = param_1[0x5a];
    param_1[0x59] = plVar12;
    plVar12 = (long *)param_1[0x5b];
    uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar7 & 1) == 0) {
LAB_028a1970:
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar10,lVar9 - (long)plVar10,8);
      goto LAB_028a198c;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_028a1970;
    FUN_02bcc824(plVar12,plVar10,lVar9 - (long)plVar10,8);
    plVar12 = (long *)param_1[0x51];
    if (plVar12 != (long *)0x0) goto LAB_028a1994;
LAB_028a1a68:
    plVar12 = (long *)param_1[0x4a];
  }
  if (plVar12 != (long *)0x0) {
    plVar10 = (long *)param_1[0x4b];
    if (plVar10 == plVar12) {
      plVar10 = plVar12;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        plVar8 = (long *)*plVar10;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            iVar6 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      } while (plVar10 != plVar12);
      plVar10 = (long *)param_1[0x4a];
    }
    lVar9 = param_1[0x4c];
    param_1[0x4b] = plVar12;
    plVar12 = (long *)param_1[0x4d];
    uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar7 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar12,plVar10,lVar9 - (long)plVar10,8);
        plVar12 = (long *)param_1[0x49];
        goto joined_r0x028a1b48;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,plVar10,lVar9 - (long)plVar10,8);
  }
  plVar12 = (long *)param_1[0x49];
joined_r0x028a1b48:
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x234));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x21c));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x204));
  puVar11 = (undefined8 *)param_1[0x3e];
  if (puVar11 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar11 + 1);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = *puVar11;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


