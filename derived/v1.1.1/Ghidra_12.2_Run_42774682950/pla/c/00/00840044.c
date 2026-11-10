/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840044; name: FUN_00840044
 */


void FUN_00840044(long *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_04377f88;
  *(undefined4 *)(param_1 + 0xbd) = 0xffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)((long)param_1 + 0x5ec) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  memset(param_1 + 0xbe,0,4);
  *(undefined1 *)((long)param_1 + 0x5f4) = 0;
  return;
}


