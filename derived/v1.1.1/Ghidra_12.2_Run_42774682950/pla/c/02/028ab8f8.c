/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ab8f8; name: FUN_028ab8f8
 */


void FUN_028ab8f8(long param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  byte *pbVar2;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  byte *local_80;
  byte *pbStack_78;
  byte local_14 [4];
  
  local_14[0] = param_3 & 1;
  pbVar2 = (byte *)(param_1 + -0x48);
  if (*(long *)(param_1 + 0x248) == 0) {
    local_a0 = &LAB_028ae508;
    local_98 = FUN_028ae550;
    local_90 = &LAB_028ae554;
    puStack_88 = &LAB_028ae560;
    local_80 = local_14;
    FUN_028aafe0(pbVar2,param_1 + 0xd0,param_2,&local_a0);
    pcVar1 = local_98;
  }
  else {
    pbStack_78 = local_14;
    local_a0 = &LAB_028ae354;
    local_98 = FUN_028ae4ec;
    local_90 = &LAB_028ae4f0;
    puStack_88 = &LAB_028ae4fc;
    local_80 = pbVar2;
    FUN_028aafe0(pbVar2,param_1 + 0xd0,param_2,&local_a0);
    pcVar1 = local_98;
  }
  if (pcVar1 != (code *)0x0) {
    puStack_88 = (undefined1 *)0x0;
    local_90 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


