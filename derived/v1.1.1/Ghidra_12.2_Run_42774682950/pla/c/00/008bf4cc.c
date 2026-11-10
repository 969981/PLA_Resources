/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bf4cc; name: FUN_008bf4cc
 */


void FUN_008bf4cc(undefined8 *param_1,undefined1 *param_2)

{
  FUN_008b2820(param_1,3);
  *param_1 = &PTR_LAB_041b6448;
  param_1[9] = &PTR_LAB_041b64b0;
  param_1[10] = &PTR_LAB_041b64f8;
  *(undefined1 *)((long)param_1 + 0x7b) = *param_2;
  *(undefined2 *)((long)param_1 + 0x7c) = 0x1f;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


