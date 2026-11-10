/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f065c; name: FUN_007f065c
 */


void FUN_007f065c(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_04377528;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  memset((void *)((long)param_1 + 0x5fc),0,4);
  FUN_007f0ce0(param_1 + 0xc0);
  FUN_007f0ce0(param_1 + 0xc5);
  *(undefined4 *)(param_1 + 1) = 0x32ab9864;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0xb;
  *(undefined4 *)((long)param_1 + 0xe) = 0;
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  memset((void *)((long)param_1 + 0x15),0,8);
  memset((void *)((long)param_1 + 0x1d),0,0x10);
  *(undefined4 *)(param_1 + 0xbf) = 0x1c;
  memset((void *)((long)param_1 + 0x5fc),0,4);
  FUN_007f0d34(param_1 + 0xc0);
  *(undefined1 *)((long)param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x1000000;
  FUN_007f0d34(param_1 + 0xc5);
  *(undefined1 *)(param_1 + 0xc9) = 0;
  return;
}


