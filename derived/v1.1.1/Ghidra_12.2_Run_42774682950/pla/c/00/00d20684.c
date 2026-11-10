/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d20684; name: FUN_00d20684
 */


void FUN_00d20684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined8 *)(param_1 + 0x3b8) = param_3;
  *(undefined8 *)(param_1 + 0x3c0) = *param_4;
  *(undefined8 *)(param_1 + 0x3c8) = param_4[1];
  *(undefined8 *)(param_1 + 0x3d0) = param_4[2];
  plVar2 = (long *)param_4[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x3d8);
  *(long **)(param_1 + 0x3d8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  FUN_00d2070c(param_1,param_2);
  FUN_00d207fc(param_1);
  return;
}


