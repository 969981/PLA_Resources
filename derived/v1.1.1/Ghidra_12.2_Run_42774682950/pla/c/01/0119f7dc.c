/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119f7dc; name: FUN_0119f7dc
 */


undefined8 FUN_0119f7dc(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 1;
  if (param_2 < 0x27e) {
    if ((param_2 - 0x12a < 0x10) || (param_2 == 0x1d2)) {
      return uVar1;
    }
  }
  else {
    if ((param_2 - 0x6f1 < 0x34) &&
       ((1L << ((ulong)(param_2 - 0x6f1) & 0x3f) & 0x800000000000fU) != 0)) {
      return uVar1;
    }
    if (param_2 == 0x27e) {
      return uVar1;
    }
    if (param_2 == 0x284) {
      return uVar1;
    }
  }
  return 0;
}


