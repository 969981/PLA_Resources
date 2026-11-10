/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bd214; name: FUN_008bd214
 */


void FUN_008bd214(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar14 = (undefined8 *)param_1[1];
  puVar15 = (undefined8 *)param_1[2];
  if (puVar15 != puVar14) {
    uVar9 = param_1[8];
    plVar13 = (long *)((long)puVar14 + (uVar9 >> 6 & 0x3fffffffffffff8));
    plVar12 = (long *)(*plVar13 + (uVar9 & 0x1ff) * 8);
    plVar2 = (long *)(*(long *)((long)puVar14 + (param_1[9] + uVar9 >> 6 & 0x3fffffffffffff8)) +
                     (param_1[9] + uVar9 & 0x1ff) * 8);
    if (plVar2 != plVar12) {
      do {
        plVar8 = (long *)*plVar12;
        if (plVar8 != (long *)0x0) {
          lVar10 = plVar8[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))();
          }
        }
        plVar12 = plVar12 + 1;
        if ((long)plVar12 - *plVar13 == 0x1000) {
          plVar13 = plVar13 + 1;
          plVar12 = (long *)*plVar13;
        }
      } while (plVar2 != plVar12);
      puVar14 = (undefined8 *)param_1[1];
      puVar15 = (undefined8 *)param_1[2];
    }
  }
  uVar9 = (long)puVar15 - (long)puVar14 >> 3;
  param_1[9] = 0;
  if (2 < uVar9) {
    lVar10 = tpidr_el0;
    do {
      plVar12 = (long *)param_1[10];
      uVar11 = *puVar14;
      uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar9 & 1) == 0) {
LAB_008bd5a8:
        (**(code **)(*plVar12 + 0x18))(plVar12,uVar11,0x1000,8);
      }
      else {
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_008bd5a8;
        FUN_02bcc824(plVar12,uVar11,0x1000,8);
      }
      puVar15 = (undefined8 *)param_1[2];
      puVar14 = (undefined8 *)(param_1[1] + 8);
      uVar9 = (long)puVar15 - (long)puVar14 >> 3;
      param_1[1] = (long)puVar14;
    } while (2 < uVar9);
  }
  if (uVar9 == 1) {
    lVar10 = 0x100;
LAB_008bd2ac:
    param_1[8] = lVar10;
  }
  else if (uVar9 == 2) {
    lVar10 = 0x200;
    goto LAB_008bd2ac;
  }
  if (puVar14 != puVar15) {
    plVar12 = (long *)param_1[10];
    uVar11 = *puVar14;
    uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar9 & 1) == 0) {
LAB_008bd33c:
      (**(code **)(*plVar12 + 0x18))(plVar12,uVar11,0x1000,8);
    }
    else {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_008bd33c;
      FUN_02bcc824(plVar12,uVar11,0x1000,8);
    }
    puVar14 = puVar14 + 1;
    if (puVar14 != puVar15) {
      lVar10 = tpidr_el0;
      do {
        plVar12 = (long *)param_1[10];
        uVar11 = *puVar14;
        uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
        if ((uVar9 & 1) == 0) {
LAB_008bd3dc:
          (**(code **)(*plVar12 + 0x18))(plVar12,uVar11,0x1000,8);
        }
        else {
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_008bd3dc;
          FUN_02bcc824(plVar12,uVar11,0x1000,8);
        }
        puVar14 = puVar14 + 1;
      } while (puVar15 != puVar14);
    }
    lVar10 = param_1[2] - param_1[1];
    if (lVar10 != 0) {
      param_1[2] = param_1[2] + (lVar10 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      lVar10 = *param_1;
      goto joined_r0x008bd428;
    }
  }
  lVar10 = *param_1;
joined_r0x008bd428:
  if (lVar10 == 0) {
    return;
  }
  lVar4 = param_1[3];
  plVar12 = (long *)param_1[4];
  uVar9 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((uVar9 & 1) != 0) {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar7 + 0x38d480)) {
      FUN_02bcc824(plVar12,lVar10,lVar4 - lVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x008bd4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,lVar4 - lVar10,8);
  return;
}


