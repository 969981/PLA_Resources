/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8ad4c; name: FUN_02a8ad4c
 */


void FUN_02a8ad4c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar15;
  undefined8 *puVar14;
  undefined8 *puVar16;
  ulong uVar17;
  
  plVar5 = DAT_043f1798;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    uVar13 = param_2[2];
    puVar1[1] = param_2[1];
    puVar1[2] = uVar13;
    *puVar1 = uVar2;
    uVar2 = param_2[4];
    uVar13 = param_2[5];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar1[3] = param_2[3];
    puVar1[4] = uVar2;
    puVar1[5] = uVar13;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_1[1] = param_1[1] + 0x30;
    return;
  }
  lVar7 = (long)puVar1 - *param_1 >> 4;
  uVar17 = 0x555555555555555;
  uVar6 = lVar7 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = tpidr_el0;
  lVar8 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar9 = lVar8 * 0x5555555555555556;
    uVar17 = uVar6;
    if (uVar6 <= uVar9) {
      uVar17 = uVar9;
    }
    if (uVar17 == 0) {
      lVar8 = 0;
      goto LAB_02a8ae70;
    }
  }
  plVar10 = *(long **)(lVar4 + 0x20);
  if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
    *(long **)(lVar4 + 0x20) = DAT_043f1798;
    plVar10 = plVar5;
  }
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar17 * 0x30,8);
LAB_02a8ae70:
  puVar11 = (undefined8 *)(lVar8 + lVar7 * 0x10);
  uVar13 = param_2[2];
  uVar2 = param_2[1];
  *puVar11 = *param_2;
  puVar11[1] = uVar2;
  puVar11[2] = uVar13;
  uVar13 = param_2[5];
  uVar2 = param_2[4];
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar11[3] = param_2[3];
  puVar11[4] = uVar2;
  puVar11[5] = uVar13;
  param_2[5] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar16 = (undefined8 *)*param_1;
  puVar1 = puVar11 + 6;
  puVar12 = puVar11;
  puVar14 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[1] == puVar16) {
    puVar12 = puVar16;
  }
  else {
    do {
      puVar15 = puVar14 + -6;
      uVar2 = puVar14[-5];
      uVar13 = puVar14[-4];
      puVar11 = puVar12 + -6;
      *puVar11 = *puVar15;
      puVar12[-5] = uVar2;
      puVar12[-4] = uVar13;
      uVar13 = puVar14[-1];
      uVar2 = puVar14[-2];
      puVar14[-4] = 0;
      *puVar15 = 0;
      puVar14[-5] = 0;
      puVar12[-3] = puVar14[-3];
      puVar12[-2] = uVar2;
      puVar12[-1] = uVar13;
      puVar14[-1] = 0;
      puVar14[-3] = 0;
      puVar14[-2] = 0;
      puVar12 = puVar11;
      puVar14 = puVar15;
    } while (puVar16 != puVar15);
    puVar16 = (undefined8 *)param_1[1];
    puVar12 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar1;
  param_1[2] = lVar8 + uVar17 * 0x30;
  if (puVar16 == puVar12) {
LAB_02a8b160:
    plVar5 = DAT_043f1798;
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    plVar10 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar10 = plVar5;
    }
    uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar10,puVar12,0,8);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x02a8b21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,puVar12,0,8);
    return;
  }
  bVar3 = *(byte *)(puVar16 + -3);
  plVar5 = DAT_043f1798;
  do {
    DAT_043f1798 = plVar5;
    if (((bVar3 & 1) != 0) && (lVar7 = puVar16[-1], lVar7 != 0)) {
      plVar10 = *(long **)(lVar4 + 0x20);
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
        *(long **)(lVar4 + 0x20) = plVar5;
        plVar10 = plVar5;
      }
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar7,0,8);
          goto LAB_02a8b008;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,0,8);
    }
LAB_02a8b008:
    plVar5 = DAT_043f1798;
    if (((*(byte *)(puVar16 + -6) & 1) != 0) && (lVar7 = puVar16[-4], lVar7 != 0)) {
      plVar10 = *(long **)(lVar4 + 0x20);
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
        *(long **)(lVar4 + 0x20) = DAT_043f1798;
        plVar10 = plVar5;
      }
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar7,0,8);
          goto LAB_02a8af54;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,0,8);
    }
LAB_02a8af54:
    if (puVar12 == puVar16 + -6) goto LAB_02a8b160;
    bVar3 = *(byte *)(puVar16 + -9);
    puVar16 = puVar16 + -6;
    plVar5 = DAT_043f1798;
  } while( true );
}


