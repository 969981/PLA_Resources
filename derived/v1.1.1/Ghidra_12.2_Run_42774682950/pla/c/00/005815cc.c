/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005815cc; name: FUN_005815cc
 */


ulong * FUN_005815cc(char *param_1)

{
  size_t __n;
  void *__src;
  ulong *puVar1;
  size_t __n_00;
  void *__dest;
  undefined1 *__dest_00;
  ulong uVar2;
  ulong local_48;
  size_t sStack_40;
  void *local_38;
  
  puVar1 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (puVar1 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  sStack_40 = 0;
  local_38 = (void *)0x0;
  local_48 = 0;
  __n_00 = strlen(param_1);
  if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n_00 < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)__n_00 << 1));
    __dest = (void *)((ulong)&local_48 | 1);
    if (__n_00 != 0) goto LAB_0058165c;
  }
  else {
    uVar2 = __n_00 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    local_48 = uVar2 | 1;
    sStack_40 = __n_00;
    local_38 = __dest;
LAB_0058165c:
    memcpy(__dest,param_1,__n_00);
  }
  __src = local_38;
  __n = sStack_40;
  *(undefined1 *)((long)__dest + __n_00) = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((local_48 & 1) == 0) {
    puVar1[2] = (ulong)local_38;
    puVar1[3] = 0;
    puVar1[1] = sStack_40;
    *puVar1 = local_48;
    return puVar1;
  }
  if (0xffffffffffffffef < sStack_40) {
                    /* try { // try from 00581748 to 0058174f has its CatchHandler @ 00581750 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sStack_40 < 0x17) {
    __dest_00 = (undefined1 *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)sStack_40 << 1);
    if (sStack_40 == 0) {
      *__dest_00 = 0;
      puVar1[3] = 0;
      goto joined_r0x00581738;
    }
  }
  else {
    uVar2 = sStack_40 + 0x10 & 0xfffffffffffffff0;
    __dest_00 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    *puVar1 = uVar2 | 1;
    puVar1[1] = __n;
    puVar1[2] = (ulong)__dest_00;
  }
  memcpy(__dest_00,__src,__n);
  __dest_00[__n] = 0;
  puVar1[3] = 0;
joined_r0x00581738:
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return puVar1;
}


