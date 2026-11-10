/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00458710; name: FUN_00458710
 */


undefined8 FUN_00458710(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  char *__s1;
  
  __s1 = *(char **)(param_3 + 8);
  iVar1 = strncmp(__s1,"fullname",9);
  if (iVar1 == 0) {
    lVar3 = FUN_00458b40(param_2,*(undefined8 *)(param_3 + 0x10));
    uVar6 = 0;
    if (lVar3 == 0) goto LAB_004588bc;
    lVar5 = *param_1;
  }
  else {
    iVar1 = strcmp(__s1,"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    puVar2 = (undefined8 *)FUN_0044abe0();
    if (puVar2 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    lVar3 = FUN_0045b1b0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar3 == 0) {
      FUN_004014b0(0x22,0x9e,0x96,"external/openssl/crypto/x509v3/v3_crld.c",0x56);
      return 0xffffffff;
    }
    iVar1 = FUN_0044d3b0(puVar2,lVar3,0x1001);
    FUN_0045b200(param_2,lVar3);
    uVar6 = *puVar2;
    *puVar2 = 0;
    FUN_0044abf0(puVar2);
    if ((iVar1 == 0) || (iVar1 = FUN_00407950(uVar6), iVar1 < 1)) {
      lVar3 = 0;
      goto LAB_004588bc;
    }
    iVar1 = FUN_00407950(uVar6);
    lVar3 = FUN_00407970(uVar6,iVar1 + -1);
    if (*(int *)(lVar3 + 0x10) != 0) {
      FUN_004014b0(0x22,0x9e,0xa1,"external/openssl/crypto/x509v3/v3_crld.c",0x66);
      lVar3 = 0;
      goto LAB_004588bc;
    }
    lVar3 = 0;
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    puVar4 = (undefined4 *)FUN_00421c70(PTR_DAT_04374330);
    *param_1 = (long)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      if (lVar3 == 0) {
        *puVar4 = 1;
        *(undefined8 *)(puVar4 + 2) = uVar6;
        return 1;
      }
      *puVar4 = 0;
      *(long *)(puVar4 + 2) = lVar3;
      return 1;
    }
  }
  else {
    FUN_004014b0(0x22,0x9e,0xa0,"external/openssl/crypto/x509v3/v3_crld.c",0x6e);
  }
LAB_004588bc:
  FUN_004078c0(lVar3,PTR_FUN_04374170);
  FUN_004078c0(uVar6,PTR_FUN_043742a8);
  return 0xffffffff;
}


