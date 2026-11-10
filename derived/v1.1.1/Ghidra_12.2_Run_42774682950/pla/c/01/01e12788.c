/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e12788; name: FUN_01e12788
 */


void FUN_01e12788(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x108) == 0) goto LAB_01e127b4;
  plVar15 = *(long **)(param_1 + 0xe0);
  if (plVar15 != (long *)0x0) {
    plVar17 = *(long **)(param_1 + 0xe8);
    puVar14 = (undefined8 *)*plVar15;
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) == 0) {
LAB_01e12924:
      (**(code **)(*plVar17 + 0x18))(plVar17,plVar15,0x20,8);
    }
    else {
      lVar11 = tpidr_el0;
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_01e12924;
      FUN_02bcc824(plVar17,plVar15,0x20,8);
    }
    if (puVar14 != (undefined8 *)0x0) {
      plVar17 = *(long **)(param_1 + 0xe8);
      plVar15 = (long *)*puVar14;
      uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
      if ((uVar10 & 1) == 0) {
LAB_01e129a4:
        (**(code **)(*plVar17 + 0x18))(plVar17,puVar14,0x20,8);
      }
      else {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_01e129a4;
        FUN_02bcc824(plVar17,puVar14,0x20,8);
      }
      if (plVar15 != (long *)0x0) {
        plVar18 = *(long **)(param_1 + 0xe8);
        plVar17 = (long *)*plVar15;
        uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar10 & 1) == 0) {
LAB_01e12a24:
          (**(code **)(*plVar18 + 0x18))(plVar18,plVar15,0x20,8);
        }
        else {
          lVar11 = tpidr_el0;
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_01e12a24;
          FUN_02bcc824(plVar18,plVar15,0x20,8);
        }
        if (plVar17 != (long *)0x0) {
          lVar11 = tpidr_el0;
          do {
            while( true ) {
              plVar15 = *(long **)(param_1 + 0xe8);
              plVar18 = (long *)*plVar17;
              uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
              if ((uVar10 & 1) != 0) break;
LAB_01e12ba0:
              (**(code **)(*plVar15 + 0x18))(plVar15,plVar17,0x20,8);
              plVar17 = plVar18;
              if (plVar18 == (long *)0x0) goto LAB_01e12a44;
            }
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_01e12ba0;
            FUN_02bcc824(plVar15,plVar17,0x20,8);
            plVar17 = plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
  }
LAB_01e12a44:
  uVar10 = *(ulong *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (uVar10 != 0) {
    uVar12 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      do {
        lVar13 = lVar11 * 8;
        lVar11 = lVar11 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar13) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar13 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar13 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar13 + 0x18) = 0;
      } while (uVar10 - uVar12 != lVar11);
    }
    if (uVar12 != 0) {
      lVar11 = lVar11 << 3;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar11) = 0;
        uVar12 = uVar12 - 1;
        lVar11 = lVar11 + 8;
      } while (uVar12 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
LAB_01e127b4:
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  puVar14 = *(undefined8 **)(param_1 + 0x78);
  if (*(undefined8 **)(param_1 + 0x80) != puVar14) {
    puVar19 = *(undefined8 **)(param_1 + 0x80) + -2;
    puVar16 = (undefined8 *)*puVar19;
    puVar4 = PTR_LAB_04379590;
    puVar8 = PTR_LAB_04379590;
    if (puVar16 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar16 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4 = PTR_LAB_04379590;
      puVar8 = PTR_LAB_04379590;
      if (iVar9 + -1 == 0) {
        puVar16[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)puVar6;
        *(long *)puVar7 = lVar11;
        local_68 = *puVar16;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
        puVar4 = PTR_LAB_04379590;
        puVar8 = PTR_LAB_04379590;
      }
    }
    while (PTR_LAB_04379590 = puVar8, puVar8 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar4,
          puVar19 != puVar14) {
      puVar19 = puVar19 + -2;
      puVar16 = (undefined8 *)*puVar19;
      if (puVar16 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar16 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar4 = PTR_LAB_04379590;
        if (iVar9 + -1 == 0) {
          puVar16[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar11 = *(long *)puVar6;
          *(long *)puVar7 = lVar11;
          local_68 = *puVar16;
          FUN_02a44274(lVar11 + 0xd8,&local_68);
          puVar4 = PTR_LAB_04379590;
        }
      }
    }
  }
  *(undefined8 **)(param_1 + 0x80) = puVar14;
                    /* WARNING: Could not recover jumptable at 0x01e128b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0xa0))(*(long **)(param_1 + 0x70),0);
  return;
}


