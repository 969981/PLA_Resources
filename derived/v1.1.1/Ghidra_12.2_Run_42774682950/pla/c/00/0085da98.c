/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085da98; name: FUN_0085da98
 */


void FUN_0085da98(int *param_1,long param_2,undefined8 param_3)

{
  FUN_0085dd5c(*(undefined8 *)(param_2 + 0x1398));
  if (*param_1 == 0) {
    *(undefined8 *)(param_2 + 0x13a0) = param_3;
    FUN_007e5e70(*(undefined8 *)(param_2 + 0x1398),0);
    return;
  }
  return;
}


