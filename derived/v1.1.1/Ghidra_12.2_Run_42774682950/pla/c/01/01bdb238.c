/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bdb238; name: FUN_01bdb238
 */


void FUN_01bdb238(long param_1)

{
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x224) = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x230) = 1;
  FUN_01bdb280(0x3f800000);
  FUN_01bdb4e8(param_1);
  return;
}


