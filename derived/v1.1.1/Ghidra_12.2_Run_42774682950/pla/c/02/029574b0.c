/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029574b0; name: FUN_029574b0
 */


undefined8 FUN_029574b0(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_02957300();
  if ((uVar1 & 1) == 0) {
    param_1 = param_1 & 0xffff;
    if (param_1 < 0x16c) {
      if (param_1 < 0xf3) {
        if ((param_1 - 0x90 < 0x3c) &&
           ((1L << ((ulong)(param_1 - 0x90) & 0x3f) & 0x824004001000001U) != 0)) {
          return 1;
        }
        if ((param_1 - 0x12 < 0x33) &&
           ((1L << ((ulong)(param_1 - 0x12) & 0x3f) & 0x4000010000001U) != 0)) {
          return 1;
        }
      }
      else {
        if ((param_1 - 0xf3 < 0x2f) &&
           ((1L << ((ulong)(param_1 - 0xf3) & 0x3f) & 0x400018a00001U) != 0)) {
          return 1;
        }
        if (param_1 == 0x157) {
          return 1;
        }
      }
    }
    else {
      if (param_1 - 0x1dc < 0x133) {
                    /* WARNING: Could not recover jumptable at 0x02957500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)((ulong)(byte)(&DAT_03a7f527)[param_1 - 0x1dc] * 4 + 0x2957504))(1);
        return uVar2;
      }
      if (param_1 == 0x19f) {
        return 1;
      }
      if (param_1 == 0x16c) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


