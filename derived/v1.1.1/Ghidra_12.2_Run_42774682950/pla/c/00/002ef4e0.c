/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef4e0; name: FUN_002ef4e0
 */


undefined1  [16] FUN_002ef4e0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  uVar1 = (uint)(param_2 >> 0x20);
  if (uVar1 != param_3) {
    if (param_1 + 0x8000000000000001U < 2) {
      param_2 = param_2 & 0xffffffff | (ulong)param_3 << 0x20;
    }
    else {
      if (param_3 == 3) {
        auVar2 = FUN_002eec80(uVar1);
        auVar2 = FUN_002ef280(param_1,param_2,auVar2._0_8_,auVar2._8_8_);
      }
      else {
        auVar3 = FUN_002eec80(param_3);
        if (uVar1 != 3) {
          auVar2 = FUN_002eec80(uVar1);
          auVar2 = FUN_002ef280(param_1,param_2,auVar2._0_8_,auVar2._8_8_);
        }
        auVar2 = FUN_002ef150(auVar3._0_8_,auVar3._8_8_,auVar2._0_8_,auVar2._8_8_);
      }
      param_2 = auVar2._8_8_;
      param_1 = auVar2._0_8_;
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}


