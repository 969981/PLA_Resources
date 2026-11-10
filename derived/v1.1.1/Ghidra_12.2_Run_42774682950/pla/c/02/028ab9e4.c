/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ab9e4; name: FUN_028ab9e4
 */


void FUN_028ab9e4(byte *param_1,undefined8 param_2,byte param_3)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  byte *local_80;
  byte *pbStack_78;
  byte local_14 [4];
  
  local_14[0] = param_3 & 1;
  if (*(long *)(param_1 + 0x290) == 0) {
    local_a0 = &LAB_028ae720;
    local_98 = FUN_028ae768;
    local_90 = &LAB_028ae76c;
    puStack_88 = &LAB_028ae778;
    local_80 = local_14;
    FUN_028aafe0(param_1,param_1 + 0x118,param_2,&local_a0);
    pcVar1 = local_98;
  }
  else {
    pbStack_78 = local_14;
    local_a0 = &LAB_028ae56c;
    local_98 = FUN_028ae704;
    local_90 = &LAB_028ae708;
    puStack_88 = &LAB_028ae714;
    local_80 = param_1;
    FUN_028aafe0(param_1,param_1 + 0x118,param_2,&local_a0);
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


