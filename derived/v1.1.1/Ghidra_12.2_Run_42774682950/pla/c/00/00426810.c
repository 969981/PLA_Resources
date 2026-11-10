/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00426810; name: FUN_00426810
 */


undefined4
FUN_00426810(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_0040e090(param_5);
  lVar3 = FUN_0040e240(param_5);
  if (lVar3 == 0) {
LAB_004268a8:
    uVar2 = 0;
  }
  else {
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_00413430(lVar3,param_3,param_5);
      }
      else {
        iVar1 = FUN_004129a0(lVar3,param_2,param_3,param_5);
      }
      param_2 = lVar3;
      if (iVar1 == 0) goto LAB_004268a8;
    }
    uVar2 = FUN_004268d0(0,param_1,param_2,param_4,param_5);
  }
  FUN_0040e1b0(param_5);
  return uVar2;
}


