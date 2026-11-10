/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5d4c; name: FUN_032c5d4c
 */


long * FUN_032c5d4c(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    if (param_3 < 0) {
      param_3 = FUN_032c4900(param_2);
    }
    lVar1 = param_1[1];
    lVar2 = (long)(int)lVar1 + -1;
    FUN_032c4fd4(param_1,(int)lVar2 + param_3);
    FUN_032c4af0(*param_1 + lVar2,param_2,(int)param_1[1] - (int)lVar1);
  }
  return param_1;
}


