/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00458910; name: FUN_00458910
 */


undefined8 FUN_00458910(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *__s2;
  undefined **ppuVar7;
  
  lVar3 = FUN_0044c650(param_2);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    if (*param_1 == 0) {
      iVar1 = FUN_00407950(lVar3);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar4 = FUN_00407970(lVar3,iVar1);
          __s2 = *(char **)(lVar4 + 8);
          lVar4 = *param_1;
          if (lVar4 == 0) {
            lVar4 = FUN_0041cf50();
            *param_1 = lVar4;
            if (lVar4 == 0) goto LAB_00458944;
          }
          iVar2 = strcmp("unused",__s2);
          if (iVar2 == 0) {
            ppuVar7 = &PTR_s_Unused_04167e70;
            puVar5 = &DAT_04167e68;
          }
          else {
            iVar2 = strcmp("keyCompromise",__s2);
            if (iVar2 == 0) {
              ppuVar7 = &PTR_s_Key_Compromise_04167e88;
              puVar5 = &DAT_04167e80;
            }
            else {
              iVar2 = strcmp("CACompromise",__s2);
              if (iVar2 == 0) {
                ppuVar7 = &PTR_s_CA_Compromise_04167ea0;
                puVar5 = &DAT_04167e98;
              }
              else {
                iVar2 = strcmp("affiliationChanged",__s2);
                if (iVar2 == 0) {
                  puVar5 = &DAT_04167eb0;
                }
                else {
                  iVar2 = strcmp("superseded",__s2);
                  if (iVar2 == 0) {
                    puVar5 = &DAT_04167ec8;
                  }
                  else {
                    iVar2 = strcmp("cessationOfOperation",__s2);
                    if (iVar2 == 0) {
                      puVar5 = &DAT_04167ee0;
                    }
                    else {
                      iVar2 = strcmp("certificateHold",__s2);
                      if (iVar2 == 0) {
                        puVar5 = &DAT_04167ef8;
                      }
                      else {
                        iVar2 = strcmp("privilegeWithdrawn",__s2);
                        if (iVar2 == 0) {
                          puVar5 = &DAT_04167f10;
                        }
                        else {
                          iVar2 = strcmp("AACompromise",__s2);
                          if (iVar2 != 0) goto LAB_00458944;
                          puVar5 = &DAT_04167f28;
                        }
                      }
                    }
                  }
                }
                ppuVar7 = (undefined **)(puVar5 + 2);
              }
            }
          }
          iVar2 = FUN_00421680(lVar4,*puVar5,1);
          if ((iVar2 == 0) || (*ppuVar7 == (undefined *)0x0)) goto LAB_00458944;
          iVar1 = iVar1 + 1;
          iVar2 = FUN_00407950(lVar3);
        } while (iVar1 < iVar2);
      }
      uVar6 = 1;
    }
    else {
LAB_00458944:
      uVar6 = 0;
    }
    FUN_004078c0(lVar3,PTR_LAB_043742b0);
  }
  return uVar6;
}


