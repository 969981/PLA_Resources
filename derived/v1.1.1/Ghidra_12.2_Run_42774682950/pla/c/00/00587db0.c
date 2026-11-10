/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00587db0; name: FUN_00587db0
 */


char * FUN_00587db0(char *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*param_1 == ',') {
    bVar1 = param_1[1];
    if (bVar1 == 0x4a) {
      pvVar3 = memchr("0123456789",(uint)(byte)param_1[2],0xb);
      if (pvVar3 == (void *)0x0) {
        return (char *)0x0;
      }
      uVar8 = 0;
      lVar7 = 3;
      do {
        iVar5 = (int)pvVar3 + -0x3a344b0;
        if (9 < iVar5) break;
        if (0xccccccc < (int)uVar8) {
          return (char *)0x0;
        }
        if (0x7fffffff - iVar5 < (int)(uVar8 * 10)) {
          return (char *)0x0;
        }
        uVar8 = iVar5 + uVar8 * 10;
        pvVar3 = memchr("0123456789",(uint)(byte)param_1[lVar7],0xb);
        lVar7 = lVar7 + 1;
      } while (pvVar3 != (void *)0x0);
      lVar7 = lVar7 + -1;
      if (0x16c < uVar8 - 1) {
        return (char *)0x0;
      }
      if (lVar7 == 2) {
        return (char *)0x0;
      }
      *param_2 = 0;
    }
    else {
      if (bVar1 == 0x4d) {
        pvVar3 = memchr("0123456789",(uint)(byte)param_1[2],0xb);
        if (pvVar3 == (void *)0x0) {
          return (char *)0x0;
        }
        iVar5 = 0;
        lVar7 = 3;
        do {
          iVar6 = (int)pvVar3 + -0x3a344b0;
          if (9 < iVar6) break;
          if (0xccccccc < iVar5) {
            return (char *)0x0;
          }
          if (0x7fffffff - iVar6 < iVar5 * 10) {
            return (char *)0x0;
          }
          iVar5 = iVar6 + iVar5 * 10;
          pvVar3 = memchr("0123456789",(uint)(byte)param_1[lVar7],0xb);
          lVar7 = lVar7 + 1;
        } while (pvVar3 != (void *)0x0);
        if (0xb < iVar5 - 1U) {
          return (char *)0x0;
        }
        if (lVar7 + -1 == 2) {
          return (char *)0x0;
        }
        param_1 = param_1 + lVar7 + -1;
        if (*param_1 == '.') {
          pvVar3 = memchr("0123456789",(uint)(byte)param_1[1],0xb);
          if (pvVar3 == (void *)0x0) {
            return (char *)0x0;
          }
          iVar6 = 0;
          lVar7 = 2;
          do {
            iVar2 = (int)pvVar3 + -0x3a344b0;
            if (9 < iVar2) break;
            if (0xccccccc < iVar6) {
              return (char *)0x0;
            }
            if (0x7fffffff - iVar2 < iVar6 * 10) {
              return (char *)0x0;
            }
            iVar6 = iVar2 + iVar6 * 10;
            pvVar3 = memchr("0123456789",(uint)(byte)param_1[lVar7],0xb);
            lVar7 = lVar7 + 1;
          } while (pvVar3 != (void *)0x0);
          if (4 < iVar6 - 1U) {
            return (char *)0x0;
          }
          if (lVar7 + -1 == 1) {
            return (char *)0x0;
          }
          param_1 = param_1 + lVar7 + -1;
          if (*param_1 == '.') {
            pvVar3 = memchr("0123456789",(uint)(byte)param_1[1],0xb);
            if (pvVar3 == (void *)0x0) {
              return (char *)0x0;
            }
            uVar8 = 0;
            lVar7 = 2;
            do {
              iVar2 = (int)pvVar3 + -0x3a344b0;
              if (9 < iVar2) break;
              if (0xccccccc < (int)uVar8) {
                return (char *)0x0;
              }
              if (0x7fffffff - iVar2 < (int)(uVar8 * 10)) {
                return (char *)0x0;
              }
              uVar8 = iVar2 + uVar8 * 10;
              pvVar3 = memchr("0123456789",(uint)(byte)param_1[lVar7],0xb);
              lVar7 = lVar7 + 1;
            } while (pvVar3 != (void *)0x0);
            if (6 < uVar8) {
              return (char *)0x0;
            }
            if (lVar7 + -1 == 1) {
              return (char *)0x0;
            }
            *param_2 = 2;
            param_1 = param_1 + lVar7 + -1;
            *(char *)(param_2 + 1) = (char)iVar5;
            *(char *)((long)param_2 + 5) = (char)iVar6;
            *(char *)((long)param_2 + 6) = (char)uVar8;
          }
        }
        goto LAB_00588128;
      }
      pvVar3 = memchr("0123456789",(uint)bVar1,0xb);
      if (pvVar3 == (void *)0x0) {
        return (char *)0x0;
      }
      uVar8 = 0;
      lVar7 = 2;
      do {
        iVar5 = (int)pvVar3 + -0x3a344b0;
        if (9 < iVar5) break;
        if ((0xccccccc < (int)uVar8) || (0x7fffffff - iVar5 < (int)(uVar8 * 10))) {
          return (char *)0x0;
        }
        uVar8 = iVar5 + uVar8 * 10;
        pvVar3 = memchr("0123456789",(uint)(byte)param_1[lVar7],0xb);
        lVar7 = lVar7 + 1;
      } while (pvVar3 != (void *)0x0);
      lVar7 = lVar7 + -1;
      if (0x16d < uVar8) {
        return (char *)0x0;
      }
      if (lVar7 == 1) {
        return (char *)0x0;
      }
      *param_2 = 1;
    }
    param_1 = param_1 + lVar7;
    param_2[1] = uVar8;
  }
LAB_00588128:
  param_2[2] = 0x1c20;
  if (*param_1 == '/') {
    pcVar4 = (char *)FUN_00587b00(param_1 + 1,0xffffff59,0xa7,1,param_2 + 2);
    return pcVar4;
  }
  return param_1;
}


