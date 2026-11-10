/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bab638; name: FUN_02bab638
 */


void FUN_02bab638(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_FUN_04286270;
  param_1[9] = &PTR_LAB_042862a8;
  pcVar10 = (code *)param_1[0x51];
  if (pcVar10 != (code *)0x0) {
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    (*pcVar10)(param_1 + 0x54);
  }
  FUN_02ba4760(param_1 + 0x46);
  FUN_02bacc58(param_1 + 0x42,0);
  lVar8 = param_1[0x3e];
  param_1[0x3e] = 0;
  if (lVar8 != 0) {
    FUN_02ba5518(param_1 + 0x3f);
  }
  plVar11 = (long *)param_1[0x3a];
  param_1[0x3a] = 0;
  lVar8 = tpidr_el0;
  if (plVar11 != (long *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    plVar6 = (long *)plVar11[0xb];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
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
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    lVar9 = plVar11[7];
    plVar11[7] = 0;
    if (lVar9 != 0) {
      FUN_02baac24(plVar11 + 8);
    }
    lVar9 = *plVar11;
    if (lVar9 != 0) {
      lVar12 = plVar11[1];
      if (plVar11[1] == lVar9) {
        lVar12 = lVar9;
      }
      else {
        do {
          lVar14 = lVar12 + -0x30;
          if (*(char *)(lVar12 + -0x28) != '\0') {
            if (*(long **)(lVar12 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar12 + -8) + 0x20))();
            }
            *(undefined1 *)(lVar12 + -0x28) = 0;
          }
          lVar12 = lVar14;
        } while (lVar9 != lVar14);
        lVar12 = *plVar11;
      }
      lVar14 = plVar11[2];
      plVar6 = (long *)plVar11[3];
      plVar11[1] = lVar9;
      uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar6,lVar12,lVar14 - lVar12,8);
          goto LAB_02bab7d0;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar12,lVar14 - lVar12,8);
    }
