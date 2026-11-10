/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00459a60; name: FUN_00459a60
 */


undefined4 *
FUN_00459a60(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *__s;
  undefined8 uVar9;
  
  __s = *(char **)(param_4 + 0x10);
  if (__s == (char *)0x0) {
    FUN_004014b0(0x22,0x75,0x7c,"external/openssl/crypto/x509v3/v3_alt.c",0x200);
    return (undefined4 *)0x0;
  }
  uVar9 = *(undefined8 *)(param_4 + 8);
  iVar1 = FUN_0044ca30(uVar9,"email");
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  else {
    iVar1 = FUN_0044ca30(uVar9,&DAT_03971aa8);
    if (iVar1 == 0) {
      uVar7 = 6;
    }
    else {
      iVar1 = FUN_0044ca30(uVar9,&DAT_03918c3e);
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      else {
        iVar1 = FUN_0044ca30(uVar9,&DAT_03997b3e);
        if (iVar1 == 0) {
          uVar7 = 8;
        }
        else {
          iVar1 = FUN_0044ca30(uVar9,&DAT_038b418b);
          if (iVar1 == 0) {
            uVar7 = 7;
          }
          else {
            iVar1 = FUN_0044ca30(uVar9,"dirName");
            if (iVar1 == 0) {
              uVar7 = 4;
            }
            else {
              iVar1 = FUN_0044ca30(uVar9,"otherName");
              if (iVar1 != 0) {
                FUN_004014b0(0x22,0x75,0x75,"external/openssl/crypto/x509v3/v3_alt.c",0x213);
                FUN_00402170(2,"name=",uVar9);
                return (undefined4 *)0x0;
              }
              uVar7 = 0;
            }
          }
        }
      }
    }
  }
  if (__s == (char *)0x0) {
    FUN_004014b0(0x22,0xa4,0x7c,"external/openssl/crypto/x509v3/v3_alt.c",0x1a2);
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar2 = (undefined4 *)FUN_0044e110(), puVar2 == (undefined4 *)0x0)) {
    FUN_004014b0(0x22,0xa4,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x1ab);
    return (undefined4 *)0x0;
  }
  switch(uVar7) {
  case 0:
    pcVar4 = strchr(__s,0x3b);
    if (pcVar4 != (char *)0x0) {
      lVar6 = FUN_0044e100();
      *(long *)(puVar2 + 2) = lVar6;
      if (lVar6 != 0) {
        FUN_0041cfd0(*(undefined8 *)(lVar6 + 8));
        lVar6 = FUN_0045a0f0(pcVar4 + 1,param_3);
        *(long *)(*(long *)(puVar2 + 2) + 8) = lVar6;
        if ((lVar6 != 0) &&
           (lVar6 = FUN_00404f60(__s,(long)((int)pcVar4 - (int)__s),
                                 "external/openssl/crypto/x509v3/v3_alt.c",0x22d), lVar6 != 0)) {
          uVar9 = FUN_004080c0(lVar6,0);
          **(undefined8 **)(puVar2 + 2) = uVar9;
          FUN_00400420(lVar6,"external/openssl/crypto/x509v3/v3_alt.c",0x231);
          if (**(long **)(puVar2 + 2) != 0) goto LAB_00459df8;
        }
      }
    }
    FUN_004014b0(0x22,0xa4,0x93,"external/openssl/crypto/x509v3/v3_alt.c",0x1d8);
    break;
  case 1:
  case 2:
  case 6:
    lVar6 = FUN_0041cf70();
    *(long *)(puVar2 + 2) = lVar6;
    if (lVar6 != 0) {
      sVar3 = strlen(__s);
      iVar1 = FUN_0040a280(lVar6,__s,sVar3);
      if (iVar1 != 0) goto LAB_00459df8;
    }
    FUN_004014b0(0x22,0xa4,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x1e5);
    if (param_1 != (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    goto LAB_00459ee8;
  default:
    FUN_004014b0(0x22,0xa4,0xa7,"external/openssl/crypto/x509v3/v3_alt.c",0x1dd);
    break;
  case 4:
    lVar6 = FUN_0044abe0();
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0045b1b0(param_3,__s);
      if (lVar5 == 0) {
        FUN_004014b0(0x22,0x90,0x96,"external/openssl/crypto/x509v3/v3_alt.c",0x241);
        FUN_00402170(2,"section=",__s);
      }
      else {
        iVar1 = FUN_0044d3b0(lVar6,lVar5,0x1001);
        if (iVar1 != 0) {
          *(long *)(puVar2 + 2) = lVar6;
          FUN_0045b200(param_3,lVar5);
          goto LAB_00459df8;
        }
      }
    }
    FUN_0044abf0(lVar6);
    FUN_0045b200(param_3,lVar5);
    FUN_004014b0(0x22,0xa4,0x95,"external/openssl/crypto/x509v3/v3_alt.c",0x1d1);
    break;
  case 7:
    if (param_5 == 0) {
      lVar6 = FUN_0044d240(__s);
      *(long *)(puVar2 + 2) = lVar6;
    }
    else {
      lVar6 = FUN_0044d2a0();
      *(long *)(puVar2 + 2) = lVar6;
    }
    if (lVar6 != 0) {
LAB_00459df8:
      *puVar2 = uVar7;
      return puVar2;
    }
    uVar9 = 0x76;
    uVar8 = 0x1c9;
    goto LAB_00459e64;
  case 8:
    lVar6 = FUN_004080c0(__s,0);
    if (lVar6 != 0) {
      *(long *)(puVar2 + 2) = lVar6;
      *puVar2 = uVar7;
      return puVar2;
    }
    uVar9 = 0x77;
    uVar8 = 0x1bb;
LAB_00459e64:
    FUN_004014b0(0x22,0xa4,uVar9,"external/openssl/crypto/x509v3/v3_alt.c",uVar8);
    FUN_00402170(2,"value=",__s);
  }
  if (param_1 == (undefined4 *)0x0) {
LAB_00459ee8:
    FUN_0044e120(puVar2);
  }
  return (undefined4 *)0x0;
}


