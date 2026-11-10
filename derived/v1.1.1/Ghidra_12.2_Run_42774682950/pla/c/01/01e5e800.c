/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e5e800; name: FUN_01e5e800
 */


void FUN_01e5e800(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  auStack_80[0] = *param_2;
  local_a0 = &LAB_01e5eb5c;
  local_98 = FUN_01e5ee20;
  local_90 = &LAB_01e5ee24;
  local_88 = &LAB_01e5ee30;
  FUN_01e5e874(param_1,&local_a0);
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


