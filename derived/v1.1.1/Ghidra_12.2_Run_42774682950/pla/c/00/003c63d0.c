/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c63d0; name: FUN_003c63d0
 */


uint FUN_003c63d0(undefined8 param_1,ulong *param_2,undefined8 *param_3)

{
  uint extraout_w1;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar1;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  if ((*param_2 & 1) == 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = (void *)param_2[2];
    goto LAB_003c6480;
  }
  __n = param_2[1];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (__n < 0x17) {
    local_70 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n != 0) goto LAB_003c646c;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar1);
    local_70 = uVar1 | 1;
    uStack_68 = __n;
    local_60 = __dest;
LAB_003c646c:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_003c6480:
  local_58 = (undefined4)param_2[3];
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* try { // try from 003c6490 to 003c649f has its CatchHandler @ 003c64e0 */
  FUN_003c6504(param_1,&local_70,&local_70);
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  return extraout_w1 & 1;
}


