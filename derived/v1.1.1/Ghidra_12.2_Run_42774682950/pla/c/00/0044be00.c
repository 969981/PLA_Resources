/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044be00; name: FUN_0044be00
 */


undefined8 FUN_0044be00(long param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_3;
  if (param_1 == 0) {
    lVar2 = 0;
joined_r0x0044be40:
    lVar3 = 0;
    if ((param_2 != 0) &&
       (lVar3 = FUN_00404f10(param_2,"external/openssl/crypto/x509v3/v3_utl.c",0x2e), lVar3 == 0)) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_0044bec8;
    }
    puVar4 = (undefined8 *)FUN_00400260(0x18,"external/openssl/crypto/x509v3/v3_utl.c",0x30);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0044bec8;
    if (lVar6 != 0) {
LAB_0044be8c:
      *puVar4 = 0;
      puVar4[1] = lVar2;
      puVar4[2] = lVar3;
      iVar1 = FUN_00407800(*param_3,puVar4);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_0044bec8;
    }
    lVar5 = FUN_004071e0();
    *param_3 = lVar5;
    if (lVar5 != 0) goto LAB_0044be8c;
    FUN_004014b0(0x22,0x69,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0x3b);
  }
  else {
    lVar2 = FUN_00404f10(param_1,"external/openssl/crypto/x509v3/v3_utl.c",0x2c);
    if (lVar2 != 0) goto joined_r0x0044be40;
    puVar4 = (undefined8 *)0x0;
    lVar3 = 0;
LAB_0044bec8:
    FUN_004014b0(0x22,0x69,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0x3b);
    if (lVar6 != 0) goto LAB_0044bef4;
  }
  FUN_00407010(*param_3);
  *param_3 = 0;
LAB_0044bef4:
  FUN_00400420(puVar4,"external/openssl/crypto/x509v3/v3_utl.c",0x40);
  FUN_00400420(lVar2,"external/openssl/crypto/x509v3/v3_utl.c",0x41);
  FUN_00400420(lVar3,"external/openssl/crypto/x509v3/v3_utl.c",0x42);
  return 0;
}


