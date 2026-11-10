/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413180; name: FUN_00413180
 */


undefined8 FUN_00413180(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_0040e090(param_5);
  lVar3 = FUN_0040e240(param_5);
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_00413430(lVar3,param_2,param_5);
    }
    else {
      iVar2 = FUN_004129a0(lVar3,param_2,param_3,param_5);
    }
    if ((iVar2 != 0) && (iVar2 = FUN_0040e5a0(0,param_1,lVar3,param_4,param_5), iVar2 != 0)) {
      if (*(int *)(param_1 + 0x10) != 0) {
        pcVar1 = (code *)PTR_FUN_043741b8;
        if (*(int *)(param_4 + 0x10) != 0) {
          pcVar1 = (code *)PTR_FUN_043741b0;
        }
        iVar2 = (*pcVar1)(param_1,param_1,param_4);
        if (iVar2 == 0) goto LAB_00413244;
      }
      uVar4 = 1;
      goto LAB_00413248;
    }
  }
LAB_00413244:
  uVar4 = 0;
LAB_00413248:
  FUN_0040e1b0(param_5);
  return uVar4;
}


