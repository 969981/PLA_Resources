/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005570c0; name: FUN_005570c0
 */


void FUN_005570c0(uint *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= size_","external/com_github_google_re2\\re2/sparse_array.h",0x17c,
                  "DebugCheckInvariants");
  }
  lVar4 = *(long *)(param_1 + 6);
  if (lVar4 == 0) {
    if (0 < (int)uVar1) goto LAB_00557190;
  }
  else if ((int)param_1[8] < (int)uVar1) {
LAB_00557190:
                    /* WARNING: Subroutine does not return */
    __assert_fail("size_ <= max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x17d,
                  "DebugCheckInvariants");
  }
  if (lVar4 == 0) {
LAB_005571b0:
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"illegal index\"","external/com_github_google_re2\\re2/sparse_array.h",
                  0xd5,"SetInternal");
  }
  if (param_1[8] <= param_3) goto LAB_005571b0;
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i >= 0","external/com_github_google_re2\\re2/sparse_array.h",0x15e,"has_index");
  }
  if ((int)param_1[8] <= (int)param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x15f,
                  "has_index");
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 2) + (long)(int)param_3 * 4);
  if (uVar2 < uVar1) {
    bVar3 = *(uint *)(lVar4 + (long)(int)uVar2 * 8) == param_3;
    if ((param_2 & 1) == 0) goto LAB_00557130;
LAB_0055715c:
    if (bVar3) goto LAB_0055716c;
  }
  else {
    bVar3 = false;
    if ((param_2 & 1) != 0) goto LAB_0055715c;
LAB_00557130:
    if (bVar3) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("!has_index(i)","external/com_github_google_re2\\re2/sparse_array.h",0xdc,
                    "SetInternal");
    }
  }
  FUN_00557230(param_1,param_3);
LAB_0055716c:
  FUN_00557340(param_1,param_3,param_4);
  return;
}


