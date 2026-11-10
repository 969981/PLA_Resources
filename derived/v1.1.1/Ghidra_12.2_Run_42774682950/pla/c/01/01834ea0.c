/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01834ea0; name: FUN_01834ea0
 */


void FUN_01834ea0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined8 local_68;
  
  puVar19 = (undefined8 *)param_1[0x88];
  *param_1 = &PTR_FUN_042284b8;
  param_1[9] = &PTR_LAB_042285b8;
  param_1[10] = &PTR_LAB_04228698;
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x80];
  if (puVar19 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)param_1[0x79];
    if (puVar19 != (undefined8 *)0x0) goto LAB_0183591c;
LAB_01834f4c:
    plVar15 = (long *)param_1[0x76];
    if (plVar15 != (long *)0x0) goto LAB_01834f54;
LAB_01834f70:
    puVar19 = (undefined8 *)param_1[0x73];
  }
  else {
    puVar21 = puVar19;
    if ((undefined8 *)param_1[0x81] != puVar19) {
      puVar21 = (undefined8 *)param_1[0x81] + -3;
      puVar20 = (undefined8 *)*puVar21;
      puVar5 = PTR_DAT_04379498;
      puVar6 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_043794a8;
      puVar8 = PTR_LAB_04379590;
      puVar10 = PTR_LAB_04379590;
      puVar11 = PTR_DAT_043794a8;
      puVar12 = PTR_DAT_043794a0;
      puVar13 = PTR_DAT_04379498;
      if (puVar20 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar20 + 1);
        do {
          iVar14 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar5 = PTR_DAT_04379498;
        puVar6 = PTR_DAT_043794a0;
        puVar7 = PTR_DAT_043794a8;
        puVar8 = PTR_LAB_04379590;
        puVar10 = PTR_LAB_04379590;
        puVar11 = PTR_DAT_043794a8;
        puVar12 = PTR_DAT_043794a0;
        puVar13 = PTR_DAT_04379498;
        if (iVar14 + -1 == 0) {
          puVar20[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_68 = *puVar20;
          FUN_02a44274(lVar17 + 0xd8,&local_68);
          puVar5 = PTR_DAT_04379498;
          puVar6 = PTR_DAT_043794a0;
          puVar7 = PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          puVar10 = PTR_LAB_04379590;
          puVar11 = PTR_DAT_043794a8;
          puVar12 = PTR_DAT_043794a0;
          puVar13 = PTR_DAT_04379498;
        }
      }
      while (PTR_DAT_04379498 = puVar13, PTR_DAT_043794a0 = puVar12, PTR_DAT_043794a8 = puVar11,
            PTR_LAB_04379590 = puVar10, puVar10 = PTR_LAB_04379590, puVar11 = PTR_DAT_043794a8,
            puVar12 = PTR_DAT_043794a0, puVar13 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar5,
            PTR_DAT_043794a0 = puVar6, PTR_DAT_043794a8 = puVar7, PTR_LAB_04379590 = puVar8,
            puVar21 != puVar19) {
        puVar21 = puVar21 + -3;
        puVar20 = (undefined8 *)*puVar21;
        if (puVar20 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar20 + 1);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar5 = PTR_DAT_04379498;
          puVar6 = PTR_DAT_043794a0;
          puVar7 = PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          if (iVar14 + -1 == 0) {
            puVar20[2] = 0;
            if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar13), iVar14 != 0)) {
              FUN_00100250(puVar10,puVar12,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar13);
            }
            lVar17 = *(long *)puVar12;
            *(long *)puVar11 = lVar17;
            local_68 = *puVar20;
            FUN_02a44274(lVar17 + 0xd8,&local_68);
            puVar5 = PTR_DAT_04379498;
            puVar6 = PTR_DAT_043794a0;
            puVar7 = PTR_DAT_043794a8;
            puVar8 = PTR_LAB_04379590;
          }
        }
      }
      puVar21 = (undefined8 *)param_1[0x80];
    }
    lVar17 = param_1[0x82];
    param_1[0x81] = puVar19;
    plVar15 = (long *)param_1[0x83];
    uVar16 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar16 & 1) == 0) {
LAB_018358f8:
      (**(code **)(*plVar15 + 0x18))(plVar15,puVar21,lVar17 - (long)puVar21,8);
      puVar19 = (undefined8 *)param_1[0x79];
    }
    else {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_018358f8;
      FUN_02bcc824(plVar15,puVar21,lVar17 - (long)puVar21,8);
      puVar19 = (undefined8 *)param_1[0x79];
    }
    if (puVar19 == (undefined8 *)0x0) goto LAB_01834f4c;
