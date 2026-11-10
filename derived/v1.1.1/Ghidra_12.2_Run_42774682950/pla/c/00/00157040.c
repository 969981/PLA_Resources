/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00157040; name: FUN_00157040
 */


void FUN_00157040(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  
  FUN_001549d0(param_1,1);
  iVar1 = FUN_00155630(param_1,1,param_2);
  if (iVar1 != 0) {
    FUN_00150260(param_1,1);
    FUN_00152d80(param_1,1,3,0,0);
    return;
  }
  FUN_001516f0(param_1,param_4,0);
  FUN_00150260(param_1,1);
  if (param_3 == 0) {
    FUN_00151490(param_1);
    return;
  }
  FUN_001514d0(param_1,0);
  return;
}


