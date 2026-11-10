/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043b9a0; name: FUN_0043b9a0
 */


int FUN_0043b9a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0043afe0(param_1,0);
  if (lVar2 == 0) {
    FUN_004014b0(0x10,0xbf,0x78,"external/openssl/crypto/ec/ec_asn1.c",0x36e);
    return 0;
  }
  iVar1 = FUN_0041f020(lVar2,param_2,PTR_DAT_04374270);
  if (iVar1 == 0) {
    FUN_004014b0(0x10,0xbf,0x79,"external/openssl/crypto/ec/ec_asn1.c",0x372);
  }
  FUN_00421810(lVar2,PTR_DAT_04374270);
  return iVar1;
}


