/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e765c; name: FUN_007e765c
 */


void FUN_007e765c(int *param_1,void *param_2)

{
  if (*param_1 != 5) {
    FUN_007e76a0(param_1);
    *param_1 = 5;
  }
  memcpy(param_2,param_1 + 6,0x10);
  return;
}


