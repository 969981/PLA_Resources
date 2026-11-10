/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8a388; name: FUN_02e8a388
 */


void FUN_02e8a388(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (param_2 != (long *)0x0) {
    for (param_2 = (long *)*param_2; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
      plVar1 = (long *)FUN_02e7d3d0(DAT_0440a120,param_2 + 1);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x90))(param_1,plVar1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  return;
}


