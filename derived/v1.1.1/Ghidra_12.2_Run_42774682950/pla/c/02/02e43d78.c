/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e43d78; name: FUN_02e43d78
 */


void FUN_02e43d78(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_042a5cf0;
  param_1[1] = 0;
  puVar2 = PTR_DAT_043885c8;
  lVar3 = *(long *)(PTR_DAT_043885c8 + 8);
  param_1[2] = 0;
  param_1[3] = lVar3;
  plVar1 = (long *)(puVar2 + 0x10);
  if (*(long *)(puVar2 + 0x10) != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  *(undefined8 **)(puVar2 + 8) = param_1;
  *(int *)puVar2 = *(int *)puVar2 + 1;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_042a5cc8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}


