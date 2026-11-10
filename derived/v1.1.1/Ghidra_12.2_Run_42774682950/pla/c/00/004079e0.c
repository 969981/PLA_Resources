/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004079e0; name: FUN_004079e0
 */


void FUN_004079e0(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1[4] == 0)) &&
     (*(__compar_fn_t *)(param_1 + 6) != (__compar_fn_t)0x0)) {
    if (1 < *param_1) {
      qsort(*(void **)(param_1 + 2),(long)*param_1,8,*(__compar_fn_t *)(param_1 + 6));
    }
    param_1[4] = 1;
  }
  return;
}