LAB_0183591c:
    puVar21 = puVar19;
    if ((undefined8 *)param_1[0x7a] != puVar19) {
      puVar21 = (undefined8 *)param_1[0x7a] + -3;
      puVar20 = (undefined8 *)*puVar21;
      puVar5 = PTR_DAT_04379498;
      puVar6 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_043794a8;
      puVar8 = PTR_LAB_04379590;
      puVar10 = PTR_LAB_04379590;
      puVar11 = PTR_DAT_043794a8;
      puVar12 = PTR_DAT_043794a0;
      puVar13 = PTR_DAT_04379498;
      if (puVar20 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar20 + 1);
        do {
          iVar14 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar5 = PTR_DAT_04379498;
        puVar6 = PTR_DAT_043794a0;
        puVar7 = PTR_DAT_043794a8;
        puVar8 = PTR_LAB_04379590;
        puVar10 = PTR_LAB_04379590;
        puVar11 = PTR_DAT_043794a8;
        puVar12 = PTR_DAT_043794a0;
        puVar13 = PTR_DAT_04379498;
        if (iVar14 + -1 == 0) {
          puVar20[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_68 = *puVar20;
          FUN_02a44274(lVar17 + 0xd8,&local_68);
          puVar5 = PTR_DAT_04379498;
          puVar6 = PTR_DAT_043794a0;
          puVar7 = PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          puVar10 = PTR_LAB_04379590;
          puVar11 = PTR_DAT_043794a8;
          puVar12 = PTR_DAT_043794a0;
          puVar13 = PTR_DAT_04379498;
        }
      }
      while (PTR_DAT_04379498 = puVar13, PTR_DAT_043794a0 = puVar12, PTR_DAT_043794a8 = puVar11,
            PTR_LAB_04379590 = puVar10, puVar10 = PTR_LAB_04379590, puVar11 = PTR_DAT_043794a8,
            puVar12 = PTR_DAT_043794a0, puVar13 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar5,
            PTR_DAT_043794a0 = puVar6, PTR_DAT_043794a8 = puVar7, PTR_LAB_04379590 = puVar8,
            puVar21 != puVar19) {
        puVar21 = puVar21 + -3;
        puVar20 = (undefined8 *)*puVar21;
        if (puVar20 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar20 + 1);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar5 = PTR_DAT_04379498;
          puVar6 = PTR_DAT_043794a0;
          puVar7 = PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          if (iVar14 + -1 == 0) {
            puVar20[2] = 0;
            if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar13), iVar14 != 0)) {
              FUN_00100250(puVar10,puVar12,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar13);
            }
            lVar17 = *(long *)puVar12;
            *(long *)puVar11 = lVar17;
            local_68 = *puVar20;
            FUN_02a44274(lVar17 + 0xd8,&local_68);
            puVar5 = PTR_DAT_04379498;
            puVar6 = PTR_DAT_043794a0;
            puVar7 = PTR_DAT_043794a8;
            puVar8 = PTR_LAB_04379590;
          }
        }
      }
      puVar21 = (undefined8 *)param_1[0x79];
    }
    lVar17 = param_1[0x7b];
    param_1[0x7a] = puVar19;
    plVar15 = (long *)param_1[0x7c];
    uVar16 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar16 & 1) == 0) {
LAB_01835a78:
      (**(code **)(*plVar15 + 0x18))(plVar15,puVar21,lVar17 - (long)puVar21,8);
      plVar15 = (long *)param_1[0x76];
    }
    else {
      lVar18 = tpidr_el0;
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_01835a78;
      FUN_02bcc824(plVar15,puVar21,lVar17 - (long)puVar21,8);
      plVar15 = (long *)param_1[0x76];
    }
    if (plVar15 == (long *)0x0) goto LAB_01834f70;
