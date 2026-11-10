/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00465e40; name: FUN_00465e40
 */


int FUN_00465e40(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,long param_5
                )

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 local_48;
  int local_44;
  long local_38;
  
  local_38 = 0;
  if (param_5 == 0) {
    uVar4 = 0x43;
    uVar5 = 0x62;
LAB_00465f50:
    FUN_004014b0(0xd,0xc5,uVar4,"external/openssl/crypto/asn1/a_verify.c",uVar5);
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    uVar4 = 0xdc;
    uVar5 = 0x67;
    goto LAB_00465f50;
  }
  lVar2 = FUN_00444930();
  if (lVar2 == 0) {
    uVar4 = 0x41;
    uVar5 = 0x6d;
  }
  else {
    uVar4 = FUN_00407f40(*param_2);
    iVar1 = FUN_00465cd0(uVar4,&local_44,&local_48);
    if (iVar1 == 0) {
      uVar4 = 199;
      uVar5 = 0x73;
    }
    else if (local_44 == 0) {
      if ((*(long *)(param_5 + 0x10) == 0) ||
         (pcVar6 = *(code **)(*(long *)(param_5 + 0x10) + 200), pcVar6 == (code *)0x0)) {
        uVar4 = 199;
        uVar5 = 0x79;
      }
      else {
        iVar1 = (*pcVar6)(lVar2,param_1,param_4,param_2,param_3,param_5);
        if (iVar1 != 2) {
          lVar3 = 0;
          goto LAB_004660b0;
        }
LAB_00465fc8:
        iVar1 = FUN_0041f020(param_4,&local_38,param_1);
        if (iVar1 < 1) {
          uVar4 = 0x44;
          uVar5 = 0x9e;
        }
        else {
          if (local_38 != 0) {
            lVar3 = (long)iVar1;
            iVar1 = FUN_004651d0(lVar2,*(undefined8 *)(param_3 + 2),(long)*param_3,local_38,lVar3);
            if (iVar1 < 1) {
              FUN_004014b0(0xd,0xc5,6,"external/openssl/crypto/asn1/a_verify.c",0xaa);
            }
            else {
              iVar1 = 1;
            }
            goto LAB_004660b0;
          }
          uVar4 = 0x41;
          uVar5 = 0xa2;
        }
      }
    }
    else {
      FUN_00407d80();
      lVar3 = FUN_00446540();
      if (lVar3 == 0) {
        uVar4 = 0xa1;
        uVar5 = 0x8a;
      }
      else {
        iVar1 = FUN_004234c0(local_48);
        if (iVar1 == **(int **)(param_5 + 0x10)) {
          iVar1 = FUN_00464d50(lVar2,0,lVar3,0,param_5);
          if (iVar1 == 0) {
            FUN_004014b0(0xd,0xc5,6,"external/openssl/crypto/asn1/a_verify.c",0x95);
            iVar1 = 0;
            lVar3 = 0;
            goto LAB_004660b0;
          }
          goto LAB_00465fc8;
        }
        uVar4 = 200;
        uVar5 = 0x90;
      }
    }
  }
  FUN_004014b0(0xd,0xc5,uVar4,"external/openssl/crypto/asn1/a_verify.c",uVar5);
  lVar3 = 0;
  iVar1 = -1;
LAB_004660b0:
  FUN_00400620(local_38,lVar3,"external/openssl/crypto/asn1/a_verify.c",0xaf);
  FUN_00444950(lVar2);
  return iVar1;
}


