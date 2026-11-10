/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d8798; name: FUN_017d8798
 */


void FUN_017d8798(undefined8 *param_1,long param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_017dc804(param_1,param_2 + 0xb0);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_017dc594(param_1,param_2 + 0xd0);
  return;
}


