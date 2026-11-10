/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00230150; name: FUN_00230150
 */


void FUN_00230150(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372a80 + 0x10;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)(param_1 + 3);
  param_1[4] = (long)(param_1 + 3);
  param_1[5] = (long)&DAT_03996322;
  return;
}


