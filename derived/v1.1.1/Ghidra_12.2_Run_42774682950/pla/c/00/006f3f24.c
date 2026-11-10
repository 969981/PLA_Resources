/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f3f24; name: FUN_006f3f24
 */


void FUN_006f3f24(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong __n;
  void *__src;
  undefined1 *__dest;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  plVar2 = (long *)FUN_00612290();
  puVar3 = (undefined8 *)(param_1 + 2);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plVar2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar5 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar6;
    *puVar3 = uVar5;
    *(undefined1 *)(param_1 + 10) = 0;
    cVar1 = *(char *)(param_2 + 10);
  }
  else {
    __n = *(ulong *)(param_2 + 4);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    __src = *(void **)(param_2 + 6);
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 9);
      *(char *)puVar3 = (char)((int)__n << 1);
      if (__n == 0) {
        *__dest = 0;
        *(undefined1 *)(param_1 + 10) = 0;
        cVar1 = *(char *)(param_2 + 10);
        goto joined_r0x006f4008;
      }
    }
    else {
      uVar4 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
      *(ulong *)(param_1 + 2) = uVar4 | 1;
      *(ulong *)(param_1 + 4) = __n;
      *(undefined1 **)(param_1 + 6) = __dest;
    }
    memcpy(__dest,__src,__n);
    __dest[__n] = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    cVar1 = *(char *)(param_2 + 10);
  }
joined_r0x006f4008:
  if (cVar1 != '\0') {
                    /* try { // try from 006f4014 to 006f401b has its CatchHandler @ 006f404c */
    FUN_006ede24(param_1 + 0xc,param_2 + 0xc);
    *(undefined1 *)(param_1 + 10) = 1;
  }
                    /* try { // try from 006f402c to 006f402f has its CatchHandler @ 006f4064 */
  FUN_006f40a8(param_1 + 0x14,param_2 + 0x14);
  return;
}


