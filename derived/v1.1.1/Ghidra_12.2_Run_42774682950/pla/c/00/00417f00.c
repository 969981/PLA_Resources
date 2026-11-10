/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417f00; name: FUN_00417f00
 */


undefined8 * FUN_00417f00(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *__dest;
  long lVar5;
  
  lVar2 = FUN_004071e0();
  if ((lVar2 == 0) ||
     (puVar3 = (undefined8 *)FUN_00400260(0x18,"external/openssl/crypto/conf/conf_api.c",0xc5),
     puVar3 == (undefined8 *)0x0)) {
    FUN_00407010(lVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    sVar4 = strlen(param_2);
    sVar4 = (long)((sVar4 << 0x20) + 0x100000000) >> 0x20;
    __dest = (void *)FUN_00400260(sVar4,"external/openssl/crypto/conf/conf_api.c",200);
    *puVar3 = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,sVar4);
      puVar3[1] = 0;
      puVar3[2] = lVar2;
      lVar5 = FUN_00405810(*(undefined8 *)(param_1 + 0x10),puVar3);
      if ((lVar5 == 0) && (iVar1 = FUN_00405f60(*(undefined8 *)(param_1 + 0x10)), iVar1 < 1)) {
        return puVar3;
      }
    }
    FUN_00407010(lVar2);
    FUN_00400420(*puVar3,"external/openssl/crypto/conf/conf_api.c",0xd7);
  }
  FUN_00400420(puVar3,"external/openssl/crypto/conf/conf_api.c",0xd8);
  return (undefined8 *)0x0;
}


