/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065cb6c; name: FUN_0065cb6c
 */


void FUN_0065cb6c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_00664370(uVar1,param_2);
    param_1[1] = param_1[1] + 0x28;
    return;
  }
  lVar4 = (long)(uVar1 - *param_1) >> 3;
  uVar7 = 0x666666666666666;
  uVar1 = lVar4 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar2 * -0x3333333333333333) < 0x333333333333333) {
    uVar3 = lVar2 * -0x6666666666666666;
    uVar7 = uVar1;
    if (uVar1 <= uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 == 0) {
      lVar2 = 0;
      goto LAB_0065cc24;
    }
  }
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 * 0x28,8);
LAB_0065cc24:
  lVar6 = lVar2 + lVar4 * 8;
  FUN_00664370(lVar6,param_2);
  lVar5 = *param_1;
  lVar8 = param_1[1];
  lVar4 = lVar6 + 0x28;
  if (lVar8 == lVar5) {
    lVar8 = lVar5;
  }
  else {
    do {
      lVar6 = lVar6 + -0x28;
      lVar8 = lVar8 + -0x28;
      FUN_00664370(lVar6,lVar8);
    } while (lVar5 != lVar8);
    lVar5 = param_1[1];
    lVar8 = *param_1;
  }
  *param_1 = lVar6;
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = lVar2 + uVar7 * 0x28;
  while (lVar5 != lVar8) {
    lVar5 = lVar5 + -0x28;
    FUN_006888c8(lVar5);
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0065ccc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar4 - lVar8,8);
  return;
}


