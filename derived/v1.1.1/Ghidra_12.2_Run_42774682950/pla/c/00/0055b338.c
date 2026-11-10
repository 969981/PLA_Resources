/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055b338; name: FUN_0055b338
 */


void FUN_0055b338(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *param_1 = param_2;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
                    /* try { // try from 0055b3ac to 0055b3c3 has its CatchHandler @ 0055b420 */
  FUN_0055b45c(param_1 + 5,*(undefined4 *)(param_2 + 0x10));
  FUN_0055b45c(param_1 + 10,*(undefined4 *)(*param_1 + 0x10));
  lVar3 = *param_1;
  uVar1 = *(int *)(lVar3 + 0x3c) + *(int *)(lVar3 + 0x38) * 2 + *(int *)(lVar3 + 0x44) + 1;
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,
                       -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4);
  lVar2 = param_1[0xf];
  param_1[0xf] = lVar3;
  if (lVar2 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}


