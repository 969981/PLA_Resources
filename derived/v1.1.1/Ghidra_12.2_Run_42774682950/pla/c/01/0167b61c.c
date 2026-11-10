/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167b61c; name: FUN_0167b61c
 */


void FUN_0167b61c(long *param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_38;
  
  if ((char)param_1[0x2d] == '\0') {
    if ((char)param_1[0x1e] == '\0') goto LAB_0167b644;
LAB_0167b6f4:
    if ((long *)param_1[0x23] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x23] + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
    if ((char)param_1[6] != '\0') goto LAB_0167b714;
LAB_0167b64c:
    if (*(char *)((long)param_1 + 0x24) == '\0') goto LAB_0167b654;
LAB_0167b794:
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    puVar11 = (undefined8 *)param_1[2];
  }
  else {
    lVar10 = param_1[0x2e];
    if (lVar10 != 0) {
      lVar3 = param_1[0x30];
      plVar9 = (long *)param_1[0x31];
      param_1[0x2f] = lVar10;
      uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar8 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar10,lVar3 - lVar10,4);
          goto LAB_0167b6e8;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar3 - lVar10,4);
    }
LAB_0167b6e8:
    *(undefined1 *)(param_1 + 0x2d) = 0;
    if ((char)param_1[0x1e] != '\0') goto LAB_0167b6f4;
LAB_0167b644:
    if ((char)param_1[6] == '\0') goto LAB_0167b64c;
LAB_0167b714:
    plVar9 = (long *)param_1[0x17];
    if (plVar9 == (long *)0x0) {
LAB_0167b734:
      plVar9 = (long *)param_1[0x14];
      if (plVar9 == (long *)0x0) goto LAB_0167b754;
LAB_0167b73c:
      plVar1 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != 0) goto LAB_0167b754;
      (**(code **)(*plVar9 + 0x10))();
      plVar9 = (long *)param_1[0x11];
      if (plVar9 != (long *)0x0) goto LAB_0167b75c;
LAB_0167b774:
      plVar9 = (long *)param_1[0xc];
    }
    else {
      plVar1 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != 0) goto LAB_0167b734;
      (**(code **)(*plVar9 + 0x10))();
      plVar9 = (long *)param_1[0x14];
      if (plVar9 != (long *)0x0) goto LAB_0167b73c;
LAB_0167b754:
      plVar9 = (long *)param_1[0x11];
      if (plVar9 == (long *)0x0) goto LAB_0167b774;
LAB_0167b75c:
      plVar1 = plVar9 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != 0) goto LAB_0167b774;
      (**(code **)(*plVar9 + 0x10))();
      plVar9 = (long *)param_1[0xc];
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    *(undefined1 *)(param_1 + 6) = 0;
    if (*(char *)((long)param_1 + 0x24) != '\0') goto LAB_0167b794;
LAB_0167b654:
    puVar11 = (undefined8 *)param_1[2];
  }
  if (puVar11 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar11 + 1);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      param_1 = (long *)*param_1;
      goto joined_r0x0167b820;
    }
  }
  param_1 = (long *)*param_1;
joined_r0x0167b820:
  if (param_1 != (long *)0x0) {
    lVar10 = param_1[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0167b8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))();
      return;
    }
  }
  return;
}


