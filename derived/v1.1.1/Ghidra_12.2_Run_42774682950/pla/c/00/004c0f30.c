/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c0f30; name: FUN_004c0f30
 */


undefined * FUN_004c0f30(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  char *__s2;
  undefined *puVar3;
  ulong uVar4;
  
  if ((PTR_s_TLS_AES_128_GCM_SHA256_04181218 == (undefined *)0x0) ||
     (iVar2 = strcmp(param_1,PTR_s_TLS_AES_128_GCM_SHA256_04181218), iVar2 != 0)) {
    if ((PTR_s_TLS_AES_256_GCM_SHA384_04181268 == (undefined *)0x0) ||
       (iVar2 = strcmp(param_1,PTR_s_TLS_AES_256_GCM_SHA384_04181268), iVar2 != 0)) {
      if ((PTR_s_TLS_CHACHA20_POLY1305_SHA256_041812b8 == (undefined *)0x0) ||
         (iVar2 = strcmp(param_1,PTR_s_TLS_CHACHA20_POLY1305_SHA256_041812b8), iVar2 != 0)) {
        if ((PTR_s_TLS_AES_128_CCM_SHA256_04181308 == (undefined *)0x0) ||
           (iVar2 = strcmp(param_1,PTR_s_TLS_AES_128_CCM_SHA256_04181308), iVar2 != 0)) {
          if ((PTR_s_TLS_AES_128_CCM_8_SHA256_04181358 == (undefined *)0x0) ||
             (iVar2 = strcmp(param_1,PTR_s_TLS_AES_128_CCM_8_SHA256_04181358), iVar2 != 0)) {
            puVar3 = (undefined *)0x0;
          }
          else {
            puVar3 = (undefined *)0x4181348;
          }
        }
        else {
          puVar3 = (undefined *)0x41812f8;
        }
      }
      else {
        puVar3 = (undefined *)0x41812a8;
      }
    }
    else {
      puVar3 = (undefined *)0x4181258;
    }
  }
  else {
    puVar3 = &DAT_04181208;
  }
  uVar4 = 0;
  puVar1 = &DAT_0417de78;
  __s2 = PTR_s_TLS_RSA_WITH_NULL_MD5_0417de88;
  while( true ) {
    if ((__s2 != (char *)0x0) && (iVar2 = strcmp(param_1,__s2), iVar2 == 0)) {
      return puVar1;
    }
    uVar4 = uVar4 + 1;
    if (0xa2 < uVar4) break;
    __s2 = *(char **)(puVar1 + 0x60);
    puVar1 = puVar1 + 0x50;
  }
  if (puVar3 != (undefined *)0x0) {
    return puVar3;
  }
  iVar2 = strcmp(param_1,PTR_s_TLS_EMPTY_RENEGOTIATION_INFO_SCS_04181178);
  if (iVar2 == 0) {
    return &DAT_04181168;
  }
  iVar2 = strcmp(param_1,PTR_s_TLS_FALLBACK_SCSV_041811c8);
  puVar3 = &DAT_041811b8;
  if (iVar2 != 0) {
    puVar3 = (undefined *)0x0;
  }
  return puVar3;
}


