/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b28418; name: FUN_02b28418
 */


void FUN_02b28418(long param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

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
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  ulong *puVar19;
  undefined4 local_68 [2];
  
  lVar12 = *(long *)(param_1 + 0xb0);
  lVar18 = lVar12 + (param_2 & 0xffffffff) * 0xd0;
  puVar19 = (ulong *)(lVar18 + 0x58);
  puVar13 = (ulong *)(lVar18 + 0x50);
  uVar8 = *puVar13;
  local_68[0] = param_3;
  if (uVar8 < *puVar19) {
    FUN_02b2a28c(*(undefined8 *)(lVar12 + (param_2 & 0xffffffff) * 0xd0 + 0x60),uVar8,local_68,
                 param_4);
    *puVar13 = *puVar13 + 0x28;
  }
  else {
    puVar16 = (ulong *)(lVar18 + 0x48);
    lVar12 = lVar12 + (param_2 & 0xffffffff) * 0xd0;
    lVar18 = (long)(uVar8 - *puVar16) >> 3;
    uVar8 = *(ulong *)(lVar12 + 0x68);
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar10 = lVar18 * -0x3333333333333333 + 1;
    if (uVar8 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)(*puVar19 - *puVar16) >> 3;
    puVar1 = (undefined8 *)(lVar12 + 0x60);
    uVar11 = lVar9 * -0x6666666666666666;
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if ((ulong)(lVar9 * -0x3333333333333333) < uVar8 >> 1) {
      uVar8 = uVar10;
    }
    if (uVar8 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 * 0x28,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    uVar14 = lVar12 + lVar18 * 8;
    FUN_02b2a28c(*puVar1,uVar14,local_68,param_4);
    puVar5 = PTR_DAT_04379528;
    puVar4 = PTR_DAT_04379520;
    uVar10 = *puVar16;
    uVar11 = *puVar13;
    if (uVar11 == uVar10) {
      uVar11 = uVar14;
      uVar15 = uVar10;
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
        lVar2 = uVar11 + lVar18;
        lVar3 = uVar14 + lVar18;
        *(undefined4 *)(lVar3 + -0x28) = *(undefined4 *)(lVar2 + -0x28);
        *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar2 + -0x20);
        *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
        plVar7 = *(long **)(lVar2 + -8);
        *(long **)(lVar3 + -8) = plVar7;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))();
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar18 = lVar18 + -0x28;
      } while (uVar10 - uVar11 != lVar18);
      uVar10 = *puVar13;
      uVar11 = uVar14 + lVar18;
      uVar15 = *puVar16;
    }
    *puVar16 = uVar11;
    *puVar13 = uVar14 + 0x28;
    uVar11 = *puVar19;
    *puVar19 = lVar12 + uVar8 * 0x28;
    while (uVar10 != uVar15) {
      plVar7 = (long *)(uVar10 - 8);
      uVar10 = uVar10 - 0x28;
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x20))();
      }
    }
    if (uVar15 != 0) {
      plVar7 = (long *)*puVar1;
      uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar8 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar7,uVar15,uVar11 - uVar15,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b28730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7,uVar15,uVar11 - uVar15,8);
      return;
    }
  }
  return;
}


