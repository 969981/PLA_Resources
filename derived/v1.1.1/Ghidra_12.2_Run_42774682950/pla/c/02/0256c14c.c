/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256c14c; name: FUN_0256c14c
 */


void FUN_0256c14c(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 local_68;
  
  uVar11 = param_1[1];
  plVar16 = param_1 + 3;
  if (uVar11 < (ulong)param_1[2]) {
    FUN_0257351c(plVar16,uVar11,param_2);
    param_1[1] = param_1[1] + 0x10;
  }
  else {
    uVar15 = param_1[4];
    lVar19 = (long)(uVar11 - *param_1) >> 4;
    uVar11 = lVar19 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_1[2] - *param_1;
    if ((ulong)(lVar12 >> 4) < uVar15 >> 1) {
      uVar13 = lVar12 >> 3;
      uVar15 = uVar11;
      if (uVar11 <= uVar13) {
        uVar15 = uVar13;
      }
    }
    if (uVar15 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar15 << 4,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*plVar16 + 0xb8))();
      }
    }
    puVar20 = (undefined8 *)(lVar12 + lVar19 * 0x10);
    FUN_0257351c(plVar16,puVar20,param_2);
    puVar6 = PTR_DAT_04379528;
    puVar5 = PTR_DAT_04379520;
    plVar18 = (long *)*param_1;
    plVar17 = (long *)param_1[1];
    puVar4 = puVar20;
    if (plVar17 == plVar18) {
      puVar14 = puVar20;
      plVar17 = plVar18;
    }
    else {
      do {
        puVar14 = puVar4 + -2;
        lVar19 = *plVar16;
        plVar17 = plVar17 + -2;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar10 == 0) {
          *puVar14 = 0;
          puVar4[-1] = 0;
          FUN_019ec938(puVar14,plVar17);
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar19;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *puVar14 = 0;
          puVar4[-1] = 0;
          FUN_019ec938(puVar14,plVar17);
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        puVar4 = puVar14;
      } while (plVar18 != plVar17);
      plVar18 = (long *)*param_1;
      plVar17 = (long *)param_1[1];
    }
    lVar19 = param_1[2];
    *param_1 = (long)puVar14;
    param_1[1] = (long)(puVar20 + 2);
    param_1[2] = lVar12 + uVar15 * 0x10;
    puVar8 = PTR_LAB_04379590;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (plVar17 != plVar18) {
      plVar17 = plVar17 + -2;
      puVar20 = (undefined8 *)*plVar17;
      while( true ) {
        if (puVar20 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar20 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            puVar20[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar12 = *(long *)puVar6;
            *(long *)puVar7 = lVar12;
            local_68 = *puVar20;
            FUN_02a44274(lVar12 + 0xd8,&local_68);
          }
        }
        if (plVar17 == plVar18) break;
        plVar17 = plVar17 + -2;
        puVar20 = (undefined8 *)*plVar17;
      }
    }
    if (plVar18 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar11 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar16,plVar18,lVar19 - (long)plVar18,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0256c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar18,lVar19 - (long)plVar18,8);
      return;
    }
  }
  return;
}


