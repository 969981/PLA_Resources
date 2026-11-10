/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00659504; name: FUN_00659504
 */


void FUN_00659504(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,char *param_4,
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
                    /* try { // try from 00659694 to 0065969b has its CatchHandler @ 0065969c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_006595b0;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 2) = uVar3 | 1;
    *(size_t *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_006595b0:
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
  *(undefined1 *)(param_1 + 0x14) = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1a) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[0x1e] = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x26) = uVar6;
  *(undefined8 *)(param_1 + 0x24) = uVar5;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_006d9e70(param_1 + 0x28,param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x2e) = uVar6;
  *(undefined8 *)(param_1 + 0x2c) = uVar5;
  *(undefined8 *)(param_1 + 0x2a) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x36) = uVar6;
  *(undefined8 *)(param_1 + 0x34) = uVar5;
  *(undefined8 *)(param_1 + 0x32) = uVar4;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x98);
  return;
}


