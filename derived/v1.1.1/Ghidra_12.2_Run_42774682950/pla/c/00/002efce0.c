/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002efce0; name: FUN_002efce0
 */


void FUN_002efce0(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 == -0x8000000000000000) {
    FUN_002eefe0(param_2);
    return;
  }
  if (param_1 == 0x7fffffffffffffff) {
    FUN_002eefd0(param_2);
    return;
  }
  if (param_2 == 3) {
    FUN_002ef090(param_1,3);
    return;
  }
  auVar1 = FUN_002ef4e0(DAT_0438f778,DAT_0438f780);
  auVar2 = FUN_002ef090(param_1,3);
  FUN_002ef150(auVar1._0_8_,auVar1._8_8_,auVar2._0_8_,auVar2._8_8_);
  return;
}


