/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044e670; name: FUN_0044e670
 */


bool FUN_0044e670(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (((param_1 == 0) || (lVar2 = FUN_00451f30(*(undefined8 *)(param_1 + 0x50)), lVar2 == 0)) ||
     (iVar1 = FUN_00423050(lVar2,param_2), iVar1 == -2)) {
    FUN_004014b0(0xb,0x80,0x75,"external/openssl/crypto/x509/x509_cmp.c",300);
    return false;
  }
  if (iVar1 == -1) {
    FUN_004014b0(0xb,0x80,0x73,"external/openssl/crypto/x509/x509_cmp.c",0x129);
    return false;
  }
  if (iVar1 == 0) {
    FUN_004014b0(0xb,0x80,0x74,"external/openssl/crypto/x509/x509_cmp.c",0x126);
    iVar1 = 0;
  }
  return 0 < iVar1;
}


