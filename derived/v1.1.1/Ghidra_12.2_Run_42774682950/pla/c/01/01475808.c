/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01475808; name: FUN_01475808
 */


void FUN_01475808(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xb6];
  *param_1 = &PTR_FUN_04211fa8;
  param_1[9] = &PTR_LAB_04212048;
  param_1[10] = &PTR_LAB_04212090;
  param_1[0xb6] = 0;
  if (lVar1 != 0) {
    FUN_01475d2c(param_1 + 0xb7);
  }
  FUN_00d415d4(param_1);
  return;
}


