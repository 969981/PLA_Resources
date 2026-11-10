/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028abc98; name: FUN_028abc98
 */


void FUN_028abc98(long param_1,undefined8 param_2,byte param_3)

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
  if (*(long *)(param_1 + 0x2c8) == 0) {
    local_a0 = &LAB_028ae938;
    local_98 = FUN_028ae980;
    local_90 = &LAB_028ae984;
    puStack_88 = &LAB_028ae990;
    local_80 = local_14;
    FUN_028aafe0(pbVar2,param_1 + 0x108,param_2,&local_a0);
    pcVar1 = local_98;
  }
  else {
    pbStack_78 = local_14;
    local_a0 = &LAB_028ae784;
    local_98 = FUN_028ae91c;
    local_90 = &LAB_028ae920;
    puStack_88 = &LAB_028ae92c;
    local_80 = pbVar2;
    FUN_028aafe0(pbVar2,param_1 + 0x108,param_2,&local_a0);
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


