/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044c190; name: FUN_0044c190
 */


long FUN_0044c190(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_00420ce0(param_2,0);
  if ((lVar1 == 0) || (lVar2 = FUN_0044c080(lVar1), lVar2 == 0)) {
    FUN_004014b0(0x22,0x78,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0xa4);
    lVar2 = 0;
  }
  FUN_0040c1e0(lVar1);
  return lVar2;
}


