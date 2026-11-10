/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02787cd0; name: FUN_02787cd0
 */


void FUN_02787cd0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = param_1[1];
  plVar10 = param_1 + 3;
  if (lVar12 == param_1[2]) {
    uVar9 = param_1[4];
    lVar12 = lVar12 - *param_1 >> 4;
    uVar6 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 3;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if ((ulong)(lVar7 >> 4) < uVar9 >> 1) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar9 << 4,4);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xb8))();
      }
    }
    lVar12 = lVar7 + lVar12 * 0x10;
    FUN_02794138(plVar10,lVar12,param_2);
    puVar3 = PTR_DAT_04379528;
    puVar2 = PTR_DAT_04379520;
    lVar11 = *param_1;
    lVar14 = param_1[1];
    lVar13 = lVar12;
    if (lVar14 != lVar11) {
      do {
        lVar15 = *plVar10;
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          FUN_008a62a4(puVar3);
          FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar2);
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (lVar5 == 0) {
          uVar1 = *(undefined8 *)(lVar14 + -8);
          *(undefined8 *)(lVar13 + -0x10) = *(undefined8 *)(lVar14 + -0x10);
          *(undefined8 *)(lVar13 + -8) = uVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar15;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          uVar1 = *(undefined8 *)(lVar14 + -8);
          *(undefined8 *)(lVar13 + -0x10) = *(undefined8 *)(lVar14 + -0x10);
          *(undefined8 *)(lVar13 + -8) = uVar1;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar14 = lVar14 + -0x10;
        lVar13 = lVar13 + -0x10;
      } while (lVar11 != lVar14);
      lVar11 = *param_1;
    }
    *param_1 = lVar13;
    param_1[1] = lVar12 + 0x10;
    lVar12 = param_1[2];
    param_1[2] = lVar7 + uVar9 * 0x10;
    if (lVar11 != 0) {
      plVar10 = (long *)*plVar10;
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) != 0) {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar11,lVar12 - lVar11,4);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02787eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar12 - lVar11,4);
      return;
    }
  }
  else {
    FUN_02794138(plVar10,lVar12,param_2);
    param_1[1] = param_1[1] + 0x10;
  }
  return;
}


