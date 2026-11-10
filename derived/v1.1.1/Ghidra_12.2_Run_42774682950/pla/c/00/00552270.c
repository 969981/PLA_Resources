/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00552270; name: FUN_00552270
 */


void FUN_00552270(int *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = 0;
  puVar2 = PTR_FUN_04373078;
  uVar5 = -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2;
  uVar3 = FUN_002e2e80(PTR_FUN_04373078,uVar5);
  *(undefined8 *)(param_1 + 2) = uVar3;
  param_1[4] = param_2;
  lVar4 = FUN_002e2e80(puVar2,uVar5);
  *(long *)(param_1 + 6) = lVar4;
  param_1[8] = param_2;
  if (*param_1 < 0) {
                    /* try { // try from 005522e4 to 00552323 has its CatchHandler @ 00552324 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= size_","external/com_github_google_re2\\re2/sparse_set.h",0xfb,
                  "DebugCheckInvariants");
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = param_2;
  }
  if ((int)uVar1 < *param_1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("size_ <= max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xfc,
                  "DebugCheckInvariants");
  }
  return;
}


