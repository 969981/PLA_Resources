/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036b070; name: FUN_0036b070
 */


void FUN_0036b070(long *param_1,long param_2,undefined8 param_3,byte *param_4)

{
  long lVar1;
  void *__dest;
  undefined8 *puVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x28);
  *param_1 = lVar1;
  param_1[1] = param_2 + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  if ((*param_4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_4 + 8);
    uVar4 = *(undefined8 *)param_4;
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = uVar5;
    *(undefined8 *)(lVar1 + 0x10) = uVar4;
    goto LAB_0036b138;
  }
  __n = *(ulong *)(param_4 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0036b15c to 0036b15f has its CatchHandler @ 0036b160 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_4 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)(lVar1 + 0x11);
    *(char *)(lVar1 + 0x10) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_0036b124;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    *(ulong *)(lVar1 + 0x10) = uVar3 | 1;
    *(ulong *)(lVar1 + 0x18) = __n;
    *(void **)(lVar1 + 0x20) = __dest;
LAB_0036b124:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_0036b138:
  *(undefined1 *)(param_1 + 2) = 1;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = 0;
  puVar2[1] = param_3;
  return;
}


