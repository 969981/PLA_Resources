/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055b45c; name: FUN_0055b45c
 */


void FUN_0055b45c(uint *param_1,uint param_2)

{
  undefined *puVar1;
  void *__dest;
  void *__dest_00;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_FUN_04373078;
  uVar2 = *param_1;
  if ((int)uVar2 < 0) goto LAB_0055b59c;
  lVar4 = *(long *)(param_1 + 6);
  if (lVar4 == 0) {
    if (0 < (int)uVar2) goto LAB_0055b5d0;
  }
  else if ((int)param_1[8] < (int)uVar2) goto LAB_0055b5d0;
  if (lVar4 == 0) {
    if (0 < (int)param_2) goto LAB_0055b4a0;
  }
  else if ((int)param_1[8] < (int)param_2) {
LAB_0055b4a0:
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)param_1[8];
    }
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                  -(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)param_2 << 2);
    __dest_00 = (void *)FUN_002e2e80(puVar1,-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 |
                                            (ulong)param_2 << 4);
    if ((int)uVar5 == 0) {
      lVar4 = *(long *)(param_1 + 2);
      *(void **)(param_1 + 2) = __dest;
    }
    else {
      memmove(__dest,*(void **)(param_1 + 2),-(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2);
      memmove(__dest_00,*(void **)(param_1 + 6),-(uVar5 >> 0x1f) & 0xfffffff000000000 | uVar5 << 4);
      lVar4 = *(long *)(param_1 + 2);
      *(void **)(param_1 + 2) = __dest;
    }
    if (lVar4 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    lVar4 = *(long *)(param_1 + 6);
    param_1[4] = param_2;
    *(void **)(param_1 + 6) = __dest_00;
    if (lVar4 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    uVar2 = *param_1;
    param_1[8] = param_2;
  }
  if ((int)param_2 < (int)uVar2) {
    *param_1 = param_2;
    uVar2 = param_2;
  }
  if (-1 < (int)uVar2) {
    uVar3 = 0;
    if (*(long *)(param_1 + 6) != 0) {
      uVar3 = param_1[8];
    }
    if ((int)uVar2 <= (int)uVar3) {
      return;
    }
LAB_0055b5d0:
                    /* WARNING: Subroutine does not return */
    __assert_fail("size_ <= max_size()","external/com_github_google_re2\\re2/sparse_array.h",0x17d,
                  "DebugCheckInvariants");
  }
LAB_0055b59c:
                    /* WARNING: Subroutine does not return */
  __assert_fail("0 <= size_","external/com_github_google_re2\\re2/sparse_array.h",0x17c,
                "DebugCheckInvariants");
}


