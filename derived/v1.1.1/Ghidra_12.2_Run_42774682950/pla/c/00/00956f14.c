/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00956f14; name: FUN_00956f14
 */


bool FUN_00956f14(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      uVar1 = *(uint *)(param_1 + 0xf8);
    }
    else {
      uVar1 = (uint)*(byte *)(param_1 + 0x102);
    }
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0x101);
  }
  return uVar1 != 0;
}


