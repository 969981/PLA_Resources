/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155bc0; name: FUN_00155bc0
 */


void FUN_00155bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00151a70(param_1,0xfff0b9d8,"_LOADED");
  if (iVar1 != 5) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar2 = FUN_0014feb0(param_1,0xfff0b9d8);
    FUN_00151fe0(param_1,0,0);
    FUN_00150260(param_1,0xffffffff);
    FUN_00152550(param_1,uVar2,"_LOADED");
  }
  FUN_00151a70(param_1,0xffffffff,param_2);
  iVar1 = FUN_00150cc0(param_1,0xffffffff);
  if (iVar1 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_001516f0(param_1,param_3,0);
    FUN_00151570(param_1,param_2);
    FUN_00152d80(param_1,1,1,0,0);
    FUN_00150260(param_1,0xffffffff);
    FUN_00152550(param_1,0xfffffffd,param_2);
  }
  FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
  FUN_0014ff10(param_1,0xfffffffe);
  if (param_4 == 0) {
    return;
  }
  FUN_00150260(param_1,0xffffffff);
  FUN_001522a0(param_1,param_2);
  return;
}


