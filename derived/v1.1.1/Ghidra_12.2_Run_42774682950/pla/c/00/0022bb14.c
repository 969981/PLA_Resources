/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022bb14; name: FUN_0022bb14
 */


long * FUN_0022bb14(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)FUN_0024ff20(param_1 + 5,param_3);
  if (plVar1 == (long *)0x0) {
    for (plVar1 = (long *)param_1[2]; param_1 + 1 != plVar1; plVar1 = (long *)plVar1[1]) {
      plVar2 = (long *)FUN_0024ff20(plVar1[2] + 0x90,param_3);
      if (plVar2 != (long *)0x0) {
        return plVar2;
      }
    }
    lVar3 = FUN_0022bbe8(param_1,param_3);
    plVar1 = (long *)FUN_0024fa94(lVar3 + 0x90,param_3);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*param_1 + 0x98))(param_1,plVar1,param_2,param_3);
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
  }
  return plVar1;
}


