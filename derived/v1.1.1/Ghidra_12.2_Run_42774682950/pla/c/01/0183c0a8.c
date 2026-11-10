/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183c0a8; name: FUN_0183c0a8
 */


void FUN_0183c0a8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 local_48;
  
  lVar9 = *(long *)(param_1 + 0x408);
  puVar1 = (undefined8 *)(param_1 + 0x418);
  if (lVar9 == *(long *)(param_1 + 0x410)) {
    uVar13 = *(ulong *)(param_1 + 0x420);
    lVar9 = lVar9 - *(long *)(param_1 + 0x400) >> 3;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar2 = lVar9 * -0x5555555555555555 + 1;
    if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = *(long *)(param_1 + 0x410) - *(long *)(param_1 + 0x400) >> 3;
    uVar11 = lVar10 * 0x5555555555555556;
    if (uVar2 <= uVar11) {
      uVar2 = uVar11;
    }
    if ((ulong)(lVar10 * -0x5555555555555555) < uVar13 >> 1) {
      uVar13 = uVar2;
    }
    if (uVar13 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar13 * 0x18,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar16 = lVar10 + lVar9 * 8;
    FUN_018421bc(puVar1,lVar16,param_2);
    puVar17 = *(undefined8 **)(param_1 + 0x400);
    lVar9 = lVar16 + 0x18;
    puVar15 = *(undefined8 **)(param_1 + 0x408);
    if (puVar15 == puVar17) {
      puVar15 = puVar17;
    }
    else {
      do {
        lVar16 = lVar16 + -0x18;
        puVar15 = puVar15 + -3;
        FUN_018421bc(puVar1,lVar16,puVar15);
      } while (puVar17 != puVar15);
      puVar17 = *(undefined8 **)(param_1 + 0x400);
      puVar15 = *(undefined8 **)(param_1 + 0x408);
    }
    lVar12 = *(long *)(param_1 + 0x410);
    *(long *)(param_1 + 0x400) = lVar16;
    *(long *)(param_1 + 0x408) = lVar9;
    *(ulong *)(param_1 + 0x410) = lVar10 + uVar13 * 0x18;
    puVar7 = PTR_LAB_04379590;
    puVar6 = PTR_DAT_04379498;
    if (puVar15 != puVar17) {
      plVar14 = (long *)PTR_DAT_043794a0;
      plVar19 = (long *)PTR_DAT_043794a8;
      do {
        puVar15 = puVar15 + -3;
        puVar18 = (undefined8 *)*puVar15;
        if (puVar18 != (undefined8 *)0x0) {
          piVar3 = (int *)(puVar18 + 1);
          do {
            iVar8 = *piVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
            puVar18[2] = 0;
            if (((*puVar6 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(puVar6), plVar14 = (long *)PTR_DAT_043794a0,
               plVar19 = (long *)PTR_DAT_043794a8, iVar8 != 0)) {
              FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
              plVar14 = (long *)PTR_DAT_043794a0;
              plVar19 = (long *)PTR_DAT_043794a8;
            }
            lVar9 = *plVar14;
            *plVar19 = lVar9;
            local_48 = *puVar18;
            FUN_02a44274(lVar9 + 0xd8,&local_48);
          }
        }
      } while (puVar15 != puVar17);
    }
    if (puVar17 != (undefined8 *)0x0) {
      plVar14 = (long *)*puVar1;
      lVar12 = lVar12 - (long)puVar17;
      uVar13 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar13 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar14,puVar17,lVar12,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0183c334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar17,lVar12,8);
      return;
    }
  }
  else {
    FUN_018421bc(puVar1,lVar9,param_2);
    *(long *)(param_1 + 0x408) = *(long *)(param_1 + 0x408) + 0x18;
  }
  return;
}


