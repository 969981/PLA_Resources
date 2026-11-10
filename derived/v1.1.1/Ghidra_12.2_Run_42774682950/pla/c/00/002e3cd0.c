/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e3cd0; name: FUN_002e3cd0
 */


void FUN_002e3cd0(long *param_1,byte *param_2)

{
  long *plVar1;
  void *__dest;
  long lVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  long lVar4;
  
  plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  *plVar1 = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  plVar1[4] = 0;
  if ((*param_2 & 1) == 0) {
    lVar4 = *(long *)(param_2 + 8);
    lVar2 = *(long *)param_2;
    plVar1[4] = *(long *)(param_2 + 0x10);
    plVar1[3] = lVar4;
    plVar1[2] = lVar2;
    goto LAB_002e3d8c;
  }
  __n = *(ulong *)(param_2 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002e3dc0 to 002e3dc3 has its CatchHandler @ 002e3dc4 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((long)plVar1 + 0x11);
    *(char *)(plVar1 + 2) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_002e3d78;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    plVar1[2] = uVar3 | 1;
    plVar1[3] = __n;
    plVar1[4] = (long)__dest;
LAB_002e3d78:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_002e3d8c:
  plVar1[1] = (long)param_1;
  lVar2 = *param_1;
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return;
}


