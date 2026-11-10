/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00298df4; name: FUN_00298df4
 */


void FUN_00298df4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_LAB_0414e1b8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = *param_3;
  plVar1 = (long *)FUN_00612290();
  puVar2 = param_1 + 3;
  *puVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = plVar1;
  if ((*(byte *)(param_3 + 2) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_3 + 4);
    uVar4 = *(undefined8 *)(param_3 + 2);
    param_1[5] = *(undefined8 *)(param_3 + 6);
    param_1[4] = uVar5;
    *puVar2 = uVar4;
    goto LAB_00298ebc;
  }
  __n = *(ulong *)(param_3 + 4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00298ed8 to 00298edf has its CatchHandler @ 00298ee0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 6);
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x19);
    *(char *)puVar2 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00298ea8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    param_1[3] = uVar3 | 1;
    param_1[4] = __n;
    param_1[5] = __dest;
LAB_00298ea8:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00298ebc:
  *(undefined4 *)(param_1 + 7) = param_3[10];
  return;
}


