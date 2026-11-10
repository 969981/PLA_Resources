/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044c380; name: FUN_0044c380
 */


undefined4 FUN_0044c380(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_00420ce0(param_2,0);
  if ((lVar2 == 0) || (lVar3 = FUN_0044c080(lVar2), lVar3 == 0)) {
    FUN_004014b0(0x22,0x78,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0xa4);
    FUN_0040c1e0(lVar2);
    return 0;
  }
  FUN_0040c1e0(lVar2);
  uVar1 = FUN_0044be00(param_1,lVar3,param_3);
  FUN_00400420(lVar3,"external/openssl/crypto/x509v3/v3_utl.c",0xe9);
  return uVar1;
}


