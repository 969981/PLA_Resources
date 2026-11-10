/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00557484; name: FUN_00557484
 */


void FUN_00557484(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  iVar3 = pthread_rwlock_init((pthread_rwlock_t *)(param_1 + 2),(pthread_rwlockattr_t *)0x0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xb] = 0;
                    /* try { // try from 005574d4 to 005574df has its CatchHandler @ 005576c0 */
  iVar3 = pthread_rwlock_init((pthread_rwlock_t *)(param_1 + 0xd),(pthread_rwlockattr_t *)0x0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00557658 to 0055765b has its CatchHandler @ 005576c0 */
    abort();
  }
  param_1[0x14] = param_4;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  lVar5 = *param_1;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  iVar2 = *(int *)(lVar5 + 0x10);
  iVar3 = iVar2;
  if ((int)param_1[1] != 1) {
    iVar3 = 0;
  }
  uVar1 = iVar3 + *(int *)(lVar5 + 0x38) + *(int *)(lVar5 + 0x3c) + *(int *)(lVar5 + 0x44) + 1;
  uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  lVar4 = ((param_4 + (long)(iVar2 + iVar3) * -0x10) - uVar6) + -0x118;
  param_1[0x14] = lVar4;
  if ((lVar4 < 0) ||
     (param_1[0x15] = lVar4,
     lVar4 < ((long)*(int *)(lVar5 + 0x14) * 8 + (long)(*(int *)(lVar5 + 0x28) + iVar3) * 4) * 0x14
             + 0x1e0)) {
    *(undefined1 *)((long)param_1 + 0xc) = 1;
    return;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x38);
  if (lVar5 != 0) {
                    /* try { // try from 005575ac to 005575b7 has its CatchHandler @ 0055766c */
    FUN_00552270(lVar5,iVar2 + iVar3);
    *(int *)(lVar5 + 0x28) = iVar2;
    *(int *)(lVar5 + 0x2c) = iVar3;
    *(int *)(lVar5 + 0x30) = iVar2;
    *(undefined1 *)(lVar5 + 0x34) = 1;
  }
  param_1[9] = lVar5;
  iVar2 = *(int *)(*param_1 + 0x10);
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x38);
  if (lVar5 != 0) {
                    /* try { // try from 005575f0 to 005575f7 has its CatchHandler @ 0055765c */
    FUN_00552270(lVar5,iVar2 + iVar3);
    *(int *)(lVar5 + 0x28) = iVar2;
    *(int *)(lVar5 + 0x2c) = iVar3;
    *(int *)(lVar5 + 0x30) = iVar2;
    *(undefined1 *)(lVar5 + 0x34) = 1;
  }
  param_1[10] = lVar5;
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar6);
  lVar4 = param_1[0xb];
  param_1[0xb] = lVar5;
  if (lVar4 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  *(uint *)(param_1 + 0xc) = uVar1;
  return;
}


