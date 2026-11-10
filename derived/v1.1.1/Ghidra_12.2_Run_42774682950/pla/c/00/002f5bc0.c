/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f5bc0; name: FUN_002f5bc0
 */


void FUN_002f5bc0(undefined8 *param_1)

{
  long lVar1;
  
  FUN_002ef750(&DAT_0438f800);
  lVar1 = param_1[1];
  *(undefined8 *)(lVar1 + 0x10) = param_1[2];
  *(long *)(param_1[2] + 8) = lVar1;
  FUN_002ef970(&DAT_0438f820);
  FUN_002ef790(&DAT_0438f800);
  free((void *)*param_1);
  return;
}


