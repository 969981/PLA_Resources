/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023a1b8; name: FUN_0023a1b8
 */


void FUN_0023a1b8(long *param_1)

{
  undefined *puVar1;
  
  FUN_00239358();
  puVar1 = PTR_DAT_04372c80;
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}


