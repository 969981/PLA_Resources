/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ebb228; name: FUN_01ebb228
 */


void FUN_01ebb228(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  plVar1 = param_2 + 1;
  plVar3 = param_2;
  if (plVar1 != plVar4) {
    do {
      plVar1 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
      }
      param_2 = plVar3 + 1;
      lVar2 = *param_2;
      *param_2 = 0;
      plVar1 = plVar3 + 2;
      *plVar3 = lVar2;
      plVar3 = param_2;
    } while (plVar1 != plVar4);
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == param_2) goto LAB_01ebb2c0;
  }
  do {
    plVar1 = plVar1 + -1;
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x18))();
    }
  } while (param_2 != plVar1);
LAB_01ebb2c0:
  *(long **)(param_1 + 8) = param_2;
  return;
}


