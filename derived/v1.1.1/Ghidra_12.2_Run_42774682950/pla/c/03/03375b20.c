/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03375b20; name: FUN_03375b20
 */


void FUN_03375b20(undefined8 *param_1)

{
  FUN_032d57c0(param_1,0xffffffff,0x34);
  param_1[2] = 0x100000000;
  param_1[3] = 0x100000000;
  *param_1 = 0x100000004;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[4] = 0x100000001;
  param_1[5] = 0;
  return;
}


