/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00581998; name: FUN_00581998
 */


void FUN_00581998(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  void *__dest;
  byte *pbVar2;
  undefined8 *puVar3;
  ulong __n;
  void *__src;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
  *param_1 = lVar1;
  param_1[1] = param_2 + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  pbVar2 = (byte *)*param_5;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  if ((*pbVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(pbVar2 + 8);
    uVar5 = *(undefined8 *)pbVar2;
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(pbVar2 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = uVar6;
    *(undefined8 *)(lVar1 + 0x10) = uVar5;
    goto LAB_00581a64;
  }
  __n = *(ulong *)(pbVar2 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00581a8c to 00581a8f has its CatchHandler @ 00581a90 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(pbVar2 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)(lVar1 + 0x11);
    *(char *)(lVar1 + 0x10) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00581a50;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    *(ulong *)(lVar1 + 0x10) = uVar4 | 1;
    *(ulong *)(lVar1 + 0x18) = __n;
    *(void **)(lVar1 + 0x20) = __dest;
LAB_00581a50:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00581a64:
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = 0;
  puVar3[1] = param_3;
  return;
}


