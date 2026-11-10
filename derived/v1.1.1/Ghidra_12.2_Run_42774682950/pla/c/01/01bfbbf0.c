/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bfbbf0; name: FUN_01bfbbf0
 */


uint FUN_01bfbbf0(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  
  if ((((*(int *)(*param_1 + 0xe98) == 0) && (*(int *)(*param_1 + 0xe9c) == 0)) &&
      (plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))(), *plVar2 != 0x497583f3a356b9b0))
     && (((plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))(),
          *plVar2 != -0x29ab9ac96f11c941 &&
          (plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))(), *plVar2 != 0x2f801cf8a89af50b
          )) && (plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x10))(),
                *plVar2 != 0x1df75f231c110515)))) {
    lVar3 = (**(code **)(*(long *)*param_2 + 0x38))();
    uVar1 = 0;
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)param_1[1];
      local_28 = (**(code **)(*(long *)*param_2 + 0x38))();
      uVar1 = (*(code *)*puVar4)(puVar4 + 4,&local_28);
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}


