/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e61810; name: FUN_02e61810
 */


undefined8 FUN_02e61810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_02e4bb18();
  iVar2 = FUN_02e4bb18(param_1,param_3);
  if ((iVar1 == 0) && (iVar2 == 1)) {
    uVar3 = param_2;
    param_2 = param_3;
  }
  else {
    if ((iVar1 != 1) || (iVar2 != 0)) {
      return 0;
    }
    uVar3 = param_3;
  }
  uVar3 = FUN_02e4becc(param_1,uVar3,param_2);
  return uVar3;
}


