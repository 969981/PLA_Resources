/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ac3bc; name: FUN_028ac3bc
 */


void FUN_028ac3bc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  local_a0 = &LAB_028aeb14;
  local_98 = FUN_028aeb2c;
  local_90 = &LAB_028aeb30;
  local_88 = &LAB_028aeb3c;
  auStack_80[0] = param_2;
  FUN_028ac1c4(param_1 + -0x48,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


