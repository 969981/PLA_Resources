/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e206c0; name: FUN_02e206c0
 */


void FUN_02e206c0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_042a5418;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (param_1[5] != 0) {
      FUN_02e22b4c();
      lVar1 = param_1[4];
    }
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
  }
  return;
}


