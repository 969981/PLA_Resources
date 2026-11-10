/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00453060; name: FUN_00453060
 */


undefined4 FUN_00453060(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x400) {
    return 2;
  }
  if (param_1 < 0x1000) {
    return 3;
  }
  uVar1 = 4;
  if (0x1fff < param_1) {
    uVar1 = 5;
  }
  return uVar1;
}


