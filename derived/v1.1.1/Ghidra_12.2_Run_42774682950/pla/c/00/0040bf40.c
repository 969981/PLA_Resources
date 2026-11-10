/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040bf40; name: FUN_0040bf40
 */


undefined8 FUN_0040bf40(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if ((int)param_1[1] != 0) {
    if (param_2 == 0) {
      FUN_0040c6b0(param_1,0,(int)param_1[1],0);
    }
    else {
      iVar1 = FUN_0040ee50(*param_1,*param_1);
      if (iVar1 != 0) {
        lVar2 = FUN_0040c660(param_1,(int)param_1[1] + 1);
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = param_1[1];
        *(int *)(param_1 + 1) = (int)lVar2 + 1;
        *(int *)(*param_1 + (long)(int)lVar2 * 4) = iVar1;
      }
    }
  }
  return 1;
}


