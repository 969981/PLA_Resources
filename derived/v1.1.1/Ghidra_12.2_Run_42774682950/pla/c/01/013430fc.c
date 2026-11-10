/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013430fc; name: FUN_013430fc
 */


void FUN_013430fc(long param_1)

{
  code *pcVar1;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  local_a0 = &LAB_01345018;
  local_98 = FUN_01345040;
  local_90 = &LAB_01345044;
  local_88 = &LAB_01345050;
  alStack_80[0] = param_1;
  FUN_0134db00(*(undefined8 *)(param_1 + 0x640),&local_a0);
  local_c0 = 0xc1a949029450238f;
  pcStack_b8 = "PLAY_UI_COMMON_DECIDE";
  local_b0 = 0x15;
  local_a8 = (long *)0x0;
  FUN_028354b0(&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(alStack_80);
  }
  return;
}


