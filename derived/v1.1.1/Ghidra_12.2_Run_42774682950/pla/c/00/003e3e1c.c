/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e3e1c; name: FUN_003e3e1c
 */


long FUN_003e3e1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  size_t __n;
  char *__s;
  void *__dest;
  ulong uVar2;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x160);
  if (lVar1 == 0) {
    return 0;
  }
  __s = (char *)*param_1;
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
    if (__n == 0) goto LAB_003e3ecc;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    local_58 = uVar2 | 1;
    local_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_003e3ecc:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 003e3ed8 to 003e3ee3 has its CatchHandler @ 003e3f20 */
  FUN_003e5788(lVar1,&local_58,*param_2,*param_3);
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return lVar1;
}


