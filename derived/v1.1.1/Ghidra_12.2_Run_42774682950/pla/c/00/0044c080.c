/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044c080; name: FUN_0044c080
 */


long FUN_0044c080(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  
  iVar1 = FUN_0040c070();
  if (iVar1 < 0x80) {
    lVar2 = FUN_00413c40(param_1);
    return lVar2;
  }
  __s = (char *)FUN_00413a90(param_1);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    lVar2 = sVar3 + 3;
    lVar4 = FUN_00400260(lVar2,"external/openssl/crypto/x509v3/v3_utl.c",0x7a);
    if (lVar4 != 0) {
      if (*__s == '-') {
        FUN_004050b0(lVar4,&DAT_03971a6f,lVar2);
        pcVar5 = __s + 1;
      }
      else {
        FUN_004050b0(lVar4,&DAT_039494c9,lVar2);
        pcVar5 = __s;
      }
      FUN_00405120(lVar4,pcVar5,lVar2);
      FUN_00400420(__s,"external/openssl/crypto/x509v3/v3_utl.c",0x89);
      return lVar4;
    }
    FUN_004014b0(0x22,0xa7,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0x7c);
    FUN_00400420(__s,"external/openssl/crypto/x509v3/v3_utl.c",0x7d);
  }
  return 0;
}


