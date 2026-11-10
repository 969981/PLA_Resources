/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00320fc0; name: FUN_00320fc0
 */


uint FUN_00320fc0(ulong *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  
  uStack_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  if ((*param_1 & 1) == 0) {
    uStack_48 = param_1[1];
    local_50 = *param_1;
    local_40 = (void *)param_1[2];
    goto LAB_00321064;
  }
  __n = param_1[1];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_1[2];
  if (__n < 0x17) {
    local_50 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_50 | 1);
    if (__n != 0) goto LAB_00321050;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    local_50 = uVar2 | 1;
    uStack_48 = __n;
    local_40 = __dest;
LAB_00321050:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00321064:
                    /* try { // try from 00321064 to 0032106f has its CatchHandler @ 003210ac */
  uVar1 = FUN_003210d0(&local_50,param_2);
  if ((local_50 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_40);
  }
  return uVar1 & 1;
}


