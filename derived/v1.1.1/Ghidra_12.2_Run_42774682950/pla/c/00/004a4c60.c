/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a4c60; name: FUN_004a4c60
 */


undefined8
FUN_004a4c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
            undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 local_64 [4];
  
  uVar4 = FUN_0042d4f0(param_5);
  local_64[0] = 0;
  lVar5 = FUN_00444930();
  lVar6 = FUN_0040de30();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar4 = 0x41;
    uVar7 = 0x2f;
  }
  else {
    uVar7 = FUN_0040e240(lVar6);
    uVar8 = FUN_0040e240(lVar6);
    uVar9 = FUN_0040e240(lVar6);
    uVar10 = FUN_0040e240(lVar6);
    uVar11 = FUN_0040e240(lVar6);
    uVar12 = FUN_0040e240(lVar6);
    lVar13 = FUN_0040e240(lVar6);
    if (lVar13 == 0) {
      uVar4 = 0x41;
      uVar7 = 0x3c;
    }
    else {
      iVar3 = FUN_00444980(lVar5,param_2);
      if (iVar3 == 0) {
        uVar7 = 0x41;
      }
      else {
        if (0x1ffe < param_4) {
          uVar4 = 0x6f;
          uVar7 = 0x49;
          goto LAB_004a5010;
        }
        local_64[0] = (undefined1)(param_4 >> 5);
        iVar3 = FUN_00444ad0(lVar5,local_64,1);
        if (iVar3 == 0) {
          uVar7 = 0x51;
        }
        else {
          local_64[0] = (undefined1)((int)param_4 << 3);
          iVar3 = FUN_00444ad0(lVar5,local_64,1);
          if (iVar3 == 0) {
            uVar7 = 0x56;
          }
          else {
            if ((param_4 == 0) || (iVar3 = FUN_00444ad0(lVar5,param_3,param_4), iVar3 != 0)) {
              iVar3 = FUN_0042e540(uVar4,uVar7,uVar8,uVar9,lVar6);
              if (iVar3 != 0) {
                iVar3 = FUN_0040c070(uVar7);
                uVar1 = iVar3 + 0xe;
                if (-1 < (int)(iVar3 + 7U)) {
                  uVar1 = iVar3 + 7U;
                }
                uVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
                lVar14 = FUN_004002a0(uVar2,"external/openssl/crypto/sm2/sm2_sign.c",0x65);
                if (lVar14 == 0) {
                  uVar4 = 0x41;
                  uVar7 = 0x67;
                }
                else {
                  iVar3 = FUN_0040c940(uVar8,lVar14,uVar2 & 0xffffffff);
                  if ((((-1 < iVar3) && (iVar3 = FUN_00444ad0(lVar5,lVar14,uVar2), iVar3 != 0)) &&
                      (iVar3 = FUN_0040c940(uVar9,lVar14,uVar2 & 0xffffffff), -1 < iVar3)) &&
                     (iVar3 = FUN_00444ad0(lVar5,lVar14,uVar2), iVar3 != 0)) {
                    uVar7 = FUN_0042e340(uVar4);
                    iVar3 = FUN_0042ebc0(uVar4,uVar7,uVar10,uVar11,lVar6);
                    if (((iVar3 != 0) &&
                        (iVar3 = FUN_0040c940(uVar10,lVar14,uVar2 & 0xffffffff), -1 < iVar3)) &&
                       ((iVar3 = FUN_00444ad0(lVar5,lVar14,uVar2), iVar3 != 0 &&
                        ((iVar3 = FUN_0040c940(uVar11,lVar14,uVar2 & 0xffffffff), -1 < iVar3 &&
                         (iVar3 = FUN_00444ad0(lVar5,lVar14,uVar2), iVar3 != 0)))))) {
                      uVar7 = FUN_0042d570(param_5);
                      iVar3 = FUN_0042ebc0(uVar4,uVar7,uVar12,lVar13,lVar6);
                      if ((iVar3 != 0) &&
                         ((((iVar3 = FUN_0040c940(uVar12,lVar14,uVar2 & 0xffffffff), -1 < iVar3 &&
                            (iVar3 = FUN_00444ad0(lVar5,lVar14,uVar2), iVar3 != 0)) &&
                           (iVar3 = FUN_0040c940(lVar13,lVar14,uVar2 & 0xffffffff), -1 < iVar3)) &&
                          ((iVar3 = FUN_00444ad0(lVar5,lVar14,uVar2), iVar3 != 0 &&
                           (iVar3 = FUN_00444af0(lVar5,param_1,0), iVar3 != 0)))))) {
                        uVar4 = 1;
                        goto LAB_004a501c;
                      }
                    }
                  }
                  uVar4 = 0x44;
                  uVar7 = 0x7e;
                }
                FUN_004014b0(0x35,0x71,uVar4,"external/openssl/crypto/sm2/sm2_sign.c",uVar7);
                uVar4 = 0;
                goto LAB_004a501c;
              }
              uVar4 = 0x10;
              uVar7 = 0x60;
              goto LAB_004a5010;
            }
            uVar7 = 0x5b;
          }
        }
      }
      uVar4 = 6;
    }
  }
LAB_004a5010:
  FUN_004014b0(0x35,0x71,uVar4,"external/openssl/crypto/sm2/sm2_sign.c",uVar7);
  uVar4 = 0;
  lVar14 = 0;
LAB_004a501c:
  FUN_00400420(lVar14,"external/openssl/crypto/sm2/sm2_sign.c",0x85);
  FUN_0040def0(lVar6);
  FUN_00444950(lVar5);
  return uVar4;
}


