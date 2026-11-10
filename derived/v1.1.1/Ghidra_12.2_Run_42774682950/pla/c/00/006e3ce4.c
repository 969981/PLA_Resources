/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e3ce4; name: FUN_006e3ce4
 */


void FUN_006e3ce4(long *param_1,long param_2,byte *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  void *__dest;
  long lVar3;
  void *__src;
  ulong __n;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar1 = *(long **)(param_2 + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x60,8);
  *param_1 = lVar2;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  plVar1 = (long *)FUN_00612290();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(long **)(lVar2 + 0x38) = plVar1;
  if ((*param_3 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar5 = *(undefined8 *)param_3;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar2 + 0x28) = uVar6;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    goto LAB_006e3dc4;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006e3e20 to 006e3e27 has its CatchHandler @ 006e3e28 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)(lVar2 + 0x21);
    *(char *)(lVar2 + 0x20) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_006e3db0;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(lVar2 + 0x20) = uVar4 | 1;
    *(ulong *)(lVar2 + 0x28) = __n;
    *(void **)(lVar2 + 0x30) = __dest;
LAB_006e3db0:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_006e3dc4:
  *(undefined8 *)(lVar2 + 0x40) = *param_4;
  uVar5 = param_4[1];
  *(undefined8 *)(lVar2 + 0x50) = param_4[2];
  *(undefined8 *)(lVar2 + 0x48) = uVar5;
  lVar3 = param_4[3];
  plVar1 = (long *)(lVar2 + 0x48);
  *(long *)(lVar2 + 0x58) = lVar3;
  if (lVar3 == 0) {
    *(long **)(lVar2 + 0x40) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    param_4[1] = 0;
    *param_4 = param_4 + 1;
    param_4[3] = 0;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


