/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bffd70; name: FUN_02bffd70
 */


void FUN_02bffd70(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
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
  
  uVar6 = param_1[1];
  if (uVar6 < (ulong)param_1[2]) {
    FUN_02c05ab4(param_1[3],uVar6,param_2);
    param_1[1] = param_1[1] + 0x18;
  }
  else {
    uVar11 = param_1[4];
    lVar9 = (long)(uVar6 - *param_1) >> 3;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar6 = lVar9 * -0x5555555555555555 + 1;
    if (uVar11 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if ((ulong)(lVar7 * -0x5555555555555555) < uVar11 >> 1) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 * 0x18,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xb8))();
      }
    }
    lVar14 = lVar7 + lVar9 * 8;
    FUN_02c05ab4(param_1[3],lVar14,param_2);
    puVar3 = PTR_DAT_04379528;
    puVar2 = PTR_DAT_04379520;
    lVar9 = *param_1;
    lVar15 = param_1[1];
    lVar13 = lVar14;
    if (lVar15 != lVar9) {
      do {
        lVar16 = param_1[3];
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          FUN_008a62a4(puVar3);
          FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar2);
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (lVar5 == 0) {
          uVar1 = *(undefined8 *)(lVar15 + -0x18);
          uVar10 = *(undefined8 *)(lVar15 + -8);
          *(undefined8 *)(lVar13 + -0x10) = *(undefined8 *)(lVar15 + -0x10);
          *(undefined8 *)(lVar13 + -8) = uVar10;
          *(undefined8 *)(lVar13 + -0x18) = uVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar16;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          uVar10 = *(undefined8 *)(lVar15 + -8);
          uVar1 = *(undefined8 *)(lVar15 + -0x10);
          *(undefined8 *)(lVar13 + -0x18) = *(undefined8 *)(lVar15 + -0x18);
          *(undefined8 *)(lVar13 + -0x10) = uVar1;
          *(undefined8 *)(lVar13 + -8) = uVar10;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar15 = lVar15 + -0x18;
        lVar13 = lVar13 + -0x18;
      } while (lVar9 != lVar15);
      lVar9 = *param_1;
    }
    *param_1 = lVar13;
    param_1[1] = lVar14 + 0x18;
    lVar15 = param_1[2];
    param_1[2] = lVar7 + uVar11 * 0x18;
    if (lVar9 != 0) {
      plVar12 = (long *)param_1[3];
      uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar6 & 1) != 0) {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar12,lVar9,lVar15 - lVar9,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02bffff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar9,lVar15 - lVar9,8);
      return;
    }
  }
  return;
}


