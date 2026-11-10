/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00862134; name: FUN_00862134
 */


void FUN_00862134(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_043781a0;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e3400(param_1 + 4);
  FUN_007e3400(param_1 + 8);
  param_1[0xc] = 0;
  memset(param_1 + 0xd,0,3);
  return;
}


