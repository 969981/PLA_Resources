/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034b2f0; name: FUN_0034b2f0
 */


void FUN_0034b2f0(ulong *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte *pbVar2;
  void *__dest;
  ulong uVar3;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  __n = strlen(param_2);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  uVar3 = uVar1 + __n;
  if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar3 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
  }
  else {
    uVar3 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    *param_1 = uVar3 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  if (__n != 0) {
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
                    /* try { // try from 0034b3a8 to 0034b3cf has its CatchHandler @ 0034b3d0 */
  FUN_002e4094(param_1,pbVar2,uVar1);
  return;
}


