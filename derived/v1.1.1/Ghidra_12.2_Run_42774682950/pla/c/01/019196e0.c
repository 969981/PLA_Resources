/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019196e0; name: FUN_019196e0
 */


void FUN_019196e0(long *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 local_68;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_04379498;
  puVar17 = (undefined8 *)param_1[1];
  puVar18 = (undefined8 *)param_1[2];
  if (puVar18 != puVar17) {
    uVar11 = param_1[8];
    plVar16 = (long *)((long)puVar17 + (uVar11 >> 5 & 0x7fffffffffffff8));
    puVar14 = (undefined8 *)(*plVar16 + (uVar11 & 0xff) * 0x10);
    puVar1 = (undefined8 *)
             (*(long *)((long)puVar17 + (param_1[9] + uVar11 >> 5 & 0x7fffffffffffff8)) +
             (param_1[9] + uVar11 & 0xff) * 0x10);
    if (puVar1 != puVar14) {
      plVar13 = (long *)PTR_DAT_043794a0;
      do {
        while( true ) {
          puVar17 = (undefined8 *)*puVar14;
          if (puVar17 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar17 + 1);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              puVar17[2] = 0;
              if ((*puVar7 & 1) == 0) {
                iVar10 = __cxa_guard_acquire(puVar7);
                plVar13 = (long *)PTR_DAT_043794a0;
                if (iVar10 != 0) {
                  FUN_00100250(puVar9,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar7);
                  plVar13 = (long *)PTR_DAT_043794a0;
                }
              }
              lVar12 = *plVar13;
              *(long *)puVar8 = lVar12;
              local_68 = *puVar17;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
          puVar14 = puVar14 + 2;
          if ((long)puVar14 - *plVar16 != 0x1000) break;
          plVar16 = plVar16 + 1;
          puVar14 = (undefined8 *)*plVar16;
          if (puVar1 == puVar14) goto LAB_01919840;
        }
      } while (puVar1 != puVar14);
LAB_01919840:
      puVar17 = (undefined8 *)param_1[1];
      puVar18 = (undefined8 *)param_1[2];
    }
  }
  uVar11 = (long)puVar18 - (long)puVar17 >> 3;
  param_1[9] = 0;
  if (2 < uVar11) {
    lVar12 = tpidr_el0;
    do {
      plVar16 = (long *)param_1[10];
      uVar15 = *puVar17;
      uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar11 & 1) == 0) {
LAB_01919a30:
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar15,0x1000,8);
      }
      else {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_01919a30;
        FUN_02bcc824(plVar16,uVar15,0x1000,8);
      }
      puVar18 = (undefined8 *)param_1[2];
      puVar17 = (undefined8 *)(param_1[1] + 8);
      uVar11 = (long)puVar18 - (long)puVar17 >> 3;
      param_1[1] = (long)puVar17;
    } while (2 < uVar11);
  }
  if (uVar11 == 1) {
    lVar12 = 0x80;
LAB_01919734:
    param_1[8] = lVar12;
  }
  else if (uVar11 == 2) {
    lVar12 = 0x100;
    goto LAB_01919734;
  }
  if (puVar17 != puVar18) {
    lVar12 = tpidr_el0;
    do {
      plVar16 = (long *)param_1[10];
      uVar15 = *puVar17;
      uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar11 & 1) == 0) {
LAB_019198c0:
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar15,0x1000,8);
      }
      else {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_019198c0;
        FUN_02bcc824(plVar16,uVar15,0x1000,8);
      }
      puVar17 = puVar17 + 1;
    } while (puVar18 != puVar17);
    lVar12 = param_1[2] - param_1[1];
    if (lVar12 != 0) {
      param_1[2] = param_1[2] + (lVar12 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      lVar12 = *param_1;
      goto joined_r0x0191990c;
    }
  }
  lVar12 = *param_1;
joined_r0x0191990c:
  if (lVar12 == 0) {
    return;
  }
  lVar3 = param_1[3];
  plVar16 = (long *)param_1[4];
  uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
  if ((uVar11 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar16,lVar12,lVar3 - lVar12,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x019199a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar16 + 0x18))(plVar16,lVar12,lVar3 - lVar12,8);
  return;
}


