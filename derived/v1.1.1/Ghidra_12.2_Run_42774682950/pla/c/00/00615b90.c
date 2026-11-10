/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00615b90; name: FUN_00615b90
 */


void FUN_00615b90(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,char *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  plVar1 = (long *)FUN_00612290();
  *(long **)(param_1 + 8) = plVar1;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00615cc4 to 00615ccb has its CatchHandler @ 00615ccc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00615c3c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 2) = uVar3 | 1;
    *(size_t *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_00615c3c:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = *param_5;
  uVar4 = param_5[1];
  *(undefined8 *)(param_1 + 0x10) = param_5[2];
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  lVar2 = param_5[3];
  plVar1 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = lVar2;
  if (lVar2 == 0) {
    *(long **)(param_1 + 0xc) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    param_5[1] = 0;
    *param_5 = param_5 + 1;
    param_5[3] = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined8 *)(param_1 + 0x14) = *param_2;
  uVar5 = param_2[2];
  uVar4 = param_2[1];
  uVar6 = param_2[3];
  *(undefined8 *)(param_1 + 0x1c) = param_2[4];
  *(undefined8 *)(param_1 + 0x1a) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}


