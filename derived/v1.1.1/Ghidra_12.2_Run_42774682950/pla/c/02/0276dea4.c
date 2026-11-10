/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276dea4; name: FUN_0276dea4
 */


void FUN_0276dea4(undefined8 param_1)

{
  code *pcVar1;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 auStack_a0 [12];
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x8abd778afbcc8bc;
  pcStack_38 = "StopTracking";
  local_30 = 0xc;
  local_28 = (long *)0x0;
  local_c0 = &LAB_027848f8;
  local_b8 = FUN_027849dc;
  local_b0 = &LAB_027849e0;
  local_a8 = &LAB_027849ec;
  auStack_a0[0] = param_1;
  FUN_0276d964(&local_40,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


