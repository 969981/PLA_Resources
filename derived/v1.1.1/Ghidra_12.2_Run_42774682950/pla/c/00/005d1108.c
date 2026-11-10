/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d1108; name: FUN_005d1108
 */


void FUN_005d1108(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  void *__dest;
  byte *pbVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x88);
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  pbVar2 = (byte *)*param_4;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  if ((*pbVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(pbVar2 + 8);
    uVar4 = *(undefined8 *)pbVar2;
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(pbVar2 + 0x10);
    *(undefined8 *)(lVar1 + 0x28) = uVar5;
    *(undefined8 *)(lVar1 + 0x20) = uVar4;
    goto LAB_005d11d0;
  }
  __n = *(ulong *)(pbVar2 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005d120c to 005d120f has its CatchHandler @ 005d1210 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(pbVar2 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)(lVar1 + 0x21);
    *(char *)(lVar1 + 0x20) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_005d11bc;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    *(ulong *)(lVar1 + 0x20) = uVar3 | 1;
    *(ulong *)(lVar1 + 0x28) = __n;
    *(void **)(lVar1 + 0x30) = __dest;
LAB_005d11bc:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_005d11d0:
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(long *)(lVar1 + 0x58) = lVar1 + 0x60;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


