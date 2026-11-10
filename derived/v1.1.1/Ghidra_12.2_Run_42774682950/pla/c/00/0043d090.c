/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043d090; name: FUN_0043d090
 */


bool FUN_0043d090(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  
  FUN_004016d0();
  if (param_5 == 0) {
    param_5 = FUN_0040de30();
    lVar11 = param_5;
    if (param_5 == 0) {
      return false;
    }
  }
  else {
    lVar11 = 0;
  }
  FUN_0040e090(param_5);
  uVar4 = FUN_0040e240(param_5);
  uVar5 = FUN_0040e240(param_5);
  uVar6 = FUN_0040e240(param_5);
  lVar7 = FUN_0040e240(param_5);
  if ((lVar7 != 0) && (iVar2 = FUN_00412c30(uVar6,param_3,param_1[8],param_5), iVar2 != 0)) {
    if (*(long *)(*param_1 + 0x130) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,param_3,param_5);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,uVar5,param_3,param_5);
        goto joined_r0x0043d20c;
      }
    }
    else {
      iVar2 = FUN_00413270(uVar5,param_3,param_1[8],param_5);
      if (iVar2 != 0) {
        iVar2 = FUN_00413180(uVar4,uVar5,param_3,param_1[8],param_5);
joined_r0x0043d20c:
        if (iVar2 != 0) {
          if ((int)param_1[0xe] == 0) {
            pcVar10 = *(code **)(*param_1 + 0x130);
            if (pcVar10 == (code *)0x0) {
              iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar5,param_1[0xc],uVar6,param_5);
            }
            else {
              iVar2 = (*pcVar10)(param_1,uVar5,param_1[0xc],param_5);
              if (iVar2 == 0) goto LAB_0043d414;
              iVar2 = FUN_00413180(uVar5,uVar5,uVar6,param_1[8],param_5);
            }
            if (iVar2 != 0) {
              iVar2 = FUN_00412ef0(uVar4,uVar4,uVar5,param_1[8]);
              goto joined_r0x0043d28c;
            }
          }
          else {
            iVar2 = FUN_004132c0(uVar5,uVar6,param_1[8]);
            if ((iVar2 != 0) && (iVar2 = FUN_00412ef0(uVar5,uVar5,uVar6,param_1[8]), iVar2 != 0)) {
              iVar2 = FUN_00413130(uVar4,uVar4,uVar5,param_1[8]);
joined_r0x0043d28c:
              if (iVar2 != 0) {
                if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
                  iVar2 = FUN_00412ef0(uVar4,uVar4,param_1[0xd],param_1[8]);
                }
                else {
                  iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar5,param_1[0xd],param_5);
                  if (iVar2 == 0) goto LAB_0043d414;
                  iVar2 = FUN_00412ef0(uVar4,uVar4,uVar5,param_1[8]);
                }
                if (iVar2 != 0) {
                  lVar8 = FUN_0043de40(lVar7,uVar4,param_1[8],param_5);
                  if (lVar8 == 0) {
                    uVar9 = FUN_00401a70();
                    if ((uVar9 & 0xff000fff) == 0x300006f) {
                      FUN_004016d0();
                      uVar4 = 0x6e;
                      uVar5 = 0x6c;
                    }
                    else {
                      uVar5 = 0x6f;
                      uVar4 = 3;
                    }
                  }
                  else {
                    uVar3 = FUN_0040d2b0(lVar7);
                    if (uVar3 != (param_4 != 0)) {
                      iVar2 = FUN_0040c130(lVar7);
                      if (iVar2 == 0) {
                        iVar2 = FUN_004119c0(lVar7,param_1[8],lVar7);
                        if (iVar2 != 0) goto LAB_0043d30c;
                      }
                      else {
                        iVar2 = FUN_0043dbd0(uVar6,param_1[8],param_5);
                        if (iVar2 != -2) {
                          if (iVar2 == 1) {
                            uVar4 = 0x6d;
                            uVar5 = 0x7d;
                          }
                          else {
                            uVar4 = 0x6e;
                            uVar5 = 0x83;
                          }
                          goto LAB_0043d410;
                        }
                      }
                      goto LAB_0043d414;
                    }
LAB_0043d30c:
                    uVar3 = FUN_0040d2b0(lVar7);
                    if (uVar3 == (param_4 != 0)) {
                      iVar2 = FUN_0042ea00(param_1,param_2,uVar6,lVar7,param_5);
                      bVar1 = iVar2 != 0;
                      goto LAB_0043d418;
                    }
                    uVar4 = 0x44;
                    uVar5 = 0x8b;
                  }
LAB_0043d410:
                  FUN_004014b0(0x10,0xa9,uVar4,"external/openssl/crypto/ec/ecp_oct.c",uVar5);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0043d414:
  bVar1 = false;
LAB_0043d418:
  FUN_0040e1b0(param_5);
  FUN_0040def0(lVar11);
  return bVar1;
}


