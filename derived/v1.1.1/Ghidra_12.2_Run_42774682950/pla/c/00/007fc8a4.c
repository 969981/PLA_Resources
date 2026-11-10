/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fc8a4; name: FUN_007fc8a4
 */


void FUN_007fc8a4(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x234) = *param_2;
  memcpy((void *)(param_1 + 0x238),param_2 + 1,0x10);
  *(undefined1 *)(param_1 + 0x230) = 1;
  return;
}


