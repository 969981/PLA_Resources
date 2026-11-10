/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183a8e4; name: FUN_0183a8e4
 */


void FUN_0183a8e4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_1 + 0x300);
  puVar1 = (undefined8 *)(param_1 + 0x310);
  if (lVar11 == *(long *)(param_1 + 0x308)) {
    uVar15 = *(ulong *)(param_1 + 0x318);
    lVar11 = lVar11 - *(long *)(param_1 + 0x2f8) >> 4;
    uVar10 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = *(long *)(param_1 + 0x308) - *(long *)(param_1 + 0x2f8);
    uVar13 = lVar12 >> 3;
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    if ((ulong)(lVar12 >> 4) < uVar15 >> 1) {
      uVar15 = uVar10;
    }
    if (uVar15 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar15 << 4,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar18 = lVar12 + lVar11 * 0x10;
    FUN_01841d74(puVar1,lVar18,param_2);
    puVar19 = *(undefined8 **)(param_1 + 0x2f8);
    lVar11 = lVar18 + 0x10;
    puVar17 = *(undefined8 **)(param_1 + 0x300);
    if (puVar17 == puVar19) {
      puVar17 = puVar19;
    }
    else {
      do {
        lVar18 = lVar18 + -0x10;
        puVar17 = puVar17 + -2;
        FUN_01841d74(puVar1,lVar18,puVar17);
      } while (puVar19 != puVar17);
      puVar19 = *(undefined8 **)(param_1 + 0x2f8);
      puVar17 = *(undefined8 **)(param_1 + 0x300);
    }
    lVar14 = *(long *)(param_1 + 0x308);
    *(long *)(param_1 + 0x2f8) = lVar18;
    *(long *)(param_1 + 0x300) = lVar11;
    *(ulong *)(param_1 + 0x308) = lVar12 + uVar15 * 0x10;
    puVar8 = PTR_LAB_04379590;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    while (puVar17 != puVar19) {
      puVar17 = puVar17 + -2;
      puVar20 = (undefined8 *)*puVar17;
      if (puVar20 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar20 + 1);
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
          puVar20[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar11 = *(long *)puVar6;
          *(long *)puVar7 = lVar11;
          local_68 = *puVar20;
          FUN_02a44274(lVar11 + 0xd8,&local_68);
        }
      }
    }
    if (puVar19 != (undefined8 *)0x0) {
      plVar16 = (long *)*puVar1;
      lVar14 = lVar14 - (long)puVar19;
      uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar10 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar16,puVar19,lVar14,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0183ab60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar19,lVar14,8);
      return;
    }
  }
  else {
    FUN_01841d74(puVar1,lVar11,param_2);
    *(long *)(param_1 + 0x300) = *(long *)(param_1 + 0x300) + 0x10;
  }
  return;
}


