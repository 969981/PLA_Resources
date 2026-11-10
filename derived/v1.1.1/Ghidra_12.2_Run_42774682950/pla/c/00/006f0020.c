/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f0020; name: FUN_006f0020
 */


void FUN_006f0020(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,char *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  size_t __n;
  undefined8 uVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
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
                    /* try { // try from 006f0188 to 006f018f has its CatchHandler @ 006f0190 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_006f00cc;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 2) = uVar4 | 1;
    *(size_t *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_006f00cc:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = *param_5;
  uVar2 = param_5[1];
  *(undefined8 *)(param_1 + 0x10) = param_5[2];
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  lVar3 = param_5[3];
  plVar1 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = lVar3;
  if (lVar3 == 0) {
    *(long **)(param_1 + 0xc) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    param_5[1] = 0;
    *param_5 = param_5 + 1;
    param_5[3] = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  uVar2 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  *(undefined8 *)(param_1 + 0x16) = param_2[1];
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  *(undefined8 *)(param_1 + 0x1a) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 *)(param_1 + 0x1e) = param_2[5];
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  *(undefined8 *)(param_1 + 0x22) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  uVar2 = param_2[10];
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x26) = uVar6;
  *(undefined8 *)(param_1 + 0x24) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = param_2[0xe];
  uVar2 = param_2[0xb];
  *(undefined8 *)(param_1 + 0x2c) = param_2[0xc];
  *(undefined8 *)(param_1 + 0x2a) = uVar2;
  *(undefined8 *)(param_1 + 0x2e) = param_2[0xd];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}


