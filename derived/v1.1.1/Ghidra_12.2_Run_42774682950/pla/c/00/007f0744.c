/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0744; name: FUN_007f0744
 */


void FUN_007f0744(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x32ab9864;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xb;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  memset((void *)(param_1 + 0x15),0,8);
  memset((void *)(param_1 + 0x1d),0,0x10);
  *(undefined4 *)(param_1 + 0x5f8) = 0x1c;
  memset((void *)(param_1 + 0x5fc),0,4);
  FUN_007f0d34(param_1 + 0x600);
  *(undefined1 *)(param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0x620) = 0x1000000;
  FUN_007f0d34(param_1 + 0x628);
  *(undefined1 *)(param_1 + 0x648) = 0;
  return;
}


