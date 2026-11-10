/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c58d08; name: FUN_01c58d08
 */


void FUN_01c58d08(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined8 local_58;
  
  puVar17 = (undefined8 *)param_1[0x92];
  *param_1 = &PTR_FUN_0424c720;
  param_1[9] = &PTR_LAB_0424c860;
  param_1[10] = &PTR_LAB_0424c940;
  param_1[0x3e] = &PTR_LAB_0424c968;
  param_1[0x41] = &PTR_LAB_0424ca08;
  param_1[0x43] = &PTR_LAB_0424ca50;
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_58 = *puVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  puVar17 = (undefined8 *)param_1[0x8f];
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_58 = *puVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  lVar14 = param_1[0x88];
  if (lVar14 != 0) {
    lVar15 = param_1[0x89];
    lVar16 = lVar14;
    if (lVar15 != lVar14) {
      puVar17 = *(undefined8 **)(lVar15 + -0x10);
      puVar4 = PTR_DAT_04379498;
      puVar5 = PTR_DAT_043794a0;
      puVar6 = PTR_DAT_043794a8;
      puVar7 = PTR_LAB_04379590;
      puVar8 = PTR_LAB_04379590;
      puVar9 = PTR_DAT_043794a8;
      puVar10 = PTR_DAT_043794a0;
      puVar11 = PTR_DAT_04379498;
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar4 = PTR_DAT_04379498;
        puVar5 = PTR_DAT_043794a0;
        puVar6 = PTR_DAT_043794a8;
        puVar7 = PTR_LAB_04379590;
        puVar8 = PTR_LAB_04379590;
        puVar9 = PTR_DAT_043794a8;
        puVar10 = PTR_DAT_043794a0;
        puVar11 = PTR_DAT_04379498;
        if (iVar12 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_58 = *puVar17;
          FUN_02a44274(lVar16 + 0xd8,&local_58);
          puVar4 = PTR_DAT_04379498;
          puVar5 = PTR_DAT_043794a0;
          puVar6 = PTR_DAT_043794a8;
          puVar7 = PTR_LAB_04379590;
          puVar8 = PTR_LAB_04379590;
          puVar9 = PTR_DAT_043794a8;
          puVar10 = PTR_DAT_043794a0;
          puVar11 = PTR_DAT_04379498;
        }
      }
      while (PTR_DAT_04379498 = puVar11, PTR_DAT_043794a0 = puVar10, PTR_DAT_043794a8 = puVar9,
            PTR_LAB_04379590 = puVar8, puVar8 = PTR_LAB_04379590, puVar9 = PTR_DAT_043794a8,
            puVar10 = PTR_DAT_043794a0, puVar11 = PTR_DAT_04379498, lVar16 = lVar15 + -0x18,
            PTR_DAT_04379498 = puVar4, PTR_DAT_043794a0 = puVar5, PTR_DAT_043794a8 = puVar6,
            PTR_LAB_04379590 = puVar7, lVar16 != lVar14) {
        puVar17 = *(undefined8 **)(lVar15 + -0x28);
        lVar15 = lVar16;
        if (puVar17 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar17 + 1);
          do {
            iVar12 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar4 = PTR_DAT_04379498;
          puVar5 = PTR_DAT_043794a0;
          puVar6 = PTR_DAT_043794a8;
          puVar7 = PTR_LAB_04379590;
          if (iVar12 + -1 == 0) {
            puVar17[2] = 0;
            if (((*puVar11 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar11), iVar12 != 0)) {
              FUN_00100250(puVar8,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar11);
            }
            lVar16 = *(long *)puVar10;
            *(long *)puVar9 = lVar16;
            local_58 = *puVar17;
            FUN_02a44274(lVar16 + 0xd8,&local_58);
            puVar4 = PTR_DAT_04379498;
            puVar5 = PTR_DAT_043794a0;
            puVar6 = PTR_DAT_043794a8;
            puVar7 = PTR_LAB_04379590;
          }
        }
      }
      lVar16 = param_1[0x88];
    }
    lVar15 = param_1[0x8a];
    param_1[0x89] = lVar14;
    plVar19 = (long *)param_1[0x8b];
    uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar13 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar16,lVar15 - lVar16,8);
        goto LAB_01c58e20;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar15 - lVar16,8);
  }
