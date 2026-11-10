/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028dd5bc; name: FUN_028dd5bc
 */


void FUN_028dd5bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  uVar7 = *(ulong *)(param_1 + 0x120);
  puVar1 = (undefined8 *)(param_1 + 0x130);
  if (uVar7 < *(ulong *)(param_1 + 0x128)) {
    FUN_028e1760(puVar1,uVar7,param_2);
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 0x80;
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x138);
    lVar17 = (long)(uVar7 - *(long *)(param_1 + 0x118)) >> 7;
    uVar7 = lVar17 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = *(ulong *)(param_1 + 0x128) - *(long *)(param_1 + 0x118);
    if ((ulong)(lVar8 >> 7) < uVar14 >> 1) {
      uVar9 = lVar8 >> 6;
      uVar14 = uVar7;
      if (uVar7 <= uVar9) {
        uVar14 = uVar9;
      }
    }
    if (uVar14 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar14 << 7,0x10);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar17 = lVar8 + lVar17 * 0x80;
    FUN_028e1760(puVar1,lVar17,param_2);
    puVar4 = PTR_DAT_04379528;
    lVar12 = *(long *)(param_1 + 0x118);
    lVar13 = *(long *)(param_1 + 0x120);
    if (lVar13 == lVar12) {
      lVar13 = lVar17;
      lVar18 = lVar12;
    }
    else {
      lVar18 = 0;
      do {
        uVar19 = *puVar1;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0)) {
          FUN_008a62a4(puVar4);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar19;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        lVar2 = lVar17 + lVar18;
        lVar3 = lVar13 + lVar18;
        *(undefined8 *)(lVar2 + -0x80) = 0;
        *(undefined8 *)(lVar2 + -0x70) = 0;
        *(undefined8 *)(lVar2 + -0x68) = 0;
        *(undefined8 *)(lVar2 + -0x78) = 0;
        if (*(code **)(lVar3 + -0x68) != (code *)0x0) {
          (**(code **)(lVar3 + -0x68))(lVar3 + -0x60,lVar2 + -0x60);
          uVar10 = *(undefined8 *)(lVar3 + -0x80);
          uVar15 = *(undefined8 *)(lVar3 + -0x68);
          uVar19 = *(undefined8 *)(lVar3 + -0x78);
          *(undefined8 *)(lVar2 + -0x70) = *(undefined8 *)(lVar3 + -0x70);
          *(undefined8 *)(lVar2 + -0x68) = uVar15;
          *(undefined8 *)(lVar2 + -0x80) = uVar10;
          *(undefined8 *)(lVar2 + -0x78) = uVar19;
          pcVar11 = *(code **)(lVar3 + -0x78);
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar3 + -0x70) = 0;
            *(undefined8 *)(lVar3 + -0x68) = 0;
            *(undefined8 *)(lVar3 + -0x80) = 0;
            *(undefined8 *)(lVar3 + -0x78) = 0;
            (*pcVar11)(lVar3 + -0x60);
          }
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar18 = lVar18 + -0x80;
      } while (lVar12 - lVar13 != lVar18);
      lVar12 = *(long *)(param_1 + 0x120);
      lVar13 = lVar17 + lVar18;
      lVar18 = *(long *)(param_1 + 0x118);
    }
    lVar6 = *(long *)(param_1 + 0x128);
    *(long *)(param_1 + 0x118) = lVar13;
    *(long *)(param_1 + 0x120) = lVar17 + 0x80;
    *(ulong *)(param_1 + 0x128) = lVar8 + uVar14 * 0x80;
    while (lVar17 = lVar12, lVar17 != lVar18) {
      pcVar11 = *(code **)(lVar17 + -0x78);
      lVar12 = lVar17 + -0x80;
      if (pcVar11 != (code *)0x0) {
        *(undefined8 *)(lVar17 + -0x70) = 0;
        *(undefined8 *)(lVar17 + -0x68) = 0;
        *(undefined8 *)(lVar17 + -0x80) = 0;
        *(undefined8 *)(lVar17 + -0x78) = 0;
        (*pcVar11)(lVar17 + -0x60);
      }
    }
    if (lVar18 != 0) {
      plVar16 = (long *)*puVar1;
      lVar6 = lVar6 - lVar18;
      uVar7 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar7 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar18,lVar6,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x028dd894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar18,lVar6,0x10);
      return;
    }
  }
  return;
}


