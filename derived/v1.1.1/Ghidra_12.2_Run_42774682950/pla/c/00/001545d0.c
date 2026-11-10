/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001545d0; name: FUN_001545d0
 */


long FUN_001545d0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001511d0();
  if ((lVar2 != 0) && (iVar1 = FUN_00152090(param_1,param_2), iVar1 != 0)) {
    FUN_00151a70(param_1,0xfff0b9d8,param_3);
    iVar1 = FUN_00150750(param_1,0xffffffff,0xfffffffe);
    FUN_0014ff10(param_1,0xfffffffd);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  FUN_00154670(param_1,param_2,param_3);
  return 0;
}


