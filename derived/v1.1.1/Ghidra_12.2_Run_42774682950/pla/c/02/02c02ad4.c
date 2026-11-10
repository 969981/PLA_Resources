/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c02ad4; name: FUN_02c02ad4
 */


void FUN_02c02ad4(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  plVar1 = param_1;
  if ((long *)param_1[0x3b] != (long *)0x0) {
    plVar1 = (long *)param_1[0x3b];
  }
  *(undefined4 *)(param_1 + 0x73) = param_2;
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  plVar1 = param_1;
  if ((long *)param_1[0x3a] != (long *)0x0) {
    plVar1 = (long *)param_1[0x3a];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  puVar3 = (undefined8 *)param_1[0x75];
  for (puVar2 = (undefined8 *)param_1[0x74]; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x60))((long *)*puVar2,param_2);
  }
  return;
}


