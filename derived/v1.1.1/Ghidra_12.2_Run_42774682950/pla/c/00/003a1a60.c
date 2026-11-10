/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a1a60; name: FUN_003a1a60
 */


undefined8 FUN_003a1a60(byte *param_1,ulong *param_2,ulong *param_3)

{
  ulong __n;
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *__dest;
  void *__dest_00;
  ulong uVar6;
  ulong local_78;
  ulong uStack_70;
  undefined1 *local_68;
  
  bVar2 = *param_1;
  uVar5 = (ulong)(bVar2 >> 1);
  uVar4 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar1 = param_1 + 1;
    __n = uVar5;
  }
  else {
    __n = uVar4;
  }
  uVar3 = __n;
  do {
    uVar6 = uVar3;
    if (uVar6 == 0) {
      return 0;
    }
    uVar3 = uVar6 - 1;
  } while (pbVar1[uVar6 - 1] != 0x2f);
  if ((uVar6 == 0) || (uVar6 == __n)) {
    return 0;
  }
  if (param_2 != (ulong *)0x0) {
    if (uVar6 <= __n) {
      __n = uVar6;
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
    if (0xffffffffffffffef < __n) goto LAB_003a1cb0;
    if (__n < 0x17) {
      local_78 = (ulong)(byte)((int)__n << 1);
      __dest_00 = (void *)((ulong)&local_78 | 1);
      if (__n != 0) goto LAB_003a1b60;
    }
    else {
      uVar5 = __n + 0x10 & 0xfffffffffffffff0;
      __dest_00 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      local_78 = uVar5 | 1;
      uStack_70 = __n;
      local_68 = __dest_00;
LAB_003a1b60:
      memcpy(__dest_00,pbVar1,__n);
    }
    *(undefined1 *)((long)__dest_00 + __n) = 0;
    if ((*param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
    }
    else {
      *(undefined1 *)param_2[2] = 0;
      param_2[1] = 0;
      if ((*param_2 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,param_2[2]);
        *param_2 = 0;
      }
    }
    param_2[2] = (ulong)local_68;
    param_2[1] = uStack_70;
    *param_2 = local_78;
    bVar2 = *param_1;
    uVar4 = *(ulong *)(param_1 + 8);
    uVar5 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar5 = uVar4;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (undefined1 *)0x0;
  if (uVar5 <= uVar6 - 1) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  uVar5 = uVar5 - uVar6;
  pbVar1 = param_1 + 1;
  if ((bVar2 & 1) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x10);
  }
  if (0xffffffffffffffef < uVar5) {
LAB_003a1cb0:
    local_68 = (undefined1 *)0x0;
    uStack_70 = 0;
    local_78 = 0;
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar5 < 0x17) {
    local_78 = (ulong)(byte)((int)uVar5 << 1);
    __dest = (undefined1 *)((ulong)&local_78 | 1);
    if (uVar5 == 0) {
      *__dest = 0;
      bVar2 = (byte)*param_3;
      goto joined_r0x003a1c6c;
    }
  }
  else {
    uVar4 = uVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_78 = uVar4 | 1;
    uStack_70 = uVar5;
    local_68 = __dest;
  }
  memcpy(__dest,pbVar1 + uVar6,uVar5);
  __dest[uVar5] = 0;
  bVar2 = (byte)*param_3;
joined_r0x003a1c6c:
  if ((bVar2 & 1) == 0) {
    *(undefined2 *)param_3 = 0;
  }
  else {
    *(undefined1 *)param_3[2] = 0;
    param_3[1] = 0;
    if ((*param_3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,param_3[2]);
      *param_3 = 0;
    }
  }
  param_3[2] = (ulong)local_68;
  param_3[1] = uStack_70;
  *param_3 = local_78;
  return 1;
}


