/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bda700; name: FUN_01bda700
 */


undefined8 * FUN_01bda700(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      plVar2 = (long *)param_1[3];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      plVar1 = (long *)param_3[3];
      param_3[3] = plVar2;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
    } while (param_1 != param_2);
  }
  return param_3;
}


