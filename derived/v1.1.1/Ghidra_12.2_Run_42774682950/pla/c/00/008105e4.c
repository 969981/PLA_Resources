/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008105e4; name: FUN_008105e4
 */


void FUN_008105e4(long *param_1)

{
  undefined *puVar1;
  
  FUN_00808f88();
  puVar1 = PTR_DAT_043779c0;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_008109e4(param_1 + 2);
  return;
}


