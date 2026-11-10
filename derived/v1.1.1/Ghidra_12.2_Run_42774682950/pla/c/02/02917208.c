/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02917208; name: FUN_02917208
 */


void FUN_02917208(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar6 = param_1[1];
  if (uVar6 < (ulong)param_1[2]) {
    FUN_02918c00(param_1[3],uVar6,param_2,param_3);
    param_1[1] = param_1[1] + 0x90;
  }
  else {
    uVar13 = param_1[4];
    lVar12 = (long)(uVar6 - *param_1) >> 4;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    uVar6 = lVar12 * -0x71c71c71c71c71c7 + 1;
    if (uVar13 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1 >> 4;
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if ((ulong)(lVar7 * -0x71c71c71c71c71c7) < uVar13 >> 1) {
      uVar13 = uVar6;
    }
    if (uVar13 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar13 * 0x90,0x10);
      if (lVar7 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xb8))();
      }
    }
    lVar17 = lVar7 + lVar12 * 0x10;
    FUN_02918c00(param_1[3],lVar17,param_2,param_3);
    lVar12 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 == lVar12) {
      lVar11 = lVar17;
      lVar18 = lVar12;
    }
    else {
      lVar18 = 0;
      do {
        lVar16 = param_1[3];
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar16;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        lVar16 = lVar17 + lVar18;
        lVar1 = lVar11 + lVar18;
        *(undefined8 *)(lVar16 + -0x90) = 0;
        *(undefined8 *)(lVar16 + -0x80) = 0;
        *(undefined8 *)(lVar16 + -0x78) = 0;
        *(undefined8 *)(lVar16 + -0x88) = 0;
        if (*(code **)(lVar1 + -0x78) != (code *)0x0) {
          (**(code **)(lVar1 + -0x78))(lVar1 + -0x70,lVar16 + -0x70);
          uVar9 = *(undefined8 *)(lVar1 + -0x90);
          uVar2 = *(undefined8 *)(lVar1 + -0x88);
          uVar14 = *(undefined8 *)(lVar1 + -0x78);
          *(undefined8 *)(lVar16 + -0x80) = *(undefined8 *)(lVar1 + -0x80);
          *(undefined8 *)(lVar16 + -0x78) = uVar14;
          *(undefined8 *)(lVar16 + -0x90) = uVar9;
          *(undefined8 *)(lVar16 + -0x88) = uVar2;
          pcVar10 = *(code **)(lVar1 + -0x88);
          if (pcVar10 != (code *)0x0) {
            *(undefined8 *)(lVar1 + -0x80) = 0;
            *(undefined8 *)(lVar1 + -0x78) = 0;
            *(undefined8 *)(lVar1 + -0x90) = 0;
            *(undefined8 *)(lVar1 + -0x88) = 0;
            (*pcVar10)(lVar1 + -0x70);
          }
        }
        *(undefined8 *)(lVar16 + -0x10) = *(undefined8 *)(lVar1 + -0x10);
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar18 = lVar18 + -0x90;
      } while (lVar12 - lVar11 != lVar18);
      lVar12 = param_1[1];
      lVar11 = lVar17 + lVar18;
      lVar18 = *param_1;
    }
    lVar16 = param_1[2];
    *param_1 = lVar11;
    param_1[1] = lVar17 + 0x90;
    param_1[2] = lVar7 + uVar13 * 0x90;
    while (lVar7 = lVar12, lVar7 != lVar18) {
      pcVar10 = *(code **)(lVar7 + -0x88);
      lVar12 = lVar7 + -0x90;
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar7 + -0x80) = 0;
        *(undefined8 *)(lVar7 + -0x78) = 0;
        *(undefined8 *)(lVar7 + -0x90) = 0;
        *(undefined8 *)(lVar7 + -0x88) = 0;
        (*pcVar10)(lVar7 + -0x70);
      }
    }
    if (lVar18 != 0) {
      plVar15 = (long *)param_1[3];
      uVar6 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar6 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar15,lVar18,lVar16 - lVar18,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0291754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar18,lVar16 - lVar18,0x10);
      return;
    }
  }
  return;
}


