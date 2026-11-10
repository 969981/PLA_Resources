/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014937d0; name: FUN_014937d0
 */


void FUN_014937d0(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_6;
  auVar6._0_8_ = param_5;
  if (param_4 != param_2) {
    lVar5 = ((long)param_3 - (long)param_1 >> 3) * 0xcc +
            (param_4 - *param_3 >> 2) * -0x3333333333333333 +
            (param_2 - *param_1 >> 2) * 0x3333333333333333;
    while (0 < lVar5) {
      lVar3 = ((*param_1 + 0xff0) - param_2 >> 2) * -0x3333333333333333;
      lVar2 = lVar5;
      lVar4 = param_2 + lVar5 * 0x14;
      if (lVar3 <= lVar5) {
        lVar2 = lVar3;
        lVar4 = *param_1 + 0xff0;
      }
      auVar6 = FUN_01493b80(param_2,lVar4,auVar6._0_8_,auVar6._8_8_);
      lVar5 = lVar5 - lVar2;
      if (lVar2 != 0) {
        uVar1 = lVar2 + (param_2 - *param_1 >> 2) * -0x3333333333333333;
        if ((long)uVar1 < 1) {
          lVar2 = 0xcb - uVar1;
          lVar4 = SUB168(SEXT816(lVar2) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar2;
          param_1 = param_1 + ((lVar4 >> 7) - (lVar4 >> 0x3f));
          param_2 = *param_1 + ((lVar2 / 0xcc) * 0xcc - lVar2) * 0x14 + 0xfdc;
        }
        else {
          param_1 = param_1 + uVar1 / 0xcc;
          param_2 = *param_1 + (uVar1 % 0xcc) * 0x14;
        }
      }
    }
  }
  return;
}


