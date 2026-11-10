/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03267754; name: FUN_03267754
 */


void FUN_03267754(undefined8 *param_1)

{
  *param_1 = 0x3f80000040a00000;
  *(undefined4 *)(param_1 + 1) = 0x3dcccccd;
  *(undefined2 *)((long)param_1 + 0xc) = 0x100;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  return;
}


