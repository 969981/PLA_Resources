/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044d2a0; name: FUN_0044d2a0
 */


long FUN_0044d2a0(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [32];
  
  pcVar3 = strchr(param_1,0x2f);
  if ((pcVar3 != (char *)0x0) &&
     (lVar4 = FUN_00404f10(param_1,"external/openssl/crypto/x509v3/v3_utl.c",0x3e3), lVar4 != 0)) {
    pcVar3[lVar4 - (long)param_1] = '\0';
    iVar1 = FUN_0044d0a0(auStack_50,lVar4);
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else {
      iVar2 = FUN_0044d0a0(auStack_50 + iVar1,pcVar3 + (lVar4 - (long)param_1) + 1);
      FUN_00400420(lVar4,"external/openssl/crypto/x509v3/v3_utl.c",0x3f0);
      lVar4 = 0;
      if (iVar2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (iVar1 == iVar2) {
          lVar5 = FUN_0041cee0();
          if ((lVar5 != 0) && (iVar1 = thunk_FUN_0040a280(lVar5,auStack_50,iVar1 << 1), iVar1 != 0))
          {
            return lVar5;
          }
          lVar4 = 0;
        }
      }
    }
    FUN_00400420(lVar4,"external/openssl/crypto/x509v3/v3_utl.c",0x3ff);
    thunk_FUN_0040a4b0(lVar5);
  }
  return 0;
}


