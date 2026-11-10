/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185e190; name: FUN_0185e190
 */


long * FUN_0185e190(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if ((param_1 != param_2) && (*param_1 != *param_3)) {
    plVar2 = param_1;
    do {
      if (param_2 + -4 == plVar2) {
        return param_2;
      }
      param_1 = plVar2 + 4;
      plVar1 = plVar2 + 4;
      plVar2 = param_1;
    } while (*plVar1 != *param_3);
  }
  if ((param_1 != param_2) && (param_1 + 4 != param_2)) {
    if (param_1[4] == *param_3) {
      plVar2 = param_1;
    }
    else {
      FUN_00b6141c(param_1);
      FUN_00b5fc1c(param_1 + 2,param_1 + 6);
      plVar2 = param_1 + 4;
    }
    plVar1 = param_1 + 8;
    param_1 = plVar2;
    for (; plVar1 != param_2; plVar1 = plVar1 + 4) {
      if (*plVar1 != *param_3) {
        FUN_00b6141c(param_1,plVar1);
        FUN_00b5fc1c(param_1 + 2,plVar1 + 2);
        param_1 = param_1 + 4;
      }
    }
  }
  return param_1;
}


