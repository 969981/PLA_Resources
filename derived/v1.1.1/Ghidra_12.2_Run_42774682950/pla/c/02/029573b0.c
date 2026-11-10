/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029573b0; name: FUN_029573b0
 */


undefined8 FUN_029573b0(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_02957300();
  if ((uVar1 & 1) == 0) {
    param_1 = param_1 & 0xffff;
    if (param_1 < 0x154) {
      if ((param_1 - 0x5b < 0x35) &&
         ((1L << ((ulong)(param_1 - 0x5b) & 0x3f) & 0x10008004000001U) != 0)) {
        return 1;
      }
      if ((param_1 - 0xd < 0x40) &&
         ((1L << ((ulong)(param_1 - 0xd) & 0x3f) & 0x8000000000000041U) != 0)) {
        return 1;
      }
      if ((param_1 - 0xfd < 0x27) && ((1L << ((ulong)(param_1 - 0xfd) & 0x3f) & 0x4000000801U) != 0)
         ) {
        return 1;
      }
    }
    else {
      if (param_1 - 0x1fb < 0x10c) {
                    /* WARNING: Could not recover jumptable at 0x02957400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)((ulong)(byte)(&DAT_03a7f41b)[param_1 - 0x1fb] * 4 + 0x2957404))(1);
        return uVar2;
      }
      if (param_1 == 0x1d3) {
        return 1;
      }
      if (param_1 == 0x154) {
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


