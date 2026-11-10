/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00966ea8; name: FUN_00966ea8
 */


void FUN_00966ea8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = param_1[1];
  plVar10 = param_1 + 3;
  if (lVar8 == param_1[2]) {
    uVar9 = param_1[4];
    lVar8 = lVar8 - *param_1 >> 2;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar1 = lVar8 * -0x5555555555555555 + 1;
    if (uVar9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 2;
    uVar7 = lVar4 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if ((ulong)(lVar4 * -0x5555555555555555) < uVar9 >> 1) {
      uVar9 = uVar1;
    }
    if (uVar9 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar9 * 0xc,4);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xb8))();
      }
    }
    lVar13 = lVar4 + lVar8 * 4;
    FUN_00967b68(plVar10,lVar13,param_2);
    lVar8 = *param_1;
    lVar5 = param_1[1];
    lVar11 = lVar13;
    if (lVar5 != lVar8) {
      do {
        lVar12 = *plVar10;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), iVar2 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar3 == 0) {
          uVar6 = *(undefined8 *)(lVar5 + -0xc);
          *(undefined4 *)(lVar11 + -4) = *(undefined4 *)(lVar5 + -4);
          *(undefined8 *)(lVar11 + -0xc) = uVar6;
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          uVar6 = *(undefined8 *)(lVar5 + -0xc);
          *(undefined4 *)(lVar11 + -4) = *(undefined4 *)(lVar5 + -4);
          *(undefined8 *)(lVar11 + -0xc) = uVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        lVar5 = lVar5 + -0xc;
        lVar11 = lVar11 + -0xc;
      } while (lVar8 != lVar5);
      lVar8 = *param_1;
    }
    *param_1 = lVar11;
    param_1[1] = lVar13 + 0xc;
    lVar5 = param_1[2];
    param_1[2] = lVar4 + uVar9 * 0xc;
    if (lVar8 != 0) {
      plVar10 = (long *)*plVar10;
      uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar9 & 1) != 0) {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar8,lVar5 - lVar8,4);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00967060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar5 - lVar8,4);
      return;
    }
  }
  else {
    FUN_00967b68(plVar10,lVar8,param_2);
    param_1[1] = param_1[1] + 0xc;
  }
  return;
}


