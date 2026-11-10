/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cf8e1c; name: FUN_00cf8e1c
 */


void FUN_00cf8e1c(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_68;
  
  *param_1 = &PTR_FUN_041e8b10;
  param_1[0x4b] = &PTR_LAB_041e8d58;
  param_1[9] = &PTR_LAB_041e8c50;
  param_1[10] = &PTR_LAB_041e8d30;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if ((long *)param_1[0x5f] != (long *)0x0) {
    lVar12 = tpidr_el0;
    plVar9 = (long *)param_1[0x5f];
    do {
      while( true ) {
        plVar14 = (long *)*plVar9;
        puVar13 = (undefined8 *)plVar9[0x53];
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar13[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar11 = *(long *)puVar6;
            *(long *)puVar7 = lVar11;
            local_68 = *puVar13;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
        puVar13 = (undefined8 *)plVar9[0x51];
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar13[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar11 = *(long *)puVar6;
            *(long *)puVar7 = lVar11;
            local_68 = *puVar13;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
        puVar13 = (undefined8 *)plVar9[0x4e];
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar13[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar11 = *(long *)puVar6;
            *(long *)puVar7 = lVar11;
            local_68 = *puVar13;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
        puVar13 = (undefined8 *)plVar9[6];
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            puVar13[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar11 = *(long *)puVar6;
            *(long *)puVar7 = lVar11;
            local_68 = *puVar13;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
        plVar15 = (long *)param_1[0x60];
        uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
        if ((uVar10 & 1) != 0) break;
LAB_00cf92ac:
        (**(code **)(*plVar15 + 0x18))(plVar15,plVar9,0x2b0,0x10);
        plVar9 = plVar14;
        if (plVar14 == (long *)0x0) goto LAB_00cf8e68;
      }
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_00cf92ac;
      FUN_02bcc824(plVar15,plVar9,0x2b0,0x10);
      plVar9 = plVar14;
    } while (plVar14 != (long *)0x0);
  }
LAB_00cf8e68:
  lVar12 = param_1[0x5a];
  param_1[0x5a] = 0;
  if (lVar12 == 0) {
    plVar9 = (long *)param_1[0x58];
  }
  else {
    lVar11 = param_1[0x5b];
    plVar9 = (long *)param_1[0x5c];
    uVar10 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar10 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar12,lVar11 << 3,0x10);
        plVar9 = (long *)param_1[0x58];
        goto joined_r0x00cf90ec;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar12,lVar11 << 3,0x10);
    plVar9 = (long *)param_1[0x58];
  }
joined_r0x00cf90ec:
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      puVar13 = (undefined8 *)param_1[0x55];
      goto joined_r0x00cf8e9c;
    }
  }
  puVar13 = (undefined8 *)param_1[0x55];
joined_r0x00cf8e9c:
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *puVar13;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  puVar13 = (undefined8 *)param_1[0x53];
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *puVar13;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  puVar13 = (undefined8 *)param_1[0x51];
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *puVar13;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  puVar13 = (undefined8 *)param_1[0x4c];
  param_1[0x4b] = &PTR_FUN_04255188;
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *puVar13;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  FUN_00ceadcc(param_1);
  return;
}


