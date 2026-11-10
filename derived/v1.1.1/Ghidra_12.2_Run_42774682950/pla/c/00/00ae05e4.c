/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae05e4; name: FUN_00ae05e4
 */


void FUN_00ae05e4(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_68;
  
  *param_1 = (long)&PTR_FUN_041d3348;
  param_1[9] = (long)&PTR_LAB_041d3448;
  param_1[10] = (long)&PTR_LAB_041d3490;
  param_1[0xe] = (long)&PTR_LAB_041d34b8;
  plVar8 = (long *)param_1[0x5a];
  if (plVar8 == (long *)0x0) {
LAB_00ae064c:
    plVar8 = (long *)param_1[0x59];
  }
  else {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 != 0) goto LAB_00ae064c;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = (long *)param_1[0x59];
  }
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  FUN_00936104(param_1 + 0x53);
  plVar8 = (long *)param_1[0x4c];
  if (plVar8 != (long *)0x0) {
    plVar12 = (long *)param_1[0x4d];
    puVar11 = (undefined8 *)*plVar8;
    uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar9 & 1) == 0) {
LAB_00ae06e0:
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar8,0x18,4);
    }
    else {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae06e0;
      FUN_02bcc824(plVar12,plVar8,0x18,4);
    }
    if (puVar11 != (undefined8 *)0x0) {
      plVar12 = (long *)param_1[0x4d];
      plVar8 = (long *)*puVar11;
      uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar9 & 1) == 0) {
LAB_00ae0760:
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,0x18,4);
      }
      else {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0760;
        FUN_02bcc824(plVar12,puVar11,0x18,4);
      }
      if (plVar8 != (long *)0x0) {
        plVar13 = (long *)param_1[0x4d];
        plVar12 = (long *)*plVar8;
        uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar9 & 1) == 0) {
LAB_00ae07e0:
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar8,0x18,4);
        }
        else {
          lVar10 = tpidr_el0;
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae07e0;
          FUN_02bcc824(plVar13,plVar8,0x18,4);
        }
        if (plVar12 != (long *)0x0) {
          lVar10 = tpidr_el0;
          do {
            while( true ) {
              plVar8 = (long *)param_1[0x4d];
              plVar13 = (long *)*plVar12;
              uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
              if ((uVar9 & 1) != 0) break;
LAB_00ae0e78:
              (**(code **)(*plVar8 + 0x18))(plVar8,plVar12,0x18,4);
              plVar12 = plVar13;
              if (plVar13 == (long *)0x0) goto LAB_00ae0800;
            }
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0e78;
            FUN_02bcc824(plVar8,plVar12,0x18,4);
            plVar12 = plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
  }
LAB_00ae0800:
  lVar10 = param_1[0x46];
  param_1[0x46] = 0;
  if (lVar10 != 0) {
    FUN_00ae23ec(param_1 + 0x47);
  }
  plVar8 = (long *)param_1[0x3f];
  if (plVar8 != (long *)0x0) {
    plVar12 = (long *)param_1[0x40];
    puVar11 = (undefined8 *)*plVar8;
    uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar9 & 1) == 0) {
LAB_00ae087c:
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar8,0x18,4);
    }
    else {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae087c;
      FUN_02bcc824(plVar12,plVar8,0x18,4);
    }
    if (puVar11 != (undefined8 *)0x0) {
      plVar12 = (long *)param_1[0x40];
      plVar8 = (long *)*puVar11;
      uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar9 & 1) == 0) {
LAB_00ae08fc:
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,0x18,4);
      }
      else {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae08fc;
        FUN_02bcc824(plVar12,puVar11,0x18,4);
      }
      if (plVar8 != (long *)0x0) {
        plVar13 = (long *)param_1[0x40];
        plVar12 = (long *)*plVar8;
        uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar9 & 1) == 0) {
LAB_00ae097c:
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar8,0x18,4);
        }
        else {
          lVar10 = tpidr_el0;
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae097c;
          FUN_02bcc824(plVar13,plVar8,0x18,4);
        }
        if (plVar12 != (long *)0x0) {
          lVar10 = tpidr_el0;
          do {
            while( true ) {
              plVar8 = (long *)param_1[0x40];
              plVar13 = (long *)*plVar12;
              uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
              if ((uVar9 & 1) != 0) break;
LAB_00ae0f54:
              (**(code **)(*plVar8 + 0x18))(plVar8,plVar12,0x18,4);
              plVar12 = plVar13;
              if (plVar13 == (long *)0x0) goto LAB_00ae099c;
            }
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0f54;
            FUN_02bcc824(plVar8,plVar12,0x18,4);
            plVar12 = plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
  }
LAB_00ae099c:
  lVar10 = param_1[0x39];
  param_1[0x39] = 0;
  if (lVar10 != 0) {
    FUN_00ae23ec(param_1 + 0x3a);
  }
  plVar8 = (long *)param_1[0x32];
  if (plVar8 != (long *)0x0) {
    plVar12 = (long *)param_1[0x33];
    puVar11 = (undefined8 *)*plVar8;
    uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar9 & 1) == 0) {
LAB_00ae0a18:
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar8,0x18,4);
    }
    else {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0a18;
      FUN_02bcc824(plVar12,plVar8,0x18,4);
    }
    if (puVar11 != (undefined8 *)0x0) {
      plVar12 = (long *)param_1[0x33];
      plVar8 = (long *)*puVar11;
      uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar9 & 1) == 0) {
LAB_00ae0a98:
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,0x18,4);
      }
      else {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0a98;
        FUN_02bcc824(plVar12,puVar11,0x18,4);
      }
      if (plVar8 != (long *)0x0) {
        plVar13 = (long *)param_1[0x33];
        plVar12 = (long *)*plVar8;
        uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar9 & 1) == 0) {
LAB_00ae0b18:
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar8,0x18,4);
        }
        else {
          lVar10 = tpidr_el0;
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0b18;
          FUN_02bcc824(plVar13,plVar8,0x18,4);
        }
        if (plVar12 != (long *)0x0) {
          lVar10 = tpidr_el0;
          do {
            while( true ) {
              plVar8 = (long *)param_1[0x33];
              plVar13 = (long *)*plVar12;
              uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
              if ((uVar9 & 1) != 0) break;
LAB_00ae1030:
              (**(code **)(*plVar8 + 0x18))(plVar8,plVar12,0x18,4);
              plVar12 = plVar13;
              if (plVar13 == (long *)0x0) goto LAB_00ae0b38;
            }
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae1030;
            FUN_02bcc824(plVar8,plVar12,0x18,4);
            plVar12 = plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
  }
LAB_00ae0b38:
  lVar10 = param_1[0x2c];
  param_1[0x2c] = 0;
  if (lVar10 != 0) {
    FUN_00ae23ec(param_1 + 0x2d);
  }
  plVar8 = (long *)param_1[0x25];
  if (plVar8 != (long *)0x0) {
    plVar12 = (long *)param_1[0x26];
    puVar11 = (undefined8 *)*plVar8;
    uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar9 & 1) == 0) {
LAB_00ae0bb4:
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar8,0x18,4);
    }
    else {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0bb4;
      FUN_02bcc824(plVar12,plVar8,0x18,4);
    }
    if (puVar11 != (undefined8 *)0x0) {
      plVar12 = (long *)param_1[0x26];
      plVar8 = (long *)*puVar11;
      uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar9 & 1) == 0) {
LAB_00ae0c34:
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,0x18,4);
      }
      else {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0c34;
        FUN_02bcc824(plVar12,puVar11,0x18,4);
      }
      if (plVar8 != (long *)0x0) {
        plVar13 = (long *)param_1[0x26];
        plVar12 = (long *)*plVar8;
        uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar9 & 1) == 0) {
LAB_00ae0cb4:
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar8,0x18,4);
        }
        else {
          lVar10 = tpidr_el0;
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae0cb4;
          FUN_02bcc824(plVar13,plVar8,0x18,4);
        }
        if (plVar12 != (long *)0x0) {
          lVar10 = tpidr_el0;
          do {
            while( true ) {
              plVar8 = (long *)param_1[0x26];
              plVar13 = (long *)*plVar12;
              uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
              if ((uVar9 & 1) != 0) break;
LAB_00ae110c:
              (**(code **)(*plVar8 + 0x18))(plVar8,plVar12,0x18,4);
              plVar12 = plVar13;
              if (plVar13 == (long *)0x0) goto LAB_00ae0cd4;
            }
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_00ae110c;
            FUN_02bcc824(plVar8,plVar12,0x18,4);
            plVar12 = plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
  }
LAB_00ae0cd4:
  lVar10 = param_1[0x1f];
  param_1[0x1f] = 0;
  if (lVar10 != 0) {
    FUN_00ae23ec(param_1 + 0x20);
  }
  plVar8 = (long *)param_1[0x16];
  if (plVar8 == (long *)0x0) {
LAB_00ae1738:
    plVar8 = (long *)param_1[0xf];
  }
  else {
    plVar12 = (long *)param_1[0x17];
    if (plVar12 == plVar8) {
      plVar12 = plVar8;
    }
    else {
      do {
        plVar12 = plVar12 + -1;
        plVar13 = (long *)*plVar12;
        if (plVar13 != (long *)0x0) {
          lVar10 = plVar13[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))();
          }
        }
      } while (plVar12 != plVar8);
      plVar12 = (long *)param_1[0x16];
    }
    lVar10 = param_1[0x18];
    plVar13 = (long *)param_1[0x19];
    param_1[0x17] = (long)plVar8;
    uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar9 & 1) == 0) {
LAB_00ae171c:
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,lVar10 - (long)plVar12,8);
      goto LAB_00ae1738;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00ae171c;
    FUN_02bcc824(plVar13,plVar12,lVar10 - (long)plVar12,8);
    plVar8 = (long *)param_1[0xf];
  }
  if (plVar8 != (long *)0x0) {
    plVar12 = (long *)param_1[0x10];
    if (plVar12 == plVar8) {
      plVar12 = plVar8;
    }
    else {
      do {
        plVar12 = plVar12 + -1;
        plVar13 = (long *)*plVar12;
        if (plVar13 != (long *)0x0) {
          lVar10 = plVar13[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))();
          }
        }
      } while (plVar12 != plVar8);
      plVar12 = (long *)param_1[0xf];
    }
    lVar10 = param_1[0x11];
    plVar13 = (long *)param_1[0x12];
    param_1[0x10] = (long)plVar8;
    uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar9 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar13,plVar12,lVar10 - (long)plVar12,8);
        goto LAB_00ae188c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,lVar10 - (long)plVar12,8);
  }
LAB_00ae188c:
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar11 = (undefined8 *)param_1[0xb];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
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
      local_68 = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  return;
}


