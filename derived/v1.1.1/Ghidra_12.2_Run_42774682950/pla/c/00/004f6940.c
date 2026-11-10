/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f6940; name: FUN_004f6940
 */


long FUN_004f6940(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_004002a0(0x50,"external/openssl/crypto/asn1/x_pkey.c",0x14);
  if (lVar1 != 0) {
    uVar2 = FUN_00446a40();
    *(undefined8 *)(lVar1 + 8) = uVar2;
    lVar3 = FUN_0041cee0();
    *(long *)(lVar1 + 0x10) = lVar3;
    if ((lVar3 != 0) && (*(long *)(lVar1 + 8) != 0)) {
      return lVar1;
    }
    FUN_00446a50();
    thunk_FUN_0040a4b0(*(undefined8 *)(lVar1 + 0x10));
    FUN_00423420(*(undefined8 *)(lVar1 + 0x18));
    if (*(int *)(lVar1 + 0x30) != 0) {
      FUN_00400420(*(undefined8 *)(lVar1 + 0x28),"external/openssl/crypto/asn1/x_pkey.c",0x2d);
    }
    FUN_00400420(lVar1,"external/openssl/crypto/asn1/x_pkey.c",0x2e);
  }
  FUN_004014b0(0xd,0xad,0x41,"external/openssl/crypto/asn1/x_pkey.c",0x20);
  return 0;
}