LAB_01834f54:
    lVar17 = plVar15[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 != 0) goto LAB_01834f70;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))();
    puVar19 = (undefined8 *)param_1[0x73];
  }
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x70];
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x6d];
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x5f];
  if (puVar19 == (undefined8 *)0x0) {
LAB_01835210:
    plVar15 = (long *)param_1[0x58];
  }
  else {
    puVar21 = puVar19;
    if ((undefined8 *)param_1[0x60] != puVar19) {
      puVar21 = (undefined8 *)param_1[0x60] + -2;
      puVar20 = (undefined8 *)*puVar21;
      puVar5 = PTR_DAT_04379498;
      puVar6 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_043794a8;
      puVar8 = PTR_LAB_04379590;
      puVar10 = PTR_LAB_04379590;
      puVar11 = PTR_DAT_043794a8;
      puVar12 = PTR_DAT_043794a0;
      puVar13 = PTR_DAT_04379498;
      if (puVar20 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar20 + 1);
        do {
          iVar14 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar5 = PTR_DAT_04379498;
        puVar6 = PTR_DAT_043794a0;
        puVar7 = PTR_DAT_043794a8;
        puVar8 = PTR_LAB_04379590;
        puVar10 = PTR_LAB_04379590;
        puVar11 = PTR_DAT_043794a8;
        puVar12 = PTR_DAT_043794a0;
        puVar13 = PTR_DAT_04379498;
        if (iVar14 + -1 == 0) {
          puVar20[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_68 = *puVar20;
          FUN_02a44274(lVar17 + 0xd8,&local_68);
          puVar5 = PTR_DAT_04379498;
          puVar6 = PTR_DAT_043794a0;
          puVar7 = PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          puVar10 = PTR_LAB_04379590;
          puVar11 = PTR_DAT_043794a8;
          puVar12 = PTR_DAT_043794a0;
          puVar13 = PTR_DAT_04379498;
        }
      }
      while (PTR_DAT_04379498 = puVar13, PTR_DAT_043794a0 = puVar12, PTR_DAT_043794a8 = puVar11,
            PTR_LAB_04379590 = puVar10, puVar10 = PTR_LAB_04379590, puVar11 = PTR_DAT_043794a8,
            puVar12 = PTR_DAT_043794a0, puVar13 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar5,
            PTR_DAT_043794a0 = puVar6, PTR_DAT_043794a8 = puVar7, PTR_LAB_04379590 = puVar8,
            puVar21 != puVar19) {
        puVar21 = puVar21 + -2;
        puVar20 = (undefined8 *)*puVar21;
        if (puVar20 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar20 + 1);
          do {
            iVar14 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar5 = PTR_DAT_04379498;
          puVar6 = PTR_DAT_043794a0;
          puVar7 = PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          if (iVar14 + -1 == 0) {
            puVar20[2] = 0;
            if (((*puVar13 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar13), iVar14 != 0)) {
              FUN_00100250(puVar10,puVar12,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar13);
            }
            lVar17 = *(long *)puVar12;
            *(long *)puVar11 = lVar17;
            local_68 = *puVar20;
            FUN_02a44274(lVar17 + 0xd8,&local_68);
            puVar5 = PTR_DAT_04379498;
            puVar6 = PTR_DAT_043794a0;
            puVar7 = PTR_DAT_043794a8;
            puVar8 = PTR_LAB_04379590;
          }
        }
      }
      puVar21 = (undefined8 *)param_1[0x5f];
    }
    lVar17 = param_1[0x61];
    param_1[0x60] = puVar19;
    plVar15 = (long *)param_1[0x62];
    uVar16 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar16 & 1) == 0) {
LAB_018351f4:
      (**(code **)(*plVar15 + 0x18))(plVar15,puVar21,lVar17 - (long)puVar21,8);
      goto LAB_01835210;
    }
    lVar18 = tpidr_el0;
    if (*(char *)(lVar18 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar18 + 0x38d488) = 1;
      *(undefined8 *)(lVar18 + 0x38d478) = 0;
      *(undefined8 *)(lVar18 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_018351f4;
    FUN_02bcc824(plVar15,puVar21,lVar17 - (long)puVar21,8);
    plVar15 = (long *)param_1[0x58];
  }
  if (plVar15 != (long *)0x0) {
    plVar22 = (long *)*plVar15;
    puVar19 = (undefined8 *)plVar15[5];
    if (puVar19 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar19 + 1);
      do {
        iVar14 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar14 + -1 == 0) {
        puVar19[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_68 = *puVar19;
        FUN_02a44274(lVar17 + 0xd8,&local_68);
      }
    }
    plVar24 = (long *)param_1[0x59];
    uVar16 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar16 & 1) == 0) {
LAB_01835670:
      (**(code **)(*plVar24 + 0x18))(plVar24,plVar15,0x38,8);
      pbVar9 = PTR_DAT_04379498;
      plVar15 = (long *)PTR_DAT_043794a0;
      plVar24 = (long *)PTR_DAT_043794a8;
    }
    else {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_01835670;
      FUN_02bcc824(plVar24,plVar15,0x38,8);
      pbVar9 = PTR_DAT_04379498;
      plVar15 = (long *)PTR_DAT_043794a0;
      plVar24 = (long *)PTR_DAT_043794a8;
    }
    PTR_DAT_04379498 = pbVar9;
    PTR_DAT_043794a0 = (undefined *)plVar15;
    PTR_DAT_043794a8 = (undefined *)plVar24;
    if (plVar22 != (long *)0x0) {
      lVar17 = tpidr_el0;
      do {
        while( true ) {
          plVar23 = (long *)*plVar22;
          puVar19 = (undefined8 *)plVar22[5];
          if (puVar19 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar19 + 1);
            do {
              iVar14 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar14 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar14 + -1 == 0) {
              puVar19[2] = 0;
              if (((*pbVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar9), iVar14 != 0)) {
                FUN_00100250(PTR_LAB_04379590,plVar15,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar9);
              }
              lVar18 = *plVar15;
              *plVar24 = lVar18;
              local_68 = *puVar19;
              FUN_02a44274(lVar18 + 0xd8,&local_68);
            }
          }
          plVar25 = (long *)param_1[0x59];
          uVar16 = (**(code **)(*plVar25 + 0xc0))(plVar25);
          if ((uVar16 & 1) != 0) break;
LAB_01835758:
          (**(code **)(*plVar25 + 0x18))(plVar25,plVar22,0x38,8);
          plVar22 = plVar23;
          if (plVar23 == (long *)0x0) goto LAB_01835218;
        }
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_01835758;
        FUN_02bcc824(plVar25,plVar22,0x38,8);
        plVar22 = plVar23;
      } while (plVar23 != (long *)0x0);
    }
  }
