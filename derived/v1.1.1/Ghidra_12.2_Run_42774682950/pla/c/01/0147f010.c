/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f010; name: FUN_0147f010
 */


undefined8
FUN_0147f010(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long *local_50;
  long lStack_48;
  
  auVar5._8_8_ = param_6;
  auVar5._0_8_ = param_5;
  if (param_4 != param_2) {
    lStack_48 = param_2;
    local_50 = param_1;
    for (lVar4 = ((long)param_3 - (long)param_1 >> 3) * 0x2e +
                 (param_4 - *param_3 >> 3) * 0x2e8ba2e8ba2e8ba3 +
                 (param_2 - *param_1 >> 3) * -0x2e8ba2e8ba2e8ba3; 0 < lVar4; lVar4 = lVar4 - lVar1)
    {
      lVar3 = ((*local_50 + 0xfd0) - lStack_48 >> 3) * 0x2e8ba2e8ba2e8ba3;
      lVar1 = lVar4;
      lVar2 = lStack_48 + lVar4 * 0x58;
      if (lVar3 <= lVar4) {
        lVar1 = lVar3;
        lVar2 = *local_50 + 0xfd0;
      }
      auVar5 = FUN_0147f460(lStack_48,lVar2,auVar5._0_8_,auVar5._8_8_);
      param_6 = auVar5._8_8_;
      FUN_0147f114(&local_50,lVar1);
    }
  }
  return param_6;
}


