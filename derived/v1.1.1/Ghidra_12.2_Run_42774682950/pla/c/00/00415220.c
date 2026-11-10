/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415220; name: FUN_00415220
 */


long FUN_00415220(void)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_00418000("OPENSSL_CONF");
  if (lVar1 != 0) {
    lVar1 = FUN_00404f10(lVar1,"external/openssl/crypto/conf/conf_mod.c",0x1e7);
    return lVar1;
  }
  __s = (char *)thunk_FUN_00418090();
  sVar2 = strlen(__s);
  lVar4 = (long)((sVar2 << 0x20) + 0xd00000000) >> 0x20;
  lVar1 = FUN_00400260(lVar4,"external/openssl/crypto/conf/conf_mod.c",0x1f0);
  if (lVar1 != 0) {
    uVar3 = thunk_FUN_00418090();
    FUN_00403120(lVar1,lVar4,"%s%s%s",uVar3,&DAT_0389ffa9,"openssl.cnf");
  }
  return lVar1;
}


