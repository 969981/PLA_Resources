/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015010a0; name: FUN_015010a0
 */


void FUN_015010a0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar2 = *param_1;
  local_40 = 0x326c85acaf096ae9;
  pcStack_38 = "button_decide_x";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  lVar1 = FUN_00d2e944(lVar2 + 0x180,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 != 0) {
    FUN_02808d3c(lVar1);
    return;
  }
  if (*(long *)(lVar2 + 0x440) == 0) {
    return;
  }
  FUN_02831440();
  return;
}


