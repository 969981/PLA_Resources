/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096b564; name: FUN_0096b564
 */


void FUN_0096b564(undefined8 param_1)

{
  ulong uVar1;
  
  FUN_0096b5a8(param_1,0);
  uVar1 = FUN_0096b898(param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0096b5a8(param_1,1);
  return;
}