LAB_01c58e20:
  FUN_01c5963c(param_1 + 0x76);
  FUN_01c59c3c(param_1 + 0x66);
  lVar14 = param_1[0x5f];
  if (lVar14 == 0) {
LAB_01c58ebc:
    plVar19 = (long *)param_1[0x58];
    if (plVar19 == (long *)0x0) goto LAB_01c58ec4;
LAB_01c590a8:
    plVar18 = plVar19;
    if ((long *)param_1[0x59] != plVar19) {
      plVar18 = (long *)param_1[0x59] + -2;
      puVar17 = (undefined8 *)*plVar18;
      puVar4 = PTR_DAT_04379498;
      puVar5 = PTR_DAT_043794a0;
      puVar6 = PTR_DAT_043794a8;
      puVar7 = PTR_LAB_04379590;
      puVar8 = PTR_LAB_04379590;
      puVar9 = PTR_DAT_043794a8;
      puVar10 = PTR_DAT_043794a0;
      puVar11 = PTR_DAT_04379498;
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar4 = PTR_DAT_04379498;
        puVar5 = PTR_DAT_043794a0;
        puVar6 = PTR_DAT_043794a8;
        puVar7 = PTR_LAB_04379590;
        puVar8 = PTR_LAB_04379590;
        puVar9 = PTR_DAT_043794a8;
        puVar10 = PTR_DAT_043794a0;
        puVar11 = PTR_DAT_04379498;
        if (iVar12 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_58 = *puVar17;
          FUN_02a44274(lVar14 + 0xd8,&local_58);
          puVar4 = PTR_DAT_04379498;
          puVar5 = PTR_DAT_043794a0;
          puVar6 = PTR_DAT_043794a8;
          puVar7 = PTR_LAB_04379590;
          puVar8 = PTR_LAB_04379590;
          puVar9 = PTR_DAT_043794a8;
          puVar10 = PTR_DAT_043794a0;
          puVar11 = PTR_DAT_04379498;
        }
      }
      while (PTR_DAT_04379498 = puVar11, PTR_DAT_043794a0 = puVar10, PTR_DAT_043794a8 = puVar9,
            PTR_LAB_04379590 = puVar8, puVar8 = PTR_LAB_04379590, puVar9 = PTR_DAT_043794a8,
            puVar10 = PTR_DAT_043794a0, puVar11 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar4,
            PTR_DAT_043794a0 = puVar5, PTR_DAT_043794a8 = puVar6, PTR_LAB_04379590 = puVar7,
            plVar18 != plVar19) {
        plVar18 = plVar18 + -2;
        puVar17 = (undefined8 *)*plVar18;
        if (puVar17 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar17 + 1);
          do {
            iVar12 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar4 = PTR_DAT_04379498;
          puVar5 = PTR_DAT_043794a0;
          puVar6 = PTR_DAT_043794a8;
          puVar7 = PTR_LAB_04379590;
          if (iVar12 + -1 == 0) {
            puVar17[2] = 0;
            if (((*puVar11 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar11), iVar12 != 0)) {
              FUN_00100250(puVar8,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar11);
            }
            lVar14 = *(long *)puVar10;
            *(long *)puVar9 = lVar14;
            local_58 = *puVar17;
            FUN_02a44274(lVar14 + 0xd8,&local_58);
            puVar4 = PTR_DAT_04379498;
            puVar5 = PTR_DAT_043794a0;
            puVar6 = PTR_DAT_043794a8;
            puVar7 = PTR_LAB_04379590;
          }
        }
      }
      plVar18 = (long *)param_1[0x58];
    }
    lVar14 = param_1[0x5a];
    param_1[0x59] = plVar19;
    plVar19 = (long *)param_1[0x5b];
    uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar13 & 1) == 0) {
LAB_01c59120:
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar18,lVar14 - (long)plVar18,8);
      lVar14 = param_1[0x4b];
    }
    else {
      lVar15 = tpidr_el0;
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_01c59120;
      FUN_02bcc824(plVar19,plVar18,lVar14 - (long)plVar18,8);
      lVar14 = param_1[0x4b];
    }
  }
  else {
    lVar15 = param_1[0x61];
    param_1[0x60] = lVar14;
    plVar19 = (long *)param_1[0x62];
    uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar13 & 1) == 0) {
LAB_01c58ea0:
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,lVar15 - lVar14,4);
      goto LAB_01c58ebc;
    }
    lVar16 = tpidr_el0;
    if (*(char *)(lVar16 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar16 + 0x38d488) = 1;
      *(undefined8 *)(lVar16 + 0x38d478) = 0;
      *(undefined8 *)(lVar16 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_01c58ea0;
    FUN_02bcc824(plVar19,lVar14,lVar15 - lVar14,4);
    plVar19 = (long *)param_1[0x58];
    if (plVar19 != (long *)0x0) goto LAB_01c590a8;
LAB_01c58ec4:
    lVar14 = param_1[0x4b];
  }
  if (lVar14 != 0) {
    lVar15 = param_1[0x4d];
    param_1[0x4c] = lVar14;
    plVar19 = (long *)param_1[0x4e];
    uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar13 & 1) != 0) {
      lVar16 = tpidr_el0;
      if (*(char *)(lVar16 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar16 + 0x38d488) = 1;
        *(undefined8 *)(lVar16 + 0x38d478) = 0;
        *(undefined8 *)(lVar16 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar16 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar14,lVar15 - lVar14,4);
        goto LAB_01c58f50;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,lVar15 - lVar14,4);
  }
LAB_01c58f50:
  puVar17 = (undefined8 *)param_1[0x3f];
  param_1[0x3e] = &PTR_FUN_04255188;
  if (puVar17 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar17 + 1);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      puVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_58 = *puVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


