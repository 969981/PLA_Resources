/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03260e80; name: FUN_03260e80
 */


void FUN_03260e80(long param_1)

{
  uint uVar1;
  
  if (1 < (int)*(uint *)(param_1 + 8)) {
    uVar1 = *(uint *)(param_1 + 8) >> 1;
    do {
      FUN_03260d04(param_1,uVar1);
      uVar1 = uVar1 - 1;
    } while (0 < (int)uVar1);
  }
  return;
}


