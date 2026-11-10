/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154540; name: FUN_00154540
 */


long FUN_00154540(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_001511d0();
  lVar3 = lVar2;
  if (lVar2 != 0) {
    iVar1 = FUN_00152090(param_1,param_2);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00151a70(param_1,0xfff0b9d8,param_3);
      iVar1 = FUN_00150750(param_1,0xffffffff,0xfffffffe);
      lVar3 = 0;
      if (iVar1 != 0) {
        lVar3 = lVar2;
      }
      FUN_0014ff10(param_1,0xfffffffd);
    }
  }
  return lVar3;
}


