/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067dc4c; name: FUN_0067dc4c
 */


void FUN_0067dc4c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_0064ef7c(uVar1,param_2);
    param_1[1] = param_1[1] + 8;
    return;
  }
  lVar5 = (long)(uVar1 - *param_1) >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
      goto LAB_0067dce8;
    }
  }
  else {
    uVar1 = 0x1fffffffffffffff;
  }
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 << 3,8);
LAB_0067dce8:
  lVar6 = lVar2 + lVar5 * 8;
  FUN_0064ef7c(lVar6,param_2);
  lVar4 = *param_1;
  lVar7 = param_1[1];
  lVar5 = lVar6 + 8;
  if (lVar7 == lVar4) {
    lVar7 = lVar4;
  }
  else {
    do {
      lVar6 = lVar6 + -8;
      lVar7 = lVar7 + -8;
      FUN_0064ef7c(lVar6,lVar7);
    } while (lVar4 != lVar7);
    lVar4 = param_1[1];
    lVar7 = *param_1;
  }
  *param_1 = lVar6;
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = lVar2 + uVar1 * 8;
  while (lVar4 != lVar7) {
    lVar4 = lVar4 + -8;
    FUN_0064ef40(lVar4);
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0067dd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar5 - lVar7,8);
  return;
}


