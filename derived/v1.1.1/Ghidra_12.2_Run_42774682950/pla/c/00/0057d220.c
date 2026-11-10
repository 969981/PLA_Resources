/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057d220; name: FUN_0057d220
 */


void FUN_0057d220(undefined8 *param_1,int *param_2)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  long local_38;
  
  local_38 = 0;
  *param_1 = "invalid";
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*param_2 == 5) {
    __s1 = (char *)FUN_0057ce70(param_2,&DAT_039a01c1,&local_38);
    if (local_38 != 0) {
      FUN_002f1e00("Parsing refresh token",local_38,
                   "external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                   ,0x4a);
    }
    if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,"authorized_user"), iVar1 == 0)) {
      *param_1 = "authorized_user";
      uVar2 = FUN_0057d180(param_2,"client_secret",param_1 + 2);
      if (((uVar2 & 1) != 0) &&
         ((uVar2 = FUN_0057d180(param_2,"client_id",param_1 + 1), (uVar2 & 1) != 0 &&
          (uVar2 = FUN_0057d180(param_2,"refresh_token",param_1 + 3), (uVar2 & 1) != 0)))) {
        return;
      }
    }
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/oauth2/oauth2_credentials.cc"
                 ,0x45,2,"Invalid json.");
  }
  *param_1 = "invalid";
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
    param_1[3] = 0;
  }
  return;
}


