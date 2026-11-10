/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008192a0; name: FUN_008192a0
 */


void FUN_008192a0(long *param_1)

{
  undefined *puVar1;
  
  FUN_007f1dc8();
  puVar1 = PTR_DAT_04377ac8;
  *(undefined4 *)(param_1 + 4) = 0x7c;
  param_1[3] = (long)param_1 + 0x35;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0x35),0,0x200);
  return;
}


