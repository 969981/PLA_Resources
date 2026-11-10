/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de8b80; name: FUN_02de8b80
 */


void FUN_02de8b80(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  uVar5 = param_1[1];
  plVar10 = param_1 + 3;
  if (uVar5 < (ulong)param_1[2]) {
    FUN_02dea478(plVar10,uVar5,param_2);
    param_1[1] = param_1[1] + 0x40;
  }
  else {
    uVar9 = param_1[4];
    lVar12 = (long)(uVar5 - *param_1) >> 6;
    uVar5 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1;
    uVar7 = lVar6 >> 5;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if ((ulong)(lVar6 >> 6) < uVar9 >> 1) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar9 << 6,0x10);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xb8))();
      }
    }
    lVar12 = lVar6 + lVar12 * 0x40;
    FUN_02dea478(plVar10,lVar12,param_2);
    puVar2 = PTR_DAT_04379528;
    puVar1 = PTR_DAT_04379520;
    lVar11 = *param_1;
    lVar14 = param_1[1];
    lVar13 = lVar12;
    if (lVar14 != lVar11) {
      do {
        lVar15 = *plVar10;
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          FUN_008a62a4(puVar2);
          FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar1);
        }
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (lVar4 == 0) {
          uVar8 = *(undefined8 *)(lVar14 + -8);
          *(undefined8 *)(lVar13 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
          *(undefined8 *)(lVar13 + -8) = uVar8;
          uVar8 = *(undefined8 *)(lVar14 + -0x28);
          *(undefined8 *)(lVar13 + -0x38) = *(undefined8 *)(lVar14 + -0x38);
          *(undefined8 *)(lVar13 + -0x28) = uVar8;
          uVar8 = *(undefined8 *)(lVar14 + -0x40);
          *(undefined8 *)(lVar13 + -0x30) = *(undefined8 *)(lVar14 + -0x30);
          *(undefined8 *)(lVar13 + -0x40) = uVar8;
          uVar8 = *(undefined8 *)(lVar14 + -0x20);
          *(undefined8 *)(lVar13 + -0x10) = *(undefined8 *)(lVar14 + -0x10);
          *(undefined8 *)(lVar13 + -0x20) = uVar8;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar15;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          uVar8 = *(undefined8 *)(lVar14 + -8);
          *(undefined8 *)(lVar13 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
          *(undefined8 *)(lVar13 + -8) = uVar8;
          uVar8 = *(undefined8 *)(lVar14 + -0x28);
          *(undefined8 *)(lVar13 + -0x38) = *(undefined8 *)(lVar14 + -0x38);
          *(undefined8 *)(lVar13 + -0x28) = uVar8;
          uVar8 = *(undefined8 *)(lVar14 + -0x40);
          *(undefined8 *)(lVar13 + -0x30) = *(undefined8 *)(lVar14 + -0x30);
          *(undefined8 *)(lVar13 + -0x40) = uVar8;
          uVar8 = *(undefined8 *)(lVar14 + -0x20);
          *(undefined8 *)(lVar13 + -0x10) = *(undefined8 *)(lVar14 + -0x10);
          *(undefined8 *)(lVar13 + -0x20) = uVar8;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar14 = lVar14 + -0x40;
        lVar13 = lVar13 + -0x40;
      } while (lVar11 != lVar14);
      lVar11 = *param_1;
    }
    *param_1 = lVar13;
    param_1[1] = lVar12 + 0x40;
    lVar12 = param_1[2];
    param_1[2] = lVar6 + uVar9 * 0x40;
    if (lVar11 != 0) {
      plVar10 = (long *)*plVar10;
      uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar5 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar11,lVar12 - lVar11,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02de8e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar12 - lVar11,0x10);
      return;
    }
  }
  return;
}


