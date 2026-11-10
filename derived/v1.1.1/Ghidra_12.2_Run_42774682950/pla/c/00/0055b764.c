/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055b764; name: FUN_0055b764
 */


void FUN_0055b764(int *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_1;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= size_","external/com_github_google_re2\\re2/sparse_array.h",0x17c,
                  "DebugCheckInvariants");
  }
  lVar2 = *(long *)(param_1 + 6);
  if (lVar2 == 0) {
    if (0 < iVar1) goto LAB_0055b7cc;
  }
  else if (param_1[8] < iVar1) {
LAB_0055b7cc:
                    /* try { // try from 0055b7cc to 0055b817 has its CatchHandler @ 0055b818 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("size_ <= max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x17d,
                  "DebugCheckInvariants");
  }
  param_1[6] = 0;
  param_1[7] = 0;
  if (lVar2 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  lVar2 = *(long *)(param_1 + 2);
  param_1[2] = 0;
  param_1[3] = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


