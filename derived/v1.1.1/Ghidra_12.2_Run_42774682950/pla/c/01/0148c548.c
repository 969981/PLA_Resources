/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148c548; name: FUN_0148c548
 */


void FUN_0148c548(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  uVar3 = *(ulong *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 8);
  plVar13 = (long *)(lVar2 + (uVar3 / 0xcc) * 8);
  if (*(long *)(param_1 + 0x10) == lVar2) {
    lVar5 = 0;
    if (param_3 != 0) goto LAB_0148c684;
LAB_0148c5b0:
    uVar14 = 0;
LAB_0148c5b4:
    plVar10 = plVar13;
    lVar12 = lVar5;
  }
  else {
    lVar5 = *plVar13 + (uVar3 % 0xcc) * 0x14;
    if (param_3 == lVar5) goto LAB_0148c5b0;
LAB_0148c684:
    lVar12 = lVar5 - *plVar13 >> 2;
    uVar14 = ((long)param_2 - (long)plVar13 >> 3) * 0xcc +
             (param_3 - *param_2 >> 2) * -0x3333333333333333 + lVar12 * 0x3333333333333333;
    if (uVar14 == 0) goto LAB_0148c5b4;
    uVar6 = uVar14 + lVar12 * -0x3333333333333333;
    if ((long)uVar6 < 1) {
      lVar12 = 0xcb - uVar6;
      lVar8 = SUB168(SEXT816(lVar12) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar12;
      plVar10 = plVar13 + ((lVar8 >> 7) - (lVar8 >> 0x3f));
      lVar12 = *plVar10 + ((lVar12 / 0xcc) * 0xcc - lVar12) * 0x14 + 0xfdc;
    }
    else {
      plVar10 = plVar13 + uVar6 / 0xcc;
      lVar12 = *plVar10 + (uVar6 % 0xcc) * 0x14;
    }
  }
  lVar9 = lVar12 - *plVar10;
  lVar8 = lVar9 >> 2;
  uVar7 = *(long *)(param_1 + 0x48) - 1;
  uVar6 = lVar8 * -0x3333333333333333 + 1;
  if (uVar7 >> 1 < uVar14) {
    if (lVar9 < -0x13) {
      lVar8 = lVar8 * 0x3333333333333333 + 0xca;
      lVar5 = SUB168(SEXT816(lVar8) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar8;
      plVar13 = plVar10 + ((lVar5 >> 7) - (lVar5 >> 0x3f));
      lVar5 = *plVar13;
      uVar6 = ((lVar8 / 0xcc) * 0xcc - lVar8) + 0xcb;
    }
    else {
      plVar13 = plVar10 + uVar6 / 0xcc;
      lVar5 = *plVar13;
      uVar6 = uVar6 % 0xcc;
    }
    uVar3 = *(long *)(param_1 + 0x48) + uVar3;
    plVar1 = (long *)(lVar2 + (uVar3 / 0xcc) * 8);
    if (*(long *)(param_1 + 0x10) == lVar2) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1 + (uVar3 % 0xcc) * 0x14;
    }
    FUN_014937d0(plVar13,lVar5 + uVar6 * 0x14,plVar1,lVar2,plVar10,lVar12);
    lVar5 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar5 + -1;
    lVar12 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar12 != 0) {
      lVar2 = (lVar12 >> 3) * 0xcc + -1;
    }
    if ((lVar2 - (lVar5 + *(long *)(param_1 + 0x40))) + 1U < 0x198) {
      return;
    }
    plVar13 = *(long **)(param_1 + 0x50);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    uVar3 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar3 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar11,0xff0,4);
        goto LAB_0148c854;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar11,0xff0,4);
LAB_0148c854:
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    return;
  }
  if (lVar9 < -0x13) {
    lVar2 = lVar8 * 0x3333333333333333 + 0xca;
    lVar9 = SUB168(SEXT816(lVar2) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar2;
    plVar1 = plVar10 + ((lVar9 >> 7) - (lVar9 >> 0x3f));
    lVar2 = *plVar1 + ((lVar2 / 0xcc) * 0xcc - lVar2) * 0x14 + 0xfdc;
  }
  else {
    plVar1 = plVar10 + uVar6 / 0xcc;
    lVar2 = *plVar1 + (uVar6 % 0xcc) * 0x14;
  }
  auVar15._8_8_ = lVar2;
  auVar15._0_8_ = plVar1;
  if ((lVar12 != lVar5) &&
     (lVar2 = lVar8 * -0x3333333333333333 + ((long)plVar10 - (long)plVar13 >> 3) * 0xcc +
              (lVar5 - *plVar13 >> 2) * 0x3333333333333333, 0 < lVar2)) {
    do {
      while( true ) {
        lVar5 = *plVar10;
        if (lVar5 == lVar12) {
          plVar10 = plVar10 + -1;
          lVar5 = *plVar10;
          lVar12 = lVar5 + 0xff0;
        }
        lVar4 = (lVar12 - lVar5 >> 2) * -0x3333333333333333;
        lVar8 = lVar2;
        lVar9 = lVar12 + lVar2 * -0x14;
        if (lVar4 <= lVar2) {
          lVar8 = lVar4;
          lVar9 = lVar5;
        }
        lVar5 = lVar12 + -0x14;
        auVar15 = FUN_01493950(lVar9,lVar12,auVar15._0_8_,auVar15._8_8_);
        lVar2 = lVar2 - lVar8;
        lVar12 = lVar5;
        if (1 - lVar8 != 0) break;
joined_r0x0148cbe4:
        if (lVar2 < 1) goto LAB_0148c99c;
      }
      uVar3 = (1 - lVar8) + (lVar5 - *plVar10 >> 2) * -0x3333333333333333;
      if ((long)uVar3 < 1) {
        lVar5 = 0xcb - uVar3;
        lVar12 = SUB168(SEXT816(lVar5) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar5;
        plVar10 = plVar10 + ((lVar12 >> 7) - (lVar12 >> 0x3f));
        lVar12 = *plVar10 + ((lVar5 / 0xcc) * 0xcc - lVar5) * 0x14 + 0xfdc;
        goto joined_r0x0148cbe4;
      }
      plVar10 = plVar10 + uVar3 / 0xcc;
      lVar12 = *plVar10 + (uVar3 % 0xcc) * 0x14;
    } while (0 < lVar2);
LAB_0148c99c:
    uVar3 = *(ulong *)(param_1 + 0x40);
    uVar7 = *(long *)(param_1 + 0x48) - 1;
  }
  *(ulong *)(param_1 + 0x40) = uVar3 + 1;
  *(ulong *)(param_1 + 0x48) = uVar7;
  if (uVar3 + 1 < 0x198) {
    return;
  }
  plVar13 = *(long **)(param_1 + 0x50);
  uVar11 = **(undefined8 **)(param_1 + 8);
  uVar3 = (**(code **)(*plVar13 + 0xc0))(plVar13);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar13,uVar11,0xff0,4);
      goto LAB_0148ca28;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,uVar11,0xff0,4);
LAB_0148ca28:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0xcc;
  return;
}


