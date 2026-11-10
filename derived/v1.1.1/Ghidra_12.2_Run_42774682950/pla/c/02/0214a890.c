/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0214a890; name: FUN_0214a890
 */


undefined8 FUN_0214a890(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong local_30;
  undefined4 local_28;
  
  local_30 = local_30 & 0xffffffff00000000;
  lVar3 = FUN_00150ba0(param_1,0xfff0b9d3,&local_30);
  if (((lVar3 == 0xccc2ccc1) && ((int)local_30 != 0)) &&
     (iVar1 = FUN_00152090(param_1,1), iVar1 == 1)) {
    uVar2 = FUN_0014fef0(param_1);
    local_28 = 2;
    local_30 = param_1;
    FUN_00901cc0(param_1,&local_30,uVar2);
  }
  else {
    FUN_00151490(param_1);
  }
  return 1;
}


