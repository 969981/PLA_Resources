/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055297c; name: FUN_0055297c
 */


void FUN_0055297c(uint *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_set.h",0xdd,"contains");
  }
  lVar2 = *(long *)(param_1 + 6);
  if (lVar2 == 0) {
    if (param_2 < 0x80000000) goto LAB_005529f4;
  }
  else if ((int)param_1[8] <= (int)param_2) {
LAB_005529f4:
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xde,
                  "contains");
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[8];
    if (((param_2 < uVar3) &&
        (uVar1 = *(uint *)(*(long *)(param_1 + 2) + (long)(int)param_2 * 4), uVar1 < *param_1)) &&
       (*(uint *)(lVar2 + (long)(int)uVar1 * 4) == param_2)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!contains(i)","external/com_github_google_re2\\re2/sparse_set.h",0xe9,
                    "create_index");
    }
  }
  if ((int)uVar3 <= (int)*param_1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("size_ < max_size()","external/com_github_google_re2\\re2/sparse_set.h",0xea,
                  "create_index");
  }
  *(uint *)(*(long *)(param_1 + 2) + (long)(int)param_2 * 4) = *param_1;
  *(uint *)(lVar2 + (long)(int)*param_1 * 4) = param_2;
  *param_1 = *param_1 + 1;
  return;
}


