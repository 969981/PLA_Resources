/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00394b08; name: FUN_00394b08
 */


void FUN_00394b08(long *param_1,undefined8 param_2,ulong *param_3)

{
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar1;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  if ((*param_3 & 1) == 0) {
    uStack_58 = param_3[1];
    local_60 = *param_3;
    local_50 = (void *)param_3[2];
    goto LAB_00394bb4;
  }
  __n = param_3[1];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_3[2];
  if (__n < 0x17) {
    local_60 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_60 | 1);
    if (__n != 0) goto LAB_00394ba0;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar1);
    local_60 = uVar1 | 1;
    uStack_58 = __n;
    local_50 = __dest;
LAB_00394ba0:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00394bb4:
                    /* try { // try from 00394bbc to 00394bcb has its CatchHandler @ 00394c04 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  return;
}


