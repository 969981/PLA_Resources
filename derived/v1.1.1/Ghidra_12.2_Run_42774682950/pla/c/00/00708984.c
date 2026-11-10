/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00708984; name: FUN_00708984
 */


void FUN_00708984(long *param_1,long param_2,byte *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar1 = *(long **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x50,8);
  *param_1 = lVar2;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = (long *)FUN_00612290();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(long **)(lVar2 + 0x38) = plVar1;
  if ((*param_3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_3 + 8);
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    goto LAB_00708a64;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00708a8c to 00708a93 has its CatchHandler @ 00708a94 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)(lVar2 + 0x21);
    *(char *)(lVar2 + 0x20) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00708a50;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(lVar2 + 0x20) = uVar3 | 1;
    *(ulong *)(lVar2 + 0x28) = __n;
    *(void **)(lVar2 + 0x30) = __dest;
LAB_00708a50:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00708a64:
  uVar4 = *param_4;
  *(undefined8 *)(lVar2 + 0x48) = param_4[1];
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


