/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042f4e0; name: FUN_0042f4e0
 */


undefined8
FUN_0042f4e0(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((param_4 != 0) && (iVar2 = FUN_0042ed00(param_1,param_4), iVar2 != 0)) {
    uVar7 = FUN_0042e920(param_1,param_2);
    return uVar7;
  }
  iVar2 = FUN_0040c130(param_1[2]);
  if (iVar2 != 0) {
    uVar7 = 0x72;
    uVar12 = 0x9c;
LAB_0042f588:
    FUN_004014b0(0x10,0x11c,uVar7,"external/openssl/crypto/ec/ec_mult.c",uVar12);
    return 0;
  }
  iVar2 = FUN_0040c130(param_1[3]);
  if (iVar2 != 0) {
    uVar7 = 0xa4;
    uVar12 = 0xa0;
    goto LAB_0042f588;
  }
  FUN_0040e090(param_5);
  lVar8 = FUN_0042df90(param_1);
  if ((lVar8 == 0) || (lVar9 = FUN_0042df90(param_1), lVar9 == 0)) {
    FUN_004014b0(0x10,0x11c,0x41,"external/openssl/crypto/ec/ec_mult.c",0xa8);
    lVar9 = 0;
    goto LAB_0042f8fc;
  }
  if (param_4 == 0) {
    iVar2 = FUN_0042e090(lVar8,param_1[1]);
    if (iVar2 == 0) {
      uVar7 = 0xae;
      goto LAB_0042f8f0;
    }
LAB_0042f638:
    FUN_0040d3b0(*(undefined8 *)(lVar8 + 0x10),4);
    FUN_0040d3b0(*(undefined8 *)(lVar8 + 0x18),4);
    FUN_0040d3b0(*(undefined8 *)(lVar8 + 0x20),4);
    FUN_0040d3b0(*(undefined8 *)(param_2 + 0x10),4);
    FUN_0040d3b0(*(undefined8 *)(param_2 + 0x18),4);
    FUN_0040d3b0(*(undefined8 *)(param_2 + 0x20),4);
    FUN_0040d3b0(*(undefined8 *)(lVar9 + 0x10),4);
    FUN_0040d3b0(*(undefined8 *)(lVar9 + 0x18),4);
    FUN_0040d3b0(*(undefined8 *)(lVar9 + 0x20),4);
    uVar7 = FUN_0040e240(param_5);
    uVar12 = FUN_0040e240(param_5);
    lVar10 = FUN_0040e240(param_5);
    if (lVar10 == 0) {
      uVar12 = 0x41;
      uVar7 = 0xc0;
    }
    else {
      iVar2 = FUN_004129a0(uVar7,param_1[2],param_1[3],param_5);
      if (iVar2 == 0) {
        uVar7 = 0xc5;
      }
      else {
        iVar3 = FUN_0040c070(uVar7);
        iVar2 = FUN_0042cca0(uVar7);
        iVar2 = iVar2 + 2;
        lVar11 = FUN_0040c660(lVar10,iVar2);
        if ((lVar11 == 0) || (lVar11 = FUN_0040c660(uVar12,iVar2), lVar11 == 0)) {
          uVar7 = 0xd3;
        }
        else {
          lVar11 = FUN_0040c5d0(lVar10,param_3);
          if (lVar11 == 0) {
            uVar7 = 0xd8;
          }
          else {
            FUN_0040d3b0(lVar10,4);
            iVar4 = FUN_0040c070(lVar10);
            if (((iVar3 < iVar4) || (iVar4 = FUN_0040d2e0(lVar10), iVar4 != 0)) &&
               (iVar4 = FUN_00412c30(lVar10,lVar10,uVar7,param_5), iVar4 == 0)) {
              uVar7 = 0xe4;
            }
            else {
              iVar4 = FUN_00411730(uVar12,lVar10,uVar7);
              if (iVar4 == 0) {
                uVar7 = 0xea;
              }
              else {
                FUN_0040d3b0(uVar12,4);
                iVar4 = FUN_00411730(lVar10,uVar12,uVar7);
                if (iVar4 == 0) {
                  uVar7 = 0xef;
                }
                else {
                  uVar7 = FUN_0040cdc0(uVar12,iVar3);
                  FUN_0040cfe0(uVar7,lVar10,uVar12,iVar2);
                  uVar5 = FUN_0042cca0(param_1[8]);
                  lVar11 = FUN_0040c660(*(undefined8 *)(lVar9 + 0x10),uVar5);
                  if (((((lVar11 != 0) &&
                        (lVar11 = FUN_0040c660(*(undefined8 *)(lVar9 + 0x18),uVar5), lVar11 != 0))
                       && ((lVar11 = FUN_0040c660(*(undefined8 *)(lVar9 + 0x20),uVar5), lVar11 != 0
                           && ((lVar11 = FUN_0040c660(*(undefined8 *)(param_2 + 0x10),uVar5),
                               lVar11 != 0 &&
                               (lVar11 = FUN_0040c660(*(undefined8 *)(param_2 + 0x18),uVar5),
                               lVar11 != 0)))))) &&
                      (lVar11 = FUN_0040c660(*(undefined8 *)(param_2 + 0x20),uVar5), lVar11 != 0))
                     && (((lVar11 = FUN_0040c660(*(undefined8 *)(lVar8 + 0x10),uVar5), lVar11 != 0
                          && (lVar11 = FUN_0040c660(*(undefined8 *)(lVar8 + 0x18),uVar5),
                             lVar11 != 0)) &&
                         (lVar11 = FUN_0040c660(*(undefined8 *)(lVar8 + 0x20),uVar5), lVar11 != 0)))
                     ) {
                    iVar2 = FUN_0042f3e0(param_1,lVar8,param_5);
                    if (iVar2 == 0) {
                      uVar12 = 0xa3;
                      uVar7 = 0x110;
                      goto LAB_0042f8f8;
                    }
                    if (*(code **)(*param_1 + 0x198) == (code *)0x0) {
                      iVar2 = FUN_0042e090(lVar9,lVar8);
                      if (iVar2 != 0) {
                        iVar2 = FUN_0042ee40(param_1,param_2,lVar9,param_5);
                        goto joined_r0x0042f9c4;
                      }
                    }
                    else {
                      iVar2 = (**(code **)(*param_1 + 0x198))(param_1,param_2,lVar9,lVar8,param_5);
joined_r0x0042f9c4:
                      if (iVar2 != 0) {
                        uVar1 = 1;
                        do {
                          if (iVar3 < 1) {
                            FUN_0040cfe0(uVar1,*(undefined8 *)(param_2 + 0x10),
                                         *(undefined8 *)(lVar9 + 0x10),uVar5);
                            FUN_0040cfe0(uVar1,*(undefined8 *)(param_2 + 0x18),
                                         *(undefined8 *)(lVar9 + 0x18),uVar5);
                            FUN_0040cfe0(uVar1,*(undefined8 *)(param_2 + 0x20),
                                         *(undefined8 *)(lVar9 + 0x20),uVar5);
                            uVar1 = (*(uint *)(lVar9 + 0x28) ^ *(uint *)(param_2 + 0x28)) & uVar1;
                            *(uint *)(param_2 + 0x28) = uVar1 ^ *(uint *)(param_2 + 0x28);
                            *(uint *)(lVar9 + 0x28) = *(uint *)(lVar9 + 0x28) ^ uVar1;
                            if ((*(code **)(*param_1 + 0x1a8) != (code *)0x0) &&
                               (iVar2 = (**(code **)(*param_1 + 0x1a8))
                                                  (param_1,param_2,lVar9,lVar8,param_5), iVar2 == 0)
                               ) {
                              uVar12 = 0x88;
                              uVar7 = 0x175;
                              goto LAB_0042f8f8;
                            }
                            uVar7 = 1;
                            goto LAB_0042f900;
                          }
                          iVar3 = iVar3 + -1;
                          uVar6 = FUN_0040cdc0(lVar10,iVar3);
                          uVar1 = uVar6 ^ uVar1;
                          FUN_0040cfe0(uVar1,*(undefined8 *)(param_2 + 0x10),
                                       *(undefined8 *)(lVar9 + 0x10),uVar5);
                          FUN_0040cfe0(uVar1,*(undefined8 *)(param_2 + 0x18),
                                       *(undefined8 *)(lVar9 + 0x18),uVar5);
                          FUN_0040cfe0(uVar1,*(undefined8 *)(param_2 + 0x20),
                                       *(undefined8 *)(lVar9 + 0x20),uVar5);
                          uVar1 = (*(uint *)(lVar9 + 0x28) ^ *(uint *)(param_2 + 0x28)) & uVar1;
                          *(uint *)(param_2 + 0x28) = uVar1 ^ *(uint *)(param_2 + 0x28);
                          *(uint *)(lVar9 + 0x28) = *(uint *)(lVar9 + 0x28) ^ uVar1;
                          if (*(code **)(*param_1 + 0x1a0) == (code *)0x0) {
                            iVar2 = FUN_0042ed80(param_1,lVar9,param_2,lVar9,param_5);
                            if (iVar2 == 0) break;
                            iVar2 = FUN_0042ee40(param_1,param_2,param_2,param_5);
                          }
                          else {
                            iVar2 = (**(code **)(*param_1 + 0x1a0))
                                              (param_1,param_2,lVar9,lVar8,param_5);
                          }
                          uVar1 = uVar6;
                        } while (iVar2 != 0);
                        uVar12 = 0xa2;
                        uVar7 = 0x166;
                        goto LAB_0042f8f8;
                      }
                    }
                    uVar12 = 0x99;
                    uVar7 = 0x116;
                    goto LAB_0042f8f8;
                  }
                  uVar7 = 0x103;
                }
              }
            }
          }
        }
      }
      uVar12 = 3;
    }
  }
  else {
    iVar2 = FUN_0042e090(lVar8,param_4);
    if (iVar2 != 0) goto LAB_0042f638;
    uVar7 = 0xb3;
LAB_0042f8f0:
    uVar12 = 0x10;
  }
LAB_0042f8f8:
  FUN_004014b0(0x10,0x11c,uVar12,"external/openssl/crypto/ec/ec_mult.c",uVar7);
LAB_0042f8fc:
  uVar7 = 0;
LAB_0042f900:
  FUN_0042db80(lVar8);
  FUN_0042dc90(lVar9);
  FUN_0040e1b0(param_5);
  return uVar7;
}


