/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191a450; name: FUN_0191a450
 */


undefined1  [16] FUN_0191a450(long param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (param_2 != param_1) {
    do {
      auVar7 = FUN_0191a5a0(param_3,param_4);
      lVar6 = auVar7._8_8_;
      lVar1 = (lVar6 - *auVar7._0_8_) + 0x10;
      lVar5 = param_2 - param_1 >> 4;
      lVar3 = lVar1 >> 4;
      lVar1 = param_2 - lVar1;
      if (lVar5 <= lVar3) {
        lVar3 = lVar5;
        lVar1 = param_1;
      }
      if ((param_2 != lVar1) && (FUN_0191a608(lVar6,param_2 + -0x10), param_2 + -0x10 != lVar1)) {
        do {
          lVar6 = lVar6 + -0x10;
          FUN_0191a608(lVar6,param_2 + -0x20);
          param_2 = param_2 + -0x10;
        } while (lVar1 + 0x10 != param_2);
      }
      if (lVar3 != 0) {
        uVar2 = (param_4 - *param_3 >> 4) - lVar3;
        if ((long)uVar2 < 1) {
          uVar4 = 0xff - uVar2;
          uVar2 = 0x1fe - uVar2;
          if (-1 < (long)uVar4) {
            uVar2 = uVar4;
          }
          param_3 = param_3 + -((long)uVar2 >> 8);
          param_4 = *param_3 + ((uVar2 & 0xfffffffffffff00) - uVar4) * 0x10 + 0xff0;
        }
        else {
          param_3 = (long *)((long)param_3 + (uVar2 >> 5 & 0x7fffffffffffff8));
          param_4 = *param_3 + (uVar2 & 0xff) * 0x10;
        }
      }
      param_2 = lVar1;
    } while (lVar1 != param_1);
  }
  auVar7._8_8_ = param_4;
  auVar7._0_8_ = param_3;
  return auVar7;
}


