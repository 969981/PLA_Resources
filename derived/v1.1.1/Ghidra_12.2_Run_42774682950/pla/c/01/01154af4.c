/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01154af4; name: FUN_01154af4
 */


void FUN_01154af4(long *param_1,undefined8 param_2)

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
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 local_58;
  
  uVar10 = param_1[1];
  plVar14 = param_1 + 3;
  if (uVar10 < (ulong)param_1[2]) {
    FUN_011565cc(plVar14,uVar10,param_2);
    param_1[1] = param_1[1] + 0x10;
  }
  else {
    uVar13 = param_1[4];
    lVar16 = (long)(uVar10 - *param_1) >> 4;
    uVar10 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1;
    if ((ulong)(lVar11 >> 4) < uVar13 >> 1) {
      uVar12 = lVar11 >> 3;
      uVar13 = uVar10;
      if (uVar10 <= uVar12) {
        uVar13 = uVar12;
      }
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar13 << 4,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xb8))();
      }
    }
    lVar17 = lVar11 + lVar16 * 0x10;
    FUN_011565cc(plVar14,lVar17,param_2);
    plVar15 = (long *)*param_1;
    plVar19 = (long *)param_1[1];
    lVar16 = lVar17 + 0x10;
    if (plVar19 == plVar15) {
      plVar19 = plVar15;
    }
    else {
      lVar17 = lVar17 + -0x10;
      FUN_011569c0(plVar14,lVar17,plVar19 + -2);
      if (plVar19 + -2 != plVar15) {
        do {
          lVar17 = lVar17 + -0x10;
          FUN_011569c0(plVar14,lVar17,plVar19 + -4);
          plVar19 = plVar19 + -2;
        } while (plVar15 + 2 != plVar19);
      }
      plVar15 = (long *)*param_1;
      plVar19 = (long *)param_1[1];
    }
    lVar20 = param_1[2];
    param_1[2] = lVar11 + uVar13 * 0x10;
    *param_1 = lVar17;
    param_1[1] = lVar16;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (plVar19 != plVar15) {
      plVar19 = plVar19 + -2;
      puVar18 = (undefined8 *)*plVar19;
      puVar4 = PTR_LAB_04379590;
      puVar8 = PTR_LAB_04379590;
      if (puVar18 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar18 + 1);
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
          puVar18[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar6;
          *(long *)puVar7 = lVar16;
          local_58 = *puVar18;
          FUN_02a44274(lVar16 + 0xd8,&local_58);
          puVar4 = PTR_LAB_04379590;
          puVar8 = PTR_LAB_04379590;
        }
      }
      while( true ) {
        PTR_LAB_04379590 = puVar8;
        puVar8 = PTR_LAB_04379590;
        PTR_LAB_04379590 = puVar4;
        if (plVar19 == plVar15) break;
        plVar19 = plVar19 + -2;
        puVar18 = (undefined8 *)*plVar19;
        if (puVar18 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar18 + 1);
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
            puVar18[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar16 = *(long *)puVar6;
            *(long *)puVar7 = lVar16;
            local_58 = *puVar18;
            FUN_02a44274(lVar16 + 0xd8,&local_58);
            puVar4 = PTR_LAB_04379590;
          }
        }
      }
    }
    if (plVar15 != (long *)0x0) {
      plVar14 = (long *)*plVar14;
      uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar10 & 1) != 0) {
        lVar16 = tpidr_el0;
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar14,plVar15,lVar20 - (long)plVar15,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01154db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar15,lVar20 - (long)plVar15,8);
      return;
    }
  }
  return;
}


