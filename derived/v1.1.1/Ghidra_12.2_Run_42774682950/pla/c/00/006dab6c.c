/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dab6c; name: FUN_006dab6c
 */


undefined8 FUN_006dab6c(long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  long lVar2;
  ulong local_70;
  size_t local_68;
  void *local_60;
  undefined1 *local_58;
  long local_50 [4];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006dac70 to 006dac77 has its CatchHandler @ 006dac78 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_006dabfc;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar1);
    local_70 = uVar1 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_006dabfc:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006dac0c to 006dac1b has its CatchHandler @ 006dac7c */
  local_58 = (undefined1 *)&local_70;
  FUN_006342a8(local_50,*(undefined8 *)(lVar2 + 0x20),&local_58,0);
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  if ((local_50[0] == 0) || (*(int *)(*(long *)(local_50[0] + 8) + 0x34) != 3)) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(local_50[0] + 8) + 0x28);
}


