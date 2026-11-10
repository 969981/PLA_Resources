/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001556c0; name: FUN_001556c0
 */


undefined8 FUN_001556c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0014feb0();
  iVar2 = FUN_00152090(param_1,uVar1);
  if (iVar2 != 0) {
    FUN_00151570(param_1,param_3);
    iVar2 = FUN_00151d20(param_1,0xfffffffe);
    if (iVar2 != 0) {
      FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_00150260(param_1,uVar1);
      FUN_00152d80(param_1,1,1,0,0);
      return 1;
    }
    FUN_0014ff10(param_1,0xfffffffd);
  }
  return 0;
}


