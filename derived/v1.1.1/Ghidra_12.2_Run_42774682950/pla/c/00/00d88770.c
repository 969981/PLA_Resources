/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d88770; name: FUN_00d88770
 */


long * FUN_00d88770(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    do {
      lVar3 = *param_1;
      *param_1 = 0;
      lVar2 = *param_3;
      *param_3 = lVar3;
      if (lVar2 != 0) {
        FUN_00d85e08(param_3 + 1);
      }
      plVar1 = param_1 + 1;
      lVar2 = param_1[2];
      lVar3 = param_1[3];
      param_1 = param_1 + 4;
      param_3[1] = *plVar1;
      param_3[2] = lVar2;
      param_3[3] = lVar3;
      param_3 = param_3 + 4;
    } while (param_1 != param_2);
  }
  return param_3;
}


