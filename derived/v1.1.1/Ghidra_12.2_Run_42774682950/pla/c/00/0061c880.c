/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061c880; name: FUN_0061c880
 */


void FUN_0061c880(ulong *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  char acStack_3c [12];
  
  iVar1 = sprintf(acStack_3c,"%u",param_2 & 0xffffffff);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar2 = (long *)FUN_00612290(iVar1);
  param_1[3] = (ulong)plVar2;
  __n = strlen(acStack_3c);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0061c940 to 0061c947 has its CatchHandler @ 0061c948 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0061c928;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,acStack_3c,__n);
LAB_0061c928:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


