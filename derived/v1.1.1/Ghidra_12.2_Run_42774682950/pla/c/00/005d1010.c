/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d1010; name: FUN_005d1010
 */


void FUN_005d1010(ulong *param_1,uint param_2)

{
  char *__s;
  size_t __n;
  undefined1 *__dest;
  ulong uVar1;
  byte local_48 [16];
  char *local_38;
  
  std::to_string(param_2);
  __s = (char *)((ulong)local_48 | 1);
  if ((local_48[0] & 1) != 0) {
    __s = local_38;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 005d10e4 to 005d10eb has its CatchHandler @ 005d10ec */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      goto joined_r0x005d10dc;
    }
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,__s,__n);
  __dest[__n] = 0;
joined_r0x005d10dc:
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}


