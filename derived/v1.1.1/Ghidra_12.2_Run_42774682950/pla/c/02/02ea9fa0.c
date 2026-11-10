/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9fa0; name: FUN_02ea9fa0
 */


undefined8 FUN_02ea9fa0(long param_1)

{
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_02ea9e78(param_1,1,0,4);
  }
  return 1;
}


