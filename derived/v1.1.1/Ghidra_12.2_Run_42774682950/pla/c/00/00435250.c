/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00435250; name: FUN_00435250
 */


undefined4 FUN_00435250(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*param_3 == 0) {
    FUN_0040c6b0(param_1,0);
    uVar2 = 1;
  }
  else {
    FUN_0040e090(param_4);
    lVar3 = FUN_0040e240(param_4);
    if ((lVar3 == 0) || (iVar1 = FUN_0040cd10(lVar3,*param_3 + -1), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00435110(param_1,param_2,lVar3,param_3,param_4);
    }
    FUN_0040e1b0(param_4);
  }
  return uVar2;
}


