/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa6704; name: FUN_02aa6704
 */


void FUN_02aa6704(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  plVar10 = (long *)param_1[0x1b];
  plVar9 = (long *)param_1[0x1c];
  *param_1 = &PTR_FUN_04280a18;
  param_1[9] = &PTR_LAB_04280a50;
  if (plVar10 != plVar9) {
    lVar1 = DAT_043ef5a0 + 0x60;
    do {
      puVar12 = (undefined8 *)plVar10[1];
      for (puVar11 = (undefined8 *)*plVar10; puVar11 != puVar12; puVar11 = puVar11 + 1) {
        FUN_02b18190(*puVar11,lVar1);
      }
      plVar10 = plVar10 + 7;
    } while (plVar10 != plVar9);
  }
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 0x20))();
  }
  puVar11 = (undefined8 *)param_1[0x1b];
  lVar1 = tpidr_el0;
  if (puVar11 == (undefined8 *)0x0) {
LAB_02aa6998:
    plVar10 = (long *)param_1[0x1a];
    if (plVar10 == (long *)0x0) goto LAB_02aa69b8;
LAB_02aa69a0:
    plVar9 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_02aa69b8;
    (**(code **)(*plVar10 + 0x10))();
    plVar10 = (long *)param_1[0x19];
    if (plVar10 != (long *)0x0) goto LAB_02aa69c0;
LAB_02aa69d8:
    plVar10 = (long *)param_1[0x12];
  }
  else {
    puVar12 = (undefined8 *)param_1[0x1c];
    if (puVar12 == puVar11) {
      puVar12 = puVar11;
    }
    else {
      do {
        while( true ) {
          puVar13 = puVar12 + -7;
          plVar10 = (long *)*puVar13;
          if (plVar10 != (long *)0x0) break;
LAB_02aa67e8:
          puVar12 = puVar13;
          if (puVar13 == puVar11) goto LAB_02aa6910;
        }
        plVar9 = (long *)puVar12[-6];
        if (plVar9 == plVar10) {
          plVar9 = plVar10;
        }
        else {
          do {
            plVar9 = plVar9 + -1;
            plVar8 = (long *)*plVar9;
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 10;
              do {
                iVar6 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
          } while (plVar9 != plVar10);
          plVar9 = (long *)*puVar13;
        }
        puVar12[-6] = plVar10;
        lVar3 = puVar12[-5];
        plVar10 = (long *)puVar12[-4];
        uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar7 & 1) == 0) {
LAB_02aa67cc:
          (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,lVar3 - (long)plVar9,8);
          goto LAB_02aa67e8;
        }
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02aa67cc;
        FUN_02bcc824(plVar10,plVar9,lVar3 - (long)plVar9,8);
        puVar12 = puVar13;
      } while (puVar13 != puVar11);
LAB_02aa6910:
      puVar12 = (undefined8 *)param_1[0x1b];
    }
    lVar3 = param_1[0x1d];
    plVar10 = (long *)param_1[0x1e];
    param_1[0x1c] = puVar11;
    uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar7 & 1) == 0) {
LAB_02aa697c:
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar12,lVar3 - (long)puVar12,8);
      goto LAB_02aa6998;
    }
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02aa697c;
    FUN_02bcc824(plVar10,puVar12,lVar3 - (long)puVar12,8);
    plVar10 = (long *)param_1[0x1a];
    if (plVar10 != (long *)0x0) goto LAB_02aa69a0;
LAB_02aa69b8:
    plVar10 = (long *)param_1[0x19];
    if (plVar10 == (long *)0x0) goto LAB_02aa69d8;
LAB_02aa69c0:
    plVar9 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_02aa69d8;
    (**(code **)(*plVar10 + 0x10))();
    plVar10 = (long *)param_1[0x12];
  }
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)param_1[0x13];
    if (plVar9 == plVar10) {
      plVar9 = plVar10;
    }
    else {
      do {
        plVar9 = plVar9 + -1;
        plVar8 = (long *)*plVar9;
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 10;
          do {
            iVar6 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      } while (plVar9 != plVar10);
      plVar9 = (long *)param_1[0x12];
    }
    lVar3 = param_1[0x14];
    plVar8 = (long *)param_1[0x15];
    param_1[0x13] = plVar10;
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar8,plVar9,lVar3 - (long)plVar9,8);
        puVar11 = (undefined8 *)param_1[0xb];
        goto joined_r0x02aa6d28;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,lVar3 - (long)plVar9,8);
  }
  puVar11 = (undefined8 *)param_1[0xb];
joined_r0x02aa6d28:
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  puVar12 = (undefined8 *)param_1[0xc];
  if (puVar12 == puVar11) {
    puVar12 = puVar11;
  }
  else {
    do {
      while( true ) {
        puVar13 = puVar12 + -7;
        plVar10 = (long *)*puVar13;
        if (plVar10 != (long *)0x0) break;
LAB_02aa6af8:
        puVar12 = puVar13;
        if (puVar13 == puVar11) goto LAB_02aa6c20;
      }
      plVar9 = (long *)puVar12[-6];
      if (plVar9 == plVar10) {
        plVar9 = plVar10;
      }
      else {
        do {
          plVar9 = plVar9 + -1;
          plVar8 = (long *)*plVar9;
          if (plVar8 != (long *)0x0) {
            plVar2 = plVar8 + 10;
            do {
              iVar6 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        } while (plVar9 != plVar10);
        plVar9 = (long *)*puVar13;
      }
      puVar12[-6] = plVar10;
      lVar3 = puVar12[-5];
      plVar10 = (long *)puVar12[-4];
      uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar7 & 1) == 0) {
LAB_02aa6adc:
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,lVar3 - (long)plVar9,8);
        goto LAB_02aa6af8;
      }
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02aa6adc;
      FUN_02bcc824(plVar10,plVar9,lVar3 - (long)plVar9,8);
      puVar12 = puVar13;
    } while (puVar13 != puVar11);
LAB_02aa6c20:
    puVar12 = (undefined8 *)param_1[0xb];
  }
  lVar3 = param_1[0xd];
  plVar10 = (long *)param_1[0xe];
  param_1[0xc] = puVar11;
  uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar10,puVar12,lVar3 - (long)puVar12,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02aa6cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,puVar12,lVar3 - (long)puVar12,8);
  return;
}


