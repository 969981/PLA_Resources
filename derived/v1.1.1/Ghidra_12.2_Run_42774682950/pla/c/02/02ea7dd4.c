/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7dd4; name: FUN_02ea7dd4
 */


void FUN_02ea7dd4(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)((long)param_1 + 0x12) = *(byte *)((long)param_1 + 0x12) & 0xfc;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


