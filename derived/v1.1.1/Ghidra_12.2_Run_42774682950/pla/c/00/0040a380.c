/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a380; name: FUN_0040a380
 */


long FUN_0040a380(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_004002a0(0x18,"external/openssl/crypto/asn1/asn1_lib.c",0x13c);
    if (lVar2 == 0) {
      FUN_004014b0(0xd,0x82,0x41,"external/openssl/crypto/asn1/asn1_lib.c",0x13e);
      return 0;
    }
    *(undefined4 *)(lVar2 + 4) = 4;
    iVar1 = FUN_0040a150(lVar2,param_1);
    if (iVar1 != 0) {
      return lVar2;
    }
    uVar3 = (uint)*(undefined8 *)(lVar2 + 0x10);
    if ((uVar3 >> 4 & 1) == 0) {
      FUN_00400420(*(undefined8 *)(lVar2 + 8),"external/openssl/crypto/asn1/asn1_lib.c",0x14a);
    }
    if ((uVar3 >> 7 & 1) == 0) {
      FUN_00400420(lVar2,"external/openssl/crypto/asn1/asn1_lib.c",0x14c);
    }
  }
  return 0;
}


