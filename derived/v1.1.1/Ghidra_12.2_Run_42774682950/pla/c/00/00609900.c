/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00609900; name: FUN_00609900
 */


void FUN_00609900(ulong *param_1,undefined8 param_2)

{
  uint uVar1;
  void *__dest;
  size_t __n;
  ulong uVar2;
  char acStack_40 [32];
  
  uVar1 = snprintf(acStack_40,0x20,"%ld",param_2);
  if ((-1 < (int)uVar1) && (0x20 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00607c30("external/webrtc/rtc_base/stringencode.cc",0x184,
                 "len <= (sizeof(ArraySizeHelper(buf)))",PTR_DAT_043752f8,uVar1,0x20);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0xffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __n = (size_t)(int)uVar1;
  if (uVar1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 == 0) goto LAB_0060999c;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  memcpy(__dest,acStack_40,__n);
LAB_0060999c:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


