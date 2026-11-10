/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183bd50; name: FUN_0183bd50
 */


void FUN_0183bd50(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 local_58;
  
  lVar10 = *(long *)(param_1 + 0x3d0);
  puVar1 = (undefined8 *)(param_1 + 0x3e0);
  if (lVar10 == *(long *)(param_1 + 0x3d8)) {
    uVar14 = *(ulong *)(param_1 + 1000);
    lVar10 = lVar10 - *(long *)(param_1 + 0x3c8) >> 3;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar2 = lVar10 * -0x5555555555555555 + 1;
    if (uVar14 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(long *)(param_1 + 0x3d8) - *(long *)(param_1 + 0x3c8) >> 3;
    uVar13 = lVar11 * 0x5555555555555556;
    if (uVar2 <= uVar13) {
      uVar2 = uVar13;
    }
    if ((ulong)(lVar11 * -0x5555555555555555) < uVar14 >> 1) {
      uVar14 = uVar2;
    }
    if (uVar14 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar14 * 0x18,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar17 = lVar11 + lVar10 * 8;
    FUN_018420d8(puVar1,lVar17,param_2);
    puVar18 = *(undefined8 **)(param_1 + 0x3c8);
    lVar10 = lVar17 + 0x18;
    puVar16 = *(undefined8 **)(param_1 + 0x3d0);
    if (puVar16 == puVar18) {
      puVar16 = puVar18;
    }
    else {
      do {
        lVar17 = lVar17 + -0x18;
        puVar16 = puVar16 + -3;
        FUN_018420d8(puVar1,lVar17,puVar16);
      } while (puVar18 != puVar16);
      puVar18 = *(undefined8 **)(param_1 + 0x3c8);
      puVar16 = *(undefined8 **)(param_1 + 0x3d0);
    }
    lVar12 = *(long *)(param_1 + 0x3d8);
    *(long *)(param_1 + 0x3c8) = lVar17;
    *(long *)(param_1 + 0x3d0) = lVar10;
    *(ulong *)(param_1 + 0x3d8) = lVar11 + uVar14 * 0x18;
    puVar8 = PTR_DAT_043794a8;
    puVar7 = PTR_DAT_043794a0;
    puVar6 = PTR_DAT_04379498;
    while (puVar16 != puVar18) {
      puVar16 = puVar16 + -3;
      puVar19 = (undefined8 *)*puVar16;
      if (puVar19 != (undefined8 *)0x0) {
        piVar3 = (int *)(puVar19 + 1);
        do {
          iVar9 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          puVar19[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_58 = *puVar19;
          FUN_02a44274(lVar10 + 0xd8,&local_58);
        }
      }
    }
    if (puVar18 != (undefined8 *)0x0) {
      plVar15 = (long *)*puVar1;
      lVar12 = lVar12 - (long)puVar18;
      uVar14 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar14 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar15,puVar18,lVar12,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0183bfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x18))(plVar15,puVar18,lVar12,8);
      return;
    }
  }
  else {
    FUN_018420d8(puVar1,lVar10,param_2);
    *(long *)(param_1 + 0x3d0) = *(long *)(param_1 + 0x3d0) + 0x18;
  }
  return;
}


