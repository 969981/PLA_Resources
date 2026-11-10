/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f678; name: FUN_0030f678
 */


void FUN_0030f678(long *param_1,long param_2,undefined4 param_3,byte *param_4)

{
  undefined *puVar1;
  long *plVar2;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04373a58;
  *(undefined4 *)(param_1 + 2) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  plVar2 = param_1 + 3;
  *plVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*param_4 & 1) == 0) {
    lVar5 = *(long *)(param_4 + 8);
    lVar4 = *(long *)param_4;
    param_1[5] = *(long *)(param_4 + 0x10);
    param_1[4] = lVar5;
    *plVar2 = lVar4;
    return;
  }
  __n = *(ulong *)(param_4 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0030f744 to 0030f74b has its CatchHandler @ 0030f74c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_4 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x19);
    *(char *)plVar2 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0030f730;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    param_1[3] = uVar3 | 1;
    param_1[4] = __n;
    param_1[5] = (long)__dest;
  }
  memcpy(__dest,__src,__n);
LAB_0030f730:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


