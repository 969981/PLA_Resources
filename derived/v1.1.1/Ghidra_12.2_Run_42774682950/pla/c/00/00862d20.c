/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00862d20; name: FUN_00862d20
 */


void FUN_00862d20(long *param_1)

{
  undefined *puVar1;
  
  FUN_00800008();
  puVar1 = PTR_DAT_04378218;
  param_1[0x1a] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007f2a34(param_1 + 0x1b);
  param_1[0x1b] = (long)(PTR_DAT_04378220 + 0x10);
  FUN_0085eab0(param_1 + 0x1f);
  param_1[0x9c] = 0;
  param_1[0x1c] = (long)(param_1 + 0x1f);
  FUN_008630f0(param_1 + 0x9d);
  return;
}


