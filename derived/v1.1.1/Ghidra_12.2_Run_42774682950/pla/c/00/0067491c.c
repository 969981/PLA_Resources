/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067491c; name: FUN_0067491c
 */


void FUN_0067491c(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  void *__dest;
  ulong __n;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar1 = *(long **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0xb8,8);
  *param_1 = lVar2;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  pbVar3 = (byte *)*param_4;
  plVar1 = (long *)FUN_00612290();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(long **)(lVar2 + 0x38) = plVar1;
  if ((*pbVar3 & 1) == 0) {
    uVar6 = *(undefined8 *)(pbVar3 + 8);
    uVar5 = *(undefined8 *)pbVar3;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(pbVar3 + 0x10);
    *(undefined8 *)(lVar2 + 0x28) = uVar6;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    goto LAB_006749fc;
  }
  __n = *(ulong *)(pbVar3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00674a20 to 00674a27 has its CatchHandler @ 00674a28 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(pbVar3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)(lVar2 + 0x21);
    *(char *)(lVar2 + 0x20) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_006749e8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(lVar2 + 0x20) = uVar4 | 1;
    *(ulong *)(lVar2 + 0x28) = __n;
    *(void **)(lVar2 + 0x30) = __dest;
LAB_006749e8:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_006749fc:
  FUN_00675970(lVar2 + 0x40);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


