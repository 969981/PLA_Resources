/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057ba40; name: FUN_0057ba40
 */


undefined8 FUN_0057ba40(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  void *__ptr;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 local_38;
  
  iVar1 = strcmp(param_2,"RS256");
  if (iVar1 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                 ,0xda,2,"Unknown algorithm %s.",param_2);
    FUN_004230e0();
    return 0;
  }
  lVar5 = FUN_0044f850();
  lVar6 = FUN_004230e0();
  local_38 = 0;
  if (lVar5 == 0) {
    return 0;
  }
  lVar2 = FUN_00444930();
  if (lVar2 == 0) {
    pcVar7 = "Could not create MD_CTX";
    uVar4 = 0xeb;
LAB_0057bbd0:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                 ,uVar4,2,pcVar7);
    __ptr = (void *)0x0;
  }
  else {
    FUN_00423660(lVar6,*(undefined8 *)(param_1 + 0x20));
    iVar1 = FUN_00464b70(lVar2,0,lVar5,0,lVar6);
    if (iVar1 != 1) {
      pcVar7 = "DigestInit failed.";
      uVar4 = 0xf0;
      goto LAB_0057bbd0;
    }
    sVar3 = strlen(param_3);
    iVar1 = FUN_00444ad0(lVar2,param_3,sVar3);
    if (iVar1 != 1) {
      pcVar7 = "DigestUpdate failed.";
      uVar4 = 0xf4;
      goto LAB_0057bbd0;
    }
    iVar1 = FUN_00464d60(lVar2,0,&local_38);
    if (iVar1 != 1) {
      pcVar7 = "DigestFinal (get signature length) failed.";
      uVar4 = 0xf8;
      goto LAB_0057bbd0;
    }
    __ptr = (void *)FUN_002ebd50(local_38);
    iVar1 = FUN_00464d60(lVar2,__ptr,&local_38);
    if (iVar1 == 1) {
      uVar4 = FUN_003eca70(__ptr,local_38,1,0);
      goto joined_r0x0057bb50;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                 ,0xfd,2,"DigestFinal (signature compute) failed.");
  }
  uVar4 = 0;
joined_r0x0057bb50:
  if (lVar6 != 0) {
    FUN_00423420(lVar6);
  }
  if (lVar2 != 0) {
    FUN_00444950(lVar2);
  }
  if (__ptr == (void *)0x0) {
    return uVar4;
  }
  free(__ptr);
  return uVar4;
}


