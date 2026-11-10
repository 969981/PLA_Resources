/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ee720; name: FUN_001ee720
 */


long * FUN_001ee720(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00204504(1,*(long *)(param_2 + 0x28) + 0x10);
  if (plVar2 != (long *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = param_3;
    iVar1 = (**(code **)(param_2 + 0x10))(param_1,plVar2);
    if (iVar1 != 0) {
      FUN_002044d4(plVar2);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}


