/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00463a40; name: FUN_00463a40
 */


undefined8 FUN_00463a40(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  undefined1 auStack_858 [2048];
  size_t local_58;
  
  pcVar9 = (char *)param_1[1];
  iVar3 = strcmp(pcVar9,"language");
  if (iVar3 == 0) {
    if (*param_2 == 0) {
      lVar4 = FUN_004080c0(param_1[2],0);
      *param_2 = lVar4;
      if (lVar4 != 0) {
        return 1;
      }
      uVar6 = 0x6e;
      uVar5 = 100;
    }
    else {
      uVar6 = 0x9b;
      uVar5 = 0x5e;
    }
LAB_00463d54:
    FUN_004014b0(0x22,0x96,uVar6,"external/openssl/crypto/x509v3/v3_pci.c",uVar5);
    FUN_00402170(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
    return 0;
  }
  iVar3 = strcmp(pcVar9,"pathlen");
  if (iVar3 == 0) {
    if (*param_3 == 0) {
      iVar3 = FUN_0044c5e0(param_1,param_3);
      if (iVar3 != 0) {
        return 1;
      }
      uVar6 = 0x9c;
      uVar5 = 0x71;
    }
    else {
      uVar6 = 0x9d;
      uVar5 = 0x6b;
    }
    goto LAB_00463d54;
  }
  iVar3 = strcmp(pcVar9,"policy");
  if (iVar3 != 0) {
    return 1;
  }
  piVar8 = (int *)*param_4;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)FUN_0041cee0();
    *param_4 = (long)piVar8;
    if (piVar8 == (int *)0x0) {
      uVar6 = 0x41;
      uVar5 = 0x7b;
      goto LAB_00463d54;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pcVar9 = (char *)param_1[2];
  iVar3 = strncmp(pcVar9,"hex:",4);
  if (iVar3 == 0) {
    __src = (void *)FUN_00405200(pcVar9 + 4,&local_58);
    if (__src == (void *)0x0) goto LAB_00463efc;
    lVar4 = FUN_00400350(*(undefined8 *)((int *)*param_4 + 2),(long)*(int *)*param_4 + local_58 + 1,
                         "external/openssl/crypto/x509v3/v3_pci.c",0x8b);
    if (lVar4 != 0) {
      *(long *)(*param_4 + 8) = lVar4;
      memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),__src,local_58);
      piVar8 = (int *)*param_4;
      iVar3 = *piVar8;
      *piVar8 = iVar3 + (int)local_58;
      *(undefined1 *)(*(long *)(piVar8 + 2) + (long)(iVar3 + (int)local_58)) = 0;
      FUN_00400420(__src,"external/openssl/crypto/x509v3/v3_pci.c",0x9f);
      return 1;
    }
    FUN_00400420(__src,"external/openssl/crypto/x509v3/v3_pci.c",0x93);
    FUN_00400420(*(undefined8 *)(*param_4 + 8),"external/openssl/crypto/x509v3/v3_pci.c",0x98);
    *(undefined8 *)(*param_4 + 8) = 0;
    puVar7 = (undefined4 *)*param_4;
    uVar6 = 0x9b;
LAB_00463ef4:
    uVar5 = 0x41;
    *puVar7 = 0;
  }
  else {
    iVar3 = strncmp(pcVar9,"file:",5);
    if (iVar3 == 0) {
      lVar4 = FUN_00414570(pcVar9 + 5,&DAT_03948cf6);
      if (lVar4 == 0) {
        uVar6 = 0xa5;
LAB_00463e88:
        uVar5 = 0x20;
      }
      else {
        lVar10 = 0;
        do {
          while (iVar3 = FUN_00404070(lVar4,auStack_858,0x800), 0 < iVar3) {
            lVar10 = FUN_00400350(*(undefined8 *)((int *)*param_4 + 2),
                                  (long)(iVar3 + *(int *)*param_4 + 1),
                                  "external/openssl/crypto/x509v3/v3_pci.c",0xaf);
            if (lVar10 == 0) {
              FUN_00400420(*(undefined8 *)(*param_4 + 8),"external/openssl/crypto/x509v3/v3_pci.c",
                           0xb2);
              *(undefined8 *)(*param_4 + 8) = 0;
              *(undefined4 *)*param_4 = 0;
              FUN_004014b0(0x22,0x96,0x41,"external/openssl/crypto/x509v3/v3_pci.c",0xb6);
              FUN_00402170(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
              FUN_00404cd0(lVar4);
              goto joined_r0x00463fc8;
            }
            *(long *)(*param_4 + 8) = lVar10;
            memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),auStack_858,
                   (long)iVar3);
            piVar8 = (int *)*param_4;
            lVar1 = (long)*piVar8 + (long)iVar3;
            *piVar8 = (int)lVar1;
            *(undefined1 *)(*(long *)(piVar8 + 2) + lVar1) = 0;
          }
          if (iVar3 != 0) {
            FUN_00404cd0(lVar4);
            uVar6 = 0xc4;
            goto LAB_00463e88;
          }
          iVar3 = FUN_00404050(lVar4,8);
        } while (iVar3 != 0);
        FUN_00404cd0(lVar4);
        if (lVar10 != 0) {
          return 1;
        }
        uVar5 = 0x41;
        uVar6 = 0xe5;
      }
    }
    else {
      iVar3 = strncmp(pcVar9,"text:",5);
      if (iVar3 == 0) {
        __n = strlen(pcVar9 + 5);
        local_58 = __n;
        lVar4 = FUN_00400350(*(undefined8 *)(piVar8 + 2),__n + (long)*piVar8 + 1,
                             "external/openssl/crypto/x509v3/v3_pci.c",0xcb);
        if (lVar4 != 0) {
          *(long *)(*param_4 + 8) = lVar4;
          memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),
                 (void *)(param_1[2] + 5),__n);
          piVar8 = (int *)*param_4;
          iVar3 = *piVar8 + (int)__n;
          *piVar8 = iVar3;
          *(undefined1 *)(*(long *)(piVar8 + 2) + (long)iVar3) = 0;
          return 1;
        }
        FUN_00400420(*(undefined8 *)(*param_4 + 8),"external/openssl/crypto/x509v3/v3_pci.c",0xd7);
        *(undefined8 *)(*param_4 + 8) = 0;
        puVar7 = (undefined4 *)*param_4;
        uVar6 = 0xda;
        goto LAB_00463ef4;
      }
      uVar5 = 0x98;
      uVar6 = 0xe0;
    }
  }
  FUN_004014b0(0x22,0x96,uVar5,"external/openssl/crypto/x509v3/v3_pci.c",uVar6);
LAB_00463efc:
  FUN_00402170(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
joined_r0x00463fc8:
  if (bVar2) {
    thunk_FUN_0040a4b0(*param_4);
    *param_4 = 0;
    return 0;
  }
  return 0;
}


