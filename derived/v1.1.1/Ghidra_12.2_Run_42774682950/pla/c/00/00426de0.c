/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00426de0; name: FUN_00426de0
 */


undefined8 FUN_00426de0(undefined4 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((*(int *)(param_3 + 0x10) == 0) && (iVar2 = FUN_0040c130(param_3), iVar2 == 0)) {
    iVar2 = FUN_0040c070(param_3);
    if (iVar2 == 1) {
      FUN_0040c6b0(param_2,0);
      uVar4 = 1;
    }
    else {
      iVar3 = FUN_0040cdc0(param_3,iVar2 + -2);
      if ((iVar3 == 0) && (iVar3 = FUN_0040cdc0(param_3,iVar2 + -3), iVar3 == 0)) {
        uVar6 = 0xffffff9c;
        do {
          uVar4 = FUN_00426b60(param_1,param_2,iVar2 + 1,0xffffffff,0);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          iVar3 = FUN_0040cc60(param_2,param_3);
          if (-1 < iVar3) {
            uVar4 = FUN_00411b00(param_2,param_2,param_3);
            if ((int)uVar4 == 0) {
              return uVar4;
            }
            iVar3 = FUN_0040cc60(param_2,param_3);
            if ((-1 < iVar3) && (uVar4 = FUN_00411b00(param_2,param_2,param_3), (int)uVar4 == 0)) {
              return uVar4;
            }
          }
          bVar1 = 0xfffffffe < uVar6;
          uVar6 = uVar6 + 1;
          if (bVar1) {
            uVar4 = 0x71;
            uVar5 = 0x99;
            goto LAB_00426e24;
          }
          iVar3 = FUN_0040cc60(param_2,param_3);
          uVar4 = 1;
        } while (-1 < iVar3);
      }
      else {
        uVar6 = 0xffffff9c;
        do {
          uVar4 = FUN_00426b60(param_1,param_2,iVar2,0xffffffff,0);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          bVar1 = 0xfffffffe < uVar6;
          uVar6 = uVar6 + 1;
          if (bVar1) {
            uVar4 = 0x71;
            uVar5 = 0xa6;
            goto LAB_00426e24;
          }
          iVar3 = FUN_0040cc60(param_2,param_3);
          uVar4 = 1;
        } while (-1 < iVar3);
      }
    }
  }
  else {
    uVar4 = 0x73;
    uVar5 = 0x77;
LAB_00426e24:
    FUN_004014b0(3,0x8a,uVar4,"external/openssl/crypto/bn/bn_rand.c",uVar5);
    uVar4 = 0;
  }
  return uVar4;
}


