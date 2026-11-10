/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dd38c; name: FUN_006dd38c
 */


void FUN_006dd38c(ulong *param_1,char *param_2)

{
  long *plVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (long *)FUN_00612290();
  param_1[3] = (ulong)plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006dd43c to 006dd443 has its CatchHandler @ 006dd444 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_006dd424;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar2,1);
    *param_1 = uVar2 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  memcpy(__dest,param_2,__n);
LAB_006dd424:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


