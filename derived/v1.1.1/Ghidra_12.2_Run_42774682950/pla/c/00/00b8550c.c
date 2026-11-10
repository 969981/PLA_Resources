/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b8550c; name: FUN_00b8550c
 */


void FUN_00b8550c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (puVar1 < *(undefined8 **)(param_1 + 0x70)) {
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar2 = PTR_DAT_04379528;
      if (iVar3 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar11 == 0) {
      uVar12 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar12;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00b8591c;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      uVar12 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 0x10;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x80);
    lVar11 = (long)puVar1 - *(long *)(param_1 + 0x60) >> 4;
    uVar4 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(undefined8 **)(param_1 + 0x70) - *(long *)(param_1 + 0x60);
    if ((ulong)(lVar6 >> 4) < uVar9 >> 1) {
      uVar7 = lVar6 >> 3;
      uVar9 = uVar4;
      if (uVar4 <= uVar7) {
        uVar9 = uVar7;
      }
    }
    if (uVar9 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                        (*(long **)(param_1 + 0x78),uVar9 << 4,8);
      if (lVar6 == 0) {
        (**(code **)(**(long **)(param_1 + 0x78) + 0xb8))();
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    puVar1 = (undefined8 *)(lVar6 + lVar11 * 0x10);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar2 = PTR_DAT_04379528;
      if (iVar3 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    puVar2 = PTR_DAT_04379528;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar11 == 0) {
      uVar12 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar12;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00b8591c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      uVar12 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar12;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    lVar11 = *(long *)(param_1 + 0x60);
    lVar8 = *(long *)(param_1 + 0x68);
    puVar13 = puVar1;
    if (lVar8 != lVar11) {
      do {
        uVar12 = *(undefined8 *)(param_1 + 0x78);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), iVar3 != 0)) {
          FUN_008a62a4(puVar2);
          FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (lVar5 == 0) {
          uVar12 = *(undefined8 *)(lVar8 + -8);
          puVar13[-2] = *(undefined8 *)(lVar8 + -0x10);
          puVar13[-1] = uVar12;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00b8591c;
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar12;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          uVar12 = *(undefined8 *)(lVar8 + -8);
          puVar13[-2] = *(undefined8 *)(lVar8 + -0x10);
          puVar13[-1] = uVar12;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar8 = lVar8 + -0x10;
        puVar13 = puVar13 + -2;
      } while (lVar11 != lVar8);
      lVar11 = *(long *)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x60) = puVar13;
    *(undefined8 **)(param_1 + 0x68) = puVar1 + 2;
    lVar8 = *(long *)(param_1 + 0x70);
    *(ulong *)(param_1 + 0x70) = lVar6 + uVar9 * 0x10;
    if (lVar11 != 0) {
      plVar10 = *(long **)(param_1 + 0x78);
      lVar8 = lVar8 - lVar11;
      uVar4 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar4 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar11,lVar8,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00b856bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar8,8);
      return;
    }
  }
  return;
}


