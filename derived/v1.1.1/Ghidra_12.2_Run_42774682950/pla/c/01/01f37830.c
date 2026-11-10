/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f37830; name: FUN_01f37830
 */


undefined1  [16] FUN_01f37830(long param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (param_1 != param_2) {
    do {
      lVar1 = (*param_3 - param_4) + 0xff0;
      lVar4 = (param_2 - param_1 >> 3) * -0x3333333333333333;
      lVar3 = (lVar1 >> 3) * -0x3333333333333333;
      lVar1 = param_1 + lVar1;
      if (lVar4 <= lVar3) {
        lVar3 = lVar4;
        lVar1 = param_2;
      }
      FUN_01f37980(param_1,lVar1,param_4);
      if (lVar3 != 0) {
        uVar2 = lVar3 + (param_4 - *param_3 >> 3) * -0x3333333333333333;
        if ((long)uVar2 < 1) {
          lVar3 = 0x65 - uVar2;
          lVar4 = SUB168(SEXT816(lVar3) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar3;
          param_3 = param_3 + ((lVar4 >> 6) - (lVar4 >> 0x3f));
          param_4 = *param_3 + ((lVar3 / 0x66) * 0x66 - lVar3) * 0x28 + 0xfc8;
        }
        else {
          param_3 = param_3 + uVar2 / 0x66;
          param_4 = *param_3 + (uVar2 % 0x66) * 0x28;
        }
      }
      param_1 = lVar1;
    } while (lVar1 != param_2);
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_3;
  return auVar5;
}


