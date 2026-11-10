/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f5919c; name: FUN_00f5919c
 */


void FUN_00f5919c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  undefined *puStack_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar1 = (**(code **)(lVar1 + 0x68))();
  FUN_0014ff10(param_1,0);
  FUN_00f55ff0();
  puStack_28 = DAT_043b5488;
  if ((DAT_043b5478 & 1) == 0) {
    puStack_28 = &DAT_043b5479;
  }
  local_30 = param_1;
  if (lVar1 == 0) {
    FUN_00151490(param_1);
  }
  else {
    plVar2 = (long *)FUN_00f57ef0();
    *plVar2 = lVar1;
    FUN_00f58034(&local_30);
  }
  return;
}


