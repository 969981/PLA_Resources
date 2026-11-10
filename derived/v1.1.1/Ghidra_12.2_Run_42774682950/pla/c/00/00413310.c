/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413310; name: FUN_00413310
 */


undefined8 FUN_00413310(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_1 != param_2) && (lVar3 = FUN_0040c5d0(param_1), lVar3 == 0)) {
    return 0;
  }
  do {
    if (param_3 < 1) {
      return 1;
    }
    iVar1 = FUN_0040c070(param_4);
    iVar2 = FUN_0040c070(param_1);
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      FUN_004014b0(3,0x77,0x6e,"external/openssl/crypto/bn/bn_mod.c",0x126);
      return 0;
    }
    iVar2 = param_3;
    if (iVar1 <= param_3) {
      iVar2 = iVar1;
    }
    if (iVar2 == 0) {
      uVar4 = FUN_00410400(param_1,param_1);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      param_3 = param_3 + -1;
      iVar1 = FUN_0040cc60(param_1,param_4);
    }
    else {
      uVar4 = FUN_00410600(param_1,param_1,iVar2);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      param_3 = param_3 - iVar2;
      iVar1 = FUN_0040cc60(param_1,param_4);
    }
  } while ((iVar1 < 0) || (uVar4 = FUN_00411b00(param_1,param_1,param_4), (int)uVar4 != 0));
  return uVar4;
}


