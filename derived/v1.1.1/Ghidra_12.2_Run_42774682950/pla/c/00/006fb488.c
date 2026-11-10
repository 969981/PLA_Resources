/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fb488; name: FUN_006fb488
 */


void FUN_006fb488(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 & 1) == 0) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    goto LAB_006fb52c;
  }
  uVar1 = param_2[1];
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar1 << 1);
    if (uVar1 != 0) goto LAB_006fb518;
  }
  else {
    uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    *param_1 = uVar2 | 1;
    param_1[1] = uVar1;
    param_1[2] = (ulong)__dest;
LAB_006fb518:
    memcpy(__dest,__src,uVar1);
  }
  *(undefined1 *)((long)__dest + uVar1) = 0;
LAB_006fb52c:
                    /* try { // try from 006fb530 to 006fb537 has its CatchHandler @ 006fb554 */
  FUN_0030bdf4(param_1 + 3,param_3);
  return;
}


