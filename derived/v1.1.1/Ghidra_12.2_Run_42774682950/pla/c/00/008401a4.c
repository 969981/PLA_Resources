/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008401a4; name: FUN_008401a4
 */


void FUN_008401a4(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_007ecf14(param_1 + 8);
  memset(*(void **)(param_1 + 0x18),0,(ulong)*(uint *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x5e8) = 0xffff;
  *(undefined2 *)(param_1 + 0x5ec) = 0;
  memset((void *)(param_1 + 0x5f0),0,4);
  *(undefined1 *)(param_1 + 0x5f4) = 0;
  return;
}


