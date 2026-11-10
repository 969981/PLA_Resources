/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024e3b90; name: FUN_024e3b90
 */


undefined8 FUN_024e3b90(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int local_24;
  
  local_24 = 0;
  lVar3 = FUN_00150ba0(param_1,0xfff0b9d3,&local_24);
  if (((lVar3 == 0xccc2ccc1) && (local_24 != 0)) && (iVar1 = FUN_00152090(param_1,1), iVar1 == 1)) {
    uVar2 = FUN_0014fef0(param_1);
    if (param_1 == 0) {
      FUN_00151490(0);
    }
    else {
      FUN_00150260(param_1,2);
    }
    FUN_00151930(param_1,uVar2);
  }
  else {
    FUN_00151490(param_1);
  }
  return 1;
}


