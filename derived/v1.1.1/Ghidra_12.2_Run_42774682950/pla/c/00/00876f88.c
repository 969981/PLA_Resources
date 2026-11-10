/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876f88; name: FUN_00876f88
 */


void FUN_00876f88(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 1;
  param_1[1] = param_1[1] | 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}


