/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876cd4; name: FUN_00876cd4
 */


void FUN_00876cd4(undefined2 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0x3f80000000000000;
  param_1[1] = param_1[1] & 0xfff0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0x500;
  return;
}


