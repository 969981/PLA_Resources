/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006da5cc; name: FUN_006da5cc
 */


void FUN_006da5cc(long param_1,void *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  puVar1 = PTR_DAT_043730c0;
  if (*(int *)(param_1 + 0x1c) != 8) {
    FUN_002de8d8(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 8;
    *(undefined **)(param_1 + 0x10) = puVar1;
  }
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    local_58 = (ulong)(byte)((int)param_3 << 1);
    pvVar4 = (void *)((ulong)&local_58 | 1);
    if (param_3 == 0) goto LAB_006da67c;
  }
  else {
    uVar5 = param_3 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    local_58 = uVar5 | 1;
    local_50 = param_3;
    local_48 = pvVar4;
  }
  memcpy(pvVar4,param_2,param_3);
LAB_006da67c:
  *(undefined1 *)((long)pvVar4 + param_3) = 0;
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar2 = *(ulong **)(param_1 + 0x10);
  }
  else {
    puVar3 = (ulong *)*puVar3;
    puVar2 = *(ulong **)(param_1 + 0x10);
  }
  if (puVar2 == (ulong *)puVar1) {
    FUN_0029175c(param_1 + 0x10,puVar3,&local_58);
  }
  else if (puVar2 != &local_58) {
    uVar5 = local_58 >> 1 & 0x7f;
    pvVar4 = (void *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar5 = local_50;
      pvVar4 = local_48;
    }
                    /* try { // try from 006da6c0 to 006da70f has its CatchHandler @ 006da71c */
    FUN_00291910(puVar2,pvVar4,uVar5);
  }
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


