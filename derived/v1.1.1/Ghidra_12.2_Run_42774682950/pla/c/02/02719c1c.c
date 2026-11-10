/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02719c1c; name: FUN_02719c1c
 */


void FUN_02719c1c(ulong *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_02719c74;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,param_2,__n);
LAB_02719c74:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


