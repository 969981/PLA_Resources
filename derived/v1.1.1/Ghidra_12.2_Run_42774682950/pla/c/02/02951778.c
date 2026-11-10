/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951778; name: FUN_02951778
 */


undefined4 FUN_02951778(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 4;
  }
  if (*(int *)(param_1 + 0x300) == param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x31c) == param_2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x338) == param_2) {
    return 2;
  }
  uVar1 = 3;
  if (*(int *)(param_1 + 0x354) != param_2) {
    uVar1 = 4;
  }
  return uVar1;
}


