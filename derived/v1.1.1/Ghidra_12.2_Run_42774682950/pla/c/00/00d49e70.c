/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d49e70; name: FUN_00d49e70
 */


void FUN_00d49e70(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x5f0) = *param_2;
  *(undefined8 *)(param_1 + 0x5f8) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x608) = *(undefined8 *)(param_2 + 6);
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x610);
  *(long **)(param_1 + 0x610) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x1641) = *(undefined1 *)(param_1 + 0x5f3);
  return;
}


