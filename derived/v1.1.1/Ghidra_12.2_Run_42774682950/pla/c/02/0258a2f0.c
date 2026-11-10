/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0258a2f0; name: FUN_0258a2f0
 */


void FUN_0258a2f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar5 = param_1[1];
  if (uVar5 < (ulong)param_1[2]) {
    FUN_0259326c(param_1[3],uVar5,param_2,param_3);
    param_1[1] = param_1[1] + 0x80;
  }
  else {
    uVar12 = param_1[4];
    lVar16 = (long)(uVar5 - *param_1) >> 7;
    uVar5 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    if ((ulong)(lVar7 >> 7) < uVar12 >> 1) {
      uVar8 = lVar7 >> 6;
      uVar12 = uVar5;
      if (uVar5 <= uVar8) {
        uVar12 = uVar8;
      }
    }
    if (uVar12 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 << 7,0x10);
      if (lVar7 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xb8))();
      }
    }
    lVar16 = lVar7 + lVar16 * 0x80;
    FUN_0259326c(param_1[3],lVar16,param_2,param_3);
    lVar9 = *param_1;
    lVar17 = param_1[1];
    if (lVar17 == lVar9) {
      lVar18 = lVar16;
      lVar17 = lVar9;
    }
    else {
      lVar18 = 0;
      do {
        lVar15 = param_1[3];
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar3 = PTR_DAT_04379528;
          if (iVar4 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        lVar15 = lVar16 + lVar18;
        lVar1 = lVar17 + lVar18;
        *(undefined8 *)(lVar15 + -0x80) = 0;
        *(undefined8 *)(lVar15 + -0x70) = 0;
        *(undefined8 *)(lVar15 + -0x68) = 0;
        *(undefined8 *)(lVar15 + -0x78) = 0;
        if (*(code **)(lVar1 + -0x68) != (code *)0x0) {
          (**(code **)(lVar1 + -0x68))(lVar1 + -0x60,lVar15 + -0x60);
          uVar10 = *(undefined8 *)(lVar1 + -0x80);
          uVar13 = *(undefined8 *)(lVar1 + -0x68);
          uVar2 = *(undefined8 *)(lVar1 + -0x78);
          *(undefined8 *)(lVar15 + -0x70) = *(undefined8 *)(lVar1 + -0x70);
          *(undefined8 *)(lVar15 + -0x68) = uVar13;
          *(undefined8 *)(lVar15 + -0x80) = uVar10;
          *(undefined8 *)(lVar15 + -0x78) = uVar2;
          pcVar11 = *(code **)(lVar1 + -0x78);
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar1 + -0x70) = 0;
            *(undefined8 *)(lVar1 + -0x68) = 0;
            *(undefined8 *)(lVar1 + -0x80) = 0;
            *(undefined8 *)(lVar1 + -0x78) = 0;
            (*pcVar11)(lVar1 + -0x60);
          }
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar18 = lVar18 + -0x80;
      } while (lVar9 - lVar17 != lVar18);
      lVar17 = *param_1;
      lVar9 = param_1[1];
      lVar18 = lVar16 + lVar18;
    }
    lVar15 = param_1[2];
    *param_1 = lVar18;
    param_1[1] = lVar16 + 0x80;
    param_1[2] = lVar7 + uVar12 * 0x80;
    while (lVar16 = lVar9, lVar16 != lVar17) {
      pcVar11 = *(code **)(lVar16 + -0x78);
      lVar9 = lVar16 + -0x80;
      if (pcVar11 != (code *)0x0) {
        *(undefined8 *)(lVar16 + -0x70) = 0;
        *(undefined8 *)(lVar16 + -0x68) = 0;
        *(undefined8 *)(lVar16 + -0x80) = 0;
        *(undefined8 *)(lVar16 + -0x78) = 0;
        (*pcVar11)(lVar16 + -0x60);
      }
    }
    if (lVar17 != 0) {
      plVar14 = (long *)param_1[3];
      uVar5 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar5 & 1) != 0) {
        lVar16 = tpidr_el0;
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar14,lVar17,lVar15 - lVar17,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0258a4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar17,lVar15 - lVar17,0x10);
      return;
    }
  }
  return;
}


