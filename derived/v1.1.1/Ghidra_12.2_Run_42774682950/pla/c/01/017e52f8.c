/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e52f8; name: FUN_017e52f8
 */


undefined4 FUN_017e52f8(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [96];
  
  local_a0 = FUN_017eb714;
  local_98 = FUN_017eb74c;
  local_90 = &LAB_017eb750;
  puStack_88 = &LAB_017eb754;
  uVar2 = FUN_017e536c(param_1,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return uVar2;
}


