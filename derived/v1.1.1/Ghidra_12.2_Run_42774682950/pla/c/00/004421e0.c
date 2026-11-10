/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004421e0; name: FUN_004421e0
 */


undefined8
FUN_004421e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *__s1;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined1 auStack_78 [24];
  
  local_88 = 0;
  local_80 = (char *)0x0;
  local_98 = 0;
  local_90 = 0;
  __s1 = (char *)0x0;
  if ((param_8 & 1) != 0) goto LAB_00442290;
LAB_00442260:
  FUN_00400420(__s1,"external/openssl/crypto/pem/pem_lib.c",0xdf);
  FUN_00400420(local_88,"external/openssl/crypto/pem/pem_lib.c",0xdf);
  FUN_00400420(local_90,"external/openssl/crypto/pem/pem_lib.c",0xdf);
  do {
    iVar4 = FUN_00443360(param_5,&local_80,&local_88,&local_90,&local_98,param_8);
    __s1 = local_80;
    if (iVar4 == 0) {
      uVar9 = FUN_00401a50();
      if ((uVar9 & 0xfff) == 0x6c) {
        FUN_00402170(2,"Expecting: ",param_4);
        return 0;
      }
      return 0;
    }
    iVar4 = strcmp(local_80,param_4);
    if (iVar4 == 0) goto LAB_00442548;
    iVar4 = strcmp(param_4,"ANY PRIVATE KEY");
    if (iVar4 == 0) {
      iVar4 = strcmp(__s1,"ENCRYPTED PRIVATE KEY");
      if ((iVar4 == 0) || (iVar4 = strcmp(__s1,"PRIVATE KEY"), iVar4 == 0)) goto LAB_00442548;
      sVar7 = strlen(__s1);
      iVar4 = (int)sVar7;
      if (((0xc < iVar4) &&
          (((iVar5 = strcmp(__s1 + (long)iVar4 + -0xb,"PRIVATE KEY"), iVar5 == 0 &&
            (__s1[(long)iVar4 + -0xc] == ' ')) && (0 < (int)(__s1 + (long)iVar4 + -0xc) - (int)__s1)
           ))) && (lVar8 = FUN_0043e6e0(0,__s1), lVar8 != 0)) {
        lVar8 = *(long *)(lVar8 + 0xb8);
        goto joined_r0x00442250;
      }
    }
    else {
      iVar4 = strcmp(param_4,"PARAMETERS");
      if (iVar4 == 0) {
        sVar7 = strlen(__s1);
        iVar4 = (int)sVar7;
        if ((0xb < iVar4) &&
           ((((iVar5 = strcmp(__s1 + (long)iVar4 + -10,"PARAMETERS"), iVar5 == 0 &&
              (__s1[(long)iVar4 + -0xb] == ' ')) &&
             (0 < (int)(__s1 + (long)iVar4 + -0xb) - (int)__s1)) &&
            (lVar8 = FUN_0043e6e0(auStack_78,__s1), lVar8 != 0)))) {
          lVar8 = *(long *)(lVar8 + 0x70);
joined_r0x00442250:
          if (lVar8 != 0) {
LAB_00442548:
            uVar3 = local_88;
            iVar4 = FUN_00443040(local_88,auStack_78);
            uVar2 = local_90;
            if ((iVar4 == 0) ||
               (iVar4 = FUN_00442df0(auStack_78,local_90,&local_98,param_6,param_7), iVar4 == 0)) {
              bVar1 = true;
            }
            else {
              *param_1 = uVar2;
              *param_2 = local_98;
              if (param_3 != (undefined8 *)0x0) {
                *param_3 = __s1;
                if ((param_8 & 1) == 0) {
                  FUN_00400420(uVar3,"external/openssl/crypto/pem/pem_lib.c",0xdf);
                  return 1;
                }
                FUN_00406700(uVar3,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
                return 1;
              }
              bVar1 = false;
            }
            if ((param_8 & 1) == 0) {
              FUN_00400420(__s1,"external/openssl/crypto/pem/pem_lib.c",0xdf);
              FUN_00400420(uVar3,"external/openssl/crypto/pem/pem_lib.c",0xdf);
              if (bVar1) {
                FUN_00400420(local_90,"external/openssl/crypto/pem/pem_lib.c",0xdf);
                return 0;
              }
            }
            else {
              FUN_00406700(__s1,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
              FUN_00406700(uVar3,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
              if (bVar1) {
                FUN_00406700(local_90,local_98,"external/openssl/crypto/pem/pem_lib.c",0xdd);
                return 0;
              }
            }
            return 1;
          }
        }
      }
      else {
        iVar4 = strcmp(__s1,"X9.42 DH PARAMETERS");
        if (((((((iVar4 == 0) && (iVar4 = strcmp(param_4,"DH PARAMETERS"), iVar4 == 0)) ||
               ((iVar4 = strcmp(__s1,"X509 CERTIFICATE"), iVar4 == 0 &&
                (iVar5 = strcmp(param_4,"CERTIFICATE"), iVar5 == 0)))) ||
              (((iVar5 = strcmp(__s1,"NEW CERTIFICATE REQUEST"), iVar5 == 0 &&
                (iVar5 = strcmp(param_4,"CERTIFICATE REQUEST"), iVar5 == 0)) ||
               ((iVar5 = strcmp(__s1,"CERTIFICATE"), iVar5 == 0 &&
                (iVar6 = strcmp(param_4,"TRUSTED CERTIFICATE"), iVar6 == 0)))))) ||
             ((((iVar4 == 0 && (iVar4 = strcmp(param_4,"TRUSTED CERTIFICATE"), iVar4 == 0)) ||
               ((iVar5 == 0 && (iVar4 = strcmp(param_4,"PKCS7"), iVar4 == 0)))) ||
              ((iVar4 = strcmp(__s1,"PKCS #7 SIGNED DATA"), iVar4 == 0 &&
               (iVar4 = strcmp(param_4,"PKCS7"), iVar4 == 0)))))) ||
            ((iVar5 == 0 && (iVar4 = strcmp(param_4,"CMS"), iVar4 == 0)))) ||
           ((iVar4 = strcmp(__s1,"PKCS7"), iVar4 == 0 && (iVar4 = strcmp(param_4,"CMS"), iVar4 == 0)
            ))) goto LAB_00442548;
      }
    }
    if ((param_8 & 1) == 0) goto LAB_00442260;
LAB_00442290:
    FUN_00406700(__s1,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
    FUN_00406700(local_88,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
    FUN_00406700(local_90,local_98,"external/openssl/crypto/pem/pem_lib.c",0xdd);
  } while( true );
}


