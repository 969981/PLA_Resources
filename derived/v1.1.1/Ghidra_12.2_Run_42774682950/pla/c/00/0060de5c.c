/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060de5c; name: FUN_0060de5c
 */


void FUN_0060de5c(long *param_1,undefined2 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 4;
  puVar1 = PTR_DAT_04375380;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


