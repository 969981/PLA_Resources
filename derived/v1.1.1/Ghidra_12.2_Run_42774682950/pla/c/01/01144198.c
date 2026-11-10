/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01144198; name: FUN_01144198
 */


void FUN_01144198(undefined8 *param_1,undefined8 param_2)

{
  FUN_011441d8();
  *param_1 = &PTR_LAB_041f2ac8;
  param_1[9] = &PTR_LAB_041f2af8;
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}


