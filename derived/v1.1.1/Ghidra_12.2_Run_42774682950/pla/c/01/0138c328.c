/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0138c328; name: FUN_0138c328
 */


void FUN_0138c328(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xb8];
  *param_1 = &PTR_FUN_04208510;
  param_1[9] = &PTR_LAB_042085c0;
  param_1[10] = &PTR_LAB_04208608;
  param_1[0xb8] = 0;
  if (lVar1 != 0) {
    FUN_0137734c(param_1 + 0xb9);
  }
  FUN_00d415d4(param_1);
  return;
}


