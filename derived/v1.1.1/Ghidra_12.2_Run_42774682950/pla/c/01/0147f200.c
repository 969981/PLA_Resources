/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f200; name: FUN_0147f200
 */


undefined1  [16] FUN_0147f200(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 != param_1) {
    local_50 = param_3;
    uStack_48 = param_4;
    do {
      auVar4 = FUN_0147f2d0(local_50,uStack_48);
      lVar1 = (auVar4._8_8_ + 0x58) - *auVar4._0_8_ >> 3;
      lVar2 = lVar1 * 0x2e8ba2e8ba2e8ba3;
      lVar3 = (param_2 - param_1 >> 3) * 0x2e8ba2e8ba2e8ba3;
      lVar1 = param_2 + lVar1 * -8;
      if (lVar3 <= lVar2) {
        lVar1 = param_1;
        lVar2 = lVar3;
      }
      FUN_0147f3a0(lVar1,param_2);
      FUN_0147f114(&local_50,-lVar2);
      param_3 = local_50;
      param_4 = uStack_48;
      param_2 = lVar1;
    } while (lVar1 != param_1);
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = param_3;
  return auVar4;
}


