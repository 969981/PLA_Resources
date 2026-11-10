/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f4c4c; name: FUN_013f4c4c
 */


void FUN_013f4c4c(long param_1)

{
  undefined8 uVar1;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = (undefined1 *)0xaa9746b0d29093b6;
  pcStack_38 = "pane_A_alignment_00";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  uVar1 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00256608(uVar1);
  local_40 = &DAT_aa9747b0d2909569;
  pcStack_38 = "pane_A_alignment_01";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  uVar1 = FUN_00d648b4(*(undefined8 *)(param_1 + 0x2c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_00256608(uVar1);
  return;
}


