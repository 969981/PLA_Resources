/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034dc2c; name: FUN_0034dc2c
 */


void FUN_0034dc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 char *param_5)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  ulong local_68;
  size_t sStack_60;
  void *local_58;
  
  local_58 = (void *)0x0;
  local_68 = 0;
  sStack_60 = 0;
  __n = strlen(param_5);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_68 | 1);
    if (__n == 0) goto LAB_0034dcc8;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar1);
    local_68 = uVar1 | 1;
    sStack_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,param_5,__n);
LAB_0034dcc8:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0034dccc to 0034dce3 has its CatchHandler @ 0034dd20 */
  FUN_0034db00(param_1,param_2,param_3,param_4,&local_68);
  if ((local_68 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return;
}