LAB_01835218:
  lVar17 = param_1[0x52];
  param_1[0x52] = 0;
  if (lVar17 == 0) {
LAB_018352a4:
    puVar19 = (undefined8 *)param_1[0x50];
  }
  else {
    lVar18 = param_1[0x53];
    plVar15 = (long *)param_1[0x54];
    uVar16 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar16 & 1) == 0) {
LAB_01835288:
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar17,lVar18 << 3,8);
      goto LAB_018352a4;
    }
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01835288;
    FUN_02bcc824(plVar15,lVar17,lVar18 << 3,8);
    puVar19 = (undefined8 *)param_1[0x50];
  }
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x4d];
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x4b];
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x49];
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x47];
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar19 = (undefined8 *)param_1[0x45];
  if (puVar19 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar19 + 1);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      puVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar19;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  plVar15 = (long *)param_1[0x43];
  if (plVar15 == (long *)0x0) {
LAB_01835508:
    plVar15 = (long *)param_1[0x42];
  }
  else {
    lVar17 = plVar15[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 != 0) goto LAB_01835508;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))();
    plVar15 = (long *)param_1[0x42];
  }
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
      plVar15 = (long *)param_1[0x41];
      goto joined_r0x01835b0c;
    }
  }
  plVar15 = (long *)param_1[0x41];
joined_r0x01835b0c:
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


