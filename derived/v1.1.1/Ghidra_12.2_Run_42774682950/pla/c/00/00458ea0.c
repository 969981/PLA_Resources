/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00458ea0; name: FUN_00458ea0
 */


long FUN_00458ea0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = FUN_00407950(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = FUN_00407970(param_2,iVar1);
      param_3 = FUN_00459370(uVar3,uVar3,param_3);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(param_2);
    } while (iVar1 < iVar2);
  }
  if (param_3 == 0) {
    lVar4 = FUN_004071e0();
    return lVar4;
  }
  return param_3;
}


