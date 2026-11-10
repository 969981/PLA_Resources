/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155630; name: FUN_00155630
 */


int FUN_00155630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00152090();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_00151570(param_1,param_3);
    iVar1 = FUN_00151d20(param_1,0xfffffffe);
    if (iVar1 == 0) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0xfffffffe;
      FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
    }
    FUN_0014ff10(param_1,uVar2);
  }
  return iVar1;
}


