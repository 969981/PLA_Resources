/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e32d88; name: FUN_02e32d88
 */


void FUN_02e32d88(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(long *)(param_1 + 0xd0) != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(long *)(param_1 + 0xd0));
    plVar1 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  FUN_02e34460(param_1 + 0x18,plVar1);
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(long *)(param_1 + 0xf8) != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(long *)(param_1 + 0xf8));
    plVar1 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_02e34460(param_1 + 0x70,plVar1);
  return;
}


