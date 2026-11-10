/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00681a08; name: FUN_00681a08
 */


void FUN_00681a08(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    FUN_00681c5c(uVar3,param_2,param_3);
    param_1[1] = param_1[1] + 0x28;
    return;
  }
  lVar6 = (long)(uVar3 - *param_1) >> 3;
  uVar12 = 0x666666666666666;
  uVar3 = lVar6 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar4 * -0x3333333333333333) < 0x333333333333333) {
    uVar5 = lVar4 * -0x6666666666666666;
    uVar12 = uVar3;
    if (uVar3 <= uVar5) {
      uVar12 = uVar5;
    }
    if (uVar12 == 0) {
      lVar4 = 0;
      goto LAB_00681ac4;
    }
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 * 0x28,8);
LAB_00681ac4:
  lVar10 = lVar4 + lVar6 * 8;
  FUN_00681c5c(lVar10,param_2,param_3);
  lVar11 = *param_1;
  lVar9 = param_1[1];
  lVar6 = lVar10 + 0x28;
  if (lVar9 == lVar11) {
    lVar9 = lVar11;
  }
  else {
    lVar1 = 0;
    do {
      while( true ) {
        lVar7 = lVar1;
        lVar1 = lVar9 + lVar7;
        uVar13 = *(undefined8 *)(lVar1 + -0x28);
        lVar2 = lVar10 + lVar7;
        *(undefined8 *)(lVar2 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
        *(undefined8 *)(lVar2 + -0x28) = uVar13;
        uVar13 = *(undefined8 *)(lVar1 + -0x18);
        *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar1 + -0x10);
        *(undefined8 *)(lVar2 + -0x18) = uVar13;
        lVar8 = *(long *)(lVar1 + -8);
        *(long *)(lVar2 + -8) = lVar8;
        if (lVar8 != 0) break;
        *(long *)(lVar2 + -0x20) = lVar2 + -0x18;
        lVar1 = lVar7 + -0x28;
        if (lVar11 - lVar9 == lVar7 + -0x28) goto LAB_00681b58;
      }
      *(long *)(*(long *)(lVar2 + -0x18) + 0x10) = lVar2 + -0x18;
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined8 **)(lVar1 + -0x20) = (undefined8 *)(lVar1 + -0x18);
      *(undefined8 *)(lVar1 + -8) = 0;
      lVar1 = lVar7 + -0x28;
    } while (lVar11 - lVar9 != lVar7 + -0x28);
LAB_00681b58:
    lVar11 = param_1[1];
    lVar10 = lVar10 + lVar7 + -0x28;
    lVar9 = *param_1;
  }
  *param_1 = lVar10;
  param_1[1] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = lVar4 + uVar12 * 0x28;
  for (; lVar11 != lVar9; lVar11 = lVar11 + -0x28) {
    FUN_0064cd98(lVar11 + -0x20,*(undefined8 *)(lVar11 + -0x18));
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00681bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar9,lVar6 - lVar9,8);
  return;
}


