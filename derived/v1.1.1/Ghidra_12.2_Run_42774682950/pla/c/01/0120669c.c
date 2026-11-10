/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120669c; name: FUN_0120669c
 */


void FUN_0120669c(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  code *local_78;
  undefined8 uStack_70;
  
  local_78 = FUN_01206c08;
  uStack_70 = 0;
  local_a0 = &LAB_012076fc;
  local_98 = FUN_01207718;
  local_90 = &LAB_0120771c;
  puStack_88 = &LAB_01207730;
  local_80 = param_1;
  FUN_01205224(param_1,0x9997f9f9c3316c93,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


