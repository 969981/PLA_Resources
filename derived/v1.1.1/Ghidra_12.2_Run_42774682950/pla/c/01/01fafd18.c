/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fafd18; name: FUN_01fafd18
 */


long * FUN_01fafd18(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0x70;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
  *(long **)(param_1 + 0x38) = plVar1;
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar1,0x180000,param_2,1);
    *(long **)(param_1 + 0x28) = plVar1;
    (**(code **)(*plVar1 + 0xb0))(plVar1,"FieldRegidentScriptMemoryID::UNFOLD_RESOURCE");
  }
  return plVar1;
}


