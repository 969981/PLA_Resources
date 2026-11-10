/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a0070; name: FUN_004a0070
 */


bool FUN_004a0070(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 int *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  long local_38;
  
  uStack_54 = 4;
  local_58 = param_3;
  local_50 = param_2;
  iVar1 = FUN_0041ced0(&local_58,0);
  iVar2 = FUN_00456840(param_6);
  if (iVar2 + -0xb < iVar1) {
    uVar5 = 0x22;
    uVar4 = 0x70;
  }
  else {
    lVar3 = FUN_00400260(iVar2 + 1,"external/openssl/crypto/rsa/rsa_saos.c",0x25);
    if (lVar3 != 0) {
      local_38 = lVar3;
      FUN_0041ced0(&local_58,&local_38);
      iVar1 = FUN_00456880(iVar1,lVar3,param_4,param_6,1);
      if (0 < iVar1) {
        *param_5 = iVar1;
      }
      FUN_00400620(lVar3,iVar2 + 1,"external/openssl/crypto/rsa/rsa_saos.c",0x32);
      return 0 < iVar1;
    }
    uVar4 = 0x41;
    uVar5 = 0x27;
  }
  FUN_004014b0(4,0x76,uVar4,"external/openssl/crypto/rsa/rsa_saos.c",uVar5);
  return false;
}


