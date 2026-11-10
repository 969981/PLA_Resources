/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d721d8; name: FUN_00d721d8
 */


void FUN_00d721d8(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x5b4) = param_2;
  *(undefined4 *)(param_1 + 0x5b0) = param_2;
  *(undefined4 *)(param_1 + 0x5b8) = param_3;
  FUN_00d72228();
  if (*(char *)(param_1 + 0x5ab) == '\0') {
    return;
  }
  FUN_00d72680(param_1,*(int *)(param_1 + 0x5b8) - *(int *)(param_1 + 0x5b4));
  return;
}


