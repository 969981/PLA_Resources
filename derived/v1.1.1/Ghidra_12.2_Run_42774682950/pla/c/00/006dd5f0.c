/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dd5f0; name: FUN_006dd5f0
 */


uint FUN_006dd5f0(long param_1,undefined8 param_2)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  void *__dest;
  undefined1 *__dest_00;
  ulong uVar4;
  ulong *puVar5;
  ulong local_60;
  ulong uStack_58;
  undefined1 *local_50;
  
  uStack_58 = 0;
  local_50 = (undefined1 *)0x0;
  local_60 = 0;
  puVar5 = (ulong *)(param_1 + 0x20);
  if ((*(byte *)puVar5 & 1) == 0) {
    uStack_58 = *(ulong *)(param_1 + 0x28);
    local_60 = *puVar5;
    local_50 = *(undefined1 **)(param_1 + 0x30);
    uVar1 = (uint)local_60 & 0xff;
    if ((local_60 & 1) == 0) goto LAB_006dd638;
LAB_006dd680:
    uVar3 = uStack_58;
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
    if (uVar3 != 0) goto LAB_006dd694;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x28);
    if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 006dd7b0 to 006dd7b7 has its CatchHandler @ 006dd7c4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar2 = *(void **)(param_1 + 0x30);
    if (uVar3 < 0x17) {
      local_60 = (ulong)(byte)((int)uVar3 << 1);
      __dest_00 = (undefined1 *)((ulong)&local_60 | 1);
      if (uVar3 == 0) {
        *__dest_00 = 0;
        uVar1 = 0;
        goto LAB_006dd638;
      }
    }
    else {
      uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
      __dest_00 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
      local_60 = uVar4 | 1;
      uStack_58 = uVar3;
      local_50 = __dest_00;
    }
    memcpy(__dest_00,pvVar2,uVar3);
    __dest_00[uVar3] = 0;
    uVar1 = (uint)local_60 & 0xff;
    if ((local_60 & 1) != 0) goto LAB_006dd680;
LAB_006dd638:
    if (1 < uVar1) {
LAB_006dd694:
      uStack_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      if ((*(byte *)puVar5 & 1) == 0) {
        uStack_58 = *(ulong *)(param_1 + 0x28);
        local_60 = *puVar5;
        local_50 = *(undefined1 **)(param_1 + 0x30);
      }
      else {
        uVar3 = *(ulong *)(param_1 + 0x28);
        if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 006dd7b8 to 006dd7bf has its CatchHandler @ 006dd7c0 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        pvVar2 = *(void **)(param_1 + 0x30);
        if (uVar3 < 0x17) {
          local_60 = (ulong)(byte)((int)uVar3 << 1);
          __dest = (void *)((ulong)&local_60 | 1);
          if (uVar3 != 0) goto LAB_006dd758;
        }
        else {
          uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
          local_60 = uVar4 | 1;
          uStack_58 = uVar3;
          local_50 = __dest;
LAB_006dd758:
          memcpy(__dest,pvVar2,uVar3);
        }
        *(undefined1 *)((long)__dest + uVar3) = 0;
      }
                    /* try { // try from 006dd76c to 006dd777 has its CatchHandler @ 006dd7d0 */
      uVar1 = FUN_0031e604(param_2,&local_60);
      if ((local_60 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_50);
      }
      goto LAB_006dd794;
    }
  }
  uVar1 = 0;
LAB_006dd794:
  return uVar1 & 1;
}


