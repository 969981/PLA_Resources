/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008764d0; name: FUN_008764d0
 */


long FUN_008764d0(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  size_t __n;
  char *__s;
  void *__dest;
  ulong uVar3;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (lVar2 == 0) {
    return 0;
  }
  __s = (char *)*param_2;
  uVar1 = *param_1;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_58 | 1);
    if (__n == 0) goto LAB_00876580;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    local_58 = uVar3 | 1;
    local_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_00876580:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_0060e088(lVar2,uVar1,&local_58);
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return lVar2;
}


