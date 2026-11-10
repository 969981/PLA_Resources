/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ed880; name: FUN_002ed880
 */


void FUN_002ed880(long param_1,undefined1 *param_2)

{
  if (param_1 < 0) {
    *param_2 = 0x2d;
    FUN_002ed6c0(-param_1,param_2 + 1);
    return;
  }
  FUN_002ed6c0();
  return;
}


