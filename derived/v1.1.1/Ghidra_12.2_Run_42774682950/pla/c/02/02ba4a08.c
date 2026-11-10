/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba4a08; name: FUN_02ba4a08
 */


void FUN_02ba4a08(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  plVar12 = param_1 + 3;
  if ((ulong)((param_1[2] - param_1[1] >> 3) * -0x5555555555555555) < param_2) {
    lVar9 = param_1[1] - *param_1 >> 3;
    uVar11 = param_1[4];
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar1 = lVar9 * -0x5555555555555555 + param_2;
    if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if ((ulong)(lVar7 * -0x5555555555555555) < uVar11 >> 1) {
      uVar11 = uVar1;
    }
    if (uVar11 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar11 * 0x18,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*plVar12 + 0xb8))();
      }
    }
    lVar14 = lVar7 + lVar9 * 8;
    lVar9 = lVar14;
    do {
      FUN_02ba4d5c(plVar12,lVar9);
      puVar4 = PTR_DAT_04379528;
      puVar3 = PTR_DAT_04379520;
      lVar9 = lVar9 + 0x18;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    lVar13 = *param_1;
    lVar15 = param_1[1];
    if (lVar15 != lVar13) {
      do {
        lVar16 = *plVar12;
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          FUN_008a62a4(puVar4);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar3);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (lVar6 == 0) {
          uVar2 = *(undefined8 *)(lVar15 + -0x18);
          uVar10 = *(undefined8 *)(lVar15 + -8);
          *(undefined8 *)(lVar14 + -0x10) = *(undefined8 *)(lVar15 + -0x10);
          *(undefined8 *)(lVar14 + -8) = uVar10;
          *(undefined8 *)(lVar14 + -0x18) = uVar2;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          uVar10 = *(undefined8 *)(lVar15 + -8);
          uVar2 = *(undefined8 *)(lVar15 + -0x10);
          *(undefined8 *)(lVar14 + -0x18) = *(undefined8 *)(lVar15 + -0x18);
          *(undefined8 *)(lVar14 + -0x10) = uVar2;
          *(undefined8 *)(lVar14 + -8) = uVar10;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar15 = lVar15 + -0x18;
        lVar14 = lVar14 + -0x18;
      } while (lVar13 != lVar15);
      lVar13 = *param_1;
    }
    lVar15 = param_1[2];
    *param_1 = lVar14;
    param_1[1] = lVar9;
    param_1[2] = lVar7 + uVar11 * 0x18;
    if (lVar13 != 0) {
      plVar12 = (long *)*plVar12;
      uVar11 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar11 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar12,lVar13,lVar15 - lVar13,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02ba4ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,lVar15 - lVar13,8);
      return;
    }
  }
  else {
    do {
      FUN_02ba4d5c(plVar12);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x18;
    } while (param_2 != 0);
  }
  return;
}


