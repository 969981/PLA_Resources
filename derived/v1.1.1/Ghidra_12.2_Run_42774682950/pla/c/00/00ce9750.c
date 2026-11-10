/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce9750; name: FUN_00ce9750
 */


void FUN_00ce9750(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = param_6;
  auVar9._0_8_ = param_5;
  if (param_4 != param_2) {
    lVar7 = ((param_4 - *param_3 >> 5) + ((long)param_3 - (long)param_1) * 0x10) -
            (param_2 - *param_1 >> 5);
    while (0 < lVar7) {
      while( true ) {
        lVar4 = *param_3;
        if (lVar4 == param_4) {
          param_3 = param_3 + -1;
          lVar4 = *param_3;
          param_4 = lVar4 + 0x1000;
        }
        lVar5 = param_4 - lVar4 >> 5;
        lVar8 = param_4 + -0x20;
        lVar2 = lVar7;
        lVar3 = param_4 + lVar7 * -0x20;
        if (lVar5 <= lVar7) {
          lVar2 = lVar5;
          lVar3 = lVar4;
        }
        auVar9 = FUN_00ce9a20(lVar3,param_4,auVar9._0_8_,auVar9._8_8_);
        lVar7 = lVar7 - lVar2;
        param_4 = lVar8;
        if (1 - lVar2 == 0) break;
        uVar1 = (1 - lVar2) + (lVar8 - *param_3 >> 5);
        if ((long)uVar1 < 1) {
          uVar6 = 0x7f - uVar1;
          uVar1 = 0xfe - uVar1;
          if (-1 < (long)uVar6) {
            uVar1 = uVar6;
          }
          param_3 = param_3 + -((long)uVar1 >> 7);
          param_4 = *param_3 + ((uVar1 & 0x7ffffffffffff80) - uVar6) * 0x20 + 0xfe0;
        }
        else {
          param_3 = (long *)((long)param_3 + (uVar1 >> 4 & 0xffffffffffffff8));
          param_4 = *param_3 + (uVar1 & 0x7f) * 0x20;
        }
        if (lVar7 < 1) {
          return;
        }
      }
    }
  }
  return;
}


