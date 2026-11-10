/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8296c; name: FUN_02a8296c
 */


void FUN_02a8296c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  plVar7 = DAT_043f1798;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar10 = *param_2;
    uVar4 = param_2[1];
    uVar3 = param_2[2];
    uVar5 = param_2[3];
    puVar2[6] = 0;
    puVar2[2] = uVar3;
    puVar2[3] = uVar5;
    *puVar2 = uVar10;
    puVar2[1] = uVar4;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[4] = param_2[4];
    puVar2[5] = param_2[5];
    puVar2[6] = param_2[6];
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[7] = param_2[7];
    puVar2[8] = param_2[8];
    puVar2[9] = param_2[9];
    uVar10 = param_2[10];
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[7] = 0;
    *(undefined8 *)((long)puVar2 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
    puVar2[10] = uVar10;
    param_1[1] = param_1[1] + 0x60;
    return;
  }
  lVar9 = (long)puVar2 - *param_1 >> 5;
  uVar17 = 0x2aaaaaaaaaaaaaa;
  uVar8 = lVar9 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = tpidr_el0;
  lVar11 = param_1[2] - *param_1 >> 5;
  if ((ulong)(lVar11 * -0x5555555555555555) < 0x155555555555555) {
    uVar12 = lVar11 * 0x5555555555555556;
    uVar17 = uVar8;
    if (uVar8 <= uVar12) {
      uVar17 = uVar12;
    }
    if (uVar17 == 0) {
      lVar11 = 0;
      goto LAB_02a82ad0;
    }
  }
  plVar13 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar13 = plVar7;
  }
  lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,uVar17 * 0x60,8);
LAB_02a82ad0:
  puVar14 = (undefined8 *)(lVar11 + lVar9 * 0x20);
  uVar10 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  uVar5 = param_2[3];
  puVar14[6] = 0;
  puVar14[2] = uVar3;
  puVar14[3] = uVar5;
  *puVar14 = uVar10;
  puVar14[1] = uVar4;
  puVar14[4] = param_2[4];
  puVar14[5] = param_2[5];
  puVar14[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  puVar14[9] = 0;
  puVar14[7] = param_2[7];
  puVar14[8] = param_2[8];
  puVar14[9] = param_2[9];
  uVar10 = param_2[10];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined8 *)((long)puVar14 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
  puVar14[10] = uVar10;
  lVar9 = *param_1;
  lVar18 = param_1[1];
  puVar2 = puVar14 + 0xc;
  if (lVar18 == lVar9) {
    lVar18 = lVar9;
  }
  else {
    lVar15 = 0;
    do {
      lVar1 = lVar18 + lVar15;
      uVar10 = *(undefined8 *)(lVar1 + -0x60);
      uVar4 = *(undefined8 *)(lVar1 + -0x58);
      uVar3 = *(undefined8 *)(lVar1 + -0x50);
      uVar5 = *(undefined8 *)(lVar1 + -0x48);
      *(undefined8 *)((long)puVar14 + lVar15 + -0x40) = 0;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x38) = 0;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x30) = 0;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x50) = uVar3;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x48) = uVar5;
      lVar16 = lVar15 + -0x60;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x60) = uVar10;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x58) = uVar4;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x40) = *(undefined8 *)(lVar1 + -0x40);
      *(undefined8 *)((long)puVar14 + lVar15 + -0x38) = *(undefined8 *)(lVar1 + -0x38);
      *(undefined8 *)((long)puVar14 + lVar15 + -0x30) = *(undefined8 *)(lVar1 + -0x30);
      *(undefined8 *)(lVar1 + -0x38) = 0;
      *(undefined8 *)(lVar1 + -0x30) = 0;
      *(undefined8 *)(lVar1 + -0x40) = 0;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x20) = 0;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x18) = 0;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x28) = 0;
      *(undefined8 *)((long)puVar14 + lVar15 + -0x28) = *(undefined8 *)(lVar1 + -0x28);
      *(undefined8 *)((long)puVar14 + lVar15 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
      *(undefined8 *)((long)puVar14 + lVar15 + -0x18) = *(undefined8 *)(lVar1 + -0x18);
      uVar10 = *(undefined8 *)(lVar1 + -0x10);
      *(undefined8 *)(lVar1 + -0x28) = 0;
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)((long)puVar14 + lVar15 + -0xb) = *(undefined8 *)(lVar1 + -0xb);
      *(undefined8 *)((long)puVar14 + lVar15 + -0x10) = uVar10;
      lVar15 = lVar16;
    } while (lVar9 - lVar18 != lVar16);
    lVar9 = param_1[1];
    puVar14 = (undefined8 *)((long)puVar14 + lVar16);
    lVar18 = *param_1;
  }
  *param_1 = (long)puVar14;
  param_1[1] = (long)puVar2;
  param_1[2] = lVar11 + uVar17 * 0x60;
  if (lVar9 == lVar18) {
LAB_02a82e48:
    plVar7 = DAT_043f1798;
    if (lVar18 == 0) {
      return;
    }
    plVar13 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar13 = plVar7;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar18,0,8);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x02a82f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar18,0,8);
    return;
  }
  lVar11 = *(long *)(lVar9 + -0x28);
  do {
    if (lVar11 != 0) {
      *(long *)(lVar9 + -0x20) = lVar11;
      plVar7 = DAT_043f1798;
      plVar13 = *(long **)(lVar6 + 0x20);
      if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
        *(long **)(lVar6 + 0x20) = DAT_043f1798;
        plVar13 = plVar7;
      }
      uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar13,lVar11,0,8);
          goto LAB_02a82cf4;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,0,8);
    }
LAB_02a82cf4:
    lVar11 = *(long *)(lVar9 + -0x40);
    if (lVar11 != 0) {
      *(long *)(lVar9 + -0x38) = lVar11;
      plVar7 = DAT_043f1798;
      plVar13 = *(long **)(lVar6 + 0x20);
      if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
        *(long **)(lVar6 + 0x20) = DAT_043f1798;
        plVar13 = plVar7;
      }
      uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar13,lVar11,0,8);
          goto LAB_02a82c44;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,0,8);
    }
LAB_02a82c44:
    if (lVar18 == lVar9 + -0x60) goto LAB_02a82e48;
    lVar11 = *(long *)(lVar9 + -0x88);
    lVar9 = lVar9 + -0x60;
  } while( true );
}


