/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002efd90; name: FUN_002efd90
 */


long FUN_002efd90(undefined8 param_1,undefined4 param_2)

{
  double dVar1;
  undefined1 auVar2 [12];
  
  auVar2 = FUN_002ef4e0(param_1,param_2,DAT_0438f780._4_4_);
  auVar2 = FUN_002ef280(auVar2._0_8_,auVar2._8_4_,DAT_0438f778,
                        CONCAT44(DAT_0438f780._4_4_,(undefined4)DAT_0438f780));
  dVar1 = (double)auVar2._0_8_ * 1000.0 + (double)auVar2._8_4_ / 1000000.0 + 0.999999999;
  if (dVar1 < 0.0) {
    return 0;
  }
  if (9.223372036854776e+18 < dVar1) {
    return 0x7fffffffffffffff;
  }
  return (long)dVar1;
}


