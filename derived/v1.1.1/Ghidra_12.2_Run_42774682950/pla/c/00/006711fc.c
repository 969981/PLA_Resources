/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006711fc; name: FUN_006711fc
 */


void FUN_006711fc(long *param_1,long param_2,byte *param_3)

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
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0xb8,8);
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
    goto LAB_006712dc;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00671308 to 0067130f has its CatchHandler @ 00671310 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)(lVar2 + 0x21);
    *(char *)(lVar2 + 0x20) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_006712c8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(lVar2 + 0x20) = uVar3 | 1;
    *(ulong *)(lVar2 + 0x28) = __n;
    *(void **)(lVar2 + 0x30) = __dest;
LAB_006712c8:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_006712dc:
                    /* try { // try from 006712e4 to 006712e7 has its CatchHandler @ 00671324 */
  FUN_0066898c(lVar2 + 0x40,param_3 + 0x20);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


