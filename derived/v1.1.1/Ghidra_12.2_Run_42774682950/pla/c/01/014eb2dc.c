/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb2dc; name: FUN_014eb2dc
 */


void FUN_014eb2dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_00d6b510(*(undefined8 *)(param_1 + 0x1c0));
  uVar2 = *(undefined8 *)(param_1 + 0x1c0);
  local_40 = 0x9aee0ab187611bbb;
  pcStack_38 = "pane_N_optionguide_00";
  local_30 = 0x15;
  local_28 = (long *)0x0;
  uVar1 = FUN_014fad9c(*(undefined8 *)(param_1 + 0x1a8),&local_40);
  FUN_00d6c2c0(uVar2,uVar1,0x3392401c59d27c9b,3,0x12);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


