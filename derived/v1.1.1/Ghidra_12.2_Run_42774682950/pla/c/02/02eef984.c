/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eef984; name: FUN_02eef984
 */


void FUN_02eef984(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_042ab160;
  for (plVar2 = (long *)param_1[4]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    plVar1 = (long *)FUN_02e7d3d0(DAT_0440a120,plVar2 + 1);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))(plVar1,param_1[1]);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  FUN_02eefa1c(param_1 + 4);
  FUN_02ef1770(param_1);
  return;
}


