/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ec320; name: FUN_003ec320
 */


void FUN_003ec320(undefined8 *param_1)

{
  ulong uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  free((void *)*param_1);
  free((void *)param_1[1]);
  free((void *)param_1[2]);
  free((void *)param_1[3]);
  if (param_1[5] != 0) {
    uVar1 = 0;
    do {
      free(*(void **)(param_1[4] + uVar1 * 8));
      free(*(void **)(param_1[6] + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulong)param_1[5]);
  }
  free((void *)param_1[4]);
  free((void *)param_1[6]);
  free((void *)param_1[7]);
  free(param_1);
  return;
}


