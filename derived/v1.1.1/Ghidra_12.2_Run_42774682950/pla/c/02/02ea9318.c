/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9318; name: FUN_02ea9318
 */


void FUN_02ea9318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042a9030;
  if (param_1[7] != 0) {
    (*DAT_0442d150)(1);
  }
  param_1[7] = 0;
  if (param_1[6] != 0) {
    (*DAT_0442d150)(1);
  }
  param_1[6] = 0;
  FUN_02ea852c(param_1 + 3);
  FUN_02eb2770(param_1);
  return;
}


