/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108fd08; name: FUN_0108fd08
 */


undefined8 FUN_0108fd08(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar1 = FUN_02c60688();
  if ((iVar1 == 3) || (uVar2 = FUN_02c602a0(param_1,param_2), uVar2 < 5)) {
    uVar3 = 0;
  }
  else {
    uVar4 = iVar1 + param_3;
    if (2 < uVar4) {
      uVar4 = 3;
    }
    FUN_02c60690(param_1,param_2,uVar4);
    iVar1 = FUN_02c602a0(param_1,param_2);
    FUN_02c60528(param_1,param_2,iVar1 - uVar2);
    uVar3 = 1;
  }
  return uVar3;
}


