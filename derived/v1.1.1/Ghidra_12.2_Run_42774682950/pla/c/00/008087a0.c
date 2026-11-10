/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008087a0; name: FUN_008087a0
 */


void FUN_008087a0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_043778d8;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 10) = 0;
  FUN_007f0ce0(param_1 + 2);
  return;
}


