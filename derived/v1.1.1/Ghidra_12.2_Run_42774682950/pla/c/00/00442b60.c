/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00442b60; name: FUN_00442b60
 */


int FUN_00442b60(undefined8 param_1,char *param_2,char *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  size_t sVar7;
  long lVar8;
  undefined8 uVar9;
  int local_64;
  
  lVar5 = FUN_00445ab0();
  if (lVar5 == 0) {
    lVar8 = 0;
LAB_00442c8c:
    uVar9 = 0x41;
  }
  else {
    FUN_00445ae0(lVar5);
    sVar6 = strlen(param_2);
    iVar2 = FUN_004042b0(param_1,"-----BEGIN ",0xb);
    if (iVar2 == 0xb) {
      iVar2 = FUN_004042b0(param_1,param_2,sVar6 & 0xffffffff);
      if ((iVar2 != (int)sVar6) || (iVar2 = FUN_004042b0(param_1,"-----\n",6), iVar2 != 6))
      goto LAB_00442c7c;
      sVar7 = strlen(param_3);
      if ((0 < (int)sVar7) &&
         ((iVar2 = FUN_004042b0(param_1,param_3,sVar7 & 0xffffffff), iVar2 != (int)sVar7 ||
          (iVar2 = FUN_004042b0(param_1,&DAT_0396725e,1), iVar2 != 1)))) goto LAB_00442c7c;
      lVar8 = FUN_00400260(0x2000,"external/openssl/crypto/pem/pem_lib.c",0x276);
      if (lVar8 == 0) goto LAB_00442c8c;
      if ((long)param_5 < 1) {
        iVar2 = 0;
      }
      else {
        iVar4 = 0;
        iVar2 = 0;
        do {
          uVar1 = param_5;
          if (0x13ff < (long)param_5) {
            uVar1 = 0x1400;
          }
          iVar3 = FUN_00445b00(lVar5,lVar8,&local_64,param_4 + iVar4,uVar1 & 0xffffffff);
          if (iVar3 == 0) goto LAB_00442c80;
          if (local_64 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_004042b0(param_1,lVar8);
            if (iVar3 != local_64) goto LAB_00442c80;
          }
          param_5 = param_5 - (long)(int)uVar1;
          iVar2 = iVar3 + iVar2;
          iVar4 = iVar4 + (int)uVar1;
        } while (0 < (long)param_5);
      }
      FUN_00445e80(lVar5,lVar8,&local_64);
      if ((((local_64 < 1) || (iVar4 = FUN_004042b0(param_1,lVar8), iVar4 == local_64)) &&
          (iVar4 = FUN_004042b0(param_1,"-----END ",9), iVar4 == 9)) &&
         (((iVar4 = FUN_004042b0(param_1,param_2,sVar6 & 0xffffffff), iVar4 == (int)sVar6 &&
           (iVar4 = FUN_004042b0(param_1,"-----\n",6), iVar4 == 6)) &&
          (local_64 = local_64 + iVar2, local_64 != 0)))) goto LAB_00442cac;
    }
    else {
LAB_00442c7c:
      lVar8 = 0;
    }
LAB_00442c80:
    uVar9 = 7;
  }
  FUN_004014b0(9,0x72,uVar9,"external/openssl/crypto/pem/pem_lib.c",0x292);
  local_64 = 0;
LAB_00442cac:
  FUN_00445ad0(lVar5);
  FUN_00400620(lVar8,0x2000,"external/openssl/crypto/pem/pem_lib.c",0x294);
  return local_64;
}


