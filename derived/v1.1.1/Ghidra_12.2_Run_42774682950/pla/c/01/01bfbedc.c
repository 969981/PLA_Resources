/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bfbedc; name: thunk_FUN_01bfbee4
 */


uint thunk_FUN_01bfbee4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_28;
  
  plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))();
  if ((*plVar2 == -0x6333f82fc1b85eb4) ||
     (plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))(), *plVar2 == -0x617bfd8ae8f1a461)) {
    uVar1 = 1;
  }
  else {
    lVar3 = (**(code **)(*(long *)*param_2 + 0x38))();
    uVar1 = 0;
    if (lVar3 != 0) {
      param_1 = (undefined8 *)*param_1;
      uStack_28 = (**(code **)(*(long *)*param_2 + 0x38))();
      uVar1 = (*(code *)*param_1)(param_1 + 4,&uStack_28);
    }
  }
  return uVar1 & 1;
}


