/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2880c; name: FUN_02b2880c
 */


void FUN_02b2880c(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong *puVar19;
  
  lVar11 = *(long *)(param_1 + 0xb0);
  lVar18 = lVar11 + (param_2 & 0xffffffff) * 0xd0;
  puVar19 = (ulong *)(lVar18 + 0x90);
  puVar16 = (ulong *)(lVar18 + 0x88);
  uVar8 = *puVar16;
  if (uVar8 < *puVar19) {
    FUN_02b2a3c8(*(undefined8 *)(lVar11 + (param_2 & 0xffffffff) * 0xd0 + 0x98),uVar8,param_3,
                 param_3 + 0x20,param_3 + 0x40);
    *puVar16 = *puVar16 + 0x48;
  }
  else {
    puVar13 = (ulong *)(lVar18 + 0x80);
    lVar11 = lVar11 + (param_2 & 0xffffffff) * 0xd0;
    lVar18 = (long)(uVar8 - *puVar13) >> 3;
    uVar8 = *(ulong *)(lVar11 + 0xa0);
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar12 = lVar18 * -0x71c71c71c71c71c7 + 1;
    if (uVar8 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)(*puVar19 - *puVar13) >> 3;
    puVar1 = (undefined8 *)(lVar11 + 0x98);
    uVar10 = lVar9 * 0x1c71c71c71c71c72;
    if (uVar12 <= uVar10) {
      uVar12 = uVar10;
    }
    if ((ulong)(lVar9 * -0x71c71c71c71c71c7) < uVar8 >> 1) {
      uVar8 = uVar12;
    }
    if (uVar8 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 * 0x48,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    uVar14 = lVar11 + lVar18 * 8;
    FUN_02b2a3c8(*puVar1,uVar14,param_3,param_3 + 0x20,param_3 + 0x40);
    puVar5 = PTR_DAT_04379528;
    puVar4 = PTR_DAT_04379520;
    uVar12 = *puVar13;
    uVar10 = *puVar16;
    if (uVar10 == uVar12) {
      uVar10 = uVar14;
      uVar15 = uVar12;
    }
    else {
      lVar18 = 0;
      do {
        uVar17 = *puVar1;
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          FUN_008a62a4(puVar5);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        lVar2 = uVar10 + lVar18;
        lVar3 = uVar14 + lVar18;
        *(undefined8 *)(lVar3 + -0x48) = *(undefined8 *)(lVar2 + -0x48);
        *(undefined8 *)(lVar3 + -0x40) = *(undefined8 *)(lVar2 + -0x40);
        *(undefined8 *)(lVar3 + -0x38) = *(undefined8 *)(lVar2 + -0x38);
        plVar7 = *(long **)(lVar2 + -0x30);
        *(long **)(lVar3 + -0x30) = plVar7;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))();
        }
        *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar2 + -0x28);
        *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar2 + -0x20);
        *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        plVar7 = *(long **)(lVar2 + -0x10);
        *(long **)(lVar3 + -0x10) = plVar7;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))();
        }
        *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(lVar2 + -8);
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar18 = lVar18 + -0x48;
      } while (uVar12 - uVar10 != lVar18);
      uVar12 = *puVar16;
      uVar10 = uVar14 + lVar18;
      uVar15 = *puVar13;
    }
    *puVar13 = uVar10;
    *puVar16 = uVar14 + 0x48;
    uVar10 = *puVar19;
    *puVar19 = lVar11 + uVar8 * 0x48;
    while (uVar12 != uVar15) {
      if (*(long **)(uVar12 - 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(uVar12 - 0x10) + 0x20))();
      }
      plVar7 = (long *)(uVar12 - 0x30);
      uVar12 = uVar12 - 0x48;
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x20))();
      }
    }
    if (uVar15 != 0) {
      plVar7 = (long *)*puVar1;
      uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar8 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar7,uVar15,uVar10 - uVar15,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b28b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7,uVar15,uVar10 - uVar15,8);
      return;
    }
  }
  return;
}


