/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00290fe0; name: FUN_00290fe0
 */


void FUN_00290fe0(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  char *param3;
  long *plVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  char acStack_54 [32];
  undefined1 local_34;
  EnvironmentIdentifier aEStack_28 [8];
  
  nn::nsd::GetEnvironmentIdentifier(aEStack_28);
  param3 = (char *)FUN_006dbfd0(param_2);
  iVar1 = snprintf(acStack_54,0x21,"t-%s-%s",param3,(char *)aEStack_28);
  local_34 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (long *)FUN_00612290(iVar1);
  param_1[3] = (ulong)plVar2;
  __n = strlen(acStack_54);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002910c0 to 002910c7 has its CatchHandler @ 002910c8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_002910a8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,acStack_54,__n);
LAB_002910a8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


