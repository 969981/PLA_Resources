/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056a6c4; name: FUN_0056a6c4
 */


void FUN_0056a6c4(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  int iVar6;
  
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  puVar1 = PTR_DAT_04374da0 + 0x10;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *param_1 = (long)puVar1;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x14] = 0;
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x1a8);
  if (lVar5 != 0) {
                    /* try { // try from 0056a730 to 0056a737 has its CatchHandler @ 0056a814 */
    FUN_00552c48(lVar5);
  }
  lVar4 = DAT_0388a620;
  uVar2 = *(uint *)(param_1 + 0xc);
  iVar6 = 1;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  param_1[8] = lVar5;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = lVar4;
  if ((int)uVar2 < 1) {
    uVar3 = 8;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 << 1;
    } while ((int)uVar2 < 1);
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                  -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
    if ((void *)param_1[0xb] != (void *)0x0) {
      memmove(__dest,(void *)param_1[0xb],(long)(int)param_1[0xd] << 3);
    }
    uVar3 = uVar2 - (int)param_1[0xd];
    memset((void *)((long)__dest + (long)(int)param_1[0xd] * 8),0,
           -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
    lVar5 = param_1[0xb];
    param_1[0xb] = (long)__dest;
    if (lVar5 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    lVar5 = (long)(int)param_1[0xd];
    iVar6 = (int)param_1[0xd] + 1;
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  else {
    lVar5 = 0;
  }
  *(int *)(param_1 + 0xd) = iVar6;
                    /* try { // try from 0056a7fc to 0056a7ff has its CatchHandler @ 0056a828 */
  FUN_00552c0c(param_1[0xb] + lVar5 * 8);
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  return;
}


