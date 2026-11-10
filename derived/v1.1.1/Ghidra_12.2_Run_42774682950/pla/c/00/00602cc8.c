/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00602cc8; name: FUN_00602cc8
 */


void FUN_00602cc8(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_043751d0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


