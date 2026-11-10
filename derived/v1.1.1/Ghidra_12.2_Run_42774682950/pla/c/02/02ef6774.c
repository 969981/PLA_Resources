/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6774; name: FUN_02ef6774
 */


void FUN_02ef6774(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_LAB_042ab6f0;
  param_1[1] = 0;
  puVar1 = PTR_DAT_043885e8;
  lVar3 = *(long *)(PTR_DAT_043885e8 + 8);
  param_1[2] = 0;
  param_1[3] = lVar3;
  plVar2 = (long *)(puVar1 + 0x10);
  if (*plVar2 != 0) {
    plVar2 = (long *)(lVar3 + 0x10);
  }
  *plVar2 = (long)param_1;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  *(undefined8 **)(puVar1 + 8) = param_1;
  *param_1 = &PTR_FUN_042ab6c8;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x18] = 0xffffffffffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0xcc) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x15] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  lVar3 = (*DAT_0442d138)(0,0x340);
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    *(undefined4 *)((long)param_1 + 0x2c) = 8;
  }
  lVar3 = (*DAT_0442d138)(0,0xd0);
  param_1[6] = lVar3;
  if (lVar3 != 0) {
    *(undefined4 *)((long)param_1 + 0x3c) = 2;
  }
  lVar3 = (*DAT_0442d138)(0,0x68);
  param_1[10] = lVar3;
  if (lVar3 != 0) {
    *(undefined4 *)((long)param_1 + 0x5c) = 1;
  }
  return;
}


