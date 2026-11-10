/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003786a0; name: FUN_003786a0
 */


void FUN_003786a0(ulong *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  bool bVar2;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  bVar2 = (*param_2 & 1) != 0;
  pbVar3 = *(byte **)(param_2 + 0x10);
  __n = (ulong)(*param_2 >> 1);
  if (bVar2) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar4 = uVar1 + __n;
  if (!bVar2) {
    pbVar3 = param_2 + 1;
  }
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
  }
  else {
    uVar4 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    *param_1 = uVar4 | 1;
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
  }
  if (__n != 0) {
    memcpy(__dest,pbVar3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
                    /* try { // try from 00378764 to 0037878b has its CatchHandler @ 0037878c */
  FUN_002e4094(param_1,pbVar3,uVar1);
  return;
}


