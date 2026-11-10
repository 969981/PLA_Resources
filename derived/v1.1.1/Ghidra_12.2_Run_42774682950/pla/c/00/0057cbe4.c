/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057cbe4; name: FUN_0057cbe4
 */


undefined4 * FUN_0057cbe4(undefined4 *param_1,char *param_2)

{
  size_t __n;
  ulong *puVar1;
  void *__dest;
  ulong uVar2;
  ulong local_48;
  size_t sStack_40;
  void *local_38;
  
  local_48 = 0;
  sStack_40 = 0;
  local_38 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_48 | 1);
    if (__n == 0) goto LAB_0057cc70;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    local_48 = uVar2 | 1;
    sStack_40 = __n;
    local_38 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_0057cc70:
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar1 = (ulong *)(param_1 + 2);
  *param_1 = 4;
  if ((*puVar1 & 1) == 0) {
    *(undefined2 *)puVar1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 6));
      *(undefined8 *)(param_1 + 2) = 0;
    }
  }
  *(void **)(param_1 + 6) = local_38;
  *(size_t *)(param_1 + 4) = sStack_40;
  *puVar1 = local_48;
  return param_1;
}


