/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155b20; name: FUN_00155b20
 */


undefined8 FUN_00155b20(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00151a70();
  if (iVar1 == 5) {
    return 1;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar2 = FUN_0014feb0(param_1,param_2);
  FUN_00151fe0(param_1,0,0);
  FUN_00150260(param_1,0xffffffff);
  FUN_00152550(param_1,uVar2,param_3);
  return 0;
}


