/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bc8f0; name: FUN_004bc8f0
 */


long FUN_004bc8f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 int param_5,long *param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_54;
  
  lVar3 = FUN_0041b530();
  if (lVar3 == 0) {
    uVar5 = 0x41;
    uVar6 = 0x21;
  }
  else {
    iVar1 = FUN_00446580(*param_1,param_2,param_3,param_1[1],lVar3,param_8);
    if (iVar1 == 0) {
      uVar5 = 0x73;
      uVar6 = 0x29;
    }
    else {
      iVar1 = FUN_0041cbf0(lVar3);
      lVar4 = FUN_00400260((long)(iVar1 + param_5),"external/openssl/crypto/pkcs12/p12_decr.c",0x2d)
      ;
      if (lVar4 == 0) {
        FUN_004014b0(0x23,0x77,0x41,"external/openssl/crypto/pkcs12/p12_decr.c",0x2f);
        goto LAB_004bca84;
      }
      iVar2 = FUN_0041ba00(lVar3,lVar4,&local_54,param_4,param_5);
      iVar1 = local_54;
      if (iVar2 == 0) {
        FUN_00400420(lVar4,"external/openssl/crypto/pkcs12/p12_decr.c",0x34);
        uVar6 = 0x36;
        uVar5 = 6;
      }
      else {
        iVar2 = FUN_0041bcc0(lVar3,lVar4 + local_54,&local_54);
        if (iVar2 != 0) {
          if (param_7 != (int *)0x0) {
            *param_7 = local_54 + iVar1;
          }
          if (param_6 != (long *)0x0) {
            *param_6 = lVar4;
          }
          goto LAB_004bca84;
        }
        FUN_00400420(lVar4,"external/openssl/crypto/pkcs12/p12_decr.c",0x3c);
        uVar5 = 0x74;
        uVar6 = 0x3f;
      }
    }
  }
  FUN_004014b0(0x23,0x77,uVar5,"external/openssl/crypto/pkcs12/p12_decr.c",uVar6);
  lVar4 = 0;
LAB_004bca84:
  FUN_0041b550(lVar3);
  return lVar4;
}


