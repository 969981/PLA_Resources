/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bfbd40; name: FUN_01bfbd40
 */


uint FUN_01bfbd40(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_28;
  
  plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))();
  if ((*plVar2 == 0x4ff6bc1e4795d696) ||
     (plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))(), *plVar2 == 0x21b114e5ba007aac)) {
    uVar1 = 1;
  }
  else {
    lVar3 = (**(code **)(*(long *)*param_2 + 0x38))();
    uVar1 = 0;
    if (lVar3 != 0) {
      param_1 = (undefined8 *)*param_1;
      local_28 = (**(code **)(*(long *)*param_2 + 0x38))();
      uVar1 = (*(code *)*param_1)(param_1 + 4,&local_28);
    }
  }
  return uVar1 & 1;
}


