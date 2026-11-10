/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191a320; name: FUN_0191a320
 */


undefined8
FUN_0191a320(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_6;
  auVar7._0_8_ = param_5;
  if (param_4 == param_2) {
    return param_6;
  }
  lVar6 = ((param_4 - *param_3 >> 4) + ((long)param_3 - (long)param_1) * 0x20) -
          (param_2 - *param_1 >> 4);
joined_r0x0191a380:
  if (lVar6 < 1) {
    return param_6;
  }
  do {
    lVar4 = (*param_1 + 0x1000) - param_2 >> 4;
    lVar2 = lVar6;
    lVar3 = param_2 + lVar6 * 0x10;
    if (lVar4 <= lVar6) {
      lVar2 = lVar4;
      lVar3 = *param_1 + 0x1000;
    }
    auVar7 = FUN_0191a910(param_2,lVar3,auVar7._0_8_,auVar7._8_8_);
    param_6 = auVar7._8_8_;
    lVar6 = lVar6 - lVar2;
    if (lVar2 != 0) {
      uVar1 = lVar2 + (param_2 - *param_1 >> 4);
      if (0 < (long)uVar1) break;
      uVar5 = 0xff - uVar1;
      uVar1 = 0x1fe - uVar1;
      if (-1 < (long)uVar5) {
        uVar1 = uVar5;
      }
      param_1 = param_1 + -((long)uVar1 >> 8);
      param_2 = *param_1 + ((uVar1 & 0xfffffffffffff00) - uVar5) * 0x10 + 0xff0;
    }
    if (lVar6 < 1) {
      return param_6;
    }
  } while( true );
  param_1 = (long *)((long)param_1 + (uVar1 >> 5 & 0x7fffffffffffff8));
  param_2 = *param_1 + (uVar1 & 0xff) * 0x10;
  goto joined_r0x0191a380;
}


