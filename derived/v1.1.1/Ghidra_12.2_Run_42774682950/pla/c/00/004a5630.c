/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a5630; name: FUN_004a5630
 */


undefined8
FUN_004a5630(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
            undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  local_28 = param_3;
  lVar2 = FUN_0040c710(param_1,param_2,0);
  if (lVar2 == 0) {
    FUN_004014b0(0x35,0x69,3,"external/openssl/crypto/sm2/sm2_sign.c",0x1a3);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a5090(param_5,lVar2);
    iVar1 = FUN_0043c1a0(uVar3,&local_28);
    if (-1 < iVar1) {
      *param_4 = iVar1;
      uVar4 = 1;
      goto LAB_004a56c4;
    }
    FUN_004014b0(0x35,0x69,0x44,"external/openssl/crypto/sm2/sm2_sign.c",0x1ab);
  }
  uVar4 = 0xffffffff;
LAB_004a56c4:
  FUN_0043c210(uVar3);
  FUN_0040c1e0(lVar2);
  return uVar4;
}


