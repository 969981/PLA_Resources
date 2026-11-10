/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d410; name: FUN_0040d410
 */


bool FUN_0040d410(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(param_4 + 0x28) * 2 < *(int *)(param_3 + 8) + *(int *)(param_2 + 8)) {
    return false;
  }
  FUN_0040e090(param_5);
  lVar3 = FUN_0040e240(param_5);
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_00413460(lVar3,param_2,param_5);
    }
    else {
      iVar2 = FUN_004129d0(lVar3,param_2,param_3,param_5);
    }
    if (iVar2 != 0) {
      iVar2 = FUN_0040d4e0(param_1,lVar3,param_4);
      bVar1 = iVar2 != 0;
      goto LAB_0040d4b4;
    }
  }
  bVar1 = false;
LAB_0040d4b4:
  FUN_0040e1b0(param_5);
  return bVar1;
}


