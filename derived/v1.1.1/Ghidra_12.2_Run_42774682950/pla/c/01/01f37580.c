/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f37580; name: FUN_01f37580
 */


undefined1  [16] FUN_01f37580(long param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (param_2 != param_1) {
    do {
      auVar5 = FUN_01f376f0(param_3,param_4);
      lVar1 = (auVar5._8_8_ + 0x28) - *auVar5._0_8_ >> 3;
      lVar2 = lVar1 * -0x3333333333333333;
      lVar4 = (param_2 - param_1 >> 3) * -0x3333333333333333;
      lVar1 = param_2 + lVar1 * -8;
      if (lVar4 <= lVar2) {
        lVar1 = param_1;
        lVar2 = lVar4;
      }
      FUN_01f377b0(lVar1,param_2);
      if (lVar2 != 0) {
        uVar3 = (param_4 - *param_3 >> 3) * -0x3333333333333333 - lVar2;
        if ((long)uVar3 < 1) {
          lVar2 = 0x65 - uVar3;
          lVar4 = SUB168(SEXT816(lVar2) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar2;
          param_3 = param_3 + ((lVar4 >> 6) - (lVar4 >> 0x3f));
          param_4 = *param_3 + ((lVar2 / 0x66) * 0x66 - lVar2) * 0x28 + 0xfc8;
        }
        else {
          param_3 = param_3 + uVar3 / 0x66;
          param_4 = *param_3 + (uVar3 % 0x66) * 0x28;
        }
      }
      param_2 = lVar1;
    } while (lVar1 != param_1);
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_3;
  return auVar5;
}


