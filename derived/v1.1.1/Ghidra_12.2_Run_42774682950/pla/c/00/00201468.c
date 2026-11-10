/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00201468; name: FUN_00201468
 */


/* WARNING: Removing unreachable block (ram,0x0020172c) */

int FUN_00201468(char *param_1,long *param_2,long *param_3,undefined1 *param_4,undefined1 *param_5,
                long param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  char *__s2;
  char *pcVar11;
  char *__s1;
  char *__s1_00;
  int iVar12;
  undefined1 auStack_1070 [4096];
  undefined1 auStack_70 [16];
  
  __s1_00 = (char *)*param_2;
  __s1 = (char *)*param_3;
  if (__s1_00 == (char *)0x0) {
    bVar5 = false;
  }
  else {
    bVar5 = *__s1_00 != '\0';
  }
  if (param_6 == 0) {
    lVar9 = FUN_0020188c(&DAT_03936bb9);
    if (lVar9 == 0) {
      return 1;
    }
    lVar10 = FUN_001e6534("%s%s%s",lVar9,&DAT_0389ffa9,".netrc");
    FUN_002044d4(lVar9);
    if (lVar10 == 0) {
      return -1;
    }
    lVar9 = FUN_002055c8(lVar10,&DAT_03948cf6);
    FUN_002044d4(lVar10);
  }
  else {
    lVar9 = FUN_002055c8(param_6,&DAT_03948cf6);
  }
  if (lVar9 == 0) {
    return 1;
  }
  iVar7 = 0;
  bVar1 = false;
  iVar12 = 1;
  bVar3 = false;
  bVar4 = false;
  iVar8 = 0;
  bVar2 = false;
  do {
    do {
      lVar10 = FUN_00205634(auStack_1070,0x1000,lVar9);
      if (lVar10 == 0) {
LAB_00201738:
        if (iVar12 == 0) {
          *param_4 = 0;
          *param_5 = 0;
          if (bVar3) {
            if (*param_2 != 0) {
              FUN_002044d4();
            }
            *param_2 = (long)__s1_00;
            *param_4 = 1;
          }
          if (bVar4) {
            if (*param_3 != 0) {
              FUN_002044d4();
            }
            iVar12 = 0;
            *param_3 = (long)__s1;
            *param_5 = 1;
          }
          else {
            iVar12 = 0;
          }
        }
        else {
          if (bVar3) {
            FUN_002044d4(__s1_00);
          }
LAB_0020174c:
          if (bVar4) {
            FUN_002044d4(__s1);
          }
        }
LAB_0020183c:
        FUN_002055a4(lVar9);
        return iVar12;
      }
      __s2 = (char *)FUN_001f8e54(auStack_1070,&DAT_0395301d,auStack_70);
    } while ((__s2 == (char *)0x0) || (*__s2 == '#'));
    do {
      if ((__s1_00 != (char *)0x0) &&
         (((__s1 != (char *)0x0 && (*__s1_00 != '\0')) && (*__s1 != '\0')))) goto LAB_00201738;
      if (iVar7 == 2) {
        if (bVar1) {
          if (bVar5) {
            iVar8 = FUN_001f8b48(__s1_00,__s2);
          }
          else if ((__s1_00 == (char *)0x0) || (iVar7 = strcmp(__s1_00,__s2), iVar7 != 0)) {
            if (bVar3) {
              FUN_002044d4(__s1_00);
            }
            __s1_00 = (char *)FUN_002044f4(__s2);
            if (__s1_00 == (char *)0x0) {
              iVar12 = -1;
              goto LAB_0020174c;
            }
            bVar3 = true;
          }
          bVar1 = false;
        }
        else if (bVar2) {
          if ((bool)(iVar8 == 0 & bVar5)) {
            bVar1 = false;
            iVar8 = 0;
            bVar2 = false;
          }
          else {
            if ((__s1 == (char *)0x0) || (iVar7 = strcmp(__s1,__s2), iVar7 != 0)) {
              if (bVar4) {
                FUN_002044d4(__s1);
              }
              __s1 = (char *)FUN_002044f4(__s2);
              if (__s1 != (char *)0x0) {
                bVar2 = false;
                bVar1 = false;
                iVar7 = 2;
                bVar4 = true;
                goto LAB_0020170c;
              }
              if (bVar3) {
                FUN_002044d4(__s1_00);
              }
              iVar12 = -1;
              goto LAB_0020183c;
            }
            bVar1 = false;
            bVar2 = false;
          }
        }
        else {
          iVar7 = FUN_001f8b48("login",__s2);
          if (iVar7 == 0) {
            iVar7 = FUN_001f8b48("password",__s2);
            if (iVar7 == 0) {
              iVar6 = FUN_001f8b48("machine",__s2);
              bVar1 = false;
              iVar7 = 1;
              if (iVar6 == 0) {
                iVar7 = 2;
              }
              else {
                iVar8 = 0;
              }
              bVar2 = false;
              goto LAB_0020170c;
            }
            bVar1 = false;
            bVar2 = true;
          }
          else {
            bVar2 = false;
            bVar1 = true;
          }
        }
        iVar7 = 2;
      }
      else if (iVar7 == 1) {
        pcVar11 = param_1;
LAB_00201680:
        iVar7 = FUN_001f8b48(pcVar11,__s2);
        if (iVar7 != 0) {
          iVar12 = 0;
        }
        iVar7 = (uint)(iVar7 != 0) << 1;
      }
      else if (iVar7 == 0) {
        iVar7 = FUN_001f8b48("machine",__s2);
        if (iVar7 == 0) {
          pcVar11 = "default";
          goto LAB_00201680;
        }
        iVar7 = 1;
      }
LAB_0020170c:
      __s2 = (char *)FUN_001f8e54(0,&DAT_0395301d,auStack_70);
    } while (__s2 != (char *)0x0);
  } while( true );
}


