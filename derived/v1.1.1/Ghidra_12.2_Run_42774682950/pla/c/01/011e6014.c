/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e6014; name: FUN_011e6014
 */


void FUN_011e6014(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  local_78 = &LAB_011e6484;
  uStack_70 = 0;
  local_a0 = &LAB_011e6648;
  local_98 = FUN_011e6664;
  local_90 = &LAB_011e6668;
  puStack_88 = &LAB_011e667c;
  local_80 = param_1;
  FUN_011e630c(param_1,0x5633217cacdc0203,&local_a0);
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


