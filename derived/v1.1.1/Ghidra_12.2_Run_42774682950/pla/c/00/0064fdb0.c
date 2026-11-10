/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064fdb0; name: FUN_0064fdb0
 */


void FUN_0064fdb0(ulong *param_1,byte *param_2,undefined4 param_3)

{
  size_t __n;
  byte *__src;
  bool bVar1;
  long *plVar2;
  void *__dest;
  ulong uVar3;
  
  plVar2 = *(long **)(param_2 + 0x18);
  param_1[2] = 0;
  param_1[3] = (ulong)plVar2;
  *param_1 = 0;
  param_1[1] = 0;
  __src = *(byte **)(param_2 + 0x10);
  bVar1 = (*param_2 & 1) != 0;
  __n = (ulong)(*param_2 >> 1);
  if (bVar1) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (!bVar1) {
    __src = param_2 + 1;
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0064fe54;
  }
  else {
    uVar3 = __n + 0x11 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
    *param_1 = uVar3 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  memcpy(__dest,__src,__n);
LAB_0064fe54:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0064fe58 to 0064fe7f has its CatchHandler @ 0064fe80 */
  FUN_002a67c0(param_1,param_3);
  return;
}


