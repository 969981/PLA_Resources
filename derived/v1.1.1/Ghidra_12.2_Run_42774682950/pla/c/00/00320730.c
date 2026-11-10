/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00320730; name: FUN_00320730
 */


void FUN_00320730(ulong *param_1)

{
  char *__s;
  size_t __n;
  void *__dest;
  ulong uVar1;
  undefined1 auStack_50 [32];
  
  __s = (char *)FUN_003207e0(auStack_50);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_003207b8;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_003207b8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


