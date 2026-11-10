/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b28c68; name: FUN_02b28c68
 */


void FUN_02b28c68(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 local_64;
  
  uVar8 = *(ulong *)(param_1 + 0xf0);
  local_64 = param_2;
  if (uVar8 < *(ulong *)(param_1 + 0xf8)) {
    FUN_02b2a558(*(undefined8 *)(param_1 + 0x100),uVar8,&local_64,param_3,param_4);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 0x38;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x108);
    lVar12 = (long)(uVar8 - *(long *)(param_1 + 0xe8)) >> 3;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar8 = lVar12 * 0x6db6db6db6db6db7 + 1;
    if (uVar13 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)(*(ulong *)(param_1 + 0xf8) - *(long *)(param_1 + 0xe8)) >> 3;
    uVar10 = lVar9 * -0x2492492492492492;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if ((ulong)(lVar9 * 0x6db6db6db6db6db7) < uVar13 >> 1) {
      uVar13 = uVar8;
    }
    if (uVar13 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_1 + 0x100) + 0x10))
                        (*(long **)(param_1 + 0x100),uVar13 * 0x38,8);
      if (lVar9 == 0) {
        (**(code **)(**(long **)(param_1 + 0x100) + 0xb8))();
      }
    }
    lVar14 = lVar9 + lVar12 * 8;
    FUN_02b2a558(*(undefined8 *)(param_1 + 0x100),lVar14,&local_64,param_3,param_4);
    puVar4 = PTR_DAT_04379528;
    puVar3 = PTR_DAT_04379520;
    lVar12 = *(long *)(param_1 + 0xe8);
    lVar11 = *(long *)(param_1 + 0xf0);
    if (lVar11 == lVar12) {
      lVar11 = lVar14;
      lVar15 = lVar12;
    }
    else {
      lVar15 = 0;
      do {
        uVar16 = *(undefined8 *)(param_1 + 0x100);
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          FUN_008a62a4(puVar4);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar3);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar16;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        lVar1 = lVar11 + lVar15;
        lVar2 = lVar14 + lVar15;
        *(undefined4 *)(lVar2 + -0x38) = *(undefined4 *)(lVar1 + -0x38);
        *(undefined8 *)(lVar2 + -0x30) = *(undefined8 *)(lVar1 + -0x30);
        *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)(lVar1 + -0x28);
        *(undefined8 *)(lVar2 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
        plVar7 = *(long **)(lVar1 + -0x18);
        *(long **)(lVar2 + -0x18) = plVar7;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))();
        }
        uVar16 = *(undefined8 *)(lVar1 + -8);
        *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar1 + -0x10);
        *(undefined8 *)(lVar2 + -8) = uVar16;
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar15 = lVar15 + -0x38;
      } while (lVar12 - lVar11 != lVar15);
      lVar12 = *(long *)(param_1 + 0xf0);
      lVar11 = lVar14 + lVar15;
      lVar15 = *(long *)(param_1 + 0xe8);
    }
    lVar6 = *(long *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xe8) = lVar11;
    *(long *)(param_1 + 0xf0) = lVar14 + 0x38;
    *(ulong *)(param_1 + 0xf8) = lVar9 + uVar13 * 0x38;
    while (lVar12 != lVar15) {
      plVar7 = (long *)(lVar12 + -0x18);
      lVar12 = lVar12 + -0x38;
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x20))();
      }
    }
    if (lVar15 != 0) {
      plVar7 = *(long **)(param_1 + 0x100);
      lVar6 = lVar6 - lVar15;
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
          FUN_02bcc824(plVar7,lVar15,lVar6,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b28f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar15,lVar6,8);
      return;
    }
  }
  return;
}


