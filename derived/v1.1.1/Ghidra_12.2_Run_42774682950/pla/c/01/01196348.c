/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01196348; name: FUN_01196348
 */


undefined8 FUN_01196348(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  local_78 = &LAB_01197c4c;
  uStack_70 = 0;
  local_a0 = &LAB_011997dc;
  local_98 = FUN_011997f8;
  local_90 = &LAB_011997fc;
  puStack_88 = &LAB_01199810;
  local_80 = param_1;
  FUN_0119541c(param_1,0xcf5865ca236269f3,&local_a0,0,0,1);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return 0;
}


