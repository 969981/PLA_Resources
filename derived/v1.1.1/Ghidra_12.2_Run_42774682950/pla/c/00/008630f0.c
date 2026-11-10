/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008630f0; name: FUN_008630f0
 */


void FUN_008630f0(long *param_1)

{
  undefined *puVar1;
  
  FUN_007f2924();
  puVar1 = PTR_DAT_04378228;
  param_1[2] = (long)param_1 + 0x1c;
  *(undefined4 *)(param_1 + 3) = 0x5c;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0x1c),0,0x200);
  return;
}


