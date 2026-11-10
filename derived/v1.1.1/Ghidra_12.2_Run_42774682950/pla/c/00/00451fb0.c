/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00451fb0; name: FUN_00451fb0
 */


undefined8 FUN_00451fb0(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar3 = FUN_004230e0();
  if (lVar3 == 0) {
    FUN_004014b0(0xb,0x94,0x41,"external/openssl/crypto/x509/x_pubkey.c",0x6d);
    return 0xffffffff;
  }
  uVar1 = FUN_00407f40(*(undefined8 *)*param_2);
  iVar2 = FUN_00422f40(lVar3,uVar1);
  if (iVar2 == 0) {
    uVar4 = 0x6f;
    uVar5 = 0x72;
  }
  else {
    pcVar6 = *(code **)(*(long *)(lVar3 + 0x10) + 0x20);
    if (pcVar6 == (code *)0x0) {
      uVar5 = 0x81;
      uVar4 = 0x7c;
    }
    else {
      iVar2 = (*pcVar6)(lVar3,param_2);
      if (iVar2 != 0) {
        *param_1 = lVar3;
        return 1;
      }
      uVar4 = 0x7d;
      uVar5 = 0x7d;
    }
  }
  FUN_004014b0(0xb,0x94,uVar4,"external/openssl/crypto/x509/x_pubkey.c",uVar5);
  FUN_00423420(lVar3);
  return 0;
}


