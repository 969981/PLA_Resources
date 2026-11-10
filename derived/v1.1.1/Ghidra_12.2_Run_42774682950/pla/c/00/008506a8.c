/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008506a8; name: FUN_008506a8
 */


void FUN_008506a8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04378060;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  param_1[2] = 0;
  return;
}


