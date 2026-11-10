/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00414d20; name: FUN_00414d20
 */


undefined8 FUN_00414d20(long param_1,long param_2,uint param_3)

{
  char *__s;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_70 [16];
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 != 0) {
    lVar5 = FUN_00415b70(param_1,0,param_2);
    if (lVar5 != 0) goto LAB_00414d84;
    if ((param_3 >> 5 & 1) == 0) goto LAB_004150fc;
  }
  lVar5 = FUN_00415b70(param_1,0,"openssl_conf");
  if (lVar5 == 0) {
LAB_004150fc:
    FUN_004016d0(0,0);
    return 1;
  }
LAB_00414d84:
  lVar5 = FUN_00415b10(param_1);
  if (lVar5 == 0) {
    return 0;
  }
  iVar2 = FUN_00407950();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      lVar6 = FUN_00407970(lVar5,iVar2);
      __s = *(char **)(lVar6 + 8);
      uVar12 = *(undefined8 *)(lVar6 + 0x10);
      pcVar7 = strrchr(__s,0x2e);
      if (pcVar7 == (char *)0x0) {
        sVar8 = strlen(__s);
        iVar13 = (int)sVar8;
        iVar3 = FUN_00407950(DAT_0439e6f0);
      }
      else {
        iVar13 = (int)pcVar7 - (int)__s;
        iVar3 = FUN_00407950(DAT_0439e6f0);
      }
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar6 = FUN_00407970(DAT_0439e6f0,iVar3);
          iVar4 = strncmp(*(char **)(lVar6 + 8),__s,(long)iVar13);
          if (iVar4 == 0) {
            if (lVar6 != 0) goto LAB_00414ed4;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_00407950(DAT_0439e6f0);
        } while (iVar3 < iVar4);
      }
      if ((param_3 >> 3 & 1) == 0) {
        pcVar7 = (char *)FUN_00415b70(param_1,uVar12,&DAT_039a01d4);
        if (pcVar7 == (char *)0x0) {
          FUN_004016d0();
          pcVar7 = __s;
        }
        lVar9 = FUN_00415820(0,pcVar7,0,0);
        if (lVar9 == 0) {
          uVar12 = 0x6e;
LAB_00414f80:
          FUN_004156f0(lVar9);
          FUN_004014b0(0xe,0x75,uVar12,"external/openssl/crypto/conf/conf_mod.c",0xe0);
          FUN_00402170(4,"module=",__s,", path=",pcVar7);
          goto LAB_00414fc0;
        }
        lVar6 = FUN_00415a60(lVar9,"OPENSSL_init");
        if (lVar6 == 0) {
          uVar12 = 0x70;
          goto LAB_00414f80;
        }
        uVar10 = FUN_00415a60(lVar9,"OPENSSL_finish");
        lVar6 = FUN_004152f0(lVar9,__s,lVar6,uVar10);
        if (lVar6 == 0) {
          uVar12 = 0;
          goto LAB_00414f80;
        }
LAB_00414ed4:
        plVar11 = (long *)FUN_00400260(0x28,"external/openssl/crypto/conf/conf_mod.c",0x12a);
        if (plVar11 == (long *)0x0) {
LAB_00415080:
          if ((param_3 >> 2 & 1) == 0) {
            FUN_004014b0(0xe,0x76,0x6d,"external/openssl/crypto/conf/conf_mod.c",0xb1);
            FUN_00403120(auStack_70,0xd,&DAT_039413e7,0xffffffff);
            FUN_00402170(6,"module=",__s,", value=",uVar12,", retcode=",auStack_70);
          }
          goto joined_r0x00414ff0;
        }
        *plVar11 = lVar6;
        lVar9 = FUN_00404f10(__s,"external/openssl/crypto/conf/conf_mod.c",0x12f);
        plVar11[1] = lVar9;
        lVar9 = FUN_00404f10(uVar12,"external/openssl/crypto/conf/conf_mod.c",0x130);
        plVar11[2] = lVar9;
        plVar11[4] = 0;
        if ((lVar9 == 0) || (plVar11[1] == 0)) {
LAB_00415050:
          FUN_00400420(plVar11[1],"external/openssl/crypto/conf/conf_mod.c",0x158);
          FUN_00400420(plVar11[2],"external/openssl/crypto/conf/conf_mod.c",0x159);
          FUN_00400420(plVar11,"external/openssl/crypto/conf/conf_mod.c",0x15a);
          goto LAB_00415080;
        }
        if (*(code **)(lVar6 + 0x10) != (code *)0x0) {
          iVar13 = (**(code **)(lVar6 + 0x10))(plVar11,param_1);
          bVar1 = true;
          if (0 < iVar13) goto joined_r0x00415004;
LAB_0041503c:
          if ((bVar1) && (*(code **)(lVar6 + 0x18) != (code *)0x0)) {
            (**(code **)(lVar6 + 0x18))(plVar11);
          }
          goto LAB_00415050;
        }
        bVar1 = false;
joined_r0x00415004:
        if ((DAT_0439e6f8 == 0) && (DAT_0439e6f8 = FUN_004071e0(), DAT_0439e6f8 == 0)) {
          uVar10 = 0x142;
LAB_00415028:
          FUN_004014b0(0xe,0x73,0x41,"external/openssl/crypto/conf/conf_mod.c",uVar10);
          goto LAB_0041503c;
        }
        iVar13 = FUN_00407800(DAT_0439e6f8,plVar11);
        if (iVar13 == 0) {
          uVar10 = 0x148;
          goto LAB_00415028;
        }
        *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
      }
      else {
LAB_00414fc0:
        if ((param_3 >> 2 & 1) == 0) {
          FUN_004014b0(0xe,0x76,0x71,"external/openssl/crypto/conf/conf_mod.c",0xa5);
          FUN_00402170(2,"module=",__s);
        }
joined_r0x00414ff0:
        if ((param_3 & 1) == 0) {
          return 0xffffffff;
        }
      }
      iVar2 = iVar2 + 1;
      iVar13 = FUN_00407950(lVar5);
    } while (iVar2 < iVar13);
  }
  return 1;
}


