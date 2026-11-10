/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fbddc; name: FUN_006fbddc
 */


void FUN_006fbddc(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  char *__s;
  ulong uVar3;
  
  plVar1 = *(long **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x48,8);
  *param_1 = lVar2;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  __s = (char *)*param_3;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  plVar1 = (long *)FUN_00612290();
  *(long **)(lVar2 + 0x38) = plVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006fbedc to 006fbee3 has its CatchHandler @ 006fbee4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)(lVar2 + 0x21);
    *(char *)(lVar2 + 0x20) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_006fbeb0;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(lVar2 + 0x20) = uVar3 | 1;
    *(size_t *)(lVar2 + 0x28) = __n;
    *(void **)(lVar2 + 0x30) = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_006fbeb0:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined8 *)(lVar2 + 0x40) = *param_4;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


