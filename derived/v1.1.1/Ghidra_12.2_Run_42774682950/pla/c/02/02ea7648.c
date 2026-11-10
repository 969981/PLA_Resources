/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7648; name: FUN_02ea7648
 */


void FUN_02ea7648(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_02ea7390();
  uVar2 = FUN_02ea7158(param_1 + 0x20,param_2);
  if (((uVar1 & 1) == 0) && ((uVar2 & 1) == 0)) {
    return;
  }
  FUN_02ea7404(param_1);
  return;
}


