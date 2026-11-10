/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f925c; name: FUN_012f925c
 */


void FUN_012f925c(long param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    local_40 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_38 = *(undefined8 *)(param_1 + 0x1c0);
    local_30 = *(undefined8 *)(param_1 + 0x1c8);
    local_28 = (long *)0x0;
    FUN_0283b430(*(undefined8 *)(param_1 + 8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = *(undefined8 *)(param_1 + 0x1d0);
    uStack_38 = *(undefined8 *)(param_1 + 0x1d8);
    local_30 = *(undefined8 *)(param_1 + 0x1e0);
    local_28 = (long *)0x0;
    FUN_0283b1e8(*(undefined8 *)(param_1 + 8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x1e8) = 0;
  }
  return;
}


