/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0f88; name: FUN_007f0f88
 */


long FUN_007f0f88(long param_1,long param_2)

{
  if (param_1 != param_2) {
    memcpy((void *)(param_1 + 8),(void *)(param_2 + 8),0x10);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  }
  return param_1;
}


