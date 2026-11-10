/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c19e9c; name: FUN_02c19e9c
 */


void FUN_02c19e9c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  plVar16 = param_1 + 3;
  if ((ulong)((param_1[2] - param_1[1] >> 3) * 0x6db6db6db6db6db7) < param_2) {
    lVar14 = param_1[1] - *param_1 >> 3;
    uVar15 = param_1[4];
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    uVar1 = lVar14 * 0x6db6db6db6db6db7 + param_2;
    if (uVar15 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1 >> 3;
    uVar13 = lVar11 * -0x2492492492492492;
    if (uVar1 <= uVar13) {
      uVar1 = uVar13;
    }
    if ((ulong)(lVar11 * 0x6db6db6db6db6db7) < uVar15 >> 1) {
      uVar15 = uVar1;
    }
    if (uVar15 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar15 * 0x38,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar16 + 0xb8))();
      }
    }
    lVar19 = lVar11 + lVar14 * 8;
    lVar14 = lVar19;
    do {
      FUN_02c1a340(plVar16,lVar14);
      puVar8 = PTR_DAT_04379528;
      puVar7 = PTR_DAT_04379520;
      lVar14 = lVar14 + 0x38;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    plVar12 = (long *)*param_1;
    plVar17 = (long *)param_1[1];
    if (plVar17 == plVar12) {
      plVar17 = plVar12;
    }
    else {
      lVar20 = 0;
      do {
        lVar18 = *plVar16;
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          FUN_008a62a4(puVar8);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar7);
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar18;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        lVar18 = lVar19 + lVar20;
        *(undefined8 *)(lVar18 + -0x38) = 0;
        *(undefined8 *)(lVar18 + -0x30) = 0;
        *(undefined8 *)(lVar18 + -0x28) = 0;
        uVar2 = *(undefined8 *)((long)plVar17 + lVar20 + -0x20);
        uVar3 = *(undefined8 *)((long)plVar17 + lVar20 + -0x18);
        uVar4 = *(undefined8 *)((long)plVar17 + lVar20 + -8);
        *(undefined8 *)(lVar18 + -0x10) = *(undefined8 *)((long)plVar17 + lVar20 + -0x10);
        *(undefined8 *)(lVar18 + -8) = uVar4;
        *(undefined8 *)(lVar18 + -0x20) = uVar2;
        *(undefined8 *)(lVar18 + -0x18) = uVar3;
        *(undefined8 *)(lVar18 + -0x38) = *(undefined8 *)((long)plVar17 + lVar20 + -0x38);
        *(undefined8 *)(lVar18 + -0x30) = *(undefined8 *)((long)plVar17 + lVar20 + -0x30);
        *(undefined8 *)(lVar18 + -0x28) = *(undefined8 *)((long)plVar17 + lVar20 + -0x28);
        *(undefined8 *)((long)plVar17 + lVar20 + -0x38) = 0;
        *(undefined8 *)((long)plVar17 + lVar20 + -0x30) = 0;
        *(undefined8 *)((long)plVar17 + lVar20 + -0x28) = 0;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        lVar20 = lVar20 + -0x38;
      } while ((long)plVar12 - (long)plVar17 != lVar20);
      plVar12 = (long *)param_1[1];
      lVar19 = lVar19 + lVar20;
      plVar17 = (long *)*param_1;
    }
    *param_1 = lVar19;
    param_1[1] = lVar14;
    lVar14 = param_1[2];
    param_1[2] = lVar11 + uVar15 * 0x38;
    if (plVar12 != plVar17) {
      lVar11 = tpidr_el0;
      lVar19 = plVar12[-7];
      plVar5 = plVar12 + -7;
      do {
        plVar6 = plVar5;
        if (lVar19 != 0) {
          lVar20 = plVar12[-5];
          plVar5 = (long *)plVar12[-4];
          plVar12[-6] = lVar19;
          uVar15 = (**(code **)(*plVar5 + 0xc0))(plVar5);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar11 + 0x38d480)) {
              FUN_02bcc824(plVar5,lVar19,lVar20 - lVar19,8);
              goto LAB_02c1a120;
            }
          }
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar19,lVar20 - lVar19,8);
        }
LAB_02c1a120:
        if (plVar17 == plVar6) break;
        lVar19 = plVar6[-7];
        plVar5 = plVar6 + -7;
        plVar12 = plVar6;
      } while( true );
    }
    if (plVar17 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar15 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar16,plVar17,lVar14 - (long)plVar17,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02c1a28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar17,lVar14 - (long)plVar17,8);
      return;
    }
  }
  else {
    do {
      FUN_02c1a340(plVar16);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x38;
    } while (param_2 != 0);
  }
  return;
}


