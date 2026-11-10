/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00809444; name: FUN_00809444
 */


void FUN_00809444(long param_1)

{
  FUN_007f1e08();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  memset((void *)(param_1 + 0x40),0,0x40);
  *(undefined4 *)(param_1 + 0x20) = 0x5c;
  *(undefined2 *)(param_1 + 0x202) = 0;
  return;
}


