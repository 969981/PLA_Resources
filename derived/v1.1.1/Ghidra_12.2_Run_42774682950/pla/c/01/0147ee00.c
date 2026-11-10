/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147ee00; name: FUN_0147ee00
 */


void FUN_0147ee00(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long *local_60;
  long local_58;
  
  auVar5._8_8_ = param_6;
  auVar5._0_8_ = param_5;
  if ((param_4 != param_2) &&
     (lVar4 = ((long)param_3 - (long)param_1 >> 3) * 0x2e +
              (param_4 - *param_3 >> 3) * 0x2e8ba2e8ba2e8ba3 +
              (param_2 - *param_1 >> 3) * -0x2e8ba2e8ba2e8ba3, 0 < lVar4)) {
    local_60 = param_3;
    while( true ) {
      if (param_4 == *local_60) {
        param_4 = local_60[-1] + 0xfd0;
        local_60 = local_60 + -1;
      }
      local_58 = param_4 + -0x58;
      lVar3 = (param_4 - *local_60 >> 3) * 0x2e8ba2e8ba2e8ba3;
      lVar1 = lVar4;
      lVar2 = param_4 + lVar4 * -0x58;
      if (lVar3 <= lVar4) {
        lVar1 = lVar3;
        lVar2 = *local_60;
      }
      auVar5 = FUN_0147f200(lVar2,param_4,auVar5._0_8_,auVar5._8_8_);
      lVar4 = lVar4 - lVar1;
      FUN_0147f114(&local_60,1 - lVar1);
      if (lVar4 < 1) break;
      param_4 = local_58;
    }
  }
  return;
}


