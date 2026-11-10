/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c6c2c4; name: FUN_01c6c2c4
 */


void FUN_01c6c2c4(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 local_58;
  
  uVar9 = param_1[1];
  plVar14 = param_1 + 3;
  if (uVar9 < (ulong)param_1[2]) {
    FUN_01c6c97c(plVar14,uVar9,param_2);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar13 = param_1[4];
    lVar17 = (long)(uVar9 - *param_1) >> 5;
    uVar9 = lVar17 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1;
    uVar11 = lVar10 >> 4;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if ((ulong)(lVar10 >> 5) < uVar13 >> 1) {
      uVar13 = uVar9;
    }
    if (uVar13 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar13 << 5,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xb8))();
      }
    }
    lVar18 = lVar10 + lVar17 * 0x20;
    FUN_01c6c97c(plVar14,lVar18,param_2);
    plVar15 = (long *)*param_1;
    plVar16 = (long *)param_1[1];
    lVar17 = lVar18 + 0x20;
    if (plVar16 == plVar15) {
      plVar16 = plVar15;
    }
    else {
      do {
        lVar18 = lVar18 + -0x20;
        plVar16 = plVar16 + -4;
        FUN_01c6ca80(plVar14,lVar18,plVar16);
      } while (plVar15 != plVar16);
      plVar15 = (long *)*param_1;
      plVar16 = (long *)param_1[1];
    }
    lVar19 = param_1[2];
    param_1[2] = lVar10 + uVar13 * 0x20;
    *param_1 = lVar18;
    param_1[1] = lVar17;
    puVar7 = PTR_LAB_04379590;
    puVar6 = PTR_DAT_043794a8;
    puVar5 = PTR_DAT_043794a0;
    puVar4 = PTR_DAT_04379498;
    while (plVar16 != plVar15) {
      puVar12 = (undefined8 *)plVar16[-2];
      plVar16 = plVar16 + -4;
      if (puVar12 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar12 + 1);
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
          puVar12[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar17 = *(long *)puVar5;
          *(long *)puVar6 = lVar17;
          local_58 = *puVar12;
          FUN_02a44274(lVar17 + 0xd8,&local_58);
        }
      }
      puVar12 = (undefined8 *)*plVar16;
      if (puVar12 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar12 + 1);
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
          puVar12[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar17 = *(long *)puVar5;
          *(long *)puVar6 = lVar17;
          local_58 = *puVar12;
          FUN_02a44274(lVar17 + 0xd8,&local_58);
        }
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar14 = (long *)*plVar14;
      uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar9 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar15,lVar19 - (long)plVar15,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01c6c54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,lVar19 - (long)plVar15,8);
      return;
    }
  }
  return;
}


