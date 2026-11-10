/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f1b80; name: FUN_004f1b80
 */


long FUN_004f1b80(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  char *__s1;
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_450 [1024];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  
  local_38 = (char *)0x0;
  local_40 = 0;
  local_48 = 0;
  iVar1 = FUN_004426c0(&local_48,&local_50,&local_38,"ANY PRIVATE KEY",param_1,param_3,param_4);
  __s1 = local_38;
  if (iVar1 == 0) {
    return 0;
  }
  local_40 = local_48;
  iVar1 = strcmp(local_38,"PRIVATE KEY");
  if (iVar1 == 0) {
    lVar4 = FUN_00466240(0,&local_40,local_50);
    if (lVar4 != 0) {
      lVar3 = FUN_00466110(lVar4);
joined_r0x004f1c84:
      if (param_2 != (long *)0x0) {
        FUN_00423420(*param_2);
        *param_2 = lVar3;
      }
      FUN_00466250(lVar4);
joined_r0x004f1c50:
      if (lVar3 != 0) goto LAB_004f1d44;
    }
LAB_004f1d24:
    FUN_004014b0(9,0x7b,0xd,"external/openssl/crypto/pem/pem_pkey.c",0x58);
  }
  else {
    iVar1 = strcmp(__s1,"ENCRYPTED PRIVATE KEY");
    if (iVar1 != 0) {
      iVar1 = FUN_00443c00(__s1,"PRIVATE KEY");
      if (((0 < iVar1) &&
          (puVar2 = (undefined4 *)FUN_0043e6e0(0,local_38,iVar1), puVar2 != (undefined4 *)0x0)) &&
         (*(long *)(puVar2 + 0x2e) != 0)) {
        lVar3 = FUN_00466e80(*puVar2,param_2,&local_40,local_50);
        goto joined_r0x004f1c50;
      }
      goto LAB_004f1d24;
    }
    lVar3 = FUN_00466e30(0,&local_40,local_50);
    if (lVar3 == 0) goto LAB_004f1d24;
    if (param_3 == (code *)0x0) {
      iVar1 = FUN_00442100(auStack_450,0x400,0,param_4);
    }
    else {
      iVar1 = (*param_3)();
    }
    if (-1 < iVar1) {
      lVar4 = FUN_004bcb90(lVar3,auStack_450,iVar1);
      FUN_00466e50(lVar3);
      FUN_004006a0(auStack_450,(long)iVar1);
      if (lVar4 != 0) {
        lVar3 = FUN_00466110(lVar4);
        goto joined_r0x004f1c84;
      }
      goto LAB_004f1d24;
    }
    FUN_004014b0(9,0x7b,0x68,"external/openssl/crypto/pem/pem_pkey.c",0x40);
    FUN_00466e50(lVar3);
  }
  lVar3 = 0;
LAB_004f1d44:
  thunk_FUN_00400420(local_38,"external/openssl/crypto/pem/pem_pkey.c",0x5a);
  FUN_00406700(local_48,local_50,"external/openssl/crypto/pem/pem_pkey.c",0x5b);
  return lVar3;
}


