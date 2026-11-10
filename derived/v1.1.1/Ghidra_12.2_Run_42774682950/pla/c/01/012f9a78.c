/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f9a78; name: FUN_012f9a78
 */


void FUN_012f9a78(long param_1)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  iVar1 = *(int *)(param_1 + 0x1ec);
  if (iVar1 == 1) {
    local_40 = *(undefined8 *)(param_1 + 0x158);
    uStack_38 = *(undefined8 *)(param_1 + 0x160);
    local_30 = *(undefined8 *)(param_1 + 0x168);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_012f9ac8;
      local_40 = *(undefined8 *)(param_1 + 0x158);
      uStack_38 = *(undefined8 *)(param_1 + 0x160);
      local_30 = *(undefined8 *)(param_1 + 0x168);
      local_28 = (long *)0x0;
      FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    local_40 = *(undefined8 *)(param_1 + 0x188);
    uStack_38 = *(undefined8 *)(param_1 + 400);
    local_30 = *(undefined8 *)(param_1 + 0x198);
  }
  local_28 = (long *)0x0;
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
LAB_012f9ac8:
  *(undefined1 *)(param_1 + 0x1e9) = 1;
  return;
}


