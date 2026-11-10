/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e20e0; name: FUN_004e20e0
 */


undefined8 FUN_004e20e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = FUN_004e2000(param_1,param_2);
    return uVar3;
  }
  lVar2 = FUN_0044eb50(param_3);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_004e2000(param_1,param_2,lVar2);
    if (iVar1 == 0) {
      FUN_004078c0(lVar2,PTR_FUN_04374180);
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}


