/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043bed0; name: FUN_0043bed0
 */


long FUN_0043bed0(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    FUN_004014b0(0x10,0x90,0x43,"external/openssl/crypto/ec/ec_asn1.c",0x421);
  }
  else {
    if (((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) &&
       (lVar2 = FUN_0042ccf0(), lVar2 == 0)) {
      FUN_004014b0(0x10,0x90,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x427);
      return 0;
    }
    lVar1 = FUN_0043b8b0(lVar2 + 0x18,param_2,param_3);
    if (lVar1 != 0) {
      if (param_1 == (long *)0x0) {
        return lVar2;
      }
      *param_1 = lVar2;
      return lVar2;
    }
    FUN_004014b0(0x10,0x90,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x42e);
    if ((param_1 == (long *)0x0) || (*param_1 != lVar2)) {
      FUN_0042cd80(lVar2);
    }
  }
  return 0;
}


