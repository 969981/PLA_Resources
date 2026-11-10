/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bcdbc0; name: FUN_00bcdbc0
 */


void FUN_00bcdbc0(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_58;
  
  plVar13 = (long *)param_1[0x1d];
  *param_1 = (long)&PTR_FUN_041d9ea8;
  param_1[9] = (long)&PTR_LAB_041d9f20;
  param_1[10] = (long)&PTR_LAB_041d9f68;
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)param_1[0x16];
    if (plVar13 == (long *)0x0) goto LAB_00bcdd5c;
LAB_00bcdc08:
    puVar8 = PTR_LAB_04379590;
    puVar7 = PTR_DAT_043794a8;
    puVar3 = PTR_DAT_043794a0;
    puVar2 = PTR_DAT_04379498;
    plVar15 = (long *)param_1[0x17];
    if (plVar15 == plVar13) {
      plVar15 = plVar13;
    }
    else {
      do {
        puVar11 = (undefined8 *)plVar15[-2];
        plVar15 = plVar15 + -4;
        if (puVar11 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar11 + 1);
          do {
            iVar9 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            puVar11[2] = 0;
            if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar2), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar3,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar2);
            }
            lVar12 = *(long *)puVar3;
            *(long *)puVar7 = lVar12;
            local_58 = *puVar11;
            FUN_02a44274(lVar12 + 0xd8,&local_58);
          }
        }
        puVar11 = (undefined8 *)*plVar15;
        if (puVar11 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar11 + 1);
          do {
            iVar9 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            puVar11[2] = 0;
            if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar2), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar3,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar2);
            }
            lVar12 = *(long *)puVar3;
            *(long *)puVar7 = lVar12;
            local_58 = *puVar11;
            FUN_02a44274(lVar12 + 0xd8,&local_58);
          }
        }
      } while (plVar15 != plVar13);
      plVar15 = (long *)param_1[0x16];
    }
    lVar12 = param_1[0x18];
    plVar14 = (long *)param_1[0x19];
    param_1[0x17] = (long)plVar13;
    uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar10 & 1) == 0) {
LAB_00bcdd40:
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,lVar12 - (long)plVar15,8);
      goto LAB_00bcdd5c;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00bcdd40;
    FUN_02bcc824(plVar14,plVar15,lVar12 - (long)plVar15,8);
    puVar11 = (undefined8 *)param_1[0x12];
  }
  else {
    plVar15 = plVar13;
    if ((long *)param_1[0x1e] != plVar13) {
      plVar14 = (long *)param_1[0x1e] + -1;
      plVar15 = (long *)*plVar14;
      if (plVar15 != (long *)0x0) {
        lVar12 = plVar15[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) goto LAB_00bcdfa0;
      }
LAB_00bcdf74:
      if (plVar14 != plVar13) {
        while( true ) {
          plVar14 = plVar14 + -1;
          plVar15 = (long *)*plVar14;
          if (plVar15 == (long *)0x0) break;
          lVar12 = plVar15[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 != 0) break;
LAB_00bcdfa0:
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))();
          if (plVar14 == plVar13) goto LAB_00bcdfb8;
        }
        goto LAB_00bcdf74;
      }
LAB_00bcdfb8:
      plVar15 = (long *)param_1[0x1d];
    }
    lVar12 = param_1[0x1f];
    plVar14 = (long *)param_1[0x20];
    param_1[0x1e] = (long)plVar13;
    uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar10 & 1) == 0) {
LAB_00bce020:
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,lVar12 - (long)plVar15,8);
      plVar13 = (long *)param_1[0x16];
    }
    else {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00bce020;
      FUN_02bcc824(plVar14,plVar15,lVar12 - (long)plVar15,8);
      plVar13 = (long *)param_1[0x16];
    }
    if (plVar13 != (long *)0x0) goto LAB_00bcdc08;
LAB_00bcdd5c:
    puVar11 = (undefined8 *)param_1[0x12];
  }
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *puVar11;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  puVar11 = (undefined8 *)param_1[0x10];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *puVar11;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  plVar13 = (long *)param_1[0xf];
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  plVar13 = (long *)param_1[0xe];
  *param_1 = (long)&PTR_LAB_041d9f90;
  param_1[9] = (long)&PTR_LAB_041d9ff8;
  param_1[10] = (long)&PTR_LAB_041da040;
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
      plVar13 = (long *)param_1[0xd];
      goto joined_r0x00bcde80;
    }
  }
  plVar13 = (long *)param_1[0xd];
joined_r0x00bcde80:
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar11 = (undefined8 *)param_1[0xb];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *puVar11;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  return;
}


