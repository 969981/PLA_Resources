/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02728374; name: FUN_02728374
 */


void FUN_02728374(long param_1,int *param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  int local_80 [24];
  
  local_80[0] = *param_2;
  if (local_80[0] != 0) {
    local_a0 = &LAB_02728744;
    local_98 = FUN_02728748;
    local_90 = &LAB_0272874c;
    puStack_88 = &LAB_02728758;
    FUN_0275eeb0(*(undefined8 *)(param_1 + 0x50),&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      puStack_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(local_80);
    }
  }
  return;
}


