/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e6a9c; name: FUN_002e6a9c
 */


void FUN_002e6a9c(ulong *param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
    __n = 0x16;
    if (uVar4 != 0x16) goto LAB_002e6ad0;
LAB_002e6aec:
    if (__n == 0xffffffffffffffef) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((bVar1 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
      if (__n < 0x7fffffffffffffe7) goto LAB_002e6b3c;
LAB_002e6b0c:
      uVar3 = 0xffffffffffffffef;
    }
    else {
      __src = (void *)param_1[2];
      if (0x7fffffffffffffe6 < __n) goto LAB_002e6b0c;
LAB_002e6b3c:
      uVar2 = __n << 1;
      if (uVar2 <= __n + 1) {
        uVar2 = __n + 1;
      }
      uVar3 = 0x17;
      if (0x16 < uVar2) {
        uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
      }
    }
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    memcpy(__dest,__src,__n);
    if (__n != 0x16) {
      FUN_002e2ea0(PTR_LAB_04373088,__src);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  else {
    uVar4 = param_1[1];
    __n = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar4 == __n) goto LAB_002e6aec;
LAB_002e6ad0:
    if ((bVar1 & 1) == 0) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)uVar4 * '\x02' + '\x02';
      goto LAB_002e6bac;
    }
    __dest = (void *)param_1[2];
  }
  param_1[1] = uVar4 + 1;
LAB_002e6bac:
  *(undefined1 *)((long)__dest + uVar4) = param_2;
  ((undefined1 *)((long)__dest + uVar4))[1] = 0;
  return;
}


