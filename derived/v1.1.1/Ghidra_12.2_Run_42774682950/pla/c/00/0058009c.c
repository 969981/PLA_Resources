/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058009c; name: FUN_0058009c
 */


void FUN_0058009c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_4;
  auVar8._0_8_ = param_3;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[2] = 1;
  param_1[3] = (long)&DAT_03985f63;
  puVar1 = PTR_DAT_04374e28;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  lVar5 = param_2[1];
  lVar4 = *param_2;
  lVar6 = param_2[2];
  lVar3 = param_2[4];
  param_1[0x10] = param_2[3];
  param_1[0xf] = lVar6;
  param_1[0x11] = lVar3;
  param_1[0xe] = lVar5;
  param_1[0xd] = lVar4;
  auVar7 = FUN_0057b760();
  iVar2 = FUN_002eef40(param_3,param_4,auVar7._0_8_,auVar7._8_8_);
  if (0 < iVar2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/jwt_credentials.cc"
                 ,0x7a,1,"Cropping token lifetime to maximum allowed value (%d secs).",
                 auVar7._0_8_ & 0xffffffff);
    auVar8 = FUN_0057b760();
  }
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar8;
  FUN_002ef6d0(param_1 + 5);
  FUN_0057fb74(param_1);
  return;
}


