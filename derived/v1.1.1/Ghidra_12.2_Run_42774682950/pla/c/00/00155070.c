/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155070; name: FUN_00155070
 */


int FUN_00155070(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00150310(param_1,0xffffffff);
  if (iVar1 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    iVar1 = -1;
  }
  else {
    uVar2 = FUN_0014feb0(param_1,param_2);
    FUN_00151e00(param_1,uVar2,0);
    iVar1 = FUN_00150ba0(param_1,0xffffffff,0);
    FUN_0014ff10(param_1,0xfffffffe);
    if (iVar1 == 0) {
      iVar1 = FUN_00150fc0(param_1,uVar2);
      iVar1 = iVar1 + 1;
    }
    else {
      FUN_00151e00(param_1,uVar2,(long)iVar1);
      FUN_001528b0(param_1,uVar2,0);
    }
    FUN_001528b0(param_1,uVar2,(long)iVar1);
  }
  return iVar1;
}


