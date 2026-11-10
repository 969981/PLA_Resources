/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036ba00; name: FUN_0036ba00
 */


void FUN_0036ba00(long *param_1,long param_2,byte *param_3)

{
  long lVar1;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x38);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  if ((*param_3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 8);
    uVar3 = *(undefined8 *)param_3;
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar1 + 0x28) = uVar4;
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    goto LAB_0036bac4;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0036bae0 to 0036bae3 has its CatchHandler @ 0036bae4 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)(lVar1 + 0x21);
    *(char *)(lVar1 + 0x20) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_0036bab0;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    *(ulong *)(lVar1 + 0x20) = uVar2 | 1;
    *(ulong *)(lVar1 + 0x28) = __n;
    *(void **)(lVar1 + 0x30) = __dest;
LAB_0036bab0:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_0036bac4:
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


