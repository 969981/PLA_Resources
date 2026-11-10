/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a14e8; name: FUN_003a14e8
 */


undefined8 FUN_003a14e8(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  ulong __n;
  undefined8 uVar3;
  byte *__dest;
  ulong uVar4;
  ulong local_48;
  ulong local_40;
  byte *local_38;
  
  bVar1 = *param_1;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (uVar4 == 0) {
    return 0;
  }
  pbVar2 = *(byte **)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    pbVar2 = param_1 + 1;
  }
  bVar1 = *pbVar2;
  if ((0x19 < bVar1 - 0x61) && (bVar1 != 0x5f && 0x19 < (bVar1 - 0x41 & 0xff))) {
    return 0;
  }
  __n = uVar4 - 1;
  local_48 = 0;
  local_40 = 0;
  local_38 = (byte *)0x0;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_48 = (ulong)(byte)((int)__n << 1);
    __dest = (byte *)((ulong)&local_48 | 1);
    if (__n == 0) goto LAB_003a15b4;
  }
  else {
    uVar4 = uVar4 + 0xf & 0xfffffffffffffff0;
    __dest = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_48 = uVar4 | 1;
    local_40 = __n;
    local_38 = __dest;
  }
  memcpy(__dest,pbVar2 + 1,__n);
LAB_003a15b4:
  __dest[__n] = 0;
  uVar4 = local_48 >> 1 & 0x7f;
  if ((local_48 & 1) != 0) {
    uVar4 = local_40;
  }
  if (uVar4 != 0) {
    pbVar2 = (byte *)((ulong)&local_48 | 1);
    if ((local_48 & 1) != 0) {
      pbVar2 = local_38;
    }
    do {
      bVar1 = *pbVar2;
      if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (bVar1 != 0x5f)) && (9 < (byte)(bVar1 - 0x30)))
      {
        uVar3 = 0;
        goto joined_r0x003a1628;
      }
      uVar4 = uVar4 - 1;
      pbVar2 = pbVar2 + 1;
    } while (uVar4 != 0);
  }
  uVar3 = 1;
joined_r0x003a1628:
  if ((local_48 & 1) == 0) {
    return uVar3;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_38);
  return uVar3;
}


