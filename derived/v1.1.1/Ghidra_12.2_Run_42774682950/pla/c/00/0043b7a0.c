/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043b7a0; name: FUN_0043b7a0
 */


long FUN_0043b7a0(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (int *)0x0) {
    uVar4 = 0x32d;
    uVar3 = 0x7c;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 2) {
      return 0;
    }
    if (iVar1 == 1) {
      lVar2 = FUN_0043b0f0(*(undefined8 *)(param_1 + 2));
      if (lVar2 == 0) {
        FUN_004014b0(0x10,0x108,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x33d);
        return 0;
      }
      FUN_0042e3f0(lVar2,0);
      return lVar2;
    }
    if (iVar1 == 0) {
      FUN_00407f40(*(undefined8 *)(param_1 + 2));
      lVar2 = FUN_004306d0();
      if (lVar2 == 0) {
        FUN_004014b0(0x10,0x108,0x77,"external/openssl/crypto/ec/ec_asn1.c",0x335);
        return 0;
      }
      FUN_0042e3f0(lVar2,1);
      return lVar2;
    }
    uVar3 = 0x73;
    uVar4 = 0x344;
  }
  FUN_004014b0(0x10,0x108,uVar3,"external/openssl/crypto/ec/ec_asn1.c",uVar4);
  return 0;
}


