/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00553254; name: FUN_00553254
 */


void FUN_00553254(long param_1,int param_2,int param_3)

{
  int *piVar1;
  void *__src;
  size_t __n;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(lo) >= (0)","external/com_github_google_re2/re2/prog.cc",0x16c,"Mark");
  }
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(hi) >= (0)","external/com_github_google_re2/re2/prog.cc",0x16d,"Mark");
  }
  if (0xff < param_2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(lo) <= (255)","external/com_github_google_re2/re2/prog.cc",0x16e,"Mark");
  }
  if (0xff < param_3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(hi) <= (255)","external/com_github_google_re2/re2/prog.cc",0x16f,"Mark");
  }
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(lo) <= (hi)","external/com_github_google_re2/re2/prog.cc",0x170,"Mark");
  }
  if ((param_2 == 0) && (param_3 == 0xff)) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x448);
  if (piVar2 < *(int **)(param_1 + 0x450)) {
    *piVar2 = param_2;
    piVar2[1] = param_3;
    *(int **)(param_1 + 0x448) = piVar2 + 2;
    return;
  }
  __src = *(void **)(param_1 + 0x440);
  lVar5 = (long)piVar2 - (long)__src >> 3;
  uVar6 = lVar5 + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)*(int **)(param_1 + 0x450) - (long)__src;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
      goto LAB_00553318;
    }
  }
  else {
    uVar6 = 0x1fffffffffffffff;
  }
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,uVar6 << 3);
  __src = *(void **)(param_1 + 0x440);
  piVar2 = *(int **)(param_1 + 0x448);
LAB_00553318:
  piVar1 = (int *)(lVar3 + lVar5 * 8);
  __n = (long)piVar2 - (long)__src;
  *piVar1 = param_2;
  piVar1[1] = param_3;
  if (0 < (long)__n) {
    memcpy((void *)((long)piVar1 - __n),__src,__n);
    __src = *(void **)(param_1 + 0x440);
  }
  *(void **)(param_1 + 0x440) = (void *)((long)piVar1 - __n);
  *(int **)(param_1 + 0x448) = piVar1 + 2;
  *(ulong *)(param_1 + 0x450) = lVar3 + uVar6 * 8;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


