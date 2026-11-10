/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2d8c4; name: FUN_02b2d8c4
 */


void FUN_02b2d8c4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  
  *param_1 = &PTR_FUN_04284428;
  param_1[9] = &PTR_LAB_04284460;
  FUN_02b2ebd0(param_1 + 0x42);
  FUN_02b2ebd0(param_1 + 0x35);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x194));
  plVar11 = (long *)param_1[0x2a];
  if (plVar11 == (long *)0x0) {
LAB_02b2d9e8:
    lVar12 = param_1[0x23];
    if (lVar12 == 0) goto LAB_02b2dab0;
LAB_02b2d9f0:
    lVar7 = param_1[0x24];
    if (lVar7 == lVar12) {
      lVar7 = lVar12;
    }
    else {
      do {
        plVar11 = (long *)(lVar7 + -8);
        lVar7 = lVar7 + -0x20;
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 0x20))();
        }
      } while (lVar12 != lVar7);
      lVar7 = param_1[0x23];
    }
    lVar2 = param_1[0x25];
    plVar11 = (long *)param_1[0x26];
    param_1[0x24] = lVar12;
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b2da94:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,lVar2 - lVar7,8);
      goto LAB_02b2dab0;
    }
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_02b2da94;
    FUN_02bcc824(plVar11,lVar7,lVar2 - lVar7,8);
    pcVar13 = (char *)param_1[0x1b];
    if (pcVar13 != (char *)0x0) goto LAB_02b2dab8;
LAB_02b2db7c:
    plVar11 = (long *)param_1[0x1a];
    if (plVar11 == (long *)0x0) goto LAB_02b2db9c;
LAB_02b2db84:
    plVar8 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_02b2db9c;
    (**(code **)(*plVar11 + 0x10))();
    plVar11 = (long *)param_1[0x13];
  }
  else {
    plVar8 = (long *)param_1[0x2b];
    if (plVar8 == plVar11) {
      plVar8 = plVar11;
    }
    else {
      do {
        plVar8 = plVar8 + -1;
        plVar14 = (long *)*plVar8;
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 10;
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
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      } while (plVar8 != plVar11);
      plVar8 = (long *)param_1[0x2a];
    }
    lVar12 = param_1[0x2c];
    plVar14 = (long *)param_1[0x2d];
    param_1[0x2b] = plVar11;
    uVar6 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar6 & 1) == 0) {
LAB_02b2d9cc:
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar8,lVar12 - (long)plVar8,8);
      goto LAB_02b2d9e8;
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b2d9cc;
    FUN_02bcc824(plVar14,plVar8,lVar12 - (long)plVar8,8);
    lVar12 = param_1[0x23];
    if (lVar12 != 0) goto LAB_02b2d9f0;
LAB_02b2dab0:
    pcVar13 = (char *)param_1[0x1b];
    if (pcVar13 == (char *)0x0) goto LAB_02b2db7c;
LAB_02b2dab8:
    pcVar10 = pcVar13;
    if ((char *)param_1[0x1c] != pcVar13) {
      pcVar10 = (char *)param_1[0x1c];
      do {
        pcVar9 = pcVar10 + -0x28;
        if (*pcVar9 != '\0') {
          if (*(long **)(pcVar10 + -8) != (long *)0x0) {
            (**(code **)(**(long **)(pcVar10 + -8) + 0x20))();
          }
          pcVar10[-0x28] = '\0';
        }
        pcVar10 = pcVar9;
      } while (pcVar13 != pcVar9);
      pcVar10 = (char *)param_1[0x1b];
    }
    lVar12 = param_1[0x1d];
    plVar11 = (long *)param_1[0x1e];
    param_1[0x1c] = pcVar13;
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b2db60:
      (**(code **)(*plVar11 + 0x18))(plVar11,pcVar10,lVar12 - (long)pcVar10,8);
      goto LAB_02b2db7c;
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b2db60;
    FUN_02bcc824(plVar11,pcVar10,lVar12 - (long)pcVar10,8);
    plVar11 = (long *)param_1[0x1a];
    if (plVar11 != (long *)0x0) goto LAB_02b2db84;
LAB_02b2db9c:
    plVar11 = (long *)param_1[0x13];
  }
  if (plVar11 != (long *)0x0) {
    lVar12 = tpidr_el0;
LAB_02b2dbcc:
    do {
      plVar14 = (long *)*plVar11;
      plVar8 = (long *)plVar11[6];
      if (plVar8 == (long *)0x0) {
LAB_02b2dbf0:
        plVar8 = (long *)plVar11[5];
      }
      else {
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
        if (iVar5 != 0) goto LAB_02b2dbf0;
        (**(code **)(*plVar8 + 0x10))();
        plVar8 = (long *)plVar11[5];
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))();
      }
      plVar8 = (long *)param_1[0x14];
      uVar6 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar6 & 1) == 0) {
LAB_02b2dc54:
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar11,0x38,8);
        plVar11 = plVar14;
        if (plVar14 == (long *)0x0) break;
        goto LAB_02b2dbcc;
      }
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_02b2dc54;
      FUN_02bcc824(plVar8,plVar11,0x38,8);
      plVar11 = plVar14;
    } while (plVar14 != (long *)0x0);
  }
  lVar12 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar12 == 0) {
LAB_02b2dd90:
    plVar11 = (long *)param_1[0xc];
  }
  else {
    lVar7 = param_1[0xe];
    plVar11 = (long *)param_1[0xf];
    uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar6 & 1) == 0) {
LAB_02b2dd74:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar7 << 3,8);
      goto LAB_02b2dd90;
    }
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02b2dd74;
    FUN_02bcc824(plVar11,lVar12,lVar7 << 3,8);
    plVar11 = (long *)param_1[0xc];
  }
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      plVar11 = (long *)param_1[0xb];
      goto joined_r0x02b2ddfc;
    }
  }
  plVar11 = (long *)param_1[0xb];
joined_r0x02b2ddfc:
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02b2de24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))();
      return;
    }
  }
  return;
}


