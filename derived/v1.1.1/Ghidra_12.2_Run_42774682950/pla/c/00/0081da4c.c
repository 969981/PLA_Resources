/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081da4c; name: FUN_0081da4c
 */


long * FUN_0081da4c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  while( true ) {
    if ((uVar1 & 1) == 0) {
      return (long *)0x0;
    }
    if ((long *)param_1[10] == param_1 + 9) break;
    lVar3 = (long)*(int *)((long)param_1 + 0x5c);
    plVar2 = (long *)(param_1[10] - lVar3);
    while (uVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,param_2), (uVar1 & 1) == 0) {
      plVar2 = (long *)(*(long *)((long)plVar2 + lVar3 + 8) - lVar3);
      if (plVar2 == (long *)((long)(param_1 + 9) - (long)*(int *)((long)param_1 + 0x5c))) {
        return param_1;
      }
    }
    uVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
    param_1 = plVar2;
  }
  return param_1;
}


