/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005527e0; name: FUN_005527e0
 */


long FUN_005527e0(uint *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) goto LAB_005528fc;
  lVar4 = *(long *)(param_1 + 6);
  if (lVar4 == 0) {
    if (0 < (int)uVar1) goto LAB_0055291c;
  }
  else if ((int)param_1[8] < (int)uVar1) goto LAB_0055291c;
  if ((lVar4 == 0) || (param_1[8] <= param_3)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"illegal index\"","external/com_github_google_re2\\re2/sparse_set.h",
                  0x92,"InsertInternal");
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,"contains");
  }
  if ((int)param_1[8] <= (int)param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde,
                  "contains");
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 2) + (long)(int)param_3 * 4);
  if (uVar2 < uVar1) {
    bVar3 = *(uint *)(lVar4 + (long)(int)uVar2 * 4) == param_3;
    if ((param_2 & 1) != 0) goto LAB_00552874;
LAB_00552848:
    if (bVar3) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!contains(i)","external/com_github_google_re2\\re2/sparse_set.h",0x99,
                    "InsertInternal");
    }
LAB_00552878:
    FUN_0055297c(param_1,param_3);
  }
  else {
    bVar3 = false;
    if ((param_2 & 1) == 0) goto LAB_00552848;
LAB_00552874:
    if (!bVar3) goto LAB_00552878;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
LAB_005528fc:
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= size_","external/com_github_google_re2\\re2/sparse_set.h",0xfb,
                  "DebugCheckInvariants");
  }
  if (*(long *)(param_1 + 6) == 0) {
    if ((int)uVar1 < 1) goto LAB_005528c0;
  }
  else if ((int)uVar1 <= (int)param_1[8]) {
LAB_005528c0:
    return *(long *)(param_1 + 6) +
           (long)*(int *)(*(long *)(param_1 + 2) + (long)(int)param_3 * 4) * 4;
  }
LAB_0055291c:
                    /* WARNING: Subroutine does not return */
  __assert_fail("size_ <= max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xfc,
                "DebugCheckInvariants");
}


