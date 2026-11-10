/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126bcac; name: FUN_0126bcac
 */


undefined1 * FUN_0126bcac(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = *param_2;
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 8);
  *(long **)(param_1 + 8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  param_1[0x20] = param_2[0x20];
  plVar2 = *(long **)(param_2 + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(long **)(param_1 + 0x28) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar2 = *(long **)(param_2 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  param_1[0x40] = param_2[0x40];
  plVar2 = *(long **)(param_2 + 0x48);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x48);
  *(long **)(param_1 + 0x48) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar2 = *(long **)(param_2 + 0x50);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}


