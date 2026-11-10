/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00452a30; name: FUN_00452a30
 */


undefined8 FUN_00452a30(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    FUN_004014b0(3,100,0x6b,"external/openssl/crypto/bn/bn_blind.c",0x8d);
  }
  else {
    if ((int)param_3[5] == -1) {
      *(undefined4 *)(param_3 + 5) = 0;
    }
    else {
      iVar1 = FUN_00452710(param_3,param_4);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_2 == 0) || (lVar2 = FUN_0040c5d0(param_2,param_3[1]), lVar2 != 0)) {
      if (param_3[7] == 0) {
        uVar3 = FUN_00413180(param_1,param_1,*param_3,param_3[3],param_4);
        return uVar3;
      }
      uVar3 = FUN_0040d3e0(param_1,param_1,*param_3,param_3[7],param_4);
      return uVar3;
    }
  }
  return 0;
}


