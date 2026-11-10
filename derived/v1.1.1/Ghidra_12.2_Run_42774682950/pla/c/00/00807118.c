/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00807118; name: FUN_00807118
 */


void FUN_00807118(long *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0x5c;
  puVar1 = PTR_DAT_043775f0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e8190(param_1 + 4);
  memset((void *)((long)param_1 + 0xe),0,0x10);
  return;
}


