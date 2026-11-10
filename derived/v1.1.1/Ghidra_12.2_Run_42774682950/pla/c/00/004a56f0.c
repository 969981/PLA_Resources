/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a56f0; name: FUN_004a56f0
 */


undefined4
FUN_004a56f0(undefined8 param_1,undefined4 param_2,void *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_50;
  void *local_48;
  long local_38;
  
  local_50 = (void *)0x0;
  local_48 = param_3;
  local_38 = FUN_0043c1b0();
  if (local_38 == 0) {
    uVar4 = 0x41;
    uVar5 = 0x1c4;
LAB_004a57b8:
    FUN_004014b0(0x35,0x6c,uVar4,"external/openssl/crypto/sm2/sm2_sign.c",uVar5);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_0043c190(&local_38,&local_48,(long)param_4);
    if (lVar3 == 0) {
      uVar4 = 0x68;
      uVar5 = 0x1c8;
      goto LAB_004a57b8;
    }
    iVar1 = FUN_0043c1a0(local_38,&local_50);
    if ((iVar1 != param_4) || (iVar1 = memcmp(param_3,local_50,(long)param_4), iVar1 != 0)) {
      uVar4 = 0x68;
      uVar5 = 0x1ce;
      goto LAB_004a57b8;
    }
    lVar3 = FUN_0040c710(param_1,param_2,0);
    if (lVar3 != 0) {
      uVar2 = FUN_004a53b0(param_5,local_38,lVar3);
      goto LAB_004a57c4;
    }
    FUN_004014b0(0x35,0x6c,3,"external/openssl/crypto/sm2/sm2_sign.c",0x1d4);
  }
  uVar2 = 0xffffffff;
LAB_004a57c4:
  FUN_00400420(local_50,"external/openssl/crypto/sm2/sm2_sign.c",0x1db);
  FUN_0040c1e0(lVar3);
  FUN_0043c210(local_38);
  return uVar2;
}


