/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00832228; name: FUN_00832228
 */


void FUN_00832228(long *param_1,byte param_2)

{
  undefined *puVar1;
  
  FUN_00845e6c();
  puVar1 = PTR_DAT_04377e20;
  *(byte *)((long)param_1 + 0x7e3) = param_2 & 1;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0xfc) = 0xfdfd;
  return;
}


