/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00547730; name: FUN_00547730
 */


void FUN_00547730(long param_1,byte param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *__s;
  ulong uVar7;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x58) == '\0') goto LAB_005479b0;
    uVar2 = *param_3;
    if ((uVar2 & 1) == 0) {
      __s = param_3 + 1;
      uVar7 = 3;
      if (uVar2 >> 1 == 3) {
LAB_005477c4:
        uVar1 = FUN_002e2e80(PTR_FUN_04373078,uVar7 << 4);
        *(char **)(uVar1 + uVar7 * 8) = "Address list became empty";
        if (uVar1 != 0) {
          if (uVar7 != 0) {
            uVar2 = uVar7 & 3;
            if (uVar7 - 1 < 3) {
              lVar3 = 0;
              puVar5 = __s;
            }
            else {
              lVar3 = 0;
              puVar4 = (ulong *)(uVar1 + 0x10);
              puVar6 = __s;
              do {
                puVar5 = puVar6 + 4;
                puVar4[-2] = *puVar6;
                puVar4[-1] = puVar6[1];
                *puVar4 = puVar6[2];
                lVar3 = lVar3 + 4;
                puVar4[1] = puVar6[3];
                puVar4 = puVar4 + 4;
                puVar6 = puVar5;
              } while (uVar7 - uVar2 != lVar3);
            }
            if (uVar2 != 0) {
              puVar4 = (ulong *)(uVar1 + lVar3 * 8);
              do {
                uVar2 = uVar2 - 1;
                *puVar4 = *puVar5;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar2 != 0);
            }
          }
          goto LAB_00547968;
        }
LAB_00547864:
        uVar2 = *param_3;
        goto LAB_005479a8;
      }
    }
    else {
      __s = (ulong *)param_3[1];
      uVar7 = param_3[2];
      if (uVar2 >> 1 == uVar7) goto LAB_005477c4;
    }
    __s[uVar2 >> 1] = (ulong)"Address list became empty";
  }
  else {
    if (*(char *)(param_1 + 0x58) != '\0') goto LAB_005479b0;
    uVar2 = *param_3;
    if ((uVar2 & 1) == 0) {
      __s = param_3 + 1;
      uVar7 = 3;
      if (uVar2 >> 1 == 3) {
LAB_0054781c:
        uVar1 = FUN_002e2e80(PTR_FUN_04373078,uVar7 << 4);
        *(char **)(uVar1 + uVar7 * 8) = "Address list became non-empty";
        if (uVar1 == 0) goto LAB_00547864;
        if (uVar7 != 0) {
          uVar2 = uVar7 & 3;
          if (uVar7 - 1 < 3) {
            lVar3 = 0;
            puVar5 = __s;
          }
          else {
            lVar3 = 0;
            puVar4 = (ulong *)(uVar1 + 0x10);
            puVar6 = __s;
            do {
              puVar5 = puVar6 + 4;
              puVar4[-2] = *puVar6;
              puVar4[-1] = puVar6[1];
              *puVar4 = puVar6[2];
              lVar3 = lVar3 + 4;
              puVar4[1] = puVar6[3];
              puVar4 = puVar4 + 4;
              puVar6 = puVar5;
            } while (uVar7 - uVar2 != lVar3);
          }
          if (uVar2 != 0) {
            puVar4 = (ulong *)(uVar1 + lVar3 * 8);
            do {
              uVar2 = uVar2 - 1;
              *puVar4 = *puVar5;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar2 != 0);
          }
        }
LAB_00547968:
        if (__s != (ulong *)0x0) {
          memset(__s,0xab,uVar7 << 3);
        }
        uVar2 = *param_3;
        if ((uVar2 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,param_3[1]);
          uVar2 = *param_3;
        }
        uVar2 = uVar2 | 1;
        *param_3 = uVar2;
        param_3[1] = uVar1;
        param_3[2] = uVar7 << 1;
        goto LAB_005479a8;
      }
    }
    else {
      __s = (ulong *)param_3[1];
      uVar7 = param_3[2];
      if (uVar2 >> 1 == uVar7) goto LAB_0054781c;
    }
    __s[uVar2 >> 1] = (ulong)"Address list became non-empty";
  }
LAB_005479a8:
  *param_3 = uVar2 + 2;
LAB_005479b0:
  *(byte *)(param_1 + 0x58) = param_2 & 1;
  return;
}


