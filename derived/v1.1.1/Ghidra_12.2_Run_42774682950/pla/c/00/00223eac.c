/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223eac; name: FUN_00223eac
 */


void FUN_00223eac(long param_1)

{
  FUN_0021bc1c();
  *(undefined8 *)(param_1 + 0x3c) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 4;
  *(undefined **)(param_1 + 0x58) = PTR_DAT_04372930;
  *(undefined4 *)(param_1 + 0x60) = 0x1000000;
  return;
}


