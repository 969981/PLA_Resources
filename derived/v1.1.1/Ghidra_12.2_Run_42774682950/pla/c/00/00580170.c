/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00580170; name: FUN_00580170
 */


void FUN_00580170(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  iVar1 = FUN_0057b770();
  if (iVar1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/jwt_credentials.cc"
                 ,0x88,2,"Invalid input for jwt credentials creation");
    *param_1 = 0;
  }
  else {
    lVar2 = FUN_002e2e80(PTR_FUN_04373078,0xa0);
    if (lVar2 != 0) {
      uStack_58 = param_2[1];
      local_60 = *param_2;
      uStack_48 = param_2[3];
      uStack_50 = param_2[2];
      local_40 = param_2[4];
      FUN_0058009c(lVar2,&local_60,param_3,param_4);
    }
    *param_1 = lVar2;
  }
  return;
}


