/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f9b2c; name: FUN_012f9b2c
 */


void FUN_012f9b2c(long param_1)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  iVar1 = *(int *)(param_1 + 0x1ec);
  if (iVar1 == 1) {
    local_40 = *(undefined8 *)(param_1 + 0x170);
    uStack_38 = *(undefined8 *)(param_1 + 0x178);
    local_30 = *(undefined8 *)(param_1 + 0x180);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      local_40 = *(undefined8 *)(param_1 + 0x170);
      uStack_38 = *(undefined8 *)(param_1 + 0x178);
      local_30 = *(undefined8 *)(param_1 + 0x180);
      local_28 = (long *)0x0;
      FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    local_40 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_38 = *(undefined8 *)(param_1 + 0x1a8);
    local_30 = *(undefined8 *)(param_1 + 0x1b0);
  }
  local_28 = (long *)0x0;
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


