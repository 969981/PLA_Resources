/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00593150; name: FUN_00593150
 */


void FUN_00593150(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  FUN_00594320(param_1[1]);
  FUN_00305020(param_1 + 2);
  free((void *)param_1[0x27]);
  free((void *)param_1[0x2a]);
  free(param_1);
  return;
}


