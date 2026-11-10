/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079a598; name: FUN_0079a598
 */


void FUN_0079a598(long param_1,void *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  local_40 = 0;
  local_38 = (void *)0x0;
  local_48 = 0;
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    local_48 = (ulong)(byte)((int)param_3 << 1);
    pvVar3 = (void *)((ulong)&local_48 | 1);
    if (param_3 == 0) goto LAB_0079a61c;
  }
  else {
    uVar4 = param_3 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_48 = uVar4 | 1;
    local_40 = param_3;
    local_38 = pvVar3;
  }
  memcpy(pvVar3,param_2,param_3);
LAB_0079a61c:
  *(undefined1 *)((long)pvVar3 + param_3) = 0;
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  puVar1 = *(ulong **)(param_1 + 0x50);
  if (puVar1 == (ulong *)PTR_DAT_043730c0) {
    FUN_0029175c((ulong *)(param_1 + 0x50),puVar2,&local_48);
  }
  else if (puVar1 != &local_48) {
    uVar4 = local_48 >> 1 & 0x7f;
    pvVar3 = (void *)((ulong)&local_48 | 1);
    if ((local_48 & 1) != 0) {
      uVar4 = local_40;
      pvVar3 = local_38;
    }
                    /* try { // try from 0079a668 to 0079a6a3 has its CatchHandler @ 0079a6b8 */
    FUN_00291910(puVar1,pvVar3,uVar4);
  }
  if ((local_48 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return;
}