LAB_02bab7d0:
    plVar6 = (long *)param_1[0x3b];
    uVar2 = param_1[0x3c];
    uVar13 = param_1[0x3d];
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_02bab82c:
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar11,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02bab82c;
      FUN_02bcc824(plVar6,plVar11,uVar2,uVar13);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  lVar9 = param_1[0x36];
  param_1[0x36] = 0;
  if (lVar9 != 0) {
    FUN_02bade94(param_1 + 0x37);
  }
  lVar9 = param_1[0x32];
  param_1[0x32] = 0;
  if (lVar9 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_02bad2b8(lVar9);
    plVar11 = (long *)param_1[0x33];
    uVar2 = param_1[0x34];
    uVar13 = param_1[0x35];
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) == 0) {
LAB_02bab958:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02bab958;
      FUN_02bcc824(plVar11,lVar9,uVar2,uVar13);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  lVar9 = param_1[0x2b];
  if (lVar9 == 0) {
LAB_02babacc:
    lVar9 = param_1[0x24];
    if (lVar9 == 0) goto LAB_02babba4;
LAB_02babad4:
    lVar12 = param_1[0x25];
    if (lVar12 == lVar9) {
      lVar12 = lVar9;
    }
    else {
      do {
        plVar11 = *(long **)(lVar12 + -0x18);
        lVar12 = lVar12 + -0x20;
        if (plVar11 != (long *)0x0) {
          plVar6 = plVar11 + 10;
          do {
            iVar5 = (int)*plVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *(int *)plVar6 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      } while (lVar12 != lVar9);
      lVar12 = param_1[0x24];
    }
    lVar14 = param_1[0x26];
    plVar11 = (long *)param_1[0x27];
    param_1[0x25] = lVar9;
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) == 0) {
LAB_02babb88:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar14 - lVar12,8);
      goto LAB_02babba4;
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02babb88;
    FUN_02bcc824(plVar11,lVar12,lVar14 - lVar12,8);
    lVar9 = param_1[0x1d];
    if (lVar9 != 0) goto LAB_02babbac;
LAB_02babc7c:
    lVar9 = param_1[0x16];
    if (lVar9 == 0) goto LAB_02babd54;
LAB_02babc84:
    lVar12 = param_1[0x17];
    if (lVar12 == lVar9) {
      lVar12 = lVar9;
    }
    else {
      do {
        plVar11 = *(long **)(lVar12 + -0x10);
        lVar12 = lVar12 + -0x18;
        if (plVar11 != (long *)0x0) {
          plVar6 = plVar11 + 10;
          do {
            iVar5 = (int)*plVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *(int *)plVar6 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      } while (lVar12 != lVar9);
      lVar12 = param_1[0x16];
    }
    lVar14 = param_1[0x18];
    plVar11 = (long *)param_1[0x19];
    param_1[0x17] = lVar9;
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) == 0) {
LAB_02babd38:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar14 - lVar12,8);
      goto LAB_02babd54;
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02babd38;
    FUN_02bcc824(plVar11,lVar12,lVar14 - lVar12,8);
    lVar9 = param_1[0xf];
  }
  else {
    lVar12 = param_1[0x2c];
    if (lVar12 == lVar9) {
      lVar12 = lVar9;
    }
    else {
      do {
        plVar11 = *(long **)(lVar12 + -8);
        lVar12 = lVar12 + -0x10;
        if (plVar11 != (long *)0x0) {
          plVar6 = plVar11 + 10;
          do {
            iVar5 = (int)*plVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *(int *)plVar6 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      } while (lVar12 != lVar9);
      lVar12 = param_1[0x2b];
    }
    lVar14 = param_1[0x2d];
    plVar11 = (long *)param_1[0x2e];
    param_1[0x2c] = lVar9;
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) == 0) {
LAB_02babab0:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar14 - lVar12,8);
      goto LAB_02babacc;
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02babab0;
    FUN_02bcc824(plVar11,lVar12,lVar14 - lVar12,8);
    lVar9 = param_1[0x24];
    if (lVar9 != 0) goto LAB_02babad4;
LAB_02babba4:
    lVar9 = param_1[0x1d];
    if (lVar9 == 0) goto LAB_02babc7c;
LAB_02babbac:
    lVar12 = param_1[0x1e];
    if (lVar12 == lVar9) {
      lVar12 = lVar9;
    }
    else {
      do {
        plVar11 = *(long **)(lVar12 + -0x18);
        lVar12 = lVar12 + -0x20;
        if (plVar11 != (long *)0x0) {
          plVar6 = plVar11 + 10;
          do {
            iVar5 = (int)*plVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *(int *)plVar6 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      } while (lVar12 != lVar9);
      lVar12 = param_1[0x1d];
    }
    lVar14 = param_1[0x1f];
    plVar11 = (long *)param_1[0x20];
    param_1[0x1e] = lVar9;
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) == 0) {
LAB_02babc60:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar14 - lVar12,8);
      goto LAB_02babc7c;
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02babc60;
    FUN_02bcc824(plVar11,lVar12,lVar14 - lVar12,8);
    lVar9 = param_1[0x16];
    if (lVar9 != 0) goto LAB_02babc84;
LAB_02babd54:
    lVar9 = param_1[0xf];
  }
  if (lVar9 != 0) {
    lVar12 = param_1[0x10];
    if (lVar12 == lVar9) {
      lVar12 = lVar9;
    }
    else {
      do {
        plVar11 = *(long **)(lVar12 + -0x10);
        lVar12 = lVar12 + -0x18;
        if (plVar11 != (long *)0x0) {
          plVar6 = plVar11 + 10;
          do {
            iVar5 = (int)*plVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *(int *)plVar6 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      } while (lVar12 != lVar9);
      lVar12 = param_1[0xf];
    }
    lVar14 = param_1[0x11];
    plVar11 = (long *)param_1[0x12];
    param_1[0x10] = lVar9;
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar11,lVar12,lVar14 - lVar12,8);
        goto LAB_02babe2c;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar14 - lVar12,8);
  }
LAB_02babe2c:
  lVar9 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar9 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_02bacee4(lVar9);
  plVar11 = (long *)param_1[0xc];
  uVar2 = param_1[0xd];
  uVar13 = param_1[0xe];
  uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar11,lVar9,uVar2,uVar13);
      goto LAB_02babec4;
    }
  }
  (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,uVar2,uVar13);
LAB_02babec4:
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar5 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar5;
  if (iVar5 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  return;
}


