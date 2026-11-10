/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123924c; name: FUN_0123924c
 */


void FUN_0123924c(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == param_2) {
    return;
  }
  FUN_01239400();
  lVar3 = *param_2;
  lVar1 = param_2[1];
  uVar7 = (lVar1 - lVar3 >> 4) * -0x3333333333333333;
  if ((ulong)((param_1[2] - *param_1 >> 4) * -0x3333333333333333) < uVar7) {
    FUN_01239728(param_1);
    uVar4 = param_1[4];
    if (0x7ffffffffffffffe < uVar4) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1 >> 4;
    if ((ulong)(lVar5 * -0x3333333333333333) < uVar4 >> 1) {
      uVar6 = lVar5 * -0x6666666666666666;
      uVar4 = uVar7;
      if (uVar7 <= uVar6) {
        uVar4 = uVar6;
      }
    }
    FUN_01239828(param_1,uVar4);
    if (lVar3 != lVar1) {
      lVar5 = param_1[1];
      do {
        FUN_012398b8(param_1 + 3,lVar5,lVar3);
        lVar3 = lVar3 + 0x50;
        lVar5 = param_1[1] + 0x50;
        param_1[1] = lVar5;
      } while (lVar1 != lVar3);
    }
  }
  else {
    lVar5 = param_1[1] - *param_1 >> 4;
    if (uVar7 <= (ulong)(lVar5 * -0x3333333333333333)) {
      uVar2 = FUN_01239540(lVar3,lVar1);
      FUN_01239688(param_1,uVar2);
      return;
    }
    lVar5 = lVar3 + lVar5 * 0x10;
    FUN_01239540(lVar3,lVar5);
    if (lVar5 != lVar1) {
      lVar3 = param_1[1];
      do {
        FUN_012398b8(param_1 + 3,lVar3,lVar5);
        lVar5 = lVar5 + 0x50;
        lVar3 = param_1[1] + 0x50;
        param_1[1] = lVar3;
      } while (lVar1 != lVar5);
    }
  }
  return;
}


