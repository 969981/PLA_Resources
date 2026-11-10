/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ea660; name: FUN_008ea660
 */


void FUN_008ea660(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 param_5)

{
  long lVar1;
  
  if (*param_3 == 0) {
    FUN_00151490(param_2);
    lVar1 = *param_4;
  }
  else {
    FUN_00150260(*param_3,(int)param_3[1]);
    if (*param_3 == param_2) {
      lVar1 = *param_4;
    }
    else {
      FUN_0014fe00(*param_3,param_2,1);
      lVar1 = *param_4;
    }
  }
  if (lVar1 == 0) {
    FUN_00151490(param_2);
  }
  else {
    FUN_00150260(lVar1,(int)param_4[1]);
    if (*param_4 != param_2) {
      FUN_0014fe00(*param_4,param_2,1);
    }
  }
  FUN_00152790(param_2,param_5);
  return;
}


