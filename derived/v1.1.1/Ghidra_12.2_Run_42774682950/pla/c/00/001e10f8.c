/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e10f8; name: FUN_001e10f8
 */


void FUN_001e10f8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  param_1[2] = lVar1 + -1;
  if (lVar1 + -1 == 0) {
    FUN_001dffa4(*param_1);
    FUN_002044d4(param_1);
    return;
  }
  return;
}


