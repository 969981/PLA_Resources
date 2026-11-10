/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a9874; name: FUN_028a9874
 */


void FUN_028a9874(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 local_58;
  
  lVar13 = param_1[1];
  plVar15 = param_1 + 3;
  if (lVar13 == param_1[2]) {
    uVar14 = param_1[4];
    lVar13 = lVar13 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar1 = lVar13 * -0x5555555555555555 + 1;
    if (uVar14 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1 >> 3;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar1 <= uVar12) {
      uVar1 = uVar12;
    }
    if ((ulong)(lVar10 * -0x5555555555555555) < uVar14 >> 1) {
      uVar14 = uVar1;
    }
    if (uVar14 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar14 * 0x18,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*plVar15 + 0xb8))();
      }
    }
    lVar18 = lVar10 + lVar13 * 8;
    FUN_028adc2c(plVar15,lVar18,param_2);
    plVar17 = (long *)*param_1;
    plVar16 = (long *)param_1[1];
    lVar13 = lVar18 + 0x18;
    if (plVar16 == plVar17) {
      plVar16 = plVar17;
    }
    else {
      do {
        lVar18 = lVar18 + -0x18;
        plVar16 = plVar16 + -3;
        FUN_028adc2c(plVar15,lVar18,plVar16);
      } while (plVar17 != plVar16);
      plVar17 = (long *)*param_1;
      plVar16 = (long *)param_1[1];
    }
    lVar19 = param_1[2];
    param_1[2] = lVar10 + uVar14 * 0x18;
    *param_1 = lVar18;
    param_1[1] = lVar13;
    puVar8 = PTR_LAB_04379590;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (plVar16 != plVar17) {
      plVar16 = plVar16 + -3;
      puVar11 = (undefined8 *)*plVar16;
      while( true ) {
        if (puVar11 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar11 + 1);
          do {
            iVar9 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            puVar11[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar13 = *(long *)puVar6;
            *(long *)puVar7 = lVar13;
            local_58 = *puVar11;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        if (plVar16 == plVar17) break;
        plVar16 = plVar16 + -3;
        puVar11 = (undefined8 *)*plVar16;
      }
    }
    if (plVar17 != (long *)0x0) {
      plVar15 = (long *)*plVar15;
      uVar14 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar14 & 1) != 0) {
        lVar13 = tpidr_el0;
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar15,plVar17,lVar19 - (long)plVar17,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x028a9b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar17,lVar19 - (long)plVar17,8);
      return;
    }
  }
  else {
    FUN_028adc2c(plVar15,lVar13,param_2);
    param_1[1] = param_1[1] + 0x18;
  }
  return;
}


