/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00557340; name: FUN_00557340
 */


long FUN_00557340(uint *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= size_","external/com_github_google_re2\\re2/sparse_array.h",0x17c,
                  "DebugCheckInvariants");
  }
  lVar4 = *(long *)(param_1 + 6);
  if (lVar4 == 0) {
    if (0 < (int)uVar1) goto LAB_005573d8;
  }
  else if ((int)param_1[8] < (int)uVar1) goto LAB_005573d8;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_array.h",0x15e,"has_index");
  }
  if (lVar4 == 0) {
    if (param_2 < 0x80000000) goto LAB_00557404;
  }
  else if ((int)param_1[8] <= (int)param_2) {
LAB_00557404:
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x15f,
                  "has_index");
  }
  if ((lVar4 != 0) && (uVar2 = param_1[8], param_2 < uVar2)) {
    lVar5 = *(long *)(param_1 + 2);
    uVar3 = *(uint *)(lVar5 + (long)(int)param_2 * 4);
    if ((uVar3 < uVar1) && (*(uint *)(lVar4 + (long)(int)uVar3 * 8) == param_2)) {
      *(undefined4 *)(lVar4 + (long)(int)uVar3 * 8 + 4) = *param_3;
      if ((int)uVar1 <= (int)uVar2) {
        return lVar4 + (long)*(int *)(lVar5 + (long)(int)param_2 * 4) * 8;
      }
LAB_005573d8:
                    /* WARNING: Subroutine does not return */
      __assert_fail("size_ <= max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x17d
                    ,"DebugCheckInvariants");
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("has_index(i)","external/com_github_google_re2\\re2/sparse_array.h",0xe7,
                "SetExistingInternal");
}


