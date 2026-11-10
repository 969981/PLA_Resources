/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031fd50; name: FUN_0031fd50
 */


void FUN_0031fd50(ulong *param_1,byte *param_2)

{
  uint uVar1;
  void *__src;
  byte *pbVar2;
  undefined1 *__dest;
  size_t __n;
  ulong uVar3;
  
  uVar3 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  __src = (void *)FUN_002e2ec0(PTR_FUN_04373078,uVar3 + 1);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
                    /* try { // try from 0031fd9c to 0031fda7 has its CatchHandler @ 0031fe54 */
  uVar1 = FUN_0031f9f0(pbVar2,__src,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0xffffffef < uVar1) {
                    /* try { // try from 0031fe4c to 0031fe53 has its CatchHandler @ 0031fe54 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __n = (size_t)(int)uVar1;
  if (uVar1 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 == 0) {
      *__dest = 0;
      goto joined_r0x0031fe38;
    }
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar3);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,__src,__n);
  __dest[__n] = 0;
joined_r0x0031fe38:
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2f10(__src);
  FUN_002e2ef0(PTR_LAB_04373088,__src);
  return;
}


