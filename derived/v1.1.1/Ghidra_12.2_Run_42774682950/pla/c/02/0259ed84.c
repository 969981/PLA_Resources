/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259ed84; name: FUN_0259ed84
 */


void FUN_0259ed84(long param_1)

{
  ulong uVar1;
  
  FUN_0259d910();
  uVar1 = FUN_0259ef24(param_1 + 0xd0);
  if ((uVar1 & 1) == 0) {
    FUN_0259f06c(param_1 + 0xd0);
  }
  uVar1 = FUN_0259ef24(param_1 + 0xf0);
  if ((uVar1 & 1) == 0) {
    FUN_0259f06c(param_1 + 0xf0);
  }
  uVar1 = FUN_0259e83c(param_1);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0259ef24(param_1 + 0x110);
    if ((uVar1 & 1) == 0) {
      FUN_0259f06c(param_1 + 0x110);
      return;
    }
  }
  return;
}


