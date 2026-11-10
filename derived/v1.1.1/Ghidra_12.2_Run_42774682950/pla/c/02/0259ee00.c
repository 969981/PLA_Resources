/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259ee00; name: FUN_0259ee00
 */


void FUN_0259ee00(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1 = param_1 + 0x110;
  uVar1 = FUN_0259e83c();
  uVar2 = FUN_0259ef24(param_1);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      FUN_0259f18c(param_1);
      return;
    }
  }
  else if ((uVar2 & 1) == 0) {
    FUN_0259f06c(param_1);
    return;
  }
  return;
}


