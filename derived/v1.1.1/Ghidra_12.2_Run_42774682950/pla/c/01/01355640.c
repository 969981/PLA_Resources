/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01355640; name: FUN_01355640
 */


long * FUN_01355640(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != param_2) {
    plVar2 = (long *)*param_1;
    while( true ) {
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      plVar1 = (long *)*param_3;
      *param_3 = (long)plVar2;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      plVar2 = (long *)param_1[4];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      plVar1 = (long *)param_3[4];
      param_3[4] = (long)plVar2;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      plVar2 = param_1 + 5;
      param_1 = param_1 + 6;
      *(int *)(param_3 + 5) = (int)*plVar2;
      param_3 = param_3 + 6;
      if (param_1 == param_2) break;
      plVar2 = (long *)*param_1;
    }
  }
  return param_3;
}


