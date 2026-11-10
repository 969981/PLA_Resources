/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057b7a0; name: FUN_0057b7a0
 */


void FUN_0057b7a0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  long local_38;
  
  local_38 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = "invalid";
  param_1[2] = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                 ,0x50,2,"Invalid json.");
  }
  else {
    pcVar2 = (char *)FUN_0057ce70(param_2,&DAT_039a01c1,&local_38);
    if (local_38 != 0) {
      FUN_002f1e00("JSON key parsing",local_38,
                   "external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                   ,0x55);
    }
    if ((pcVar2 != (char *)0x0) && (iVar1 = strcmp(pcVar2,"service_account"), iVar1 == 0)) {
      *param_1 = "service_account";
      uVar3 = FUN_0057d180(param_2,"private_key_id",param_1 + 1);
      if (((uVar3 & 1) != 0) &&
         ((uVar3 = FUN_0057d180(param_2,"client_id",param_1 + 2), (uVar3 & 1) != 0 &&
          (uVar3 = FUN_0057d180(param_2,"client_email",param_1 + 3), (uVar3 & 1) != 0)))) {
        pcVar2 = (char *)FUN_0057ce70(param_2,"private_key",&local_38);
        if (local_38 != 0) {
          FUN_002f1e00("JSON key parsing",local_38,
                       "external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                       ,0x65);
        }
        if (pcVar2 != (char *)0x0) {
          FUN_00443d70();
          lVar4 = FUN_00403d80();
          iVar1 = FUN_004044c0(lVar4,pcVar2);
          if ((iVar1 < 0) || (sVar5 = strlen(pcVar2), sVar5 != (long)iVar1)) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                         ,0x6c,2,"Could not write into openssl BIO.");
          }
          else {
            lVar6 = FUN_004f1ee0(lVar4,0,0,&DAT_03996322);
            param_1[4] = lVar6;
            if (lVar6 == 0) {
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                           ,0x72,2,"Could not deserialize private key.");
            }
            else {
              iVar1 = 1;
            }
          }
          if (lVar4 != 0) {
            FUN_00403ee0(lVar4);
          }
          if (iVar1 != 0) {
            return;
          }
        }
      }
    }
  }
  *param_1 = "invalid";
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_00452330();
    param_1[4] = 0;
  }
  return;
}


