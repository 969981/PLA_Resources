/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008093a4; name: FUN_008093a4
 */


void FUN_008093a4(long *param_1)

{
  undefined *puVar1;
  
  FUN_007f1dc8();
  puVar1 = PTR_DAT_04377900;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((long)param_1 + 0x202) = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0x5c;
  param_1[3] = (long)param_1 + 0x81;
  memset((void *)((long)param_1 + 0x81),0,0x180);
  memset(param_1 + 8,0,0x40);
  return;
}


