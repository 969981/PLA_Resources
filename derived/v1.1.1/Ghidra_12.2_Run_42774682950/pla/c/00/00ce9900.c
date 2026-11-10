/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce9900; name: FUN_00ce9900
 */


void FUN_00ce9900(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_6;
  auVar7._0_8_ = param_5;
  if (param_4 == param_2) {
    return;
  }
  lVar6 = ((param_4 - *param_3 >> 5) + ((long)param_3 - (long)param_1) * 0x10) -
          (param_2 - *param_1 >> 5);
joined_r0x00ce9948:
  if (lVar6 < 1) {
    return;
  }
  do {
    lVar5 = (*param_1 + 0x1000) - param_2 >> 5;
    lVar2 = lVar6;
    lVar3 = param_2 + lVar6 * 0x20;
    if (lVar5 <= lVar6) {
      lVar2 = lVar5;
      lVar3 = *param_1 + 0x1000;
    }
    auVar7 = FUN_00ce9bb0(param_2,lVar3,auVar7._0_8_,auVar7._8_8_);
    lVar6 = lVar6 - lVar2;
    if (lVar2 != 0) {
      uVar1 = lVar2 + (param_2 - *param_1 >> 5);
      if (0 < (long)uVar1) break;
      uVar4 = 0x7f - uVar1;
      uVar1 = 0xfe - uVar1;
      if (-1 < (long)uVar4) {
        uVar1 = uVar4;
      }
      param_1 = param_1 + -((long)uVar1 >> 7);
      param_2 = *param_1 + ((uVar1 & 0x7ffffffffffff80) - uVar4) * 0x20 + 0xfe0;
    }
    if (lVar6 < 1) {
      return;
    }
  } while( true );
  param_1 = (long *)((long)param_1 + (uVar1 >> 4 & 0xffffffffffffff8));
  param_2 = *param_1 + (uVar1 & 0x7f) * 0x20;
  goto joined_r0x00ce9948;
}


