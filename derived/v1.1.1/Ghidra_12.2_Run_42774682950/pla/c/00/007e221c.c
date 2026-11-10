/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e221c; name: FUN_007e221c
 */


void FUN_007e221c(long *param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 0xc) = 0;
  puVar1 = PTR_DAT_043773c8;
  param_1[0xe] = -1;
  param_1[0xf] = -1;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  thunk_FUN_00847210();
  operator_delete(param_1);
  return;
}


