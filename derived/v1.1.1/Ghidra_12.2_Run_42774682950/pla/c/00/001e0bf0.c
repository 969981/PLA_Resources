/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e0bf0; name: FUN_001e0bf0
 */


undefined8 FUN_001e0bf0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar1 = (long *)(lVar3 + lVar2 * 0x20);
  plVar4 = (long *)*plVar1;
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 1;
    }
    lVar3 = (*(code *)param_1[2])(*plVar4 + 0x28,*(undefined8 *)(*plVar4 + 0x20),param_2,param_3);
    if (lVar3 != 0) break;
    plVar4 = (long *)plVar4[2];
  }
  FUN_001e3790(plVar1,plVar4,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}


