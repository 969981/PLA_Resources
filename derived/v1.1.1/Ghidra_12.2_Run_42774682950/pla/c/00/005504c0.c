/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005504c0; name: FUN_005504c0
 */


void FUN_005504c0(int *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = 0;
  puVar2 = PTR_FUN_04373078;
  uVar3 = FUN_002e2e80(PTR_FUN_04373078,
                       -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2);
  *(undefined8 *)(param_1 + 2) = uVar3;
  param_1[4] = param_2;
  lVar4 = FUN_002e2e80(puVar2,-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3);
  *(long *)(param_1 + 6) = lVar4;
  param_1[8] = param_2;
  if (*param_1 < 0) {
                    /* try { // try from 00550528 to 00550567 has its CatchHandler @ 00550568 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= size_","external/com_github_google_re2\\re2/sparse_array.h",0x17c,
                  "DebugCheckInvariants");
  }
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = param_2;
  }
  if ((int)uVar1 < *param_1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("size_ <= max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x17d,
                  "DebugCheckInvariants");
  }
  return;
}


