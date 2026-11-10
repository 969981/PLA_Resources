/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a53048; name: FUN_01a53048
 */


void FUN_01a53048(long param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_008c4b3c(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xa8) = param_3[1];
  *(undefined8 *)(param_1 + 0xa0) = *param_3;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  FUN_02dddd6c(param_1,3);
  return;
}


