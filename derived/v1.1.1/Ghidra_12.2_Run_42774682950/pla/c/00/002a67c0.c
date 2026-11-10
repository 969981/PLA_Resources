/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a67c0; name: FUN_002a67c0
 */


void FUN_002a67c0(ulong *param_1,undefined1 param_2)

{
  byte bVar1;
  ulong __n;
  void *__src;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
    __n = 0x16;
    if (uVar3 == 0x16) goto LAB_002a6810;
LAB_002a67f4:
    if ((bVar1 & 1) == 0) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)uVar3 * '\x02' + '\x02';
      goto LAB_002a68e8;
    }
    __dest = (void *)param_1[2];
  }
  else {
    uVar3 = param_1[1];
    __n = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar3 != __n) goto LAB_002a67f4;
LAB_002a6810:
    if (__n == 0xffffffffffffffef) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((bVar1 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
      if (0x7fffffffffffffe6 < __n) goto LAB_002a6830;
LAB_002a6860:
      uVar2 = __n << 1;
      if (uVar2 <= __n + 1) {
        uVar2 = __n + 1;
      }
      if (uVar2 < 0x17) {
        uVar2 = 0x17;
      }
      else {
        uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      __src = (void *)param_1[2];
      if (__n < 0x7fffffffffffffe7) goto LAB_002a6860;
LAB_002a6830:
      uVar2 = 0xffffffffffffffef;
    }
    __dest = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar2,1);
    memcpy(__dest,__src,__n);
    if (__n + 1 != 0x17) {
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,__n + 1,1);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  param_1[1] = uVar3 + 1;
LAB_002a68e8:
  *(undefined1 *)((long)__dest + uVar3) = param_2;
  ((undefined1 *)((long)__dest + uVar3))[1] = 0;
  return;
}


