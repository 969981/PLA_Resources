/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00957a50; name: FUN_00957a50
 */


void FUN_00957a50(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 local_58;
  
  lVar18 = *param_1;
  if (lVar18 == 0) {
    return;
  }
  lVar16 = param_1[1];
  lVar15 = lVar18;
  if (lVar16 != lVar18) {
    puVar17 = *(undefined8 **)(lVar16 + -0x10);
    if (puVar17 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar17 + 1);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        puVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_58 = *puVar17;
        FUN_02a44274(lVar15 + 0xd8,&local_58);
      }
    }
    if (lVar16 + -0x18 != lVar18) {
      puVar17 = *(undefined8 **)(lVar16 + -0x28);
      lVar16 = lVar16 + -0x30;
      puVar5 = PTR_DAT_04379498;
      puVar6 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_043794a8;
      puVar8 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
      puVar10 = PTR_DAT_043794a8;
      puVar11 = PTR_DAT_043794a0;
      puVar12 = PTR_DAT_04379498;
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar5 = PTR_DAT_04379498;
        puVar6 = PTR_DAT_043794a0;
        puVar7 = PTR_DAT_043794a8;
        puVar8 = PTR_LAB_04379590;
        puVar9 = PTR_LAB_04379590;
        puVar10 = PTR_DAT_043794a8;
        puVar11 = PTR_DAT_043794a0;
        puVar12 = PTR_DAT_04379498;
        if (iVar13 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_58 = *puVar17;
          FUN_02a44274(lVar15 + 0xd8,&local_58);
          puVar5 = PTR_DAT_04379498;
          puVar6 = PTR_DAT_043794a0;
          puVar7 = PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          puVar9 = PTR_LAB_04379590;
          puVar10 = PTR_DAT_043794a8;
          puVar11 = PTR_DAT_043794a0;
          puVar12 = PTR_DAT_04379498;
        }
      }
      while (PTR_DAT_04379498 = puVar12, PTR_DAT_043794a0 = puVar11, PTR_DAT_043794a8 = puVar10,
            PTR_LAB_04379590 = puVar9, puVar9 = PTR_LAB_04379590, puVar10 = PTR_DAT_043794a8,
            puVar11 = PTR_DAT_043794a0, puVar12 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar5,
            PTR_DAT_043794a0 = puVar6, PTR_DAT_043794a8 = puVar7, PTR_LAB_04379590 = puVar8,
            lVar16 != lVar18) {
        puVar17 = *(undefined8 **)(lVar16 + -0x10);
        lVar16 = lVar16 + -0x18;
        if (puVar17 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar17 + 1);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar5 = PTR_DAT_04379498;
          puVar6 = PTR_DAT_043794a0;
          puVar7 = PTR_DAT_043794a8;
          puVar8 = PTR_LAB_04379590;
          if (iVar13 + -1 == 0) {
            puVar17[2] = 0;
            if (((*puVar12 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar12), iVar13 != 0)) {
              FUN_00100250(puVar9,puVar11,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar12);
            }
            lVar15 = *(long *)puVar11;
            *(long *)puVar10 = lVar15;
            local_58 = *puVar17;
            FUN_02a44274(lVar15 + 0xd8,&local_58);
            puVar5 = PTR_DAT_04379498;
            puVar6 = PTR_DAT_043794a0;
            puVar7 = PTR_DAT_043794a8;
            puVar8 = PTR_LAB_04379590;
          }
        }
      }
    }
    lVar15 = *param_1;
  }
  lVar16 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar18;
  uVar14 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar14 & 1) != 0) {
    lVar18 = tpidr_el0;
    if (*(char *)(lVar18 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar18 + 0x38d488) = 1;
      *(undefined8 *)(lVar18 + 0x38d478) = 0;
      *(undefined8 *)(lVar18 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar18 + 0x38d480)) {
      FUN_02bcc824(plVar2,lVar15,lVar16 - lVar15,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00957bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar15,lVar16 - lVar15,8);
  return;
}


