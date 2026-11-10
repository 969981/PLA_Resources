/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ab65c; name: FUN_028ab65c
 */


void FUN_028ab65c(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined4 local_14;
  
  local_14 = param_1;
  if (*(long *)(param_2 + 0x84) == 0) {
    local_a0 = &LAB_028ae2f8;
    local_98 = FUN_028ae338;
    local_90 = &LAB_028ae33c;
    puStack_88 = &LAB_028ae348;
    local_80 = &local_14;
    FUN_028aafe0(param_2,param_2 + 0x38,param_3,&local_a0);
    pcVar1 = local_98;
  }
  else {
    puStack_78 = &local_14;
    local_a0 = &LAB_028ae158;
    local_98 = FUN_028ae2dc;
    local_90 = &LAB_028ae2e0;
    puStack_88 = &LAB_028ae2ec;
    local_80 = param_2;
    FUN_028aafe0(param_2,param_2 + 0x38,param_3,&local_a0);
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


