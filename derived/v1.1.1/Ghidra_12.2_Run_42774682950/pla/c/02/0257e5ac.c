/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257e5ac; name: FUN_0257e5ac
 */


void FUN_0257e5ac(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xbe];
  *param_1 = &PTR_FUN_0425d908;
  param_1[9] = &PTR_LAB_0425d9a8;
  param_1[10] = &PTR_LAB_0425d9f0;
  param_1[0xbe] = 0;
  if (lVar1 != 0) {
    FUN_0257f108(param_1 + 0xbf);
  }
  lVar1 = param_1[0xba];
  param_1[0xba] = 0;
  if (lVar1 != 0) {
    FUN_0257ec14(param_1 + 0xbb);
  }
  lVar1 = param_1[0xb6];
  param_1[0xb6] = 0;
  if (lVar1 != 0) {
    FUN_0257e890(param_1 + 0xb7);
  }
  FUN_00d415d4(param_1);
  return;
}


