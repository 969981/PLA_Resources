/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ab494; name: FUN_028ab494
 */


void FUN_028ab494(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined4 local_14;
  
  local_14 = param_3;
  if (*(long *)(param_1 + 100) == 0) {
    local_a0 = &LAB_028ae0fc;
    local_98 = FUN_028ae13c;
    local_90 = &LAB_028ae140;
    puStack_88 = &LAB_028ae14c;
    local_80 = &local_14;
    FUN_028aafe0(param_1,param_1 + 0x2a,param_2,&local_a0);
    pcVar1 = local_98;
  }
  else {
    puStack_78 = &local_14;
    local_a0 = &LAB_028adf5c;
    local_98 = FUN_028ae0e0;
    local_90 = &LAB_028ae0e4;
    puStack_88 = &LAB_028ae0f0;
    local_80 = param_1;
    FUN_028aafe0(param_1,param_1 + 0x2a,param_2,&local_a0);
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


