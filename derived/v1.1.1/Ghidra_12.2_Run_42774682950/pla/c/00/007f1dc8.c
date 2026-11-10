/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f1dc8; name: FUN_007f1dc8
 */


void FUN_007f1dc8(long *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 2) = 0xffff;
  puVar1 = PTR_DAT_04377548;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = -1;
  memset((void *)((long)param_1 + 0x25),0,0x10);
  return;
}


