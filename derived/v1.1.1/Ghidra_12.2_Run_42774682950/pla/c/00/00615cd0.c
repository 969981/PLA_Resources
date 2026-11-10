/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00615cd0; name: FUN_00615cd0
 */


void FUN_00615cd0(ulong *param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  char acStack_50 [32];
  
  iVar1 = snprintf(acStack_50,0x20,"%08x",(ulong)(param_2 & 0x3fffff));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar2 = (long *)FUN_00612290(iVar1);
  param_1[3] = (ulong)plVar2;
  __n = strlen(acStack_50);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00615d7c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,acStack_50,__n);
LAB_00615d7c:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


