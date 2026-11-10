/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bbcdac; name: FUN_00bbcdac
 */


void FUN_00bbcdac(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  lVar10 = param_1[0x1b];
  *param_1 = &PTR_FUN_041d89a8;
  param_1[9] = &PTR_LAB_041d8a38;
  if (lVar10 == 0) {
LAB_00bbce60:
    plVar11 = (long *)param_1[0x14];
    if (plVar11 == (long *)0x0) goto LAB_00bbce68;
LAB_00bbcedc:
    plVar9 = (long *)param_1[0x15];
    if (plVar9 == plVar11) {
      plVar9 = plVar11;
    }
    else {
      plVar8 = (long *)plVar9[-1];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      if (plVar9 + -1 != plVar11) {
        plVar9 = plVar9 + -2;
        plVar8 = (long *)*plVar9;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) goto LAB_00bbcf5c;
        }
LAB_00bbcf34:
        if (plVar9 != plVar11) {
          while( true ) {
            plVar9 = plVar9 + -1;
            plVar8 = (long *)*plVar9;
            if (plVar8 == (long *)0x0) break;
            plVar1 = plVar8 + 10;
            do {
              iVar5 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 != 0) break;
LAB_00bbcf5c:
            (**(code **)(*plVar8 + 0x10))();
            if (plVar9 == plVar11) goto LAB_00bbcf70;
          }
          goto LAB_00bbcf34;
        }
      }
LAB_00bbcf70:
      plVar9 = (long *)param_1[0x14];
    }
    lVar10 = param_1[0x16];
    plVar8 = (long *)param_1[0x17];
    param_1[0x15] = plVar11;
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) == 0) {
LAB_00bbcfd8:
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,lVar10 - (long)plVar9,8);
      plVar11 = (long *)param_1[0xd];
    }
    else {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00bbcfd8;
      FUN_02bcc824(plVar8,plVar9,lVar10 - (long)plVar9,8);
      plVar11 = (long *)param_1[0xd];
    }
  }
  else {
    lVar2 = param_1[0x1d];
    plVar11 = (long *)param_1[0x1e];
    param_1[0x1c] = lVar10;
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) == 0) {
LAB_00bbce44:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar2 - lVar10,8);
      goto LAB_00bbce60;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00bbce44;
    FUN_02bcc824(plVar11,lVar10,lVar2 - lVar10,8);
    plVar11 = (long *)param_1[0x14];
    if (plVar11 != (long *)0x0) goto LAB_00bbcedc;
LAB_00bbce68:
    plVar11 = (long *)param_1[0xd];
  }
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)param_1[0xb];
  }
  else {
    plVar9 = plVar11;
    if ((long *)param_1[0xe] != plVar11) {
      plVar8 = (long *)param_1[0xe] + -1;
      plVar9 = (long *)*plVar8;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) goto LAB_00bbd054;
      }
LAB_00bbd02c:
      if (plVar8 != plVar11) {
        while( true ) {
          plVar8 = plVar8 + -1;
          plVar9 = (long *)*plVar8;
          if (plVar9 == (long *)0x0) break;
          plVar1 = plVar9 + 10;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 != 0) break;
LAB_00bbd054:
          (**(code **)(*plVar9 + 0x10))();
          if (plVar8 == plVar11) goto LAB_00bbd068;
        }
        goto LAB_00bbd02c;
      }
LAB_00bbd068:
      plVar9 = (long *)param_1[0xd];
    }
    lVar10 = param_1[0xf];
    plVar8 = (long *)param_1[0x10];
    param_1[0xe] = plVar11;
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar8,plVar9,lVar10 - (long)plVar9,8);
        plVar11 = (long *)param_1[0xb];
        goto joined_r0x00bbd118;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,lVar10 - (long)plVar9,8);
    plVar11 = (long *)param_1[0xb];
  }
joined_r0x00bbd118:
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00bbcebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))();
      return;
    }
  }
  return;
}


