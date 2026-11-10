/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257f360; name: FUN_0257f360
 */


void FUN_0257f360(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x642cdc2f104e92aa;
  pcStack_38 = "pane_N_difficulty";
  local_30 = 0x11;
  local_28 = (long *)0x0;
  uVar1 = FUN_0283ac34(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_0257f3f0(param_1);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  }
  return;
}


