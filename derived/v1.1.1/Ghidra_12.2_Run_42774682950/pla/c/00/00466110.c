/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00466110; name: FUN_00466110
 */


long FUN_00466110(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_70 [80];
  undefined8 local_18;
  
  iVar1 = FUN_004662e0(&local_18,0,0,0,param_1);
  if (iVar1 != 0) {
    lVar3 = FUN_004230e0();
    if (lVar3 == 0) {
      FUN_004014b0(6,0x6f,0x41,"external/openssl/crypto/evp/evp_pkey.c",0x1f);
      return 0;
    }
    uVar2 = FUN_00407f40(local_18);
    iVar1 = FUN_00422f40(lVar3,uVar2);
    if (iVar1 == 0) {
      FUN_004014b0(6,0x6f,0x76,"external/openssl/crypto/evp/evp_pkey.c",0x24);
      FUN_00409690(auStack_70,0x50,local_18);
      FUN_00402170(2,"TYPE=",auStack_70);
    }
    else {
      pcVar6 = *(code **)(*(long *)(lVar3 + 0x10) + 0x40);
      if (pcVar6 == (code *)0x0) {
        uVar4 = 0x90;
        uVar5 = 0x30;
      }
      else {
        iVar1 = (*pcVar6)(lVar3,param_1);
        if (iVar1 != 0) {
          return lVar3;
        }
        uVar4 = 0x91;
        uVar5 = 0x2c;
      }
      FUN_004014b0(6,0x6f,uVar4,"external/openssl/crypto/evp/evp_pkey.c",uVar5);
    }
    FUN_00423420(lVar3);
  }
  return 0;
}


