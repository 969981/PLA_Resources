/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044cb30; name: FUN_0044cb30
 */


/* WARNING: Removing unreachable block (ram,0x0044cefc) */
/* WARNING: Removing unreachable block (ram,0x0044cfa8) */

int FUN_0044cb30(undefined8 param_1,char *param_2,size_t param_3,uint param_4,int param_5,
                undefined8 *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  void *__s1;
  code *local_70;
  undefined8 local_68;
  
  uVar1 = param_4 & 0xffff7fff;
  uVar10 = uVar1;
  if (param_5 == 1) {
    iVar11 = 0x30;
    local_70 = (code *)&LAB_0044d4a0;
  }
  else {
    if (param_5 != 2) {
      iVar11 = 0;
      iVar2 = 4;
      iVar5 = 4;
      local_70 = (code *)&LAB_0044db40;
      goto joined_r0x0044ccb4;
    }
    if ((1 < param_3) && (uVar10 = param_4 | 0x8000, *param_2 != '.')) {
      uVar10 = uVar1;
    }
    local_70 = (code *)&LAB_0044d670;
    if ((uVar10 & 2) != 0) {
      local_70 = FUN_0044d590;
    }
    iVar11 = 0xd;
  }
  iVar2 = 0x16;
  iVar5 = 0x16;
joined_r0x0044ccb4:
  if (param_3 == 0) {
    param_3 = strlen(param_2);
    iVar5 = iVar2;
  }
  lVar6 = FUN_0045e200(param_1,0x55,0,0);
  if (lVar6 != 0) {
    iVar2 = FUN_00407950();
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else if (iVar5 == 0x16) {
      iVar2 = 0;
      iVar5 = 0;
      do {
        piVar7 = (int *)FUN_00407970(lVar6,iVar5);
        if (*piVar7 == param_5) {
          puVar12 = *(uint **)(piVar7 + 2);
          if (((*(long *)(puVar12 + 2) != 0) && (*puVar12 != 0)) && (puVar12[1] == 0x16)) {
            iVar2 = (*local_70)(*(long *)(puVar12 + 2),(long)(int)*puVar12,param_2,param_3,uVar10);
            if ((param_6 != (undefined8 *)0x0) && (0 < iVar2)) {
              __s1 = *(void **)(puVar12 + 2);
              param_3 = (size_t)*puVar12;
              goto LAB_0044cd4c;
            }
            if (iVar2 != 0) goto LAB_0044cdec;
          }
          iVar2 = 1;
        }
        iVar5 = iVar5 + 1;
        iVar3 = FUN_00407950(lVar6);
      } while (iVar5 < iVar3);
    }
    else if (param_6 == (undefined8 *)0x0) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        piVar7 = (int *)FUN_00407970(lVar6,iVar3);
        if (*piVar7 == param_5) {
          piVar7 = *(int **)(piVar7 + 2);
          if ((*(void **)(piVar7 + 2) == (void *)0x0) || (*piVar7 == 0)) {
            iVar2 = 1;
          }
          else {
            iVar2 = 1;
            if ((piVar7[1] == iVar5) && (*piVar7 == (int)param_3)) {
              iVar4 = memcmp(*(void **)(piVar7 + 2),param_2,param_3);
              iVar2 = 1;
              if (iVar4 == 0) goto LAB_0044cdec;
            }
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_00407950(lVar6);
      } while (iVar3 < iVar4);
    }
    else {
      iVar2 = 0;
      iVar3 = 0;
      do {
        piVar7 = (int *)FUN_00407970(lVar6,iVar3);
        if (*piVar7 == param_5) {
          piVar7 = *(int **)(piVar7 + 2);
          __s1 = *(void **)(piVar7 + 2);
          if ((__s1 == (void *)0x0) || (*piVar7 == 0)) {
            iVar2 = 1;
          }
          else {
            iVar2 = 1;
            if ((piVar7[1] == iVar5) && (*piVar7 == (int)param_3)) {
              iVar4 = memcmp(__s1,param_2,param_3);
              iVar2 = 1;
              if (iVar4 == 0) {
LAB_0044cd4c:
                uVar8 = FUN_00404f60(__s1,(long)(int)param_3,
                                     "external/openssl/crypto/x509v3/v3_utl.c",0x31e);
                *param_6 = uVar8;
LAB_0044cdec:
                FUN_0044e140(lVar6);
                return iVar2;
              }
            }
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_00407950(lVar6);
      } while (iVar3 < iVar4);
    }
    FUN_0044e140(lVar6);
    if (((uVar10 & 1) == 0) && (iVar2 != 0)) {
      return 0;
    }
  }
  iVar5 = 0;
  if ((iVar11 != 0) && ((uVar10 >> 5 & 1) == 0)) {
    uVar8 = FUN_0044e530(param_1);
    if (param_6 == (undefined8 *)0x0) {
      iVar2 = -1;
      do {
        do {
          iVar2 = FUN_0044a140(uVar8,iVar11,iVar2);
          if (iVar2 < 0) {
            return 0;
          }
          FUN_0044a0e0(uVar8,iVar2);
          piVar7 = (int *)FUN_0044a0d0();
        } while ((*(long *)(piVar7 + 2) == 0) || (*piVar7 == 0));
        iVar5 = FUN_00448dc0(&local_68,piVar7);
        if (iVar5 < 0) {
          return -1;
        }
        iVar5 = (*local_70)(local_68,(long)iVar5,param_2,param_3,uVar10);
        FUN_00400420(local_68,"external/openssl/crypto/x509v3/v3_utl.c",0x32d);
      } while (iVar5 == 0);
    }
    else {
      iVar2 = -1;
      do {
        do {
          iVar2 = FUN_0044a140(uVar8,iVar11,iVar2);
          if (iVar2 < 0) {
            return 0;
          }
          FUN_0044a0e0(uVar8,iVar2);
          piVar7 = (int *)FUN_0044a0d0();
        } while ((*(long *)(piVar7 + 2) == 0) || (*piVar7 == 0));
        iVar3 = FUN_00448dc0(&local_68,piVar7);
        if (iVar3 < 0) {
          return -1;
        }
        iVar5 = (*local_70)(local_68,(long)iVar3,param_2,param_3,uVar10);
        if (0 < iVar5) {
          uVar9 = FUN_00404f60(local_68,(long)iVar3,"external/openssl/crypto/x509v3/v3_utl.c",0x32c)
          ;
          *param_6 = uVar9;
        }
        FUN_00400420(local_68,"external/openssl/crypto/x509v3/v3_utl.c",0x32d);
      } while (iVar5 == 0);
    }
  }
  return iVar5;
}


