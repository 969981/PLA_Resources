/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135e450; name: FUN_0135e450
 */


undefined8 * FUN_0135e450(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      plVar4 = (long *)param_1[3];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      plVar3 = (long *)param_3[3];
      param_3[3] = plVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      puVar1 = param_1 + 4;
      uVar2 = param_1[5];
      param_1 = param_1 + 6;
      param_3[4] = *puVar1;
      param_3[5] = uVar2;
      param_3 = param_3 + 6;
    } while (param_1 != param_2);
  }
  return param_3;
}


